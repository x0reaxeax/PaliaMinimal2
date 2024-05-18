#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NewInboundGuildInvitationNotificationBuilder

#include "Basic.hpp"

#include "BP_NewInboundGuildInvitationNotificationBuilder_classes.hpp"
#include "BP_NewInboundGuildInvitationNotificationBuilder_parameters.hpp"


namespace SDK
{

// Function BP_NewInboundGuildInvitationNotificationBuilder.BP_NewInboundGuildInvitationNotificationBuilder_C.CreateIncomingInvitationWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>             WidgetClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FGuid                            Param_PlayerGuildId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl                 Param_InviterId                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UUserWidget*                      NewWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsDesktop_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           CallFunc_LoadClassAsset_Blocking_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                           K2Node_ClassDynamicCast_AsUser_Widget                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_ClassDynamicCast_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsMobile_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Notification_NewInboundGuildInvitation_PF_C*K2Node_DynamicCast_AsWBP_Notification_New_Inbound_Guild_Invitation_PF(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Notification_NewInboundGuildInvitation_CM_C*K2Node_DynamicCast_AsWBP_Notification_New_Inbound_Guild_Invitation_CM(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsConsole_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NewInboundGuildInvitationNotificationBuilder_C::CreateIncomingInvitationWidget(TSoftClassPtr<class UClass> WidgetClass, const struct FGuid& Param_PlayerGuildId, const struct FUniqueNetIdRepl& Param_InviterId, class UUserWidget** NewWidget, bool CallFunc_IsDesktop_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, class UUserWidget* CallFunc_Create_ReturnValue, bool CallFunc_IsMobile_ReturnValue, class UWBP_Notification_NewInboundGuildInvitation_PF_C* K2Node_DynamicCast_AsWBP_Notification_New_Inbound_Guild_Invitation_PF, bool K2Node_DynamicCast_bSuccess, class UWBP_Notification_NewInboundGuildInvitation_CM_C* K2Node_DynamicCast_AsWBP_Notification_New_Inbound_Guild_Invitation_CM, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsConsole_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NewInboundGuildInvitationNotificationBuilder_C", "CreateIncomingInvitationWidget");

	Params::BP_NewInboundGuildInvitationNotificationBuilder_C_CreateIncomingInvitationWidget Parms{};

	Parms.WidgetClass = WidgetClass;
	Parms.Param_PlayerGuildId = std::move(Param_PlayerGuildId);
	Parms.Param_InviterId = std::move(Param_InviterId);
	Parms.CallFunc_IsDesktop_ReturnValue = CallFunc_IsDesktop_ReturnValue;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsUser_Widget = K2Node_ClassDynamicCast_AsUser_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsMobile_ReturnValue = CallFunc_IsMobile_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Notification_New_Inbound_Guild_Invitation_PF = K2Node_DynamicCast_AsWBP_Notification_New_Inbound_Guild_Invitation_PF;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsWBP_Notification_New_Inbound_Guild_Invitation_CM = K2Node_DynamicCast_AsWBP_Notification_New_Inbound_Guild_Invitation_CM;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsConsole_ReturnValue = CallFunc_IsConsole_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewWidget != nullptr)
		*NewWidget = Parms.NewWidget;
}


