#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Cooking_Minigame_Base

#include "Basic.hpp"

#include "GA_Cooking_Minigame_Base_classes.hpp"
#include "GA_Cooking_Minigame_Base_parameters.hpp"


namespace SDK
{

// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.Callback_SuccessfulInputReceived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMinigameComponentMasterQTE*      Comp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::Callback_SuccessfulInputReceived(class UMinigameComponentMasterQTE* Comp, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "Callback_SuccessfulInputReceived");

	Params::GA_Cooking_Minigame_Base_C_Callback_SuccessfulInputReceived Parms{};

	Parms.Comp = Comp;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.CanPlayMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_CanPlayMontage                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsShuttingDown_NewParam                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::CanPlayMontage(bool* Param_CanPlayMontage, bool CallFunc_IsShuttingDown_NewParam, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "CanPlayMontage");

	Params::GA_Cooking_Minigame_Base_C_CanPlayMontage Parms{};

	Parms.CallFunc_IsShuttingDown_NewParam = CallFunc_IsShuttingDown_NewParam;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_CanPlayMontage != nullptr)
		*Param_CanPlayMontage = Parms.Param_CanPlayMontage;
}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.CanPlayMontageDuringMinigame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    CanPlayPenaltyMontage                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_CanPlayMontage_CanPlayMontage                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsPlaying_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::CanPlayMontageDuringMinigame(bool* CanPlayPenaltyMontage, bool CallFunc_CanPlayMontage_CanPlayMontage, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "CanPlayMontageDuringMinigame");

	Params::GA_Cooking_Minigame_Base_C_CanPlayMontageDuringMinigame Parms{};

	Parms.CallFunc_CanPlayMontage_CanPlayMontage = CallFunc_CanPlayMontage_CanPlayMontage;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanPlayPenaltyMontage != nullptr)
		*CanPlayPenaltyMontage = Parms.CanPlayPenaltyMontage;
}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.CanUnlockCharacterDuringAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    CanUnlock                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::CanUnlockCharacterDuringAnimation(bool* CanUnlock, bool CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "CanUnlockCharacterDuringAnimation");

	Params::GA_Cooking_Minigame_Base_C_CanUnlockCharacterDuringAnimation Parms{};

	Parms.CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock = CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanUnlock != nullptr)
		*CanUnlock = Parms.CanUnlock;
}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.DoOutro
// (BlueprintCallable, BlueprintEvent)

void UGA_Cooking_Minigame_Base_C::DoOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "DoOutro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.ExecuteUbergraph_GA_Cooking_Minigame_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsShuttingDown_NewParam                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                     CallFunc_GetCurrentMontage_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             CallFunc_GetMontageCurrentSectionName_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsShuttingDown_NewParam_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_NameName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::ExecuteUbergraph_GA_Cooking_Minigame_Base(int32 EntryPoint, bool CallFunc_IsShuttingDown_NewParam, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, class FName CallFunc_GetMontageCurrentSectionName_ReturnValue, bool CallFunc_IsShuttingDown_NewParam_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "ExecuteUbergraph_GA_Cooking_Minigame_Base");

	Params::GA_Cooking_Minigame_Base_C_ExecuteUbergraph_GA_Cooking_Minigame_Base Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsShuttingDown_NewParam = CallFunc_IsShuttingDown_NewParam;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_GetCurrentMontage_ReturnValue = CallFunc_GetCurrentMontage_ReturnValue;
	Parms.CallFunc_GetMontageCurrentSectionName_ReturnValue = CallFunc_GetMontageCurrentSectionName_ReturnValue;
	Parms.CallFunc_IsShuttingDown_NewParam_1 = CallFunc_IsShuttingDown_NewParam_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.HandleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::HandleEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "HandleEvent");

	Params::GA_Cooking_Minigame_Base_C_HandleEvent Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.HandleMovementBlockChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_MovementBlocked                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsServer_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRecipeConfig                    CallFunc_GetRecipeConfig_ReturnValue                   (ConstParm)
// bool                                    CallFunc_Server_Collect_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECrafterState                           CallFunc_GetCrafterState_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::HandleMovementBlockChanged(bool Param_MovementBlocked, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool CallFunc_IsServer_ReturnValue, struct FRecipeConfig& CallFunc_GetRecipeConfig_ReturnValue, bool CallFunc_Server_Collect_ReturnValue, ECrafterState CallFunc_GetCrafterState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "HandleMovementBlockChanged");

	Params::GA_Cooking_Minigame_Base_C_HandleMovementBlockChanged Parms{};

	Parms.Param_MovementBlocked = Param_MovementBlocked;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetRecipeConfig_ReturnValue = std::move(CallFunc_GetRecipeConfig_ReturnValue);
	Parms.CallFunc_Server_Collect_ReturnValue = CallFunc_Server_Collect_ReturnValue;
	Parms.CallFunc_GetCrafterState_ReturnValue = CallFunc_GetCrafterState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.Minigame OnStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMinigameComponentBase*           Comp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EMinigameState                          PrevState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMinigameState                          NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_CanPlayMontage_CanPlayMontage                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_CanPlayMontageDuringMinigame_CanPlayPenaltyMontage(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::Minigame_OnStateChanged(class UMinigameComponentBase* Comp, EMinigameState PrevState, EMinigameState NewState, bool CallFunc_CanPlayMontage_CanPlayMontage, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_CanPlayMontageDuringMinigame_CanPlayPenaltyMontage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "Minigame OnStateChanged");

	Params::GA_Cooking_Minigame_Base_C_Minigame_OnStateChanged Parms{};

	Parms.Comp = Comp;
	Parms.PrevState = PrevState;
	Parms.NewState = NewState;
	Parms.CallFunc_CanPlayMontage_CanPlayMontage = CallFunc_CanPlayMontage_CanPlayMontage;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_CanPlayMontageDuringMinigame_CanPlayPenaltyMontage = CallFunc_CanPlayMontageDuringMinigame_CanPlayPenaltyMontage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.OnAbilityEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void(class UMinigameComponentMasterQTE* Comp)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UMinigameComponentBase* Comp, EMinigameState PrevState, EMinigameState NewState)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::OnAbilityEnd(TDelegate<void(class UMinigameComponentMasterQTE* Comp)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class UMinigameComponentBase* Comp, EMinigameState PrevState, EMinigameState NewState)> K2Node_CreateDelegate_OutputDelegate_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "OnAbilityEnd");

	Params::GA_Cooking_Minigame_Base_C_OnAbilityEnd Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.OnAbilityStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void(bool MovementBlocked)>   K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UMinigameComponentMasterQTE* Comp)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UMinigameComponentBase* Comp, EMinigameState PrevState, EMinigameState NewState)>K2Node_CreateDelegate_OutputDelegate_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::OnAbilityStart(TDelegate<void(bool MovementBlocked)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class UMinigameComponentMasterQTE* Comp)> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(class UMinigameComponentBase* Comp, EMinigameState PrevState, EMinigameState NewState)> K2Node_CreateDelegate_OutputDelegate_2, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "OnAbilityStart");

	Params::GA_Cooking_Minigame_Base_C_OnAbilityStart Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.OnOutroStarted
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Cooking_Minigame_Base_C::OnOutroStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "OnOutroStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.PlayMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Param_MontageSection                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    EndAbilityWhenFinished                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Force__Used_by_child_outro_                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::PlayMontage(class FName Montage, class FName Param_MontageSection, bool EndAbilityWhenFinished, bool Force__Used_by_child_outro_, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "PlayMontage");

	Params::GA_Cooking_Minigame_Base_C_PlayMontage Parms{};

	Parms.Montage = Montage;
	Parms.Param_MontageSection = Param_MontageSection;
	Parms.EndAbilityWhenFinished = EndAbilityWhenFinished;
	Parms.Force__Used_by_child_outro_ = Force__Used_by_child_outro_;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.Queue Outro
// (BlueprintCallable, BlueprintEvent)

void UGA_Cooking_Minigame_Base_C::Queue_Outro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "Queue Outro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.SetMovementBlock
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bLock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Changed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_SetMovementBlock_Changed                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::SetMovementBlock(bool bLock, bool* Changed, bool CallFunc_SetMovementBlock_Changed, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "SetMovementBlock");

	Params::GA_Cooking_Minigame_Base_C_SetMovementBlock Parms{};

	Parms.bLock = bLock;
	Parms.CallFunc_SetMovementBlock_Changed = CallFunc_SetMovementBlock_Changed;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Changed != nullptr)
		*Changed = Parms.Changed;
}

}

