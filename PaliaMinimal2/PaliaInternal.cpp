#include "PaliaInternal.hpp"

using namespace UC;

VOID PaliaInternal::GetValeriaCharacter(VOID) {
    if (NULL != lpValeriaCharacter) {
        return;
    }

    for (int32 i = 0; i < SDK::UObject::GObjects->Num(); i++) {
        SDK::UObject *lpObj = SDK::UObject::GObjects->GetByIndex(i);
        if (NULL == lpObj) {
            continue;
        }

        if (lpObj->IsA(SDK::AValeriaCharacter::StaticClass()) && !lpObj->IsDefaultObject()) {
            lpValeriaCharacter = (SDK::AValeriaCharacter *) lpObj;
            break;
        }
    }
}

BOOL PaliaInternal::HookProcessEvent(VOID) {
    if (NULL == lpValeriaCharacter) {
        fprintf(
            stderr,
            "[-] ValeriaCharacter is not initialized\n"
        );
        return FALSE;
    }

    DWORD dwOldProtect = 0;

    lpTargetInstance = lpValeriaCharacter->Placement;
    lpVTable = *(LPVOID **) lpTargetInstance;

    if (!VirtualProtect(
        lpVTable,
        0x1000,
        PAGE_EXECUTE_READWRITE,
        &dwOldProtect
    )) {
        fprintf(
            stderr,
            "[-] VirtualProtect() - E%lu\n",
            GetLastError()
        );
        return FALSE;
    }

    OriginalProcessEvent = (ProcessEvent_t) ((UINT_PTR) GetModuleHandle(NULL) + SDK::Offsets::ProcessEvent);
    lpVTable[SDK::Offsets::ProcessEventIdx] = HookedProcessEvent;

    VirtualProtect(
        lpVTable,
        0x1000,
        dwOldProtect,
        &dwOldProtect
    );

    return TRUE;
}

BOOL PaliaInternal::InitInternal(VOID) {
    GetValeriaCharacter();
    if (NULL == lpValeriaCharacter) {
        fprintf(
            stderr,
            "[-] Failed to get ValeriaCharacter\n"
        );
        return FALSE;
    }

    if (!HookProcessEvent()) {
        fprintf(
            stderr,
            "[-] Failed to hook ProcessEvent\n"
        );
        return FALSE;
    }

    return TRUE;
}

VOID PaliaInternal::HookedProcessEvent(
        const SDK::UObject *lpClass,
        class SDK::UFunction *lpFunction,
        LPVOID lpParams
) {
    // Overrides (unused here)
    //SDK::UFunction *lpTargetFunction = lpFunction;
    //LPVOID lpTargetParams = lpParams;
    
    const std::string strFunctionName = lpFunction->GetFullName();
    const std::string strClassName = lpClass->GetFullName();

    PositionAdjustment::eFunctionType = Func_Invalid;

    if (strClassName.starts_with("PlacementComponent")) {
        SDK::UPlacementComponent *lpPlacementComponent = (SDK::UPlacementComponent *) lpClass;
        lpPlacementComponent->CanPlaceHere = true;

        // Positional Adjustment
        if (strFunctionName == PositionAdjustment::strFunc_UpdateLockedItemToPlace) {
            PositionAdjustment::eFunctionType = Func_UpdateLockedItemToPlace;
            UpdateLockedItemToPlaceParams_t *lpUpdateLckItmParams = (UpdateLockedItemToPlaceParams_t *) lpParams;
            // Keep grabbing coordinates, until a manual adjustmnet key is pressed
            if (!PositionAdjustment::bModified) {
                PositionAdjustment::SavePositionForAdjustment(
                    lpUpdateLckItmParams->Position,
                    lpUpdateLckItmParams->Rotation
                );
            }
            // Evaluate pos/rot adjustment key presses
            PositionAdjustment::EvaluateAdjustmentKeyPress();
        } else if (strFunctionName == PositionAdjustment::strFunc_PlaceItem) {
            // This is called when an item is placed, we need it to get required params
            // that we don't have access to when UpdateLockedItemToPlace is called.
            PositionAdjustment::eFunctionType = Func_PlaceItem;
            PlaceItemParams_t *lpPlaceItemParams = (PlaceItemParams_t *) lpParams;

            PositionAdjustment::PlacementParams.Anchor = lpPlaceItemParams->Anchor;
            PositionAdjustment::PlacementParams.HousingOwner = lpPlaceItemParams->HousingOwner;
            PositionAdjustment::PlacementParams.Params_0 = lpPlaceItemParams->Params_0;
            PositionAdjustment::PlacementParams.MetadataFlags = lpPlaceItemParams->MetadataFlags;
            PositionAdjustment::bGotRequiredParams = TRUE;
        }
    }
    
    // Evaluate action key presses, this can be used to save position,
    //  restore position, or place item with modified position.
    PositionAdjustment::EvaluateActionKeyPress(
        &lpParams,
        &lpFunction,
        lpClass
    );

    if (Func_PlaceItem == PositionAdjustment::eFunctionType && PositionAdjustment::bModified) {
        PlaceItemParams_t *lpPlaceItemParams = (PlaceItemParams_t *) lpParams;
        lpPlaceItemParams->Position = PositionAdjustment::vSavedAdjustmentPosition;
        lpPlaceItemParams->Rotation = PositionAdjustment::vSavedAdjustmentRotation;

        PositionAdjustment::bModified = FALSE;
    }
    
    OriginalProcessEvent(lpClass, lpFunction, lpParams);
}

