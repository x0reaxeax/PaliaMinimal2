#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ComboBox_Menu_Option_02_CM

#include "Basic.hpp"

#include "WBP_ComboBox_Menu_Option_02_CM_classes.hpp"
#include "WBP_ComboBox_Menu_Option_02_CM_parameters.hpp"


namespace SDK
{

// Function WBP_ComboBox_Menu_Option_02_CM.WBP_ComboBox_Menu_Option_02_CM_C.BndEvt__WBP_ComboBox_Menu_Option_02_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ComboBox_Menu_Option_02_CM_C::BndEvt__WBP_ComboBox_Menu_Option_02_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_Menu_Option_02_CM_C", "BndEvt__WBP_ComboBox_Menu_Option_02_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_ComboBox_Menu_Option_02_CM_C_BndEvt__WBP_ComboBox_Menu_Option_02_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ComboBox_Menu_Option_02_CM.WBP_ComboBox_Menu_Option_02_CM_C.BndEvt__WBP_ComboBox_Menu_Option_02_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ComboBox_Menu_Option_02_CM_C::BndEvt__WBP_ComboBox_Menu_Option_02_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_Menu_Option_02_CM_C", "BndEvt__WBP_ComboBox_Menu_Option_02_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_ComboBox_Menu_Option_02_CM_C_BndEvt__WBP_ComboBox_Menu_Option_02_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ComboBox_Menu_Option_02_CM.WBP_ComboBox_Menu_Option_02_CM_C.ExecuteUbergraph_WBP_ComboBox_Menu_Option_02_CM
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*                K2Node_ComponentBoundEvent_Button                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventGlobal_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventGlobal_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*                K2Node_ComponentBoundEvent_Button_1                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_GetText_ReturnValue                           ()

void UWBP_ComboBox_Menu_Option_02_CM_C::ExecuteUbergraph_WBP_ComboBox_Menu_Option_02_CM(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, int32 CallFunc_AkEventGlobal_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class FText CallFunc_GetText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_Menu_Option_02_CM_C", "ExecuteUbergraph_WBP_ComboBox_Menu_Option_02_CM");

	Params::WBP_ComboBox_Menu_Option_02_CM_C_ExecuteUbergraph_WBP_ComboBox_Menu_Option_02_CM Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_AkEventGlobal_ReturnValue = CallFunc_AkEventGlobal_ReturnValue;
	Parms.CallFunc_AkEventGlobal_ReturnValue_1 = CallFunc_AkEventGlobal_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ComboBox_Menu_Option_02_CM.WBP_ComboBox_Menu_Option_02_CM_C.OnOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ComboBox_Menu_Option_02_CM_C::OnOptionSelected__DelegateSignature(int32 Param_Index, class FText Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_Menu_Option_02_CM_C", "OnOptionSelected__DelegateSignature");

	Params::WBP_ComboBox_Menu_Option_02_CM_C_OnOptionSelected__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ComboBox_Menu_Option_02_CM.WBP_ComboBox_Menu_Option_02_CM_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsSelected                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVALUI_TextBlockStyle*            K2Node_Select_Default_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ComboBox_Menu_Option_02_CM_C::SetSelected(bool Param_IsSelected, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default, class UVALUI_TextBlockStyle* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_Menu_Option_02_CM_C", "SetSelected");

	Params::WBP_ComboBox_Menu_Option_02_CM_C_SetSelected Parms{};

	Parms.Param_IsSelected = Param_IsSelected;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ComboBox_Menu_Option_02_CM.WBP_ComboBox_Menu_Option_02_CM_C.SetTextBlockStyles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVALUI_TextBlockStyle*            Param_UnselectedStyle                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVALUI_TextBlockStyle*            Param_SelectedStyle                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVALUI_TextBlockStyle*            K2Node_Select_Default                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ComboBox_Menu_Option_02_CM_C::SetTextBlockStyles(class UVALUI_TextBlockStyle* Param_UnselectedStyle, class UVALUI_TextBlockStyle* Param_SelectedStyle, bool Temp_bool_Variable, class UVALUI_TextBlockStyle* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ComboBox_Menu_Option_02_CM_C", "SetTextBlockStyles");

	Params::WBP_ComboBox_Menu_Option_02_CM_C_SetTextBlockStyles Parms{};

	Parms.Param_UnselectedStyle = Param_UnselectedStyle;
	Parms.Param_SelectedStyle = Param_SelectedStyle;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}

}
