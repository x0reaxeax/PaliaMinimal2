#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FTUEPopin_CM

#include "Basic.hpp"

#include "WBP_FTUEPopin_CM_classes.hpp"
#include "WBP_FTUEPopin_CM_parameters.hpp"


namespace SDK
{

// Function WBP_FTUEPopin_CM.WBP_FTUEPopin_CM_C.BndEvt__WBP_FTUEPopin_CM_VALUI_Button_Styled_83_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_FTUEPopin_CM_C::BndEvt__WBP_FTUEPopin_CM_VALUI_Button_Styled_83_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FTUEPopin_CM_C", "BndEvt__WBP_FTUEPopin_CM_VALUI_Button_Styled_83_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_FTUEPopin_CM_C_BndEvt__WBP_FTUEPopin_CM_VALUI_Button_Styled_83_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FTUEPopin_CM.WBP_FTUEPopin_CM_C.ExecuteUbergraph_WBP_FTUEPopin_CM
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*                K2Node_ComponentBoundEvent_Button                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_FTUEPopin_CM_C::ExecuteUbergraph_WBP_FTUEPopin_CM(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FTUEPopin_CM_C", "ExecuteUbergraph_WBP_FTUEPopin_CM");

	Params::WBP_FTUEPopin_CM_C_ExecuteUbergraph_WBP_FTUEPopin_CM Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FTUEPopin_CM.WBP_FTUEPopin_CM_C.OnTutorialClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_FTUEPopin_CM_C::OnTutorialClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FTUEPopin_CM_C", "OnTutorialClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FTUEPopin_CM.WBP_FTUEPopin_CM_C.SetRichTextVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     Param_InputKeyReminderFTUEPopin                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                             ItemToFind                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Find_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_IntInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FTUEPopin_CM_C::SetRichTextVisibility(TArray<class FName>& Param_InputKeyReminderFTUEPopin, class FName& ItemToFind, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FTUEPopin_CM_C", "SetRichTextVisibility");

	Params::WBP_FTUEPopin_CM_C_SetRichTextVisibility Parms{};

	Parms.Param_InputKeyReminderFTUEPopin = std::move(Param_InputKeyReminderFTUEPopin);
	Parms.ItemToFind = ItemToFind;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FTUEPopin_CM.WBP_FTUEPopin_CM_C.SetSlotAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InAlignment                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*                 CallFunc_SlotAsCanvasSlot_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_FTUEPopin_CM_C::SetSlotAlignment(class UWidget* Widget, const struct FVector2D& InAlignment, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FTUEPopin_CM_C", "SetSlotAlignment");

	Params::WBP_FTUEPopin_CM_C_SetSlotAlignment Parms{};

	Parms.Widget = Widget;
	Parms.InAlignment = std::move(InAlignment);
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FTUEPopin_CM.WBP_FTUEPopin_CM_C.SetSlotOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FMargin                          InOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*                 CallFunc_SlotAsCanvasSlot_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_FTUEPopin_CM_C::SetSlotOffset(class UWidget* Widget, const struct FMargin& InOffset, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FTUEPopin_CM_C", "SetSlotOffset");

	Params::WBP_FTUEPopin_CM_C_SetSlotOffset Parms{};

	Parms.Widget = Widget;
	Parms.InOffset = std::move(InOffset);
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FTUEPopin_CM.WBP_FTUEPopin_CM_C.SetSlotPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*                 CallFunc_SlotAsCanvasSlot_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_FTUEPopin_CM_C::SetSlotPosition(class UWidget* Widget, const struct FVector2D& InPosition, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FTUEPopin_CM_C", "SetSlotPosition");

	Params::WBP_FTUEPopin_CM_C_SetSlotPosition Parms{};

	Parms.Widget = Widget;
	Parms.InPosition = std::move(InPosition);
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FTUEPopin_CM.WBP_FTUEPopin_CM_C.SetSpecificFTUEPopinSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox*                         FTUESizeBox                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBorder*                          FTUE_BorderSize                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UImage*                           FTUE_Image                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVALUI_Border_Styled*             FTUE_BorderStyled                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FMargin                          K2Node_MakeStruct_Margin                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                          K2Node_MakeStruct_Margin_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                          K2Node_MakeStruct_Margin_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                          K2Node_MakeStruct_Margin_3                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FTUEPopin_CM_C::SetSpecificFTUEPopinSlot(class USizeBox* FTUESizeBox, class UBorder* FTUE_BorderSize, class UImage* FTUE_Image, class UVALUI_Border_Styled* FTUE_BorderStyled, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FMargin& K2Node_MakeStruct_Margin_2, const struct FMargin& K2Node_MakeStruct_Margin_3)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FTUEPopin_CM_C", "SetSpecificFTUEPopinSlot");

	Params::WBP_FTUEPopin_CM_C_SetSpecificFTUEPopinSlot Parms{};

	Parms.FTUESizeBox = FTUESizeBox;
	Parms.FTUE_BorderSize = FTUE_BorderSize;
	Parms.FTUE_Image = FTUE_Image;
	Parms.FTUE_BorderStyled = FTUE_BorderStyled;
	Parms.K2Node_MakeStruct_Margin = std::move(K2Node_MakeStruct_Margin);
	Parms.K2Node_MakeStruct_Margin_1 = std::move(K2Node_MakeStruct_Margin_1);
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_Margin_2 = std::move(K2Node_MakeStruct_Margin_2);
	Parms.K2Node_MakeStruct_Margin_3 = std::move(K2Node_MakeStruct_Margin_3);

	UObject::ProcessEvent(Func, &Parms);
}

}

