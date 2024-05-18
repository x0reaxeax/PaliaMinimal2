#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Cooking_OneOff_Base

#include "Basic.hpp"

#include "GA_Cooking_OneOff_Base_classes.hpp"
#include "GA_Cooking_OneOff_Base_parameters.hpp"


namespace SDK
{

// Function GA_Cooking_OneOff_Base.GA_Cooking_OneOff_Base_C.CanUnlockCharacterDuringAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    CanUnlock                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_OneOff_Base_C::CanUnlockCharacterDuringAnimation(bool* CanUnlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cooking_OneOff_Base_C", "CanUnlockCharacterDuringAnimation");

	Params::GA_Cooking_OneOff_Base_C_CanUnlockCharacterDuringAnimation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanUnlock != nullptr)
		*CanUnlock = Parms.CanUnlock;
}


// Function GA_Cooking_OneOff_Base.GA_Cooking_OneOff_Base_C.ExecuteUbergraph_GA_Cooking_OneOff_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               K2Node_Event_EventData                                 (ConstParm)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*           CallFunc_GetComponentByClass_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCrafterComponent*                CallFunc_GetComponentByClass_ReturnValue_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsServer_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVAL_InteractorLockParams        CallFunc_GetLockParams_VAL_InteractorLockParams        (NoDestructor, ContainsInstancedReference)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractorComponent*             CallFunc_GetInteractorComponent_ReturnValue            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Client_TryInteractableLockSetup_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_CanPlayerChangeLockWith_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_OneOff_Base_C::ExecuteUbergraph_GA_Cooking_OneOff_Base(int32 EntryPoint, struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_IsValid_ReturnValue, class UInteractableComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UCrafterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, const struct FVAL_InteractorLockParams& CallFunc_GetLockParams_VAL_InteractorLockParams, bool CallFunc_Not_PreBool_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UInteractorComponent* CallFunc_GetInteractorComponent_ReturnValue, bool CallFunc_Client_TryInteractableLockSetup_ReturnValue, bool CallFunc_CanPlayerChangeLockWith_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cooking_OneOff_Base_C", "ExecuteUbergraph_GA_Cooking_OneOff_Base");

	Params::GA_Cooking_OneOff_Base_C_ExecuteUbergraph_GA_Cooking_OneOff_Base Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = std::move(K2Node_Event_EventData);
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetLockParams_VAL_InteractorLockParams = std::move(CallFunc_GetLockParams_VAL_InteractorLockParams);
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_GetInteractorComponent_ReturnValue = CallFunc_GetInteractorComponent_ReturnValue;
	Parms.CallFunc_Client_TryInteractableLockSetup_ReturnValue = CallFunc_Client_TryInteractableLockSetup_ReturnValue;
	Parms.CallFunc_CanPlayerChangeLockWith_ReturnValue = CallFunc_CanPlayerChangeLockWith_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Cooking_OneOff_Base.GA_Cooking_OneOff_Base_C.GetLockParams
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVAL_InteractorLockParams        VAL_InteractorLockParams                               (Parm, OutParm, NoDestructor, ContainsInstancedReference)
// class UObject*                          CallFunc_SelectObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVAL_InteractorLockParams        K2Node_MakeStruct_VAL_InteractorLockParams             (NoDestructor, ContainsInstancedReference)

void UGA_Cooking_OneOff_Base_C::GetLockParams(struct FVAL_InteractorLockParams* VAL_InteractorLockParams, class UObject* CallFunc_SelectObject_ReturnValue, const struct FVAL_InteractorLockParams& K2Node_MakeStruct_VAL_InteractorLockParams)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cooking_OneOff_Base_C", "GetLockParams");

	Params::GA_Cooking_OneOff_Base_C_GetLockParams Parms{};

	Parms.CallFunc_SelectObject_ReturnValue = CallFunc_SelectObject_ReturnValue;
	Parms.K2Node_MakeStruct_VAL_InteractorLockParams = std::move(K2Node_MakeStruct_VAL_InteractorLockParams);

	UObject::ProcessEvent(Func, &Parms);

	if (VAL_InteractorLockParams != nullptr)
		*VAL_InteractorLockParams = std::move(Parms.VAL_InteractorLockParams);
}


