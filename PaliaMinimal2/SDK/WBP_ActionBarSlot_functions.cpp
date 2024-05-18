#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ActionBarSlot

#include "Basic.hpp"

#include "WBP_ActionBarSlot_classes.hpp"
#include "WBP_ActionBarSlot_parameters.hpp"


namespace SDK
{

// Function WBP_ActionBarSlot.WBP_ActionBarSlot_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_ActionBarSlot_C::BP_OnHandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ActionBarSlot_C", "BP_OnHandleBackAction");

	Params::WBP_ActionBarSlot_C_BP_OnHandleBackAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_ActionBarSlot.WBP_ActionBarSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ActionBarSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ActionBarSlot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ActionBarSlot.WBP_ActionBarSlot_C.ExecuteUbergraph_WBP_ActionBarSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FValeriaItem                     K2Node_CustomEvent_Item                                ()
// bool                                    K2Node_CustomEvent_NewHighlighted                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_ItemIsEmpty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UWBP_ItemSlot_CM_C* Slot)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UWBP_ItemSlot_CM_C* Slot)>K2Node_CreateDelegate_OutputDelegate_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Set_Item_Definition_Displays                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlacementComponent*              CallFunc_GetPlacement_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UPlacementComponent* PC, bool IsPlacing)>K2Node_CreateDelegate_OutputDelegate_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlacementComponent*              K2Node_CustomEvent_PC                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_CustomEvent_isPlacing                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)>K2Node_CreateDelegate_OutputDelegate_4                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            CallFunc_RegisterInputActionBinding_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            CallFunc_RegisterInputActionBinding_ReturnValue_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionBarSlot_C::ExecuteUbergraph_WBP_ActionBarSlot(int32 EntryPoint, TDelegate<void(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)> K2Node_CreateDelegate_OutputDelegate, const struct FValeriaItem& K2Node_CustomEvent_Item, bool K2Node_CustomEvent_NewHighlighted, ESlateVisibility Temp_byte_Variable, bool CallFunc_ItemIsEmpty_ReturnValue, ESlateVisibility Temp_byte_Variable_1, TDelegate<void(class UWBP_ItemSlot_CM_C* Slot)> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(class UWBP_ItemSlot_CM_C* Slot)> K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable, bool CallFunc_Set_Item_Definition_Displays, ESlateVisibility K2Node_Select_Default, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UPlacementComponent* CallFunc_GetPlacement_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TDelegate<void(class UPlacementComponent* PC, bool IsPlacing)> K2Node_CreateDelegate_OutputDelegate_3, class UPlacementComponent* K2Node_CustomEvent_PC, bool K2Node_CustomEvent_isPlacing, TDelegate<void(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)> K2Node_CreateDelegate_OutputDelegate_4, const struct FGuid& CallFunc_RegisterInputActionBinding_ReturnValue, const struct FGuid& CallFunc_RegisterInputActionBinding_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ActionBarSlot_C", "ExecuteUbergraph_WBP_ActionBarSlot");

