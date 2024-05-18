#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LinkSteamAccountFlow_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ValeriaUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_LinkSteamAccountFlow_CM.WBP_LinkSteamAccountFlow_CM_C
// 0x0080 (0x0590 - 0x0510)
class UWBP_LinkSteamAccountFlow_CM_C final : public ULinkSteamAccountFlowBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           Complete;                                          // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Primary_01_CM_C*   Confirm_Button;                                    // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AnimatedLoading_Chapaa_C*          ConnectingIcon;                                    // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           LinkConfirm;                                       // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginScreen_CM_C*                  WBP_LoginScreen_CM;                                // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Primary_01_CM_C*   WBP_Template_Button_Primary_01_CM;                 // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Secondary_01_CM_C* WBP_Template_Button_Secondary_01_CM_1;             // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_ProgressTracker_CM_C*     WBP_Template_ProgressTracker_CM;                   // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_1;                                  // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnBackPressed;                                     // 0x0560(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSteamLoginComplete;                              // 0x0570(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnLinkedFailurePropagate;                          // 0x0580(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnLinkedFailurePropagate__DelegateSignature(class FText ErrorMessage);
	void BndEvt__WBP_LinkSteamAccountFlow_CM_WBP_Template_Button_Primary_01_CM_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
	void BndEvt__WBP_LinkSteamAccountFlow_CM_WBP_Template_Button_Secondary_01_CM_1_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_LinkSteamAccountFlow_CM_WBP_Template_Button_Step1_Continue_1_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WBP_LinkSteamAccountFlow_CM(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, const class FString& K2Node_Event_ErrorMessage_1, int32 K2Node_Event_ErrorCode_1, const class FString& K2Node_Event_ErrorMessage, int32 K2Node_Event_ErrorCode);
	void HandleLinkFailure(int32 Code, const class FString& Msg, const class FString& CallFunc_GetErrorMessageFromResponse_ReturnValue, class FText CallFunc_LinkErrorMessage_ReturnValue);
	void OnBackPreLogin();
	void OnBackPressed__DelegateSignature();
	void OnPlatformLinkFailure(const class FString& ErrorMessage, int32 ErrorCode);
	void OnPlatformLinkSuccess();
	void OnPlatformLoggedInFailure(const class FString& ErrorMessage, int32 ErrorCode);
	void OnPlatformLoggedInSuccess();
	void OnPreLogin();
	void OnSteamLoginComplete__DelegateSignature();
	void SetPage(class UWidget* Widget, int32 ActivePage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LinkSteamAccountFlow_CM_C">();
	}
	static class UWBP_LinkSteamAccountFlow_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LinkSteamAccountFlow_CM_C>();
	}
};
static_assert(alignof(UWBP_LinkSteamAccountFlow_CM_C) == 0x000008, "Wrong alignment on UWBP_LinkSteamAccountFlow_CM_C");
static_assert(sizeof(UWBP_LinkSteamAccountFlow_CM_C) == 0x000590, "Wrong size on UWBP_LinkSteamAccountFlow_CM_C");
static_assert(offsetof(UWBP_LinkSteamAccountFlow_CM_C, UberGraphFrame) == 0x000510, "Member 'UWBP_LinkSteamAccountFlow_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_LinkSteamAccountFlow_CM_C, Complete) == 0x000518, "Member 'UWBP_LinkSteamAccountFlow_CM_C::Complete' has a wrong offset!");
static_assert(offsetof(UWBP_LinkSteamAccountFlow_CM_C, Confirm_Button) == 0x000520, "Member 'UWBP_LinkSteamAccountFlow_CM_C::Confirm_Button' has a wrong offset!");
static_assert(offsetof(UWBP_LinkSteamAccountFlow_CM_C, ConnectingIcon) == 0x000528, "Member 'UWBP_LinkSteamAccountFlow_CM_C::ConnectingIcon' has a wrong offset!");
static_assert(offsetof(UWBP_LinkSteamAccountFlow_CM_C, LinkConfirm) == 0x000530, "Member 'UWBP_LinkSteamAccountFlow_CM_C::LinkConfirm' has a wrong offset!");
static_assert(offsetof(UWBP_LinkSteamAccountFlow_CM_C, WBP_LoginScreen_CM) == 0x000538, "Member 'UWBP_LinkSteamAccountFlow_CM_C::WBP_LoginScreen_CM' has a wrong offset!");
static_assert(offsetof(UWBP_LinkSteamAccountFlow_CM_C, WBP_Template_Button_Primary_01_CM) == 0x000540, "Member 'UWBP_LinkSteamAccountFlow_CM_C::WBP_Template_Button_Primary_01_CM' has a wrong offset!");
static_assert(offsetof(UWBP_LinkSteamAccountFlow_CM_C, WBP_Template_Button_Secondary_01_CM_1) == 0x000548, "Member 'UWBP_LinkSteamAccountFlow_CM_C::WBP_Template_Button_Secondary_01_CM_1' has a wrong offset!");
static_assert(offsetof(UWBP_LinkSteamAccountFlow_CM_C, WBP_Template_ProgressTracker_CM) == 0x000550, "Member 'UWBP_LinkSteamAccountFlow_CM_C::WBP_Template_ProgressTracker_CM' has a wrong offset!");
static_assert(offsetof(UWBP_LinkSteamAccountFlow_CM_C, WidgetSwitcher_1) == 0x000558, "Member 'UWBP_LinkSteamAccountFlow_CM_C::WidgetSwitcher_1' has a wrong offset!");
static_assert(offsetof(UWBP_LinkSteamAccountFlow_CM_C, OnBackPressed) == 0x000560, "Member 'UWBP_LinkSteamAccountFlow_CM_C::OnBackPressed' has a wrong offset!");
static_assert(offsetof(UWBP_LinkSteamAccountFlow_CM_C, OnSteamLoginComplete) == 0x000570, "Member 'UWBP_LinkSteamAccountFlow_CM_C::OnSteamLoginComplete' has a wrong offset!");
static_assert(offsetof(UWBP_LinkSteamAccountFlow_CM_C, OnLinkedFailurePropagate) == 0x000580, "Member 'UWBP_LinkSteamAccountFlow_CM_C::OnLinkedFailurePropagate' has a wrong offset!");

}