// Function GA_Cooking_OneOff_Base.GA_Cooking_OneOff_Base_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Cooking_OneOff_Base_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cooking_OneOff_Base_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Cooking_OneOff_Base_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Cooking_OneOff_Base.GA_Cooking_OneOff_Base_C.SetMovementBlock
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bLock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Changed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVAL_InteractorLockParams        CallFunc_GetLockParams_VAL_InteractorLockParams        (NoDestructor, ContainsInstancedReference)
// struct FVAL_InteractorLockParams        CallFunc_GetLockParams_VAL_InteractorLockParams_1      (NoDestructor, ContainsInstancedReference)
// bool                                    CallFunc_IsServer_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsServer_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsAbilityLockedIn_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_BoolBool_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_SetMovementBlock_Changed                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_SetMovementBlock_Changed_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsShuttingDown_NewParam                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractorComponent*             CallFunc_GetInteractorComponent_ReturnValue            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_LockPlayerToInteractable_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractorComponent*             CallFunc_GetInteractorComponent_ReturnValue_1          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVAL_InteractorLockParams        CallFunc_GetLockParams_VAL_InteractorLockParams_2      (NoDestructor, ContainsInstancedReference)
// bool                                    CallFunc_IsPlayerLockedToInteractable_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_UnLockPlayerFromInteractable_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_CanPlayerChangeLockWith_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_OneOff_Base_C::SetMovementBlock(bool bLock, bool* Changed, const struct FVAL_InteractorLockParams& CallFunc_GetLockParams_VAL_InteractorLockParams, const struct FVAL_InteractorLockParams& CallFunc_GetLockParams_VAL_InteractorLockParams_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsAbilityLockedIn_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_SetMovementBlock_Changed, bool CallFunc_SetMovementBlock_Changed_1, bool CallFunc_IsShuttingDown_NewParam, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UInteractorComponent* CallFunc_GetInteractorComponent_ReturnValue, bool CallFunc_LockPlayerToInteractable_ReturnValue, bool CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock, bool CallFunc_BooleanOR_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1, class UInteractorComponent* CallFunc_GetInteractorComponent_ReturnValue_1, const struct FVAL_InteractorLockParams& CallFunc_GetLockParams_VAL_InteractorLockParams_2, bool CallFunc_IsPlayerLockedToInteractable_ReturnValue, bool CallFunc_UnLockPlayerFromInteractable_ReturnValue, bool CallFunc_CanPlayerChangeLockWith_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cooking_OneOff_Base_C", "SetMovementBlock");

	Params::GA_Cooking_OneOff_Base_C_SetMovementBlock Parms{};

	Parms.bLock = bLock;
	Parms.CallFunc_GetLockParams_VAL_InteractorLockParams = std::move(CallFunc_GetLockParams_VAL_InteractorLockParams);
	Parms.CallFunc_GetLockParams_VAL_InteractorLockParams_1 = std::move(CallFunc_GetLockParams_VAL_InteractorLockParams_1);
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsAbilityLockedIn_ReturnValue = CallFunc_IsAbilityLockedIn_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_SetMovementBlock_Changed = CallFunc_SetMovementBlock_Changed;
	Parms.CallFunc_SetMovementBlock_Changed_1 = CallFunc_SetMovementBlock_Changed_1;
	Parms.CallFunc_IsShuttingDown_NewParam = CallFunc_IsShuttingDown_NewParam;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_GetInteractorComponent_ReturnValue = CallFunc_GetInteractorComponent_ReturnValue;
	Parms.CallFunc_LockPlayerToInteractable_ReturnValue = CallFunc_LockPlayerToInteractable_ReturnValue;
	Parms.CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock = CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1 = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1;
	Parms.CallFunc_GetInteractorComponent_ReturnValue_1 = CallFunc_GetInteractorComponent_ReturnValue_1;
	Parms.CallFunc_GetLockParams_VAL_InteractorLockParams_2 = std::move(CallFunc_GetLockParams_VAL_InteractorLockParams_2);
	Parms.CallFunc_IsPlayerLockedToInteractable_ReturnValue = CallFunc_IsPlayerLockedToInteractable_ReturnValue;
	Parms.CallFunc_UnLockPlayerFromInteractable_ReturnValue = CallFunc_UnLockPlayerFromInteractable_ReturnValue;
	Parms.CallFunc_CanPlayerChangeLockWith_ReturnValue = CallFunc_CanPlayerChangeLockWith_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Changed != nullptr)
		*Changed = Parms.Changed;
}

}

