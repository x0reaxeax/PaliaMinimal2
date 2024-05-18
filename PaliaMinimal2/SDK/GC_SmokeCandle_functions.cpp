#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_SmokeCandle

#include "Basic.hpp"

#include "GC_SmokeCandle_classes.hpp"
#include "GC_SmokeCandle_parameters.hpp"


namespace SDK
{

// Function GC_SmokeCandle.GC_SmokeCandle_C.ExecuteUbergraph_GC_SmokeCandle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEndPlayReason                          K2Node_Event_EndPlayReason                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_SmokeCandle_C::ExecuteUbergraph_GC_SmokeCandle(int32 EntryPoint, EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SmokeCandle_C", "ExecuteUbergraph_GC_SmokeCandle");

	Params::GC_SmokeCandle_C_ExecuteUbergraph_GC_SmokeCandle Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_SmokeCandle.GC_SmokeCandle_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ValeriaCharacter_C*           K2Node_DynamicCast_AsBP_Valeria_Character              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventActor_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AGC_SmokeCandle_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class ABP_ValeriaCharacter_C* K2Node_DynamicCast_AsBP_Valeria_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_AkEventActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SmokeCandle_C", "OnActive");

	Params::GC_SmokeCandle_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.K2Node_DynamicCast_AsBP_Valeria_Character = K2Node_DynamicCast_AsBP_Valeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AkEventActor_ReturnValue = CallFunc_AkEventActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GC_SmokeCandle.GC_SmokeCandle_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventActor_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AGC_SmokeCandle_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, int32 CallFunc_AkEventActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SmokeCandle_C", "OnRemove");

	Params::GC_SmokeCandle_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.CallFunc_AkEventActor_ReturnValue = CallFunc_AkEventActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GC_SmokeCandle.GC_SmokeCandle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGC_SmokeCandle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SmokeCandle_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GC_SmokeCandle.GC_SmokeCandle_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_SmokeCandle_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_SmokeCandle_C", "ReceiveEndPlay");

	Params::GC_SmokeCandle_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

}

