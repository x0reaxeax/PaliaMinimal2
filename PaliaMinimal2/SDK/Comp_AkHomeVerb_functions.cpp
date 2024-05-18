#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Comp_AkHomeVerb

#include "Basic.hpp"

#include "Comp_AkHomeVerb_classes.hpp"
#include "Comp_AkHomeVerb_parameters.hpp"


namespace SDK
{

// Function Comp_AkHomeVerb.Comp_AkHomeVerb_C.AudioDebugAbsorption
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    On                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_AkHomeVerb_C::AudioDebugAbsorption(bool On)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Comp_AkHomeVerb_C", "AudioDebugAbsorption");

	Params::Comp_AkHomeVerb_C_AudioDebugAbsorption Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Comp_AkHomeVerb.Comp_AkHomeVerb_C.ExecuteUbergraph_Comp_AkHomeVerb
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_GetDisplayName_ReturnValue                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue                     (ZeroConstructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_CustomEvent_On                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_Conv_DoubleToString_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue_1                   (ZeroConstructor, HasGetValueTypeHash)
// class USceneComponent*                  CallFunc_GetAttachParent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_Event_DeltaSeconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetComponentLocation_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UGatherableComponent*>     CallFunc_Set_ToArray_Result                            (ReferenceParm, ContainsInstancedReference)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGatherableComponent*             CallFunc_Array_Get_Item                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_GetDisplayName_ReturnValue_1                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Replace_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Conv_DoubleToString_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue_2                   (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetOwner_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue_3                   (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Conv_DoubleToString_InDouble_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_AkHomeVerb_C::ExecuteUbergraph_Comp_AkHomeVerb(int32 EntryPoint, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_CustomEvent_On, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class USceneComponent* CallFunc_GetAttachParent_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, TArray<class UGatherableComponent*>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, class UGatherableComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Comp_AkHomeVerb_C", "ExecuteUbergraph_Comp_AkHomeVerb");

	Params::Comp_AkHomeVerb_C_ExecuteUbergraph_Comp_AkHomeVerb Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDisplayName_ReturnValue = std::move(CallFunc_GetDisplayName_ReturnValue);
	Parms.CallFunc_Concat_StrStr_ReturnValue = std::move(CallFunc_Concat_StrStr_ReturnValue);
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_On = K2Node_CustomEvent_On;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = std::move(CallFunc_Conv_DoubleToString_ReturnValue);
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = std::move(CallFunc_Concat_StrStr_ReturnValue_1);
	Parms.CallFunc_GetAttachParent_ReturnValue = CallFunc_GetAttachParent_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = std::move(CallFunc_K2_GetComponentLocation_ReturnValue);
	Parms.CallFunc_Set_ToArray_Result = std::move(CallFunc_Set_ToArray_Result);
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = std::move(CallFunc_GetDisplayName_ReturnValue_1);
	Parms.CallFunc_Replace_ReturnValue = std::move(CallFunc_Replace_ReturnValue);
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = std::move(CallFunc_Conv_DoubleToString_ReturnValue_1);
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = std::move(CallFunc_Concat_StrStr_ReturnValue_2);
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = std::move(CallFunc_Concat_StrStr_ReturnValue_3);
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = std::move(CallFunc_K2_GetActorLocation_ReturnValue);
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_Set_ToArray_Result = std::move(Parms.CallFunc_Set_ToArray_Result);
}


// Function Comp_AkHomeVerb.Comp_AkHomeVerb_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_AkHomeVerb_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Comp_AkHomeVerb_C", "ReceiveTick");

	Params::Comp_AkHomeVerb_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

