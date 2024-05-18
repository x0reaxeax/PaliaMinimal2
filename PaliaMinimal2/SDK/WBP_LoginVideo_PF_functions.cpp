#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoginVideo_PF

#include "Basic.hpp"

#include "WBP_LoginVideo_PF_classes.hpp"
#include "WBP_LoginVideo_PF_parameters.hpp"


namespace SDK
{

// Function WBP_LoginVideo_PF.WBP_LoginVideo_PF_C.ActiveWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_Play_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoginVideo_PF_C::ActiveWidget(bool CallFunc_Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoginVideo_PF_C", "ActiveWidget");

	Params::WBP_LoginVideo_PF_C_ActiveWidget Parms{};

	Parms.CallFunc_Play_ReturnValue = CallFunc_Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LoginVideo_PF.WBP_LoginVideo_PF_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_LoginVideo_PF_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoginVideo_PF_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LoginVideo_PF.WBP_LoginVideo_PF_C.DeactiveWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_LoginVideo_PF_C::DeactiveWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoginVideo_PF_C", "DeactiveWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LoginVideo_PF.WBP_LoginVideo_PF_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_LoginVideo_PF_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoginVideo_PF_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LoginVideo_PF.WBP_LoginVideo_PF_C.ExecuteUbergraph_WBP_LoginVideo_PF
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                     CallFunc_K2_SetTimerDelegate_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// struct FGeometry                        K2Node_Event_MyGeometry                                (IsPlainOldData, NoDestructor)
// float                                   K2Node_Event_InDeltaTime                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_BoolBool_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoginVideo_PF_C::ExecuteUbergraph_WBP_LoginVideo_PF(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoginVideo_PF_C", "ExecuteUbergraph_WBP_LoginVideo_PF");

	Params::WBP_LoginVideo_PF_C_ExecuteUbergraph_WBP_LoginVideo_PF Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = std::move(CallFunc_K2_SetTimerDelegate_ReturnValue);
	Parms.K2Node_Event_MyGeometry = std::move(K2Node_Event_MyGeometry);
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LoginVideo_PF.WBP_LoginVideo_PF_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoginVideo_PF_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoginVideo_PF_C", "Tick");

	Params::WBP_LoginVideo_PF_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LoginVideo_PF.WBP_LoginVideo_PF_C.TickWidget
// (BlueprintCallable, BlueprintEvent)

void UWBP_LoginVideo_PF_C::TickWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoginVideo_PF_C", "TickWidget");

	UObject::ProcessEvent(Func, nullptr);
}

}
