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
    }

    OriginalProcessEvent(lpClass, lpFunction, lpParams);
}