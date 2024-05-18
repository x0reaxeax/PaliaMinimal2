#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MontageEvent_Base

#include "Basic.hpp"

#include "GA_MontageEvent_Base_classes.hpp"
#include "GA_MontageEvent_Base_parameters.hpp"


namespace SDK
{

// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.ClearSetMontage
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_MontageEvent_Base_C::ClearSetMontage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "ClearSetMontage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.DoesMontageSectionExist
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             MontageName                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SectionName                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             Temp_name_Variable                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                     CallFunc_FindMontageByMapping_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_MontageHasSection_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_MontageEvent_Base_C::DoesMontageSectionExist(class FName& MontageName, class FName& SectionName, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class FName Temp_name_Variable, class UAnimMontage* CallFunc_FindMontageByMapping_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_MontageHasSection_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "DoesMontageSectionExist");

	Params::GA_MontageEvent_Base_C_DoesMontageSectionExist Parms{};

	Parms.MontageName = MontageName;
	Parms.SectionName = SectionName;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_FindMontageByMapping_ReturnValue = CallFunc_FindMontageByMapping_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MontageHasSection_ReturnValue = CallFunc_MontageHasSection_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.EndTaskAndClearReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::EndTaskAndClearReference(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "EndTaskAndClearReference");

	Params::GA_MontageEvent_Base_C_EndTaskAndClearReference Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.Event_OnActivateAbility
// (BlueprintCallable, BlueprintEvent)

void UGA_MontageEvent_Base_C::Event_OnActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "Event_OnActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.EventReceived_7FADF818480F78C2A5D48AA0819385E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_MontageEvent_Base_C::EventReceived_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "EventReceived_7FADF818480F78C2A5D48AA0819385E5");

	Params::GA_MontageEvent_Base_C_EventReceived_7FADF818480F78C2A5D48AA0819385E5 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.ExecuteUbergraph_GA_MontageEvent_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     K2Node_CustomEvent_EventTag_3                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               K2Node_CustomEvent_EventData_3                         ()
// struct FGameplayTag                     K2Node_CustomEvent_EventTag_2                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               K2Node_CustomEvent_EventData_2                         ()
// TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     K2Node_CustomEvent_EventTag_1                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               K2Node_CustomEvent_EventData_1                         ()
// TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     K2Node_CustomEvent_EventTag                            (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               K2Node_CustomEvent_EventData                           ()
// TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)>K2Node_CreateDelegate_OutputDelegate_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               Temp_struct_Variable                                   ()
// struct FGameplayTag                     Temp_struct_Variable_1                                 (NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_K2_CommitAbility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_bWasCancelled                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             K2Node_CustomEvent_Montage                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             K2Node_CustomEvent_MontageSection                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_CustomEvent_EndAbilityWhenFinished              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_CustomEvent_Force__Used_by_child_outro_         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_TaskProxy_PlayMontageAndWaitForEvent*CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)>K2Node_CreateDelegate_OutputDelegate_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     K2Node_CustomEvent_EventTag_4                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               K2Node_CustomEvent_EventData_4                         ()
// bool                                    CallFunc_FNameIsNone_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)>K2Node_CreateDelegate_OutputDelegate_4                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_DoesMontageSectionExist_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::ExecuteUbergraph_GA_MontageEvent_Base(int32 EntryPoint, const struct FGameplayTag& K2Node_CustomEvent_EventTag_3, const struct FGameplayEventData& K2Node_CustomEvent_EventData_3, const struct FGameplayTag& K2Node_CustomEvent_EventTag_2, const struct FGameplayEventData& K2Node_CustomEvent_EventData_2, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& K2Node_CustomEvent_EventTag_1, const struct FGameplayEventData& K2Node_CustomEvent_EventData_1, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& K2Node_CustomEvent_EventTag, const struct FGameplayEventData& K2Node_CustomEvent_EventData, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayEventData& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_K2_CommitAbility_ReturnValue, bool K2Node_Event_bWasCancelled, class FName K2Node_CustomEvent_Montage, class FName K2Node_CustomEvent_MontageSection, bool K2Node_CustomEvent_EndAbilityWhenFinished, bool K2Node_CustomEvent_Force__Used_by_child_outro_, class UVAL_TaskProxy_PlayMontageAndWaitForEvent* CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayTag& K2Node_CustomEvent_EventTag_4, const struct FGameplayEventData& K2Node_CustomEvent_EventData_4, bool CallFunc_FNameIsNone_ReturnValue, TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_DoesMontageSectionExist_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "ExecuteUbergraph_GA_MontageEvent_Base");

