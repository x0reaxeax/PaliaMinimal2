#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CollectionsWheel

#include "Basic.hpp"

#include "WBP_CollectionsWheel_classes.hpp"
#include "WBP_CollectionsWheel_parameters.hpp"


namespace SDK
{

// Function WBP_CollectionsWheel.WBP_CollectionsWheel_C.CheckWantsToSelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    WantsToSelect                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CollectionsWheel_C::CheckWantsToSelect(bool* WantsToSelect, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CollectionsWheel_C", "CheckWantsToSelect");

	Params::WBP_CollectionsWheel_C_CheckWantsToSelect Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WantsToSelect != nullptr)
		*WantsToSelect = Parms.WantsToSelect;
}


// Function WBP_CollectionsWheel.WBP_CollectionsWheel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CollectionsWheel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CollectionsWheel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CollectionsWheel.WBP_CollectionsWheel_C.ExecuteUbergraph_WBP_CollectionsWheel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue                K2Node_EnhancedInputActionEvent_ActionValue            (NoDestructor)
// float                                   K2Node_EnhancedInputActionEvent_ElapsedTime            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_EnhancedInputActionEvent_TriggeredTime          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     K2Node_EnhancedInputActionEvent_SourceAction           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     Temp_object_Variable                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Conv_InputActionValueToBool_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_0                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_1_0                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetConsoleVariableBoolValue_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CollectionsWheel_C::ExecuteUbergraph_WBP_CollectionsWheel(int32 EntryPoint, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, bool Temp_bool_Variable, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CollectionsWheel_C", "ExecuteUbergraph_WBP_CollectionsWheel");

	Params::WBP_CollectionsWheel_C_ExecuteUbergraph_WBP_CollectionsWheel Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue = std::move(K2Node_EnhancedInputActionEvent_ActionValue);
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime = K2Node_EnhancedInputActionEvent_ElapsedTime;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime = K2Node_EnhancedInputActionEvent_TriggeredTime;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction = K2Node_EnhancedInputActionEvent_SourceAction;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Conv_InputActionValueToBool_ReturnValue = CallFunc_Conv_InputActionValueToBool_ReturnValue;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_0 = Temp_real_Variable_0;
	Parms.Temp_real_Variable_1_0 = Temp_real_Variable_1_0;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetConsoleVariableBoolValue_ReturnValue = CallFunc_GetConsoleVariableBoolValue_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CollectionsWheel.WBP_CollectionsWheel_C.FinishSelecting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          CallFunc_GetActiveWidget_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_CollectionsWheel_C>K2Node_DynamicCast_AsBPI_Collections_Wheel             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CollectionsWheel_C::FinishSelecting(class UWidget* CallFunc_GetActiveWidget_ReturnValue, TScriptInterface<class IBPI_CollectionsWheel_C> K2Node_DynamicCast_AsBPI_Collections_Wheel, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CollectionsWheel_C", "FinishSelecting");

	Params::WBP_CollectionsWheel_C_FinishSelecting Parms{};

	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Collections_Wheel = K2Node_DynamicCast_AsBPI_Collections_Wheel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CollectionsWheel.WBP_CollectionsWheel_C.HandleCancelEmoteWheel
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CollectionsWheel_C::HandleCancelEmoteWheel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CollectionsWheel_C", "HandleCancelEmoteWheel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CollectionsWheel.WBP_CollectionsWheel_C.HandleRadialMenuSelect
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CollectionsWheel_C::HandleRadialMenuSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CollectionsWheel_C", "HandleRadialMenuSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CollectionsWheel.WBP_CollectionsWheel_C.IncrementWidgetSwitcher
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NextActiveIndex                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TotalNumWidgets                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          CallFunc_GetActiveWidget_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_CollectionsWheel_C>K2Node_DynamicCast_AsBPI_Collections_Wheel             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          CallFunc_GetActiveWidget_ReturnValue_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_CollectionsWheel_C>K2Node_DynamicCast_AsBPI_Collections_Wheel_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetNumWidgets_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_SelectInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetActiveWidgetIndex_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CollectionsWheel_C::IncrementWidgetSwitcher(int32 NextActiveIndex, int32 TotalNumWidgets, class UWidget* CallFunc_GetActiveWidget_ReturnValue, TScriptInterface<class IBPI_CollectionsWheel_C> K2Node_DynamicCast_AsBPI_Collections_Wheel, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetActiveWidget_ReturnValue_1, TScriptInterface<class IBPI_CollectionsWheel_C> K2Node_DynamicCast_AsBPI_Collections_Wheel_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetNumWidgets_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CollectionsWheel_C", "IncrementWidgetSwitcher");

	Params::WBP_CollectionsWheel_C_IncrementWidgetSwitcher Parms{};

	Parms.NextActiveIndex = NextActiveIndex;
	Parms.TotalNumWidgets = TotalNumWidgets;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Collections_Wheel = K2Node_DynamicCast_AsBPI_Collections_Wheel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActiveWidget_ReturnValue_1 = CallFunc_GetActiveWidget_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Collections_Wheel_1 = K2Node_DynamicCast_AsBPI_Collections_Wheel_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetNumWidgets_ReturnValue = CallFunc_GetNumWidgets_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CollectionsWheel.WBP_CollectionsWheel_C.InpActEvt_IA_IncrementCollectionsWheel_K2Node_EnhancedInputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CollectionsWheel_C::InpActEvt_IA_IncrementCollectionsWheel_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CollectionsWheel_C", "InpActEvt_IA_IncrementCollectionsWheel_K2Node_EnhancedInputActionEvent_0");

	Params::WBP_CollectionsWheel_C_InpActEvt_IA_IncrementCollectionsWheel_K2Node_EnhancedInputActionEvent_0 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CollectionsWheel.WBP_CollectionsWheel_C.OnCancelEmoteWheel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_CollectionsWheel_C::OnCancelEmoteWheel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CollectionsWheel_C", "OnCancelEmoteWheel__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CollectionsWheel.WBP_CollectionsWheel_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)
// struct FEventReply                      CallFunc_Handled_ReturnValue                           ()
// struct FKey                             CallFunc_PointerEvent_GetEffectingButton_ReturnValue   (HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_KeyKey_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_CollectionsWheel_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CollectionsWheel_C", "OnMouseButtonDown");

	Params::WBP_CollectionsWheel_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);
	Parms.CallFunc_Handled_ReturnValue = std::move(CallFunc_Handled_ReturnValue);
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = std::move(CallFunc_PointerEvent_GetEffectingButton_ReturnValue);
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_CollectionsWheel.WBP_CollectionsWheel_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)
// struct FEventReply                      CallFunc_Handled_ReturnValue                           ()

