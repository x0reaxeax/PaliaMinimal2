#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PaperTabHost

#include "Basic.hpp"

#include "WBP_PaperTabHost_classes.hpp"
#include "WBP_PaperTabHost_parameters.hpp"


namespace SDK
{

// Function WBP_PaperTabHost.WBP_PaperTabHost_C.AddTabButton
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             TabName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVALUI_InstantiatedTabButtonInfo Info                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UWBP_PaperTabHost_C::AddTabButton(class FName& TabName, struct FVALUI_InstantiatedTabButtonInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaperTabHost_C", "AddTabButton");

	Params::WBP_PaperTabHost_C_AddTabButton Parms{};

	Parms.TabName = TabName;
	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PaperTabHost.WBP_PaperTabHost_C.AddTabButtonImpl
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVALUI_InstantiatedTabButtonInfo InstantiatedTabButtonInfo                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class FName                             TabName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                          Button                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UButton*                          ButtonCreated                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                             CallFunc_GetActiveTabName_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     CallFunc_GetTabNames_ReturnValue                       (ReferenceParm)
// int32                                   CallFunc_Array_Find_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     CallFunc_GetTabNames_ReturnValue_1                     (ReferenceParm)
// int32                                   CallFunc_Array_Find_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*               CallFunc_AddChildToHorizontalBox_ReturnValue           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PaperTabHost_C::AddTabButtonImpl(struct FVALUI_InstantiatedTabButtonInfo& InstantiatedTabButtonInfo, class FName& TabName, class UButton** Button, class UButton* ButtonCreated, class FName CallFunc_GetActiveTabName_ReturnValue, TArray<class FName>& CallFunc_GetTabNames_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, TArray<class FName>& CallFunc_GetTabNames_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaperTabHost_C", "AddTabButtonImpl");

	Params::WBP_PaperTabHost_C_AddTabButtonImpl Parms{};

	Parms.InstantiatedTabButtonInfo = std::move(InstantiatedTabButtonInfo);
	Parms.TabName = TabName;
	Parms.ButtonCreated = ButtonCreated;
	Parms.CallFunc_GetActiveTabName_ReturnValue = CallFunc_GetActiveTabName_ReturnValue;
	Parms.CallFunc_GetTabNames_ReturnValue = std::move(CallFunc_GetTabNames_ReturnValue);
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GetTabNames_ReturnValue_1 = std::move(CallFunc_GetTabNames_ReturnValue_1);
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetTabNames_ReturnValue = std::move(Parms.CallFunc_GetTabNames_ReturnValue);
	CallFunc_GetTabNames_ReturnValue_1 = std::move(Parms.CallFunc_GetTabNames_ReturnValue_1);

	if (Button != nullptr)
		*Button = Parms.Button;
}


// Function WBP_PaperTabHost.WBP_PaperTabHost_C.AdjustButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                          Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   TabButtonIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ActiveTabIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bReceivesShadowBottom                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bReceivesShadowRight                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bReceivesShadowLeft                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_IntInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_IntInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*               CallFunc_SlotAsHorizontalBoxSlot_ReturnValue           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                          K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_PaperTabHost_C::AdjustButton(class UButton* Button, int32 TabButtonIndex, int32 ActiveTabIndex, bool bReceivesShadowBottom, bool bReceivesShadowRight, bool bReceivesShadowLeft, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, bool Temp_bool_Variable, const struct FMargin& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaperTabHost_C", "AdjustButton");

	Params::WBP_PaperTabHost_C_AdjustButton Parms{};

