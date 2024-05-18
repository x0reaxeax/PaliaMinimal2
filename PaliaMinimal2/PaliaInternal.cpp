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

    if (strClassName.starts_with("PlacementComponent")) {
        SDK::UPlacementComponent *lpPlacementComponent = (SDK::UPlacementComponent *) lpClass;
        lpPlacementComponent->CanPlaceHere = true;
    
        /* Positional Adjustment */
        if (strFunctionName == PositionAdjustment::strFunc_UpdateLockedItemToPlace) {
            UpdateLockedItemToPlaceParams_t *lpUpdateLckItmParams = (UpdateLockedItemToPlaceParams_t *) lpParams;
            if (!PositionAdjustment::bModified) {
                PositionAdjustment::SavePositionForAdjustment(
                    lpUpdateLckItmParams->Position,
                    lpUpdateLckItmParams->Rotation
                );

            }
            PositionAdjustment::EvaluateAdjustmentKeyPress();
        } else if (strFunctionName == PositionAdjustment::strFunc_PlaceItem) {
            PlaceItemParams_t *lpPlaceItemParams = (PlaceItemParams_t *) lpParams;

            PositionAdjustment::PlacementParams.Anchor = lpPlaceItemParams->Anchor;
            PositionAdjustment::PlacementParams.HousingOwner = lpPlaceItemParams->HousingOwner;
            PositionAdjustment::PlacementParams.Params_0 = lpPlaceItemParams->Params_0;
            PositionAdjustment::PlacementParams.MetadataFlags = lpPlaceItemParams->MetadataFlags;
            PositionAdjustment::bGotRequiredParams = TRUE;
        }

        PositionAdjustment::EvaluateActionKeyPress();
        // TODO, this needs to be called only on UpdateLockedItemToPlace func, and it needs to have current pos and rot passed to it
    }

    OriginalProcessEvent(lpClass, lpFunction, lpParams);
}

VOID PaliaInternal::PositionAdjustment::SavePositionForAdjustment(SDK::FVector vPosition, SDK::FRotator vRotation) {
    vSavedAdjustmentPosition = vPosition;
    vSavedAdjustmentRotation = vRotation;
}

VOID SaveCurrentPosition(VOID) {
    vSavedPosition = vCurrentPosition;
    vSavedRotation = vCurrentRotation;
}

VOID PaliaInternal::PositionAdjustment::RestorePosition(VOID) {
    vSavedPosition = vBackupPosition;
    vSavedRotation = vBackupRotation;
}

//VOID PaliaInternal::PositionAdjustment::GetPosition(SDK::FVector vPosition, SDK::FRotator vRotation) {
//    vCurrentPosition = vPosition;
//    vCurrentRotation = vRotation;
//
//    if (vSavedPosition.X == vCurrentPosition.X && vSavedPosition.Y == vCurrentPosition.Y && vSavedPosition.Z == vCurrentPosition.Z) {
//        return;
//    }
//    printf(
//        "[+] Current Position: %f %f %f\n"
//        "[+] Current Rotation: %f %f %f\n",
//        vCurrentPosition.X,
//        vCurrentPosition.Y,
//        vCurrentPosition.Z,
//        vCurrentRotation.Pitch,
//        vCurrentRotation.Yaw,
//        vCurrentRotation.Roll
//    );
//}

//VOID PaliaInternal::PositionAdjustment::SetPosition(SDK::FVector vPosition, SDK::FRotator vRotation) {
//    vCurrentPosition = vPosition;
//    vCurrentRotation = vRotation;
//
//    printf(
//        "[+] New Position: %f %f %f\n"
//        "[+] New Rotation: %f %f %f\n",
//        vCurrentPosition.X,
//        vCurrentPosition.Y,
//        vCurrentPosition.Z,
//        vCurrentRotation.Pitch,
//        vCurrentRotation.Yaw,
//        vCurrentRotation.Roll
//    );
//
//}

VOID PaliaInternal::PositionAdjustment::EvaluateAdjustmentKeyPress(VOID) {
    struct KeyAdjustment {
        int iKey;
        SDK::FVector vPositionAdjustment;
        SDK::FRotator vRotationAdjustment;
    };

    std::vector<KeyAdjustment> adjustments = {
        /* Z */
        { VK_UP,        { 0.0f, 0.0f, 1.0f },  { 0.0f, 0.0f, 0.0f } },
        { VK_DOWN,      { 0.0f, 0.0f, -1.0f }, { 0.0f, 0.0f, 0.0f } },
        /* Y */
        { VK_NUMPAD2,   { 0.0f, 1.0f, 0.0f },  { 0.0f, 0.0f, 0.0f } },
        { VK_NUMPAD8,   { 0.0f, -1.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
        /* X */
        { VK_NUMPAD6,     { 1.0f, 0.0f, 0.0f },  { 0.0f, 0.0f, 0.0f } },
        { VK_NUMPAD4,      { -1.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },

        /* Yaw */
        { VK_NUMPAD9, { 0.0f, 0.0f, 0.0f }, { 0.0f, 1.0f, 0.0f } },
        { VK_NUMPAD7, { 0.0f, 0.0f, 0.0f }, { 0.0f, -1.0f, 0.0f } },
        /* Pitch */
        { VK_NUMPAD3, { 0.0f, 0.0f, 0.0f }, { 1.0f, 0.0f, 0.0f } },
        { VK_NUMPAD1, { 0.0f, 0.0f, 0.0f }, { -1.0f, 0.0f, 0.0f } },
        /* Roll */
        { VK_NUMPAD5, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 1.0f } },
        { VK_NUMPAD0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -1.0f } }
    };

    for (const auto &adj : adjustments) {
        if (GetAsyncKeyState(adj.iKey)) {
            /*SetPosition(
                SDK::FVector(
                    vCurrentPosition.X + adj.vPositionAdjustment.X,
                    vCurrentPosition.Y + adj.vPositionAdjustment.Y,
                    vCurrentPosition.Z + adj.vPositionAdjustment.Z
                ),
                SDK::FRotator(
                    vCurrentRotation.Pitch + adj.vRotationAdjustment.Pitch,
                    vCurrentRotation.Yaw + adj.vRotationAdjustment.Yaw,
                    vCurrentRotation.Roll + adj.vRotationAdjustment.Roll
                )
            );*/
            vSavedPosition.X += adj.vPositionAdjustment.X;
            vSavedPosition.Y += adj.vPositionAdjustment.Y;
            vSavedPosition.Z += adj.vPositionAdjustment.Z;
            vSavedRotation.Pitch += adj.vRotationAdjustment.Pitch;
            vSavedRotation.Yaw += adj.vRotationAdjustment.Yaw;
            vSavedRotation.Roll += adj.vRotationAdjustment.Roll;

            printf(
                "[+] New Position: %f %f %f\n"
                "[+] New Rotation: %f %f %f\n",
                vSavedPosition.X,
                vSavedPosition.Y,
                vSavedPosition.Z,
                vSavedRotation.Pitch,
                vSavedRotation.Yaw,
                vSavedRotation.Roll
            );
            bModified = true;
            break;
        }
    }
}

VOID PaliaInternal::PositionAdjustment::EvaluateActionKeyPress(VOID) {
    std::vector<KeyAction> keyActions = {
        { VK_F6,  []() { RestoreBackupPosition(); } },
        { VK_F9,  []() { SavePosition(); } },
        { VK_F10, []() { RestorePosition(); } },
        // Add other key-action mappings here
    };

    // F6 = Restore Backup Position
    // F9 = Save Position
    // F10 = Place Item
    // ...
    
}