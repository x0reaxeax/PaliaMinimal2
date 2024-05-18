#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VoiceSet

#include "Basic.hpp"

#include "VoiceSet_classes.hpp"
#include "VoiceSet_parameters.hpp"


namespace SDK
{

// Function VoiceSet.VoiceSet_C.GetRandomVoiceEvent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAkAudioEvent*                    Value                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkAudioEvent*>            NonNullAudioEvents                                     (Edit, BlueprintVisible)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*                    CallFunc_Array_Random_OutItem                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Random_OutIndex                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkAudioEvent*>            CallFunc_Map_Values_Values                             (ReferenceParm)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*                    CallFunc_Array_Get_Item                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Add_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoiceSet_C::GetRandomVoiceEvent(class UAkAudioEvent** Value, const TArray<class UAkAudioEvent*>& NonNullAudioEvents, int32 Temp_int_Array_Index_Variable, class UAkAudioEvent* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UAkAudioEvent*>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, class UAkAudioEvent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceSet_C", "GetRandomVoiceEvent");

	Params::VoiceSet_C_GetRandomVoiceEvent Parms{};

	Parms.NonNullAudioEvents = std::move(NonNullAudioEvents);
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Values_Values = std::move(CallFunc_Map_Values_Values);
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_Map_Values_Values = std::move(Parms.CallFunc_Map_Values_Values);

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function VoiceSet.VoiceSet_C.GetVoiceEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_VoiceEffortEvent                      Effort                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*                    Value                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*                    CallFunc_Map_Find_Value                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Map_Find_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoiceSet_C::GetVoiceEvent(E_VoiceEffortEvent Effort, class UAkAudioEvent** Value, class UAkAudioEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VoiceSet_C", "GetVoiceEvent");

	Params::VoiceSet_C_GetVoiceEvent Parms{};

	Parms.Effort = Effort;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}

}
