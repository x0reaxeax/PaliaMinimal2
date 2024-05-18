#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ListEntry_SocialConnection_CM

#include "Basic.hpp"

#include "WBP_ListEntry_SocialConnection_CM_classes.hpp"
#include "WBP_ListEntry_SocialConnection_CM_parameters.hpp"


namespace SDK
{

// Function WBP_ListEntry_SocialConnection_CM.WBP_ListEntry_SocialConnection_CM_C.BndEvt__WBP_ListEntry_SocialConnection_CM_CustomNavigationGroup_K2Node_ComponentBoundEvent_1_OnCustomNavigationGroupInitialized__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class US6UI_CustomNavigationGroup*      NavGroup                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ListEntry_SocialConnection_CM_C::BndEvt__WBP_ListEntry_SocialConnection_CM_CustomNavigationGroup_K2Node_ComponentBoundEvent_1_OnCustomNavigationGroupInitialized__DelegateSignature(class US6UI_CustomNavigationGroup* NavGroup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListEntry_SocialConnection_CM_C", "BndEvt__WBP_ListEntry_SocialConnection_CM_CustomNavigationGroup_K2Node_ComponentBoundEvent_1_OnCustomNavigationGroupInitialized__DelegateSignature");

	Params::WBP_ListEntry_SocialConnection_CM_C_BndEvt__WBP_ListEntry_SocialConnection_CM_CustomNavigationGroup_K2Node_ComponentBoundEvent_1_OnCustomNavigationGroupInitialized__DelegateSignature Parms{};

