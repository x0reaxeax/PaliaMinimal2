#pragma once

#define _MANUAL_ADJUSTMENT  // Comment this line to disable manual adjustment

#include "SDK.hpp"
#include "SDK/Palia_parameters.hpp"

typedef enum _FunctionType {
    Func_Invalid = 0,
    Func_UpdateLockedItemToPlace,
    Func_PlaceItem
} FunctionType;

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
public:
    static inline SDK::FVector vSavedAdjustmentPosition;  // For coordinate adjustment
    static inline SDK::FRotator vSavedAdjustmentRotation;

private:
    static inline SDK::FVector vSavedPosition;  // For saving and placing in desired position
    static inline SDK::FRotator vSavedRotation;

    struct KeyAction {
        int iKey;
        std::function<VOID()> fnAction;
    };


public:
    static inline FunctionType eFunctionType;
    static inline SDK::UFunction *lpPlaceItemFunction;

    static inline BOOL bModified;
    static inline BOOL bGotRequiredParams;
    static inline PlaceItemParams_t PlacementParams;

    const static inline std::string strFunc_UpdateLockedItemToPlace = "Function Palia.PlacementComponent.RpcServer_UpdateLockedItemToPlace";
    const static inline std::string strFunc_PlaceItem = "Function Palia.PlacementComponent.RpcServer_PlaceItem";
    
    PositionAdjustment(VOID) {
        ZeroMemory(&PlacementParams, sizeof(PlaceItemParams_t));
        
        lpPlaceItemFunction = NULL;
        eFunctionType = Func_Invalid;

        vSavedPosition = SDK::FVector(0.0f, 0.0f, 0.0f);
        vSavedRotation = SDK::FRotator(0.0f, 0.0f, 0.0f);
        
        vSavedAdjustmentPosition = SDK::FVector(0.0f, 0.0f, 0.0f);
        vSavedAdjustmentRotation = SDK::FRotator(0.0f, 0.0f, 0.0f);

        bModified = FALSE;
        bGotRequiredParams = FALSE;
    }

    static BOOL GetPlaceItemFunction(SDK::UPlacementComponent *lpPlacementComponent);

    static VOID EvaluateActionKeyPress(
        LPVOID *lpParams,
        SDK::UFunction **lpFunction,
        const SDK::UObject *lpClass
    );
    static VOID EvaluateAdjustmentKeyPress(VOID);

    static VOID SaveCurrentPosition(LPVOID *lpParams);
    static VOID SavePositionForAdjustment(
        SDK::FVector vPosition,
        SDK::FRotator vRotation
    );
    static VOID ApplyModifiedPosition(
        LPVOID *lpParams,
        SDK::UFunction **lpFunction,
        const SDK::UObject *lpClass
    );
    //static VOID RestorePosition(VOID);
};