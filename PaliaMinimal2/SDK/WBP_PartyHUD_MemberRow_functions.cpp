#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PartyHUD_MemberRow

#include "Basic.hpp"

#include "WBP_PartyHUD_MemberRow_classes.hpp"
#include "WBP_PartyHUD_MemberRow_parameters.hpp"


namespace SDK
{

// Function WBP_PartyHUD_MemberRow.WBP_PartyHUD_MemberRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PartyHUD_MemberRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartyHUD_MemberRow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PartyHUD_MemberRow.WBP_PartyHUD_MemberRow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PartyHUD_MemberRow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartyHUD_MemberRow_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PartyHUD_MemberRow.WBP_PartyHUD_MemberRow_C.ExecuteUbergraph_WBP_PartyHUD_MemberRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            K2Node_CustomEvent_AccountId                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            K2Node_CustomEvent_CharacterId                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOSSVAL_CharacterNameAndId       K2Node_CustomEvent_Name                                (ConstParm)
// TDelegate<void(struct FGuid& AccountId, struct FGuid& CharacterId, struct FOSSVAL_CharacterNameAndId& Name)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FOSSVAL_CharacterNameAndId       Temp_struct_Variable                                   ()
// struct FGuid                            Temp_struct_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            Temp_struct_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UVALUI_TextBlockStyle>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue  (UObjectWrapper, HasGetValueTypeHash)
// TDelegate<void(EVAL_PartyManagerState State)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            K2Node_CustomEvent_AccountId_1                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            K2Node_CustomEvent_CharacterId_1                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(EVAL_PartyManagerState State)>K2Node_CreateDelegate_OutputDelegate_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(struct FVAL_PartyMember& Member)>K2Node_CreateDelegate_OutputDelegate_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(struct FGuid& AccountId, struct FGuid& CharacterId)>K2Node_CreateDelegate_OutputDelegate_4                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(struct FVAL_PartyMember& Member)>K2Node_CreateDelegate_OutputDelegate_5                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVAL_PartyMember                 K2Node_CustomEvent_Member                              (HasGetValueTypeHash)
// class UVAL_PartyManager*                CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy*CallFunc_GetCharacterNameByAccountIdAndCharacterId_ReturnValue(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaGameUserSettings*         CallFunc_GetValeriaGameUserSettings_ReturnValue        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate_6                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_PartyManager*                CallFunc_GetLocalPlayerSubsystem_ReturnValue_1         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyHUD_MemberRow_C::ExecuteUbergraph_WBP_PartyHUD_MemberRow(int32 EntryPoint, struct FGuid& K2Node_CustomEvent_AccountId, struct FGuid& K2Node_CustomEvent_CharacterId, struct FOSSVAL_CharacterNameAndId& K2Node_CustomEvent_Name, TDelegate<void(struct FGuid& AccountId, struct FGuid& CharacterId, struct FOSSVAL_CharacterNameAndId& Name)> K2Node_CreateDelegate_OutputDelegate, const struct FOSSVAL_CharacterNameAndId& Temp_struct_Variable, const struct FGuid& Temp_struct_Variable_1, const struct FGuid& Temp_struct_Variable_2, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UVALUI_TextBlockStyle> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, TDelegate<void(EVAL_PartyManagerState State)> K2Node_CreateDelegate_OutputDelegate_1, struct FGuid& K2Node_CustomEvent_AccountId_1, struct FGuid& K2Node_CustomEvent_CharacterId_1, TDelegate<void(EVAL_PartyManagerState State)> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void(struct FVAL_PartyMember& Member)> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void(struct FGuid& AccountId, struct FGuid& CharacterId)> K2Node_CreateDelegate_OutputDelegate_4, TDelegate<void(struct FVAL_PartyMember& Member)> K2Node_CreateDelegate_OutputDelegate_5, const struct FVAL_PartyMember& K2Node_CustomEvent_Member, class UVAL_PartyManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy* CallFunc_GetCharacterNameByAccountIdAndCharacterId_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_6, bool K2Node_Event_IsDesignTime, class UVAL_PartyManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartyHUD_MemberRow_C", "ExecuteUbergraph_WBP_PartyHUD_MemberRow");