	Params::GA_MontageEvent_Base_C_ExecuteUbergraph_GA_MontageEvent_Base Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_EventTag_3 = std::move(K2Node_CustomEvent_EventTag_3);
	Parms.K2Node_CustomEvent_EventData_3 = std::move(K2Node_CustomEvent_EventData_3);
	Parms.K2Node_CustomEvent_EventTag_2 = std::move(K2Node_CustomEvent_EventTag_2);
	Parms.K2Node_CustomEvent_EventData_2 = std::move(K2Node_CustomEvent_EventData_2);
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_EventTag_1 = std::move(K2Node_CustomEvent_EventTag_1);
	Parms.K2Node_CustomEvent_EventData_1 = std::move(K2Node_CustomEvent_EventData_1);
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_EventTag = std::move(K2Node_CustomEvent_EventTag);
	Parms.K2Node_CustomEvent_EventData = std::move(K2Node_CustomEvent_EventData);
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.Temp_struct_Variable_1 = std::move(Temp_struct_Variable_1);
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_CustomEvent_Montage = K2Node_CustomEvent_Montage;
	Parms.K2Node_CustomEvent_MontageSection = K2Node_CustomEvent_MontageSection;
	Parms.K2Node_CustomEvent_EndAbilityWhenFinished = K2Node_CustomEvent_EndAbilityWhenFinished;
	Parms.K2Node_CustomEvent_Force__Used_by_child_outro_ = K2Node_CustomEvent_Force__Used_by_child_outro_;
	Parms.CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue = CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_EventTag_4 = std::move(K2Node_CustomEvent_EventTag_4);
	Parms.K2Node_CustomEvent_EventData_4 = std::move(K2Node_CustomEvent_EventData_4);
	Parms.CallFunc_FNameIsNone_ReturnValue = CallFunc_FNameIsNone_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_DoesMontageSectionExist_ReturnValue = CallFunc_DoesMontageSectionExist_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.GetPlayingMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             Param_AnimationName                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Param_MontageSection                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::GetPlayingMontage(class FName* Param_AnimationName, class FName* Param_MontageSection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "GetPlayingMontage");