	Parms.NavGroup = NavGroup;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ListEntry_SocialConnection_CM.WBP_ListEntry_SocialConnection_CM_C.BndEvt__WBP_ListEntry_SocialConnection_CM_WBP_PlayerCharacterRow_CM_K2Node_ComponentBoundEvent_0_OnCharacterProfileImageClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_PlayerCharacterProfileImage_CM_C*CharacterProfileImageWidget                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ListEntry_SocialConnection_CM_C::BndEvt__WBP_ListEntry_SocialConnection_CM_WBP_PlayerCharacterRow_CM_K2Node_ComponentBoundEvent_0_OnCharacterProfileImageClicked__DelegateSignature(class UWBP_PlayerCharacterProfileImage_CM_C* CharacterProfileImageWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListEntry_SocialConnection_CM_C", "BndEvt__WBP_ListEntry_SocialConnection_CM_WBP_PlayerCharacterRow_CM_K2Node_ComponentBoundEvent_0_OnCharacterProfileImageClicked__DelegateSignature");

	Params::WBP_ListEntry_SocialConnection_CM_C_BndEvt__WBP_ListEntry_SocialConnection_CM_WBP_PlayerCharacterRow_CM_K2Node_ComponentBoundEvent_0_OnCharacterProfileImageClicked__DelegateSignature Parms{};

	Parms.CharacterProfileImageWidget = CharacterProfileImageWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ListEntry_SocialConnection_CM.WBP_ListEntry_SocialConnection_CM_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UWBP_ListEntry_SocialConnection_CM_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListEntry_SocialConnection_CM_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ListEntry_SocialConnection_CM.WBP_ListEntry_SocialConnection_CM_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ListEntry_SocialConnection_CM_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListEntry_SocialConnection_CM_C", "BP_OnItemExpansionChanged");

	Params::WBP_ListEntry_SocialConnection_CM_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ListEntry_SocialConnection_CM.WBP_ListEntry_SocialConnection_CM_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ListEntry_SocialConnection_CM_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListEntry_SocialConnection_CM_C", "BP_OnItemSelectionChanged");

	Params::WBP_ListEntry_SocialConnection_CM_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ListEntry_SocialConnection_CM.WBP_ListEntry_SocialConnection_CM_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ListEntry_SocialConnection_CM_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListEntry_SocialConnection_CM_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ListEntry_SocialConnection_CM.WBP_ListEntry_SocialConnection_CM_C.ExecuteUbergraph_WBP_ListEntry_SocialConnection_CM
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UWidget* Widget, TArray<struct FF_CommonUIButtonPrompt>& UIPrompt)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PlayerCharacterProfileImage_CM_C*K2Node_ComponentBoundEvent_CharacterProfileImageWidget (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class US6UI_CustomNavigationGroup*      K2Node_ComponentBoundEvent_NavGroup                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>                  K2Node_MakeArray_Array                                 (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UObject*                          K2Node_Event_ListItemObject                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_bIsSelected                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListItem_SocialConnection_C*     K2Node_DynamicCast_AsList_Item_Social_Connection       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_bIsExpanded                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ListEntry_SocialConnection_CM_C::ExecuteUbergraph_WBP_ListEntry_SocialConnection_CM(int32 EntryPoint, TDelegate<void(class UWidget* Widget, TArray<struct FF_CommonUIButtonPrompt>& UIPrompt)> K2Node_CreateDelegate_OutputDelegate, class UWBP_PlayerCharacterProfileImage_CM_C* K2Node_ComponentBoundEvent_CharacterProfileImageWidget, class US6UI_CustomNavigationGroup* K2Node_ComponentBoundEvent_NavGroup, TArray<class UWidget*>& K2Node_MakeArray_Array, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsSelected, class UListItem_SocialConnection_C* K2Node_DynamicCast_AsList_Item_Social_Connection, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListEntry_SocialConnection_CM_C", "ExecuteUbergraph_WBP_ListEntry_SocialConnection_CM");

	Params::WBP_ListEntry_SocialConnection_CM_C_ExecuteUbergraph_WBP_ListEntry_SocialConnection_CM Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_CharacterProfileImageWidget = K2Node_ComponentBoundEvent_CharacterProfileImageWidget;
	Parms.K2Node_ComponentBoundEvent_NavGroup = K2Node_ComponentBoundEvent_NavGroup;
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_DynamicCast_AsList_Item_Social_Connection = K2Node_DynamicCast_AsList_Item_Social_Connection;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ListEntry_SocialConnection_CM.WBP_ListEntry_SocialConnection_CM_C.HandleOnMarkUIFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FF_CommonUIButtonPrompt>  UIPrompt                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ListEntry_SocialConnection_CM_C::HandleOnMarkUIFocus(class UWidget* Widget, TArray<struct FF_CommonUIButtonPrompt>& UIPrompt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListEntry_SocialConnection_CM_C", "HandleOnMarkUIFocus");

	Params::WBP_ListEntry_SocialConnection_CM_C_HandleOnMarkUIFocus Parms{};

	Parms.Widget = Widget;
	Parms.UIPrompt = std::move(UIPrompt);

	UObject::ProcessEvent(Func, &Parms);

	UIPrompt = std::move(Parms.UIPrompt);
}


// Function WBP_ListEntry_SocialConnection_CM.WBP_ListEntry_SocialConnection_CM_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)
// class UWidget*                          WidgetToFocus                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_True_if_break_was_hit_Variable               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          CallFunc_Array_Get_Item                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsVisible_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                      CallFunc_Handled_ReturnValue                           ()

struct FEventReply UWBP_ListEntry_SocialConnection_CM_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, class UWidget* WidgetToFocus, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListEntry_SocialConnection_CM_C", "OnFocusReceived");

	Params::WBP_ListEntry_SocialConnection_CM_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);
	Parms.WidgetToFocus = WidgetToFocus;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = std::move(CallFunc_Handled_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_ListEntry_SocialConnection_CM.WBP_ListEntry_SocialConnection_CM_C.OnInspectPlayerCharacter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ListEntry_SocialConnection_CM_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl                 UserId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_ListEntry_SocialConnection_CM_C::OnInspectPlayerCharacter__DelegateSignature(class UWBP_ListEntry_SocialConnection_CM_C* Widget, const struct FUniqueNetIdRepl& UserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListEntry_SocialConnection_CM_C", "OnInspectPlayerCharacter__DelegateSignature");

	Params::WBP_ListEntry_SocialConnection_CM_C_OnInspectPlayerCharacter__DelegateSignature Parms{};

	Parms.Widget = Widget;
	Parms.UserId = std::move(UserId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ListEntry_SocialConnection_CM.WBP_ListEntry_SocialConnection_CM_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ListEntry_SocialConnection_CM_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListEntry_SocialConnection_CM_C", "OnListItemObjectSet");

	Params::WBP_ListEntry_SocialConnection_CM_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ListEntry_SocialConnection_CM.WBP_ListEntry_SocialConnection_CM_C.OnMarkFocusUI__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FF_CommonUIButtonPrompt>  UIPrompt                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ListEntry_SocialConnection_CM_C::OnMarkFocusUI__DelegateSignature(class UWidget* Widget, TArray<struct FF_CommonUIButtonPrompt>& UIPrompt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListEntry_SocialConnection_CM_C", "OnMarkFocusUI__DelegateSignature");

	Params::WBP_ListEntry_SocialConnection_CM_C_OnMarkFocusUI__DelegateSignature Parms{};

	Parms.Widget = Widget;
	Parms.UIPrompt = std::move(UIPrompt);

	UObject::ProcessEvent(Func, &Parms);

	UIPrompt = std::move(Parms.UIPrompt);
}


// Function WBP_ListEntry_SocialConnection_CM.WBP_ListEntry_SocialConnection_CM_C.UpdateButtonsFromConnection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ListEntry_SocialConnection_CM_C::UpdateButtonsFromConnection(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListEntry_SocialConnection_CM_C", "UpdateButtonsFromConnection");

	Params::WBP_ListEntry_SocialConnection_CM_C_UpdateButtonsFromConnection Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

