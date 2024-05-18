#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BasicTooltip

#include "Basic.hpp"

#include "WBP_BasicTooltip_classes.hpp"
#include "WBP_BasicTooltip_parameters.hpp"


namespace SDK
{

// Function WBP_BasicTooltip.WBP_BasicTooltip_C.CenterBodyText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBoxSlot*                 CallFunc_SlotAsVerticalBoxSlot_ReturnValue             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_BasicTooltip_C::CenterBodyText(class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BasicTooltip_C", "CenterBodyText");

	Params::WBP_BasicTooltip_C_CenterBodyText Parms{};

	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue = CallFunc_SlotAsVerticalBoxSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BasicTooltip.WBP_BasicTooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_BasicTooltip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BasicTooltip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BasicTooltip.WBP_BasicTooltip_C.ExecuteUbergraph_WBP_BasicTooltip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             K2Node_Event_Text                                      (ConstParm)
// class UCommonInputSubsystem*            CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationForward_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// ECommonInputType                        CallFunc_GetCurrentInputType_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_ByteByte_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BasicTooltip_C::ExecuteUbergraph_WBP_BasicTooltip(int32 EntryPoint, class FText K2Node_Event_Text, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BasicTooltip_C", "ExecuteUbergraph_WBP_BasicTooltip");

	Params::WBP_BasicTooltip_C_ExecuteUbergraph_WBP_BasicTooltip Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Text = K2Node_Event_Text;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BasicTooltip.WBP_BasicTooltip_C.HandleOnClosed
// (Event, Public, BlueprintEvent)

void UWBP_BasicTooltip_C::HandleOnClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BasicTooltip_C", "HandleOnClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BasicTooltip.WBP_BasicTooltip_C.HandleOnOpening
// (Event, Public, BlueprintEvent)

void UWBP_BasicTooltip_C::HandleOnOpening()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BasicTooltip_C", "HandleOnOpening");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BasicTooltip.WBP_BasicTooltip_C.PlayTooltipAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_BasicTooltip_C::PlayTooltipAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BasicTooltip_C", "PlayTooltipAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BasicTooltip.WBP_BasicTooltip_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBoxSlot*                 CallFunc_SlotAsVerticalBoxSlot_ReturnValue             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_BasicTooltip_C::Reset(class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BasicTooltip_C", "Reset");

	Params::WBP_BasicTooltip_C_Reset Parms{};

	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue = CallFunc_SlotAsVerticalBoxSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BasicTooltip.WBP_BasicTooltip_C.UpdateFullTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                       Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             Header                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_BasicTooltip_C::UpdateFullTooltip(class FText Text, class UTexture2D* Image, class FText Header)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BasicTooltip_C", "UpdateFullTooltip");

	Params::WBP_BasicTooltip_C_UpdateFullTooltip Parms{};

	Parms.Text = Text;
	Parms.Image = Image;
	Parms.Header = Header;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BasicTooltip.WBP_BasicTooltip_C.UpdateHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Header                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_BasicTooltip_C::UpdateHeader(class FText Header)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BasicTooltip_C", "UpdateHeader");

	Params::WBP_BasicTooltip_C_UpdateHeader Parms{};

	Parms.Header = Header;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BasicTooltip.WBP_BasicTooltip_C.UpdateImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_BasicTooltip_C::UpdateImage(class UTexture2D* Image)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BasicTooltip_C", "UpdateImage");

	Params::WBP_BasicTooltip_C_UpdateImage Parms{};

	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BasicTooltip.WBP_BasicTooltip_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_ToolTipText                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_BasicTooltip_C::UpdateText(class FText Param_ToolTipText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BasicTooltip_C", "UpdateText");

	Params::WBP_BasicTooltip_C_UpdateText Parms{};

	Parms.Param_ToolTipText = Param_ToolTipText;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BasicTooltip.WBP_BasicTooltip_C.UpdateToolTipText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_BasicTooltip_C::UpdateToolTipText(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BasicTooltip_C", "UpdateToolTipText");

	Params::WBP_BasicTooltip_C_UpdateToolTipText Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);
}

}
