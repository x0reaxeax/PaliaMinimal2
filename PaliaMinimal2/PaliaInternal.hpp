#pragma once

#define _MANUAL_ADJUSTMENT  // Comment this line to disable manual adjustment

#include "SDK.hpp"
#include "SDK/Palia_parameters.hpp"

typedef SDK::Params::PlacementComponent_RpcServer_PlaceItem PlaceItemParams_t;
typedef SDK::Params::PlacementComponent_RpcServer_UpdateLockedItemToPlace UpdateLockedItemToPlaceParams_t;

typedef VOID (*ProcessEvent_t)(const SDK::UObject *, class SDK::UFunction *, LPVOID);

class PaliaInternal {
public:
    class PositionAdjustment;
    
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

class PaliaInternal::PositionAdjustment {
private:
    static inline SDK::FVector vSavedPosition;
    static inline SDK::FRotator vSavedRotation;
    
    static inline SDK::FVector vSavedAdjustmentPosition;  // For modifying
    static inline SDK::FRotator vSavedAdjustmentRotation;

    static inline SDK::FVector vBackupPosition;
    static inline SDK::FRotator vBackupRotation;

    static inline BOOL bPositionSaved;
    static inline BOOL bPositionSet;

    struct KeyAction {
        int iKey;
        std::function<VOID()> fnAction;
    };

public:
    static inline BOOL bModified;
    static inline BOOL bGotRequiredParams;
    static inline PlaceItemParams_t PlacementParams;

    const static inline std::string strFunc_UpdateLockedItemToPlace = "Function Palia.PlacementComponent.RpcServer_UpdateLockedItemToPlace";
    const static inline std::string strFunc_PlaceItem = "Function Palia.PlacementComponent.RpcServer_PlaceItem";
    
    PositionAdjustment(VOID) {
        ZeroMemory(&PlacementParams, sizeof(PlaceItemParams_t));
        
        vSavedPosition = SDK::FVector(0.0f, 0.0f, 0.0f);
        vSavedRotation = SDK::FRotator(0.0f, 0.0f, 0.0f);
        
        vSavedAdjustmentPosition = SDK::FVector(0.0f, 0.0f, 0.0f);
        vSavedAdjustmentRotation = SDK::FRotator(0.0f, 0.0f, 0.0f);

        vBackupPosition = SDK::FVector(0.0f, 0.0f, 0.0f);
        vBackupRotation = SDK::FRotator(0.0f, 0.0f, 0.0f);

        bPositionSaved = FALSE;
        bPositionSet = FALSE;
        bModified = FALSE;
        bGotRequiredParams = FALSE;
    }

    static VOID EvaluateActionKeyPress(VOID);
    static VOID EvaluateAdjustmentKeyPress(VOID);

    static VOID SavePositionForAdjustment(SDK::FVector vPosition, SDK::FRotator vRotation);
    //static VOID SavePosition(SDK)
    static VOID RestorePosition(VOID);
    //static VOID GetPosition(SDK::FVector vPosition, SDK::FRotator vRotation);
    //static VOID SetPosition(SDK::FVector vPosition, SDK::FRotator vRotation);
};