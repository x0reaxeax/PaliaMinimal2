#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TIM_CreateChannel_Button

#include "Basic.hpp"

#include "WBP_TIM_CreateChannel_Button_classes.hpp"
#include "WBP_TIM_CreateChannel_Button_parameters.hpp"


namespace SDK
{

// Function WBP_TIM_CreateChannel_Button.WBP_TIM_CreateChannel_Button_C.BndEvt__WBP_TIM_CreateChannel_Button_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TIM_CreateChannel_Button_C::BndEvt__WBP_TIM_CreateChannel_Button_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TIM_CreateChannel_Button_C", "BndEvt__WBP_TIM_CreateChannel_Button_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_TIM_CreateChannel_Button_C_BndEvt__WBP_TIM_CreateChannel_Button_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TIM_CreateChannel_Button.WBP_TIM_CreateChannel_Button_C.Disable Button
// (BlueprintCallable, BlueprintEvent)

void UWBP_TIM_CreateChannel_Button_C::Disable_Button()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TIM_CreateChannel_Button_C", "Disable Button");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TIM_CreateChannel_Button.WBP_TIM_CreateChannel_Button_C.Enable Button
// (BlueprintCallable, BlueprintEvent)

void UWBP_TIM_CreateChannel_Button_C::Enable_Button()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TIM_CreateChannel_Button_C", "Enable Button");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TIM_CreateChannel_Button.WBP_TIM_CreateChannel_Button_C.ExecuteUbergraph_WBP_TIM_CreateChannel_Button
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*                K2Node_ComponentBoundEvent_Button                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_TIM_CreateChannel_ModalDialog_C*CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class US6UI_UIManagerWidgetBase*        CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventGlobal_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TIM_CreateChannel_Button_C::ExecuteUbergraph_WBP_TIM_CreateChannel_Button(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UWBP_TIM_CreateChannel_ModalDialog_C* CallFunc_Create_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TIM_CreateChannel_Button_C", "ExecuteUbergraph_WBP_TIM_CreateChannel_Button");

	Params::WBP_TIM_CreateChannel_Button_C_ExecuteUbergraph_WBP_TIM_CreateChannel_Button Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_AkEventGlobal_ReturnValue = CallFunc_AkEventGlobal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}