struct FEventReply UWBP_CollectionsWheel_C::OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CollectionsWheel_C", "OnMouseWheel");

	Params::WBP_CollectionsWheel_C_OnMouseWheel Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);
	Parms.CallFunc_Handled_ReturnValue = std::move(CallFunc_Handled_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_CollectionsWheel.WBP_CollectionsWheel_C.OnRadialMenuSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_CollectionsWheel_C::OnRadialMenuSelect__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CollectionsWheel_C", "OnRadialMenuSelect__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CollectionsWheel.WBP_CollectionsWheel_C.Start Selecting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainWidget_CM_C*             MainWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          CallFunc_GetActiveWidget_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_CollectionsWheel_C>K2Node_DynamicCast_AsBPI_Collections_Wheel             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CollectionsWheel_C::Start_Selecting(class UWBP_MainWidget_CM_C* MainWidget, class UWidget* CallFunc_GetActiveWidget_ReturnValue, TScriptInterface<class IBPI_CollectionsWheel_C> K2Node_DynamicCast_AsBPI_Collections_Wheel, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CollectionsWheel_C", "Start Selecting");

	Params::WBP_CollectionsWheel_C_Start_Selecting Parms{};

	Parms.MainWidget = MainWidget;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Collections_Wheel = K2Node_DynamicCast_AsBPI_Collections_Wheel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

}