	Params::WBP_ActionBarSlot_C_ExecuteUbergraph_WBP_ActionBarSlot Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Item = std::move(K2Node_CustomEvent_Item);
	Parms.K2Node_CustomEvent_NewHighlighted = K2Node_CustomEvent_NewHighlighted;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_ItemIsEmpty_ReturnValue = CallFunc_ItemIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Set_Item_Definition_Displays = CallFunc_Set_Item_Definition_Displays;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetValeriaCharacter_OutResult = CallFunc_GetValeriaCharacter_OutResult;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue = CallFunc_GetValeriaCharacter_ReturnValue;
	Parms.CallFunc_GetPlacement_ReturnValue = CallFunc_GetPlacement_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_PC = K2Node_CustomEvent_PC;
	Parms.K2Node_CustomEvent_isPlacing = K2Node_CustomEvent_isPlacing;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_RegisterInputActionBinding_ReturnValue = std::move(CallFunc_RegisterInputActionBinding_ReturnValue);
	Parms.CallFunc_RegisterInputActionBinding_ReturnValue_1 = std::move(CallFunc_RegisterInputActionBinding_ReturnValue_1);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ActionBarSlot.WBP_ActionBarSlot_C.HandleHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ItemSlot_CM_C*               Param_Slot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionBarSlot_C::HandleHovered(class UWBP_ItemSlot_CM_C* Param_Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ActionBarSlot_C", "HandleHovered");

	Params::WBP_ActionBarSlot_C_HandleHovered Parms{};

	Parms.Param_Slot = Param_Slot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ActionBarSlot.WBP_ActionBarSlot_C.HandleInputAction_EatActionBarItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionBarSlot_C::HandleInputAction_EatActionBarItem(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ActionBarSlot_C", "HandleInputAction_EatActionBarItem");

	Params::WBP_ActionBarSlot_C_HandleInputAction_EatActionBarItem Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;
	Parms.CallFunc_GetValeriaCharacter_OutResult = CallFunc_GetValeriaCharacter_OutResult;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue = CallFunc_GetValeriaCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ActionBarSlot.WBP_ActionBarSlot_C.HandleInputAction_UseActionBarItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsPlacing_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionBarSlot_C::HandleInputAction_UseActionBarItem(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsPlacing_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ActionBarSlot_C", "HandleInputAction_UseActionBarItem");

	Params::WBP_ActionBarSlot_C_HandleInputAction_UseActionBarItem Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;
	Parms.CallFunc_GetValeriaCharacter_OutResult = CallFunc_GetValeriaCharacter_OutResult;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue = CallFunc_GetValeriaCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsPlacing_ReturnValue = CallFunc_IsPlacing_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ActionBarSlot.WBP_ActionBarSlot_C.HandleUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ItemSlot_CM_C*               Param_Slot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionBarSlot_C::HandleUnhovered(class UWBP_ItemSlot_CM_C* Param_Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ActionBarSlot_C", "HandleUnhovered");

	Params::WBP_ActionBarSlot_C_HandleUnhovered Parms{};

	Parms.Param_Slot = Param_Slot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ActionBarSlot.WBP_ActionBarSlot_C.OnActionBarIsActivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsActionBarActivated                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionBarSlot_C::OnActionBarIsActivated__DelegateSignature(bool bIsActionBarActivated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ActionBarSlot_C", "OnActionBarIsActivated__DelegateSignature");

	Params::WBP_ActionBarSlot_C_OnActionBarIsActivated__DelegateSignature Parms{};

	Parms.bIsActionBarActivated = bIsActionBarActivated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ActionBarSlot.WBP_ActionBarSlot_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ActionBarSlot_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ActionBarSlot_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ActionBarSlot.WBP_ActionBarSlot_C.OnPlacementChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlacementComponent*              PC                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    IsPlacing                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionBarSlot_C::OnPlacementChanged(class UPlacementComponent* PC, bool IsPlacing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ActionBarSlot_C", "OnPlacementChanged");

	Params::WBP_ActionBarSlot_C_OnPlacementChanged Parms{};

	Parms.PC = PC;
	Parms.IsPlacing = IsPlacing;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ActionBarSlot.WBP_ActionBarSlot_C.SetSlotNumber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_SlotNumber                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_IntToText_ReturnValue                    ()

void UWBP_ActionBarSlot_C::SetSlotNumber(int32 Param_SlotNumber, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ActionBarSlot_C", "SetSlotNumber");

	Params::WBP_ActionBarSlot_C_SetSlotNumber Parms{};

	Parms.Param_SlotNumber = Param_SlotNumber;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ActionBarSlot.WBP_ActionBarSlot_C.ToggleHighlight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsHighlighted                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVALUI_TextBlockStyle*            Temp_object_Variable                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVALUI_TextBlockStyle*            Temp_object_Variable_1                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVALUI_TextBlockStyle*            K2Node_Select_Default_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_BoolBool_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  K2Node_Select_Default_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_SelectColor_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                      K2Node_MakeStruct_SlateColor                           ()

void UWBP_ActionBarSlot_C::ToggleHighlight(bool IsHighlighted, ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, class UVALUI_TextBlockStyle* Temp_object_Variable, class UVALUI_TextBlockStyle* Temp_object_Variable_1, bool Temp_bool_Variable_1, double Temp_real_Variable, double Temp_real_Variable_1, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, ESlateVisibility K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, class UVALUI_TextBlockStyle* K2Node_Select_Default_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, double K2Node_Select_Default_2, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ActionBarSlot_C", "ToggleHighlight");

	Params::WBP_ActionBarSlot_C_ToggleHighlight Parms{};

	Parms.IsHighlighted = IsHighlighted;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_SelectColor_ReturnValue = std::move(CallFunc_SelectColor_ReturnValue);
	Parms.K2Node_MakeStruct_SlateColor = std::move(K2Node_MakeStruct_SlateColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ActionBarSlot.WBP_ActionBarSlot_C.UpdateActionBarSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FValeriaItem                     Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    NewHighlighted                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionBarSlot_C::UpdateActionBarSlot(const struct FValeriaItem& Item, bool NewHighlighted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ActionBarSlot_C", "UpdateActionBarSlot");

	Params::WBP_ActionBarSlot_C_UpdateActionBarSlot Parms{};

	Parms.Item = std::move(Item);
	Parms.NewHighlighted = NewHighlighted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ActionBarSlot.WBP_ActionBarSlot_C.UpdateErrorBorder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldBeVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionBarSlot_C::UpdateErrorBorder(bool ShouldBeVisible, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ActionBarSlot_C", "UpdateErrorBorder");

	Params::WBP_ActionBarSlot_C_UpdateErrorBorder Parms{};

	Parms.ShouldBeVisible = ShouldBeVisible;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}

}
