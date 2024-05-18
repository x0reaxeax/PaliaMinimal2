#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GardenPlate

#include "Basic.hpp"

#include "WBP_GardenPlate_classes.hpp"
#include "WBP_GardenPlate_parameters.hpp"


namespace SDK
{

// Function WBP_GardenPlate.WBP_GardenPlate_C.EquippedInUse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipmentComponent*              EquipmentComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsUsingEquipped                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GardenPlate_C::EquippedInUse(class UEquipmentComponent* EquipmentComponent, bool bIsUsingEquipped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GardenPlate_C", "EquippedInUse");

	Params::WBP_GardenPlate_C_EquippedInUse Parms{};

	Parms.EquipmentComponent = EquipmentComponent;
	Parms.bIsUsingEquipped = bIsUsingEquipped;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GardenPlate.WBP_GardenPlate_C.ExecuteUbergraph_WBP_GardenPlate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_CustomEvent_shouldShow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_GetText_ReturnValue                           ()
// bool                                    CallFunc_TextIsEmpty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventGlobal_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class US6UI_UIManagerWidgetBase* UIManagerWidgetBase)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class US6UI_UIManagerWidgetBase*        K2Node_CustomEvent_UIManagerWidgetBase                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_GetValeriaPlayerController_OutResult          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaPlayerController*         CallFunc_GetValeriaPlayerController_ReturnValue        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEquipmentComponent*              CallFunc_GetEquipment_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class US6UI_UIManagerWidgetBase*        CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                     CallFunc_K2_SetTimerDelegate_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(bool ShouldShow)>        K2Node_CreateDelegate_OutputDelegate_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UEquipmentComponent* EquipmentComponent, bool bIsUsingEquipped)>K2Node_CreateDelegate_OutputDelegate_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEquipmentComponent*              K2Node_CustomEvent_EquipmentComponent                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_CustomEvent_bIsUsingEquipped                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventGlobal_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GardenPlate_C::ExecuteUbergraph_WBP_GardenPlate(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_CustomEvent_shouldShow, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, TDelegate<void(class US6UI_UIManagerWidgetBase* UIManagerWidgetBase)> K2Node_CreateDelegate_OutputDelegate, class US6UI_UIManagerWidgetBase* K2Node_CustomEvent_UIManagerWidgetBase, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, ESlateVisibility Temp_byte_Variable, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UEquipmentComponent* CallFunc_GetEquipment_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, ESlateVisibility K2Node_Select_Default, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, ESlateVisibility Temp_byte_Variable_2, TDelegate<void(bool ShouldShow)> K2Node_CreateDelegate_OutputDelegate_2, ESlateVisibility Temp_byte_Variable_3, TDelegate<void(class UEquipmentComponent* EquipmentComponent, bool bIsUsingEquipped)> K2Node_CreateDelegate_OutputDelegate_3, ESlateVisibility K2Node_Select_Default_1, class UEquipmentComponent* K2Node_CustomEvent_EquipmentComponent, bool K2Node_CustomEvent_bIsUsingEquipped, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_AkEventGlobal_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GardenPlate_C", "ExecuteUbergraph_WBP_GardenPlate");

	Params::WBP_GardenPlate_C_ExecuteUbergraph_WBP_GardenPlate Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_shouldShow = K2Node_CustomEvent_shouldShow;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_AkEventGlobal_ReturnValue = CallFunc_AkEventGlobal_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_UIManagerWidgetBase = K2Node_CustomEvent_UIManagerWidgetBase;
	Parms.CallFunc_GetValeriaPlayerController_OutResult = CallFunc_GetValeriaPlayerController_OutResult;
	Parms.CallFunc_GetValeriaPlayerController_ReturnValue = CallFunc_GetValeriaPlayerController_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue = CallFunc_GetValeriaCharacter_ReturnValue;
	Parms.CallFunc_GetEquipment_ReturnValue = CallFunc_GetEquipment_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = std::move(CallFunc_K2_SetTimerDelegate_ReturnValue);
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CustomEvent_EquipmentComponent = K2Node_CustomEvent_EquipmentComponent;
	Parms.K2Node_CustomEvent_bIsUsingEquipped = K2Node_CustomEvent_bIsUsingEquipped;
	Parms.CallFunc_GetValeriaCharacter_OutResult = CallFunc_GetValeriaCharacter_OutResult;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue_1 = CallFunc_GetValeriaCharacter_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_AkEventGlobal_ReturnValue_1 = CallFunc_AkEventGlobal_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GardenPlate.WBP_GardenPlate_C.HideInspectPlate
// (BlueprintCallable, BlueprintEvent)

void UWBP_GardenPlate_C::HideInspectPlate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GardenPlate_C", "HideInspectPlate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GardenPlate.WBP_GardenPlate_C.InputModeRefreshed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class US6UI_UIManagerWidgetBase*        UIManagerWidgetBase                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GardenPlate_C::InputModeRefreshed(class US6UI_UIManagerWidgetBase* UIManagerWidgetBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GardenPlate_C", "InputModeRefreshed");

	Params::WBP_GardenPlate_C_InputModeRefreshed Parms{};

	Parms.UIManagerWidgetBase = UIManagerWidgetBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GardenPlate.WBP_GardenPlate_C.OnGardenInspectToggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldShow                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GardenPlate_C::OnGardenInspectToggle(bool ShouldShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GardenPlate_C", "OnGardenInspectToggle");

	Params::WBP_GardenPlate_C_OnGardenInspectToggle Parms{};

	Parms.ShouldShow = ShouldShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GardenPlate.WBP_GardenPlate_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GardenPlate_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GardenPlate_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GardenPlate.WBP_GardenPlate_C.Set Water Droplet Progress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldBeVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsVisible                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_DoubleDouble_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GardenPlate_C::Set_Water_Droplet_Progress(double Progress, bool ShouldBeVisible, bool* Param_IsVisible, ESlateVisibility Temp_byte_Variable, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GardenPlate_C", "Set Water Droplet Progress");

	Params::WBP_GardenPlate_C_Set_Water_Droplet_Progress Parms{};

	Parms.Progress = Progress;
	Parms.ShouldBeVisible = ShouldBeVisible;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsVisible != nullptr)
		*Param_IsVisible = Parms.Param_IsVisible;
}


// Function WBP_GardenPlate.WBP_GardenPlate_C.SetGardenBuffInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGardenTileBuffInfo              GardenBuff                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GardenPlate_C::SetGardenBuffInfo(const struct FGardenTileBuffInfo& GardenBuff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GardenPlate_C", "SetGardenBuffInfo");

	Params::WBP_GardenPlate_C_SetGardenBuffInfo Parms{};

	Parms.GardenBuff = std::move(GardenBuff);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GardenPlate.WBP_GardenPlate_C.ShowInspectPlate
// (BlueprintCallable, BlueprintEvent)

void UWBP_GardenPlate_C::ShowInspectPlate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GardenPlate_C", "ShowInspectPlate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GardenPlate.WBP_GardenPlate_C.WaitForValeriaCharacter
// (BlueprintCallable, BlueprintEvent)

void UWBP_GardenPlate_C::WaitForValeriaCharacter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GardenPlate_C", "WaitForValeriaCharacter");

	UObject::ProcessEvent(Func, nullptr);
}

}