BOOL PaliaInternal::PositionAdjustment::GetPlaceItemFunction(
    SDK::UPlacementComponent *lpPlacementComponent
) {
    if (NULL == lpPlacementComponent) {
        fprintf(
            stderr,
            "[-] PlacementComponent is NULL\n"
        );
        return FALSE;
    }

    if (NULL != lpPlaceItemFunction) {
        return TRUE;
    }

    lpPlaceItemFunction = (SDK::UFunction *) lpPlacementComponent->FindObject(
        strFunc_PlaceItem
    );

    if (NULL == lpPlaceItemFunction) {
        fprintf(
            stderr,
            "[-] Failed to get PlaceItem function\n"
        );
        return FALSE;
    }
    return TRUE;
}

VOID PaliaInternal::PositionAdjustment::SavePositionForAdjustment(
    SDK::FVector vPosition,
    SDK::FRotator vRotation
) {
    vSavedAdjustmentPosition = vPosition;
    vSavedAdjustmentRotation = vRotation;
}

VOID PaliaInternal::PositionAdjustment::SaveCurrentPosition(LPVOID *lpParams) {
    UpdateLockedItemToPlaceParams_t *lpUpdateLckItmParams = *(UpdateLockedItemToPlaceParams_t **) lpParams;
    vSavedPosition = lpUpdateLckItmParams->Position;
    vSavedRotation = lpUpdateLckItmParams->Rotation;
}

VOID PaliaInternal::PositionAdjustment::ApplyModifiedPosition(
    LPVOID *lpParams,
    SDK::UFunction **lpFunction,
    const SDK::UObject *lpClass
) {
    if (Func_UpdateLockedItemToPlace == eFunctionType && bGotRequiredParams) {
        SDK::UPlacementComponent *lpPlacementComponent = (SDK::UPlacementComponent *) lpClass;

        if (!GetPlaceItemFunction(lpPlacementComponent)) {
            return;
        }

        PlacementParams.Position = vSavedPosition;
        PlacementParams.Rotation = vSavedRotation;

        *lpFunction = lpPlaceItemFunction;
        *lpParams = (LPVOID) & PlacementParams;
    }
}

VOID PaliaInternal::PositionAdjustment::EvaluateAdjustmentKeyPress(VOID) {
    struct KeyAdjustment {
        int iKey;
        SDK::FVector vPositionAdjustment;
        SDK::FRotator vRotationAdjustment;
    };

    std::vector<KeyAdjustment> adjustments = {
        // Z
        { VK_UP,        { 0.0f, 0.0f, 1.0f },  { 0.0f, 0.0f, 0.0f } },
        { VK_DOWN,      { 0.0f, 0.0f, -1.0f }, { 0.0f, 0.0f, 0.0f } },
        // Y
        { VK_NUMPAD2,   { 0.0f, 1.0f, 0.0f },  { 0.0f, 0.0f, 0.0f } },
        { VK_NUMPAD8,   { 0.0f, -1.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
        // X
        { VK_NUMPAD6,     { 1.0f, 0.0f, 0.0f },  { 0.0f, 0.0f, 0.0f } },
        { VK_NUMPAD4,      { -1.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },

        // Yaw
        { VK_NUMPAD9, { 0.0f, 0.0f, 0.0f }, { 0.0f, 1.0f, 0.0f } },
        { VK_NUMPAD7, { 0.0f, 0.0f, 0.0f }, { 0.0f, -1.0f, 0.0f } },
        // Pitch
        { VK_NUMPAD3, { 0.0f, 0.0f, 0.0f }, { 1.0f, 0.0f, 0.0f } },
        { VK_NUMPAD1, { 0.0f, 0.0f, 0.0f }, { -1.0f, 0.0f, 0.0f } },
        // Roll
        { VK_NUMPAD5, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 1.0f } },
        { VK_NUMPAD0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -1.0f } }
    };

    for (const auto &adj : adjustments) {
        if (GetAsyncKeyState(adj.iKey)) {
            vSavedAdjustmentPosition.X += adj.vPositionAdjustment.X;
            vSavedAdjustmentPosition.Y += adj.vPositionAdjustment.Y;
            vSavedAdjustmentPosition.Z += adj.vPositionAdjustment.Z;
            vSavedAdjustmentRotation.Pitch += adj.vRotationAdjustment.Pitch;
            vSavedAdjustmentRotation.Yaw += adj.vRotationAdjustment.Yaw;
            vSavedAdjustmentRotation.Roll += adj.vRotationAdjustment.Roll;

            bModified = true;
            break;
        }
    }
}

VOID PaliaInternal::PositionAdjustment::EvaluateActionKeyPress(
    LPVOID *lpParams,
    SDK::UFunction **lpFunction,
    const SDK::UObject *lpClass
) {
    std::vector<KeyAction> keyActions = {
        //{ VK_F6,  []() { RestorePosition(); } },
        { VK_F9,  [lpParams]() { SaveCurrentPosition(lpParams); }},
        { VK_F10, [lpParams, lpFunction, lpClass]() { ApplyModifiedPosition(lpParams, lpFunction, lpClass); } }
        // For future mappings
    };

    for (const auto& action : keyActions) {
        if (GetAsyncKeyState(action.iKey)) {
            action.fnAction();
            break;
        }
    }
}