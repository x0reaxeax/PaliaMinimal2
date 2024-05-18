#pragma once

#define _MANUAL_ADJUSTMENT  // Comment this line to disable manual adjustment

#include "SDK.hpp"
#include "SDK/Palia_parameters.hpp"


typedef VOID (*ProcessEvent_t)(const SDK::UObject *, class SDK::UFunction *, LPVOID);

class PaliaInternal {
public:
    static inline SDK::UEngine *lpgEngine;
    static inline SDK::AValeriaCharacter *lpValeriaCharacter;

private:
    static inline LPVOID lpVmt;
    static inline LPVOID lpHookedClient;

    static inline LPVOID lpTargetInstance;
    static inline LPVOID *lpVTable;

    static inline VOID (*OriginalProcessEvent)(const SDK::UObject *, class SDK::UFunction *, LPVOID);
private:
    static VOID GetValeriaCharacter(VOID);
    static BOOL HookProcessEvent(VOID);


public:
    PaliaInternal(VOID) {
        lpValeriaCharacter = NULL;
        lpVmt = NULL;
        lpHookedClient = NULL;
        lpTargetInstance = NULL;
        lpVTable = NULL;
        OriginalProcessEvent = NULL;
    }

    static BOOL InitInternal(VOID);

    static VOID HookedProcessEvent(
        const SDK::UObject *lpClass,
        class SDK::UFunction *lpFunction,
        LPVOID lpParams
    );
};