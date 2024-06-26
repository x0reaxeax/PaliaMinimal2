#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Inventory_Store_CM

#include "Basic.hpp"

#include "WBP_Inventory_Store_CM_classes.hpp"
#include "WBP_Inventory_Store_CM_parameters.hpp"


namespace SDK
{

// Function WBP_Inventory_Store_CM.WBP_Inventory_Store_CM_C.BndEvt__WBP_Inventory_Store_CM_WBP_Inventory_K2Node_ComponentBoundEvent_0_OnInventorySlotFocused__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Store_CM_C::BndEvt__WBP_Inventory_Store_CM_WBP_Inventory_K2Node_ComponentBoundEvent_0_OnInventorySlotFocused__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Inventory_Store_CM_C", "BndEvt__WBP_Inventory_Store_CM_WBP_Inventory_K2Node_ComponentBoundEvent_0_OnInventorySlotFocused__DelegateSignature");

	Params::WBP_Inventory_Store_CM_C_BndEvt__WBP_Inventory_Store_CM_WBP_Inventory_K2Node_ComponentBoundEvent_0_OnInventorySlotFocused__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Inventory_Store_CM.WBP_Inventory_Store_CM_C.BndEvt__WBP_Inventory_Store_CM_WBP_Inventory_K2Node_ComponentBoundEvent_1_OnSlotLeftClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_Inventory_CM_C*              Inventory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_InventoryBag_CM_C*           Bag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_InventorySlot_CM_C*          Param_Slot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Store_CM_C::BndEvt__WBP_Inventory_Store_CM_WBP_Inventory_K2Node_ComponentBoundEvent_1_OnSlotLeftClicked__DelegateSignature(class UWBP_Inventory_CM_C* Inventory, class UWBP_InventoryBag_CM_C* Bag, class UWBP_InventorySlot_CM_C* Param_Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Inventory_Store_CM_C", "BndEvt__WBP_Inventory_Store_CM_WBP_Inventory_K2Node_ComponentBoundEvent_1_OnSlotLeftClicked__DelegateSignature");

	Params::WBP_Inventory_Store_CM_C_BndEvt__WBP_Inventory_Store_CM_WBP_Inventory_K2Node_ComponentBoundEvent_1_OnSlotLeftClicked__DelegateSignature Parms{};

	Parms.Inventory = Inventory;
	Parms.Bag = Bag;
	Parms.Param_Slot = Param_Slot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Inventory_Store_CM.WBP_Inventory_Store_CM_C.ChangeCurrency
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurrencyConfig*                  Currency                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_GetTooltipForCurrency_ReturnValue             ()

void UWBP_Inventory_Store_CM_C::ChangeCurrency(class UCurrencyConfig* Currency, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetTooltipForCurrency_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Inventory_Store_CM_C", "ChangeCurrency");

	Params::WBP_Inventory_Store_CM_C_ChangeCurrency Parms{};

	Parms.Currency = Currency;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTooltipForCurrency_ReturnValue = CallFunc_GetTooltipForCurrency_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Inventory_Store_CM.WBP_Inventory_Store_CM_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Inventory_Store_CM_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Inventory_Store_CM_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Inventory_Store_CM.WBP_Inventory_Store_CM_C.ExecuteUbergraph_WBP_Inventory_Store_CM
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVALUI_TextBlockStyle*            Temp_object_Variable                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVALUI_TextBlockStyle*            Temp_object_Variable_1                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurrencyConfig*                  K2Node_CustomEvent_Config                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   K2Node_CustomEvent_Delta                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   K2Node_CustomEvent_NewValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ObjectObject_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerInventoryComponent*        CallFunc_GetInventory_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UVitalsComponent* Vitals)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_BasicTooltip_C*              CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVitalsComponent*                 K2Node_CustomEvent_Vitals                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetVitalMax_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetVital_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetVital_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_IntToText_ReturnValue                    ()
// bool                                    CallFunc_GreaterEqual_IntInt_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVALUI_TextBlockStyle*            K2Node_Select_Default                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_IntToText_ReturnValue_1                  ()
// class FText                             CallFunc_GetTooltipForVital_ReturnValue                ()
// class FText                             CallFunc_GetTooltipForVital_ReturnValue_1              ()
// class UWBP_Inventory_CM_C*              K2Node_ComponentBoundEvent_Inventory                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_InventoryBag_CM_C*           K2Node_ComponentBoundEvent_Bag                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_InventorySlot_CM_C*          K2Node_ComponentBoundEvent_Slot                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          K2Node_ComponentBoundEvent_Widget                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsConsole_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                     CallFunc_SlotAsOverlaySlot_ReturnValue                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UCurrencyConfig* Config, int32 Delta, int32 NewValue)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USizeBoxSlot*                     CallFunc_SlotAsSizeBoxSlot_ReturnValue                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_BasicTooltip_C*              CallFunc_Create_ReturnValue_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Store_CM_C::ExecuteUbergraph_WBP_Inventory_Store_CM(int32 EntryPoint, bool Temp_bool_Variable, class UVALUI_TextBlockStyle* Temp_object_Variable, class UVALUI_TextBlockStyle* Temp_object_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class UCurrencyConfig* K2Node_CustomEvent_Config, int32 K2Node_CustomEvent_Delta, int32 K2Node_CustomEvent_NewValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TDelegate<void(class UVitalsComponent* Vitals)> K2Node_CreateDelegate_OutputDelegate, class UWBP_BasicTooltip_C* CallFunc_Create_ReturnValue, class UVitalsComponent* K2Node_CustomEvent_Vitals, int32 CallFunc_GetVitalMax_ReturnValue, int32 CallFunc_GetVital_ReturnValue, int32 CallFunc_GetVital_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UVALUI_TextBlockStyle* K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_GetTooltipForVital_ReturnValue, class FText CallFunc_GetTooltipForVital_ReturnValue_1, class UWBP_Inventory_CM_C* K2Node_ComponentBoundEvent_Inventory, class UWBP_InventoryBag_CM_C* K2Node_ComponentBoundEvent_Bag, class UWBP_InventorySlot_CM_C* K2Node_ComponentBoundEvent_Slot, class UWidget* K2Node_ComponentBoundEvent_Widget, bool K2Node_Event_IsDesignTime, bool CallFunc_IsConsole_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, TDelegate<void(class UCurrencyConfig* Config, int32 Delta, int32 NewValue)> K2Node_CreateDelegate_OutputDelegate_1, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, class UWBP_BasicTooltip_C* CallFunc_Create_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Inventory_Store_CM_C", "ExecuteUbergraph_WBP_Inventory_Store_CM");

	Params::WBP_Inventory_Store_CM_C_ExecuteUbergraph_WBP_Inventory_Store_CM Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CustomEvent_Config = K2Node_CustomEvent_Config;
	Parms.K2Node_CustomEvent_Delta = K2Node_CustomEvent_Delta;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetValeriaCharacter_OutResult = CallFunc_GetValeriaCharacter_OutResult;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue = CallFunc_GetValeriaCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_Vitals = K2Node_CustomEvent_Vitals;
	Parms.CallFunc_GetVitalMax_ReturnValue = CallFunc_GetVitalMax_ReturnValue;
	Parms.CallFunc_GetVital_ReturnValue = CallFunc_GetVital_ReturnValue;
	Parms.CallFunc_GetVital_ReturnValue_1 = CallFunc_GetVital_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_GetTooltipForVital_ReturnValue = CallFunc_GetTooltipForVital_ReturnValue;
	Parms.CallFunc_GetTooltipForVital_ReturnValue_1 = CallFunc_GetTooltipForVital_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Inventory = K2Node_ComponentBoundEvent_Inventory;
	Parms.K2Node_ComponentBoundEvent_Bag = K2Node_ComponentBoundEvent_Bag;
	Parms.K2Node_ComponentBoundEvent_Slot = K2Node_ComponentBoundEvent_Slot;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsConsole_ReturnValue = CallFunc_IsConsole_ReturnValue;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_SlotAsSizeBoxSlot_ReturnValue = CallFunc_SlotAsSizeBoxSlot_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Inventory_Store_CM.WBP_Inventory_Store_CM_C.HandleCurrencyChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurrencyConfig*                  Config                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Delta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Store_CM_C::HandleCurrencyChanged(class UCurrencyConfig* Config, int32 Delta, int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Inventory_Store_CM_C", "HandleCurrencyChanged");

	Params::WBP_Inventory_Store_CM_C_HandleCurrencyChanged Parms{};

	Parms.Config = Config;
	Parms.Delta = Delta;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Inventory_Store_CM.WBP_Inventory_Store_CM_C.HandleVitalsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVitalsComponent*                 Vitals                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Store_CM_C::HandleVitalsChanged(class UVitalsComponent* Vitals)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Inventory_Store_CM_C", "HandleVitalsChanged");

	Params::WBP_Inventory_Store_CM_C_HandleVitalsChanged Parms{};

	Parms.Vitals = Vitals;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Inventory_Store_CM.WBP_Inventory_Store_CM_C.Navigate Inventory Tab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bForward                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Store_CM_C::Navigate_Inventory_Tab(bool bForward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Inventory_Store_CM_C", "Navigate Inventory Tab");

	Params::WBP_Inventory_Store_CM_C_Navigate_Inventory_Tab Parms{};

	Parms.bForward = bForward;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Inventory_Store_CM.WBP_Inventory_Store_CM_C.OnSlotClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_InventorySlot_CM_C*          InventorySlot                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Store_CM_C::OnSlotClicked__DelegateSignature(class UWBP_InventorySlot_CM_C* InventorySlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Inventory_Store_CM_C", "OnSlotClicked__DelegateSignature");

	Params::WBP_Inventory_Store_CM_C_OnSlotClicked__DelegateSignature Parms{};

	Parms.InventorySlot = InventorySlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Inventory_Store_CM.WBP_Inventory_Store_CM_C.OnSlotFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Store_CM_C::OnSlotFocused__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Inventory_Store_CM_C", "OnSlotFocused__DelegateSignature");

	Params::WBP_Inventory_Store_CM_C_OnSlotFocused__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Inventory_Store_CM.WBP_Inventory_Store_CM_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_Store_CM_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Inventory_Store_CM_C", "PreConstruct");

	Params::WBP_Inventory_Store_CM_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Inventory_Store_CM.WBP_Inventory_Store_CM_C.UpdateCurrency
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerInventoryComponent*        CallFunc_GetInventory_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetCurrencyAmount_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_IntToText_ReturnValue                    ()

void UWBP_Inventory_Store_CM_C::UpdateCurrency(EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue, int32 CallFunc_GetCurrencyAmount_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Inventory_Store_CM_C", "UpdateCurrency");

	Params::WBP_Inventory_Store_CM_C_UpdateCurrency Parms{};

	Parms.CallFunc_GetValeriaCharacter_OutResult = CallFunc_GetValeriaCharacter_OutResult;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue = CallFunc_GetValeriaCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_GetCurrencyAmount_ReturnValue = CallFunc_GetCurrencyAmount_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