	Params::GA_MontageEvent_Base_C_GetPlayingMontage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimationName != nullptr)
		*Param_AnimationName = Parms.Param_AnimationName;

	if (Param_MontageSection != nullptr)
		*Param_MontageSection = Parms.Param_MontageSection;
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.GetWasCancelled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_WasCancelled                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::GetWasCancelled(bool* Param_WasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "GetWasCancelled");

	Params::GA_MontageEvent_Base_C_GetWasCancelled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_WasCancelled != nullptr)
		*Param_WasCancelled = Parms.Param_WasCancelled;
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.HandleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_SetMovementBlock_Changed                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_SetMovementBlock_Changed_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::HandleEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_SetMovementBlock_Changed, bool CallFunc_SetMovementBlock_Changed_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "HandleEvent");

	Params::GA_MontageEvent_Base_C_HandleEvent Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_SetMovementBlock_Changed = CallFunc_SetMovementBlock_Changed;
	Parms.CallFunc_SetMovementBlock_Changed_1 = CallFunc_SetMovementBlock_Changed_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.IsAbilityLockedIn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_MontageEvent_Base_C::IsAbilityLockedIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "IsAbilityLockedIn");

	Params::GA_MontageEvent_Base_C_IsAbilityLockedIn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.IsShuttingDown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::IsShuttingDown(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "IsShuttingDown");

	Params::GA_MontageEvent_Base_C_IsShuttingDown Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "K2_OnEndAbility");

	Params::GA_MontageEvent_Base_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.OnAbilityEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_SetMovementBlock_Changed                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::OnAbilityEnd(bool CallFunc_SetMovementBlock_Changed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "OnAbilityEnd");

	Params::GA_MontageEvent_Base_C_OnAbilityEnd Parms{};

	Parms.CallFunc_SetMovementBlock_Changed = CallFunc_SetMovementBlock_Changed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.OnAbilityStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_SetMovementBlock_Changed                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::OnAbilityStart(bool CallFunc_SetMovementBlock_Changed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "OnAbilityStart");

	Params::GA_MontageEvent_Base_C_OnAbilityStart Parms{};

	Parms.CallFunc_SetMovementBlock_Changed = CallFunc_SetMovementBlock_Changed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.OnBlendOut_7FADF818480F78C2A5D48AA0819385E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_MontageEvent_Base_C::OnBlendOut_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "OnBlendOut_7FADF818480F78C2A5D48AA0819385E5");

	Params::GA_MontageEvent_Base_C_OnBlendOut_7FADF818480F78C2A5D48AA0819385E5 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.OnCancelled_7FADF818480F78C2A5D48AA0819385E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_MontageEvent_Base_C::OnCancelled_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "OnCancelled_7FADF818480F78C2A5D48AA0819385E5");

	Params::GA_MontageEvent_Base_C_OnCancelled_7FADF818480F78C2A5D48AA0819385E5 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.OnCompleted_7FADF818480F78C2A5D48AA0819385E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_MontageEvent_Base_C::OnCompleted_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "OnCompleted_7FADF818480F78C2A5D48AA0819385E5");

	Params::GA_MontageEvent_Base_C_OnCompleted_7FADF818480F78C2A5D48AA0819385E5 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.OnInterrupted_7FADF818480F78C2A5D48AA0819385E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_MontageEvent_Base_C::OnInterrupted_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "OnInterrupted_7FADF818480F78C2A5D48AA0819385E5");

	Params::GA_MontageEvent_Base_C_OnInterrupted_7FADF818480F78C2A5D48AA0819385E5 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.OnMontageDone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMontageEventResult                     Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::OnMontageDone__DelegateSignature(EMontageEventResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "OnMontageDone__DelegateSignature");

	Params::GA_MontageEvent_Base_C_OnMontageDone__DelegateSignature Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.OnMovementBlockChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_MovementBlocked                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::OnMovementBlockChanged__DelegateSignature(bool Param_MovementBlocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "OnMovementBlockChanged__DelegateSignature");

	Params::GA_MontageEvent_Base_C_OnMovementBlockChanged__DelegateSignature Parms{};

	Parms.Param_MovementBlocked = Param_MovementBlocked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.PlayMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Param_MontageSection                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    EndAbilityWhenFinished                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Force__Used_by_child_outro_                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::PlayMontage(class FName Montage, class FName Param_MontageSection, bool EndAbilityWhenFinished, bool Force__Used_by_child_outro_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "PlayMontage");

	Params::GA_MontageEvent_Base_C_PlayMontage Parms{};

	Parms.Montage = Montage;
	Parms.Param_MontageSection = Param_MontageSection;
	Parms.EndAbilityWhenFinished = EndAbilityWhenFinished;
	Parms.Force__Used_by_child_outro_ = Force__Used_by_child_outro_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.SetAbilityLockedIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_LockedIn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::SetAbilityLockedIn(bool Param_LockedIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "SetAbilityLockedIn");

	Params::GA_MontageEvent_Base_C_SetAbilityLockedIn Parms{};

	Parms.Param_LockedIn = Param_LockedIn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.SetMovementBlock
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bLock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Changed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsAbilityLockedIn_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_BoolBool_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle      CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue     (NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::SetMovementBlock(bool bLock, bool* Changed, bool CallFunc_IsAbilityLockedIn_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "SetMovementBlock");

	Params::GA_MontageEvent_Base_C_SetMovementBlock Parms{};

	Parms.bLock = bLock;
	Parms.CallFunc_IsAbilityLockedIn_ReturnValue = CallFunc_IsAbilityLockedIn_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = std::move(CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	if (Changed != nullptr)
		*Changed = Parms.Changed;
}

}