// Function BP_NewInboundGuildInvitationNotificationBuilder.BP_NewInboundGuildInvitationNotificationBuilder_C.Handle Get Player Guild Succeeded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVAL_PlayerGuild                 PlayerGuild                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class US6UI_UIManagerWidgetBase*        CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UClass>             CallFunc_RedirectStateType_ReturnValue                 (UObjectWrapper, HasGetValueTypeHash)
// class UUserWidget*                      CallFunc_CreateIncomingInvitationWidget_NewWidget      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_NewInboundGuildInvitationNotificationBuilder_C::Handle_Get_Player_Guild_Succeeded(const struct FVAL_PlayerGuild& PlayerGuild, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, TSoftClassPtr<class UClass> CallFunc_RedirectStateType_ReturnValue, class UUserWidget* CallFunc_CreateIncomingInvitationWidget_NewWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NewInboundGuildInvitationNotificationBuilder_C", "Handle Get Player Guild Succeeded");

	Params::BP_NewInboundGuildInvitationNotificationBuilder_C_Handle_Get_Player_Guild_Succeeded Parms{};

	Parms.PlayerGuild = std::move(PlayerGuild);
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_RedirectStateType_ReturnValue = CallFunc_RedirectStateType_ReturnValue;
	Parms.CallFunc_CreateIncomingInvitationWidget_NewWidget = CallFunc_CreateIncomingInvitationWidget_NewWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NewInboundGuildInvitationNotificationBuilder.BP_NewInboundGuildInvitationNotificationBuilder_C.HandleGetNeighborgoodFailed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ErrorMessage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_NewInboundGuildInvitationNotificationBuilder_C::HandleGetNeighborgoodFailed(const class FString& ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NewInboundGuildInvitationNotificationBuilder_C", "HandleGetNeighborgoodFailed");

	Params::BP_NewInboundGuildInvitationNotificationBuilder_C_HandleGetNeighborgoodFailed Parms{};

	Parms.ErrorMessage = std::move(ErrorMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NewInboundGuildInvitationNotificationBuilder.BP_NewInboundGuildInvitationNotificationBuilder_C.OnFinishedBuilding__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_NewInboundGuildInvitationNotificationBuilder_C*Builder                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          BuiltNotification                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_NewInboundGuildInvitationNotificationBuilder_C::OnFinishedBuilding__DelegateSignature(class UBP_NewInboundGuildInvitationNotificationBuilder_C* Builder, class UWidget* BuiltNotification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NewInboundGuildInvitationNotificationBuilder_C", "OnFinishedBuilding__DelegateSignature");

	Params::BP_NewInboundGuildInvitationNotificationBuilder_C_OnFinishedBuilding__DelegateSignature Parms{};

	Parms.Builder = Builder;
	Parms.BuiltNotification = BuiltNotification;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NewInboundGuildInvitationNotificationBuilder.BP_NewInboundGuildInvitationNotificationBuilder_C.StartBuilding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US6UI_UIManagerWidgetBase*        CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UClass>             CallFunc_RedirectStateType_ReturnValue                 (UObjectWrapper, HasGetValueTypeHash)
// TDelegate<void(const class FString& ErrorMessage)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(const struct FVAL_PlayerGuild& PlayerGuild)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      CallFunc_CreateIncomingInvitationWidget_NewWidget      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVAL_PlayerGuild                 CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo          ()
// bool                                    CallFunc_TryGetPlayerGuild_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NewInboundGuildInvitationNotificationBuilder_C::StartBuilding(class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, TSoftClassPtr<class UClass> CallFunc_RedirectStateType_ReturnValue, TDelegate<void(const class FString& ErrorMessage)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(const struct FVAL_PlayerGuild& PlayerGuild)> K2Node_CreateDelegate_OutputDelegate_1, class UUserWidget* CallFunc_CreateIncomingInvitationWidget_NewWidget, const struct FVAL_PlayerGuild& CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo, bool CallFunc_TryGetPlayerGuild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NewInboundGuildInvitationNotificationBuilder_C", "StartBuilding");

	Params::BP_NewInboundGuildInvitationNotificationBuilder_C_StartBuilding Parms{};

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_RedirectStateType_ReturnValue = CallFunc_RedirectStateType_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_CreateIncomingInvitationWidget_NewWidget = CallFunc_CreateIncomingInvitationWidget_NewWidget;
	Parms.CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo = std::move(CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo);
	Parms.CallFunc_TryGetPlayerGuild_ReturnValue = CallFunc_TryGetPlayerGuild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

