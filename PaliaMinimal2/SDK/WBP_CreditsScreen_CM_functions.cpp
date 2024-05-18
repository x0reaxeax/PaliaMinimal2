#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CreditsScreen_CM

#include "Basic.hpp"

#include "WBP_CreditsScreen_CM_classes.hpp"
#include "WBP_CreditsScreen_CM_parameters.hpp"


namespace SDK
{

// Function WBP_CreditsScreen_CM.WBP_CreditsScreen_CM_C.BndEvt__WBP_CreditsScreen_CM_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CreditsScreen_CM_C::BndEvt__WBP_CreditsScreen_CM_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CreditsScreen_CM_C", "BndEvt__WBP_CreditsScreen_CM_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_CreditsScreen_CM_C_BndEvt__WBP_CreditsScreen_CM_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CreditsScreen_CM.WBP_CreditsScreen_CM_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CreditsScreen_CM_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CreditsScreen_CM_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CreditsScreen_CM.WBP_CreditsScreen_CM_C.ExecuteUbergraph_WBP_CreditsScreen_CM
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*                K2Node_ComponentBoundEvent_Button                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                        K2Node_Event_MyGeometry                                (IsPlainOldData, NoDestructor)
// float                                   K2Node_Event_InDeltaTime                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Multiply_DoubleDouble_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Add_DoubleDouble_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_GetProjectContentDirectory_ReturnValue        (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue                     (ZeroConstructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventGlobal_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_LoadFileToText_OutputText                     ()
// double                                  CallFunc_Multiply_DoubleDouble_A_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CreditsScreen_CM_C::ExecuteUbergraph_WBP_CreditsScreen_CM(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const class FString& CallFunc_GetProjectContentDirectory_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, class FText CallFunc_LoadFileToText_OutputText, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CreditsScreen_CM_C", "ExecuteUbergraph_WBP_CreditsScreen_CM");

	Params::WBP_CreditsScreen_CM_C_ExecuteUbergraph_WBP_CreditsScreen_CM Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_MyGeometry = std::move(K2Node_Event_MyGeometry);
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetProjectContentDirectory_ReturnValue = std::move(CallFunc_GetProjectContentDirectory_ReturnValue);
	Parms.CallFunc_Concat_StrStr_ReturnValue = std::move(CallFunc_Concat_StrStr_ReturnValue);
	Parms.CallFunc_AkEventGlobal_ReturnValue = CallFunc_AkEventGlobal_ReturnValue;
	Parms.CallFunc_LoadFileToText_OutputText = CallFunc_LoadFileToText_OutputText;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast = CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CreditsScreen_CM.WBP_CreditsScreen_CM_C.OnThankYouClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_CreditsScreen_CM_C::OnThankYouClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CreditsScreen_CM_C", "OnThankYouClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CreditsScreen_CM.WBP_CreditsScreen_CM_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CreditsScreen_CM_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CreditsScreen_CM_C", "Tick");

	Params::WBP_CreditsScreen_CM_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