	Params::WBP_PartyHUD_MemberRow_C_ExecuteUbergraph_WBP_PartyHUD_MemberRow Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_AccountId = std::move(K2Node_CustomEvent_AccountId);
	Parms.K2Node_CustomEvent_CharacterId = std::move(K2Node_CustomEvent_CharacterId);
	Parms.K2Node_CustomEvent_Name = std::move(K2Node_CustomEvent_Name);
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.Temp_struct_Variable_1 = std::move(Temp_struct_Variable_1);
	Parms.Temp_struct_Variable_2 = std::move(Temp_struct_Variable_2);
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_AccountId_1 = std::move(K2Node_CustomEvent_AccountId_1);
	Parms.K2Node_CustomEvent_CharacterId_1 = std::move(K2Node_CustomEvent_CharacterId_1);
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_Member = std::move(K2Node_CustomEvent_Member);
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCharacterNameByAccountIdAndCharacterId_ReturnValue = CallFunc_GetCharacterNameByAccountIdAndCharacterId_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetValeriaGameUserSettings_ReturnValue = CallFunc_GetValeriaGameUserSettings_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_1 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PartyHUD_MemberRow.WBP_PartyHUD_MemberRow_C.Handle on Context Menu Button Pressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PartyMemberRowContextMenu_C* ContentWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyHUD_MemberRow_C::Handle_on_Context_Menu_Button_Pressed(class UWBP_PartyMemberRowContextMenu_C* ContentWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartyHUD_MemberRow_C", "Handle on Context Menu Button Pressed");

	Params::WBP_PartyHUD_MemberRow_C_Handle_on_Context_Menu_Button_Pressed Parms{};

	Parms.ContentWidget = ContentWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PartyHUD_MemberRow.WBP_PartyHUD_MemberRow_C.Handle On Game User Settings UI Needs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValeriaGameUserSettings*         CallFunc_GetValeriaGameUserSettings_ReturnValue        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_TextIsEmpty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyHUD_MemberRow_C::Handle_On_Game_User_Settings_UI_Needs(class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartyHUD_MemberRow_C", "Handle On Game User Settings UI Needs");

	Params::WBP_PartyHUD_MemberRow_C_Handle_On_Game_User_Settings_UI_Needs Parms{};

	Parms.CallFunc_GetValeriaGameUserSettings_ReturnValue = CallFunc_GetValeriaGameUserSettings_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PartyHUD_MemberRow.WBP_PartyHUD_MemberRow_C.HandleOnPartyMemberPromoted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVAL_PartyMember                 Member                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWBP_PartyHUD_MemberRow_C::HandleOnPartyMemberPromoted(struct FVAL_PartyMember& Member)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartyHUD_MemberRow_C", "HandleOnPartyMemberPromoted");

	Params::WBP_PartyHUD_MemberRow_C_HandleOnPartyMemberPromoted Parms{};

	Parms.Member = std::move(Member);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PartyHUD_MemberRow.WBP_PartyHUD_MemberRow_C.HandleOnPartyStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EVAL_PartyManagerState                  State                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyHUD_MemberRow_C::HandleOnPartyStateChanged(EVAL_PartyManagerState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartyHUD_MemberRow_C", "HandleOnPartyStateChanged");

	Params::WBP_PartyHUD_MemberRow_C_HandleOnPartyStateChanged Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PartyHUD_MemberRow.WBP_PartyHUD_MemberRow_C.HideSkillSpacer
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PartyHUD_MemberRow_C::HideSkillSpacer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartyHUD_MemberRow_C", "HideSkillSpacer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PartyHUD_MemberRow.WBP_PartyHUD_MemberRow_C.OnFailure_64FF0DB94623A63854B70DB4ECCD4422
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            AccountId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            CharacterId                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyHUD_MemberRow_C::OnFailure_64FF0DB94623A63854B70DB4ECCD4422(struct FGuid& AccountId, struct FGuid& CharacterId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartyHUD_MemberRow_C", "OnFailure_64FF0DB94623A63854B70DB4ECCD4422");

	Params::WBP_PartyHUD_MemberRow_C_OnFailure_64FF0DB94623A63854B70DB4ECCD4422 Parms{};

	Parms.AccountId = std::move(AccountId);
	Parms.CharacterId = std::move(CharacterId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PartyHUD_MemberRow.WBP_PartyHUD_MemberRow_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PartyHUD_MemberRow_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartyHUD_MemberRow_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PartyHUD_MemberRow.WBP_PartyHUD_MemberRow_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)
// struct FEventReply                      Reply                                                  (Edit, BlueprintVisible)
// struct FKey                             CallFunc_PointerEvent_GetEffectingButton_ReturnValue   (HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_KeyKey_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                      CallFunc_Handled_ReturnValue                           ()
// struct FEventReply                      CallFunc_Unhandled_ReturnValue                         ()
// TDelegate<void(class UWBP_PartyMemberRowContextMenu_C* ContentWidget)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAuthManager*                     CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      CallFunc_GetContextMenuContentWidget_ReturnValue       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl                 CallFunc_GetNetId_ReturnValue                          (HasGetValueTypeHash)
// class UWBP_PartyMemberRowContextMenu_C* K2Node_DynamicCast_AsWBP_Party_Member_Row_Context_Menu (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UUserWidget>          Temp_class_Variable                                    (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                                    CallFunc_SummonContextMenu_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_PartyHUD_MemberRow_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& Reply, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, TDelegate<void(class UWBP_PartyMemberRowContextMenu_C* ContentWidget)> K2Node_CreateDelegate_OutputDelegate, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UUserWidget* CallFunc_GetContextMenuContentWidget_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetNetId_ReturnValue, class UWBP_PartyMemberRowContextMenu_C* K2Node_DynamicCast_AsWBP_Party_Member_Row_Context_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TSubclassOf<class UUserWidget> Temp_class_Variable, bool CallFunc_SummonContextMenu_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartyHUD_MemberRow_C", "OnMouseButtonDown");

	Params::WBP_PartyHUD_MemberRow_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);
	Parms.Reply = std::move(Reply);
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = std::move(CallFunc_PointerEvent_GetEffectingButton_ReturnValue);
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = std::move(CallFunc_Handled_ReturnValue);
	Parms.CallFunc_Unhandled_ReturnValue = std::move(CallFunc_Unhandled_ReturnValue);
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetContextMenuContentWidget_ReturnValue = CallFunc_GetContextMenuContentWidget_ReturnValue;
	Parms.CallFunc_GetNetId_ReturnValue = std::move(CallFunc_GetNetId_ReturnValue);
	Parms.K2Node_DynamicCast_AsWBP_Party_Member_Row_Context_Menu = K2Node_DynamicCast_AsWBP_Party_Member_Row_Context_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ReturnValue = CallFunc_EqualEqual_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_SummonContextMenu_ReturnValue = CallFunc_SummonContextMenu_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PartyHUD_MemberRow.WBP_PartyHUD_MemberRow_C.OnSuccess_64FF0DB94623A63854B70DB4ECCD4422
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            AccountId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            CharacterId                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOSSVAL_CharacterNameAndId       Param_Name                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PartyHUD_MemberRow_C::OnSuccess_64FF0DB94623A63854B70DB4ECCD4422(struct FGuid& AccountId, struct FGuid& CharacterId, struct FOSSVAL_CharacterNameAndId& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartyHUD_MemberRow_C", "OnSuccess_64FF0DB94623A63854B70DB4ECCD4422");

	Params::WBP_PartyHUD_MemberRow_C_OnSuccess_64FF0DB94623A63854B70DB4ECCD4422 Parms{};

	Parms.AccountId = std::move(AccountId);
	Parms.CharacterId = std::move(CharacterId);
	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PartyHUD_MemberRow.WBP_PartyHUD_MemberRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyHUD_MemberRow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartyHUD_MemberRow_C", "PreConstruct");

	Params::WBP_PartyHUD_MemberRow_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PartyHUD_MemberRow.WBP_PartyHUD_MemberRow_C.SetCharacterName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 NetId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                             PlayerName                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PartyHUD_MemberRow_C::SetCharacterName(const struct FUniqueNetIdRepl& NetId, class FText PlayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartyHUD_MemberRow_C", "SetCharacterName");

	Params::WBP_PartyHUD_MemberRow_C_SetCharacterName Parms{};

	Parms.NetId = std::move(NetId);
	Parms.PlayerName = PlayerName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PartyHUD_MemberRow.WBP_PartyHUD_MemberRow_C.UpdateFromParty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_PartyManager*                CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsCurrentPartyValid_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_PartyManager*                CallFunc_GetLocalPlayerSubsystem_ReturnValue_1         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyHUD_MemberRow_C::UpdateFromParty(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class UVAL_PartyManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsCurrentPartyValid_ReturnValue, class UVAL_PartyManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, bool CallFunc_EqualEqual_ReturnValue, ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartyHUD_MemberRow_C", "UpdateFromParty");

	Params::WBP_PartyHUD_MemberRow_C_UpdateFromParty Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_IsCurrentPartyValid_ReturnValue = CallFunc_IsCurrentPartyValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_1 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ReturnValue = CallFunc_EqualEqual_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PartyHUD_MemberRow.WBP_PartyHUD_MemberRow_C.UpdateFromPartyMember
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVAL_PartyMember                 Member                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_PartyHUD_MemberRow_C::UpdateFromPartyMember(const struct FVAL_PartyMember& Member)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartyHUD_MemberRow_C", "UpdateFromPartyMember");

	Params::WBP_PartyHUD_MemberRow_C_UpdateFromPartyMember Parms{};

	Parms.Member = std::move(Member);

	UObject::ProcessEvent(Func, &Parms);
}

}