	Parms.Button = Button;
	Parms.TabButtonIndex = TabButtonIndex;
	Parms.ActiveTabIndex = ActiveTabIndex;
	Parms.bReceivesShadowBottom = bReceivesShadowBottom;
	Parms.bReceivesShadowRight = bReceivesShadowRight;
	Parms.bReceivesShadowLeft = bReceivesShadowLeft;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = std::move(K2Node_Select_Default);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PaperTabHost.WBP_PaperTabHost_C.BindAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                          Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PaperTabHost_C::BindAudio(class UButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaperTabHost_C", "BindAudio");

	Params::WBP_PaperTabHost_C_BindAudio Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PaperTabHost.WBP_PaperTabHost_C.ExecuteUbergraph_WBP_PaperTabHost
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventGlobal_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             K2Node_Event_TabName_2                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVALUI_InstantiatedTabButtonInfo K2Node_Event_Info_1                                    (ConstParm, ContainsInstancedReference)
// class FName                             K2Node_Event_TabName_1                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVALUI_InstantiatedTabButtonInfo K2Node_Event_Info                                      (ConstParm, ContainsInstancedReference)
// class UButton*                          CallFunc_AddTabButtonImpl_Button                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                             K2Node_Event_TabName                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_RemoveChild_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     CallFunc_GetTabNames_ReturnValue                       (ReferenceParm)
// int32                                   CallFunc_Array_Find_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     CallFunc_GetTabNames_ReturnValue_1                     (ReferenceParm)
// class FName                             CallFunc_Array_Get_Item                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVALUI_InstantiatedTabButtonInfo CallFunc_TryGetTabInfo_OutInfo                         (ContainsInstancedReference)
// bool                                    CallFunc_TryGetTabInfo_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     CallFunc_GetTabNames_ReturnValue_2                     (ReferenceParm)
// class FName                             CallFunc_GetActiveTabName_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                          K2Node_CustomEvent_Button_1                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Find_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                          K2Node_CustomEvent_Button                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventGlobal_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventGlobal_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PaperTabHost_C::ExecuteUbergraph_WBP_PaperTabHost(int32 EntryPoint, int32 CallFunc_AkEventGlobal_ReturnValue, int32 Temp_int_Array_Index_Variable, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class FName K2Node_Event_TabName_2, struct FVALUI_InstantiatedTabButtonInfo& K2Node_Event_Info_1, class FName K2Node_Event_TabName_1, struct FVALUI_InstantiatedTabButtonInfo& K2Node_Event_Info, class UButton* CallFunc_AddTabButtonImpl_Button, class FName K2Node_Event_TabName, bool CallFunc_RemoveChild_ReturnValue, TArray<class FName>& CallFunc_GetTabNames_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, TArray<class FName>& CallFunc_GetTabNames_ReturnValue_1, class FName CallFunc_Array_Get_Item, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, const struct FVALUI_InstantiatedTabButtonInfo& CallFunc_TryGetTabInfo_OutInfo, bool CallFunc_TryGetTabInfo_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class FName>& CallFunc_GetTabNames_ReturnValue_2, class FName CallFunc_GetActiveTabName_ReturnValue, class UButton* K2Node_CustomEvent_Button_1, int32 CallFunc_Array_Find_ReturnValue_1, class UButton* K2Node_CustomEvent_Button, int32 CallFunc_AkEventGlobal_ReturnValue_1, int32 CallFunc_AkEventGlobal_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaperTabHost_C", "ExecuteUbergraph_WBP_PaperTabHost");

	Params::WBP_PaperTabHost_C_ExecuteUbergraph_WBP_PaperTabHost Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_AkEventGlobal_ReturnValue = CallFunc_AkEventGlobal_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_TabName_2 = K2Node_Event_TabName_2;
	Parms.K2Node_Event_Info_1 = std::move(K2Node_Event_Info_1);
	Parms.K2Node_Event_TabName_1 = K2Node_Event_TabName_1;
	Parms.K2Node_Event_Info = std::move(K2Node_Event_Info);
	Parms.CallFunc_AddTabButtonImpl_Button = CallFunc_AddTabButtonImpl_Button;
	Parms.K2Node_Event_TabName = K2Node_Event_TabName;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;
	Parms.CallFunc_GetTabNames_ReturnValue = std::move(CallFunc_GetTabNames_ReturnValue);
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetTabNames_ReturnValue_1 = std::move(CallFunc_GetTabNames_ReturnValue_1);
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_TryGetTabInfo_OutInfo = std::move(CallFunc_TryGetTabInfo_OutInfo);
	Parms.CallFunc_TryGetTabInfo_ReturnValue = CallFunc_TryGetTabInfo_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetTabNames_ReturnValue_2 = std::move(CallFunc_GetTabNames_ReturnValue_2);
	Parms.CallFunc_GetActiveTabName_ReturnValue = CallFunc_GetActiveTabName_ReturnValue;
	Parms.K2Node_CustomEvent_Button_1 = K2Node_CustomEvent_Button_1;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_AkEventGlobal_ReturnValue_1 = CallFunc_AkEventGlobal_ReturnValue_1;
	Parms.CallFunc_AkEventGlobal_ReturnValue_2 = CallFunc_AkEventGlobal_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetTabNames_ReturnValue = std::move(Parms.CallFunc_GetTabNames_ReturnValue);
	CallFunc_GetTabNames_ReturnValue_1 = std::move(Parms.CallFunc_GetTabNames_ReturnValue_1);
	CallFunc_GetTabNames_ReturnValue_2 = std::move(Parms.CallFunc_GetTabNames_ReturnValue_2);
}


// Function WBP_PaperTabHost.WBP_PaperTabHost_C.HandleDifferentActiveTabSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                             TabName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PaperTabHost_C::HandleDifferentActiveTabSet(class FName TabName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaperTabHost_C", "HandleDifferentActiveTabSet");

	Params::WBP_PaperTabHost_C_HandleDifferentActiveTabSet Parms{};

	Parms.TabName = TabName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PaperTabHost.WBP_PaperTabHost_C.OnClicked
// (BlueprintCallable, BlueprintEvent)

void UWBP_PaperTabHost_C::OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaperTabHost_C", "OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PaperTabHost.WBP_PaperTabHost_C.OnHovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_PaperTabHost_C::OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaperTabHost_C", "OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PaperTabHost.WBP_PaperTabHost_C.OnUnhovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_PaperTabHost_C::OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaperTabHost_C", "OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PaperTabHost.WBP_PaperTabHost_C.RemoveTabButton
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             TabName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVALUI_InstantiatedTabButtonInfo Info                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UWBP_PaperTabHost_C::RemoveTabButton(class FName& TabName, struct FVALUI_InstantiatedTabButtonInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaperTabHost_C", "RemoveTabButton");

	Params::WBP_PaperTabHost_C_RemoveTabButton Parms{};

	Parms.TabName = TabName;
	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PaperTabHost.WBP_PaperTabHost_C.UnbindAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                          Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PaperTabHost_C::UnbindAudio(class UButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PaperTabHost_C", "UnbindAudio");

	Params::WBP_PaperTabHost_C_UnbindAudio Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

}

