#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ListEntry_CommunityRequest_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ListEntry_CommunityRequest_CM.WBP_ListEntry_CommunityRequest_CM_C
// 0x0108 (0x03C8 - 0x02C0)
class UWBP_ListEntry_CommunityRequest_CM_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_Border_Styled*                   BackerDefault;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   BackerHighlight;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        BackerSwitcher;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Close_02_CM_C*     Button_Dismiss;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Primary_01_CM_C*   Button_Primary_Accept;                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              DefaultAcceptBtn;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_103;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class US6UI_CustomNavigationGroup*            S6UI_CustomNavigationGroup_Request;                // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_CommunityName;                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlatformPlayerName_C*              WBP_PlatformPlayerName;                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAcceptRequest;                                   // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDismissRequest;                                  // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVAL_PlayerGuildInvitation             Guild_Invite;                                      // 0x0340(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnMarkFocusUI;                                     // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_ListEntry_CommunityRequest_CM_Button_Close_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ListEntry_CommunityRequest_CM_Button_Primary_Accept_1_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
	void BndEvt__WBP_ListEntry_CommunityRequest_CM_Button_Primary_Accept_1_K2Node_ComponentBoundEvent_5_ButtonHovered__DelegateSignature();
	void BndEvt__WBP_ListEntry_CommunityRequest_CM_DefaultAcceptBtn_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ListEntry_CommunityRequest_CM_S6UI_CustomNavigationGroup_Request_K2Node_ComponentBoundEvent_4_OnCustomNavigationGroupInitialized__DelegateSignature(class US6UI_CustomNavigationGroup* NavGroup);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_WBP_ListEntry_CommunityRequest_CM(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, int32 CallFunc_PostGlobalEvent_ReturnValue, class UBP_ListObject_CommunityRequest_C* K2Node_DynamicCast_AsBP_List_Object_Community_Request, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_PostGlobalEvent_ReturnValue_1, TDelegate<void(const class FString& ErrorMessage)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(const struct FVAL_PlayerGuild& PlayerGuild)> K2Node_CreateDelegate_OutputDelegate_1, class UVAL_PlayerGuildSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FVAL_PlayerGuild& CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo, bool CallFunc_TryGetPlayerGuild_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class US6UI_CustomNavigationGroup* K2Node_ComponentBoundEvent_NavGroup, TArray<class UWidget*>& K2Node_MakeArray_Array);
	void HandleEnhancedInputAction(class UInputAction* IA, bool* IsHandled, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void HandleQueryPlayerGuildFailed(const class FString& ErrorMessage);
	void HandleQueryPlayerGuildSucceeded(const struct FVAL_PlayerGuild& Guild);
	void OnAcceptRequest__DelegateSignature(const struct FVAL_PlayerGuildInvitation& GuildInvitation);
	void OnDismissRequest__DelegateSignature(const struct FVAL_PlayerGuildInvitation& GuildInvitation);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FF_CommonUIButtonPrompt& K2Node_MakeStruct_F_CommonUIButtonPrompt, const struct FF_CommonUIButtonPrompt& K2Node_MakeStruct_F_CommonUIButtonPrompt_1, const struct FF_CommonUIButtonPrompt& K2Node_MakeStruct_F_CommonUIButtonPrompt_2, TArray<struct FF_CommonUIButtonPrompt>& K2Node_MakeArray_Array, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnMarkFocusUI__DelegateSignature(class UWidget* Widget, TArray<struct FF_CommonUIButtonPrompt>& UIPrompt);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ListEntry_CommunityRequest_CM_C">();
	}
	static class UWBP_ListEntry_CommunityRequest_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ListEntry_CommunityRequest_CM_C>();
	}
};
static_assert(alignof(UWBP_ListEntry_CommunityRequest_CM_C) == 0x000008, "Wrong alignment on UWBP_ListEntry_CommunityRequest_CM_C");
static_assert(sizeof(UWBP_ListEntry_CommunityRequest_CM_C) == 0x0003C8, "Wrong size on UWBP_ListEntry_CommunityRequest_CM_C");
static_assert(offsetof(UWBP_ListEntry_CommunityRequest_CM_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_ListEntry_CommunityRequest_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_CommunityRequest_CM_C, BackerDefault) == 0x0002C8, "Member 'UWBP_ListEntry_CommunityRequest_CM_C::BackerDefault' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_CommunityRequest_CM_C, BackerHighlight) == 0x0002D0, "Member 'UWBP_ListEntry_CommunityRequest_CM_C::BackerHighlight' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_CommunityRequest_CM_C, BackerSwitcher) == 0x0002D8, "Member 'UWBP_ListEntry_CommunityRequest_CM_C::BackerSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_CommunityRequest_CM_C, Button_Dismiss) == 0x0002E0, "Member 'UWBP_ListEntry_CommunityRequest_CM_C::Button_Dismiss' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_CommunityRequest_CM_C, Button_Primary_Accept) == 0x0002E8, "Member 'UWBP_ListEntry_CommunityRequest_CM_C::Button_Primary_Accept' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_CommunityRequest_CM_C, DefaultAcceptBtn) == 0x0002F0, "Member 'UWBP_ListEntry_CommunityRequest_CM_C::DefaultAcceptBtn' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_CommunityRequest_CM_C, Image) == 0x0002F8, "Member 'UWBP_ListEntry_CommunityRequest_CM_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_CommunityRequest_CM_C, Image_103) == 0x000300, "Member 'UWBP_ListEntry_CommunityRequest_CM_C::Image_103' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_CommunityRequest_CM_C, S6UI_CustomNavigationGroup_Request) == 0x000308, "Member 'UWBP_ListEntry_CommunityRequest_CM_C::S6UI_CustomNavigationGroup_Request' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_CommunityRequest_CM_C, TextBlock_CommunityName) == 0x000310, "Member 'UWBP_ListEntry_CommunityRequest_CM_C::TextBlock_CommunityName' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_CommunityRequest_CM_C, WBP_PlatformPlayerName) == 0x000318, "Member 'UWBP_ListEntry_CommunityRequest_CM_C::WBP_PlatformPlayerName' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_CommunityRequest_CM_C, OnAcceptRequest) == 0x000320, "Member 'UWBP_ListEntry_CommunityRequest_CM_C::OnAcceptRequest' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_CommunityRequest_CM_C, OnDismissRequest) == 0x000330, "Member 'UWBP_ListEntry_CommunityRequest_CM_C::OnDismissRequest' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_CommunityRequest_CM_C, Guild_Invite) == 0x000340, "Member 'UWBP_ListEntry_CommunityRequest_CM_C::Guild_Invite' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_CommunityRequest_CM_C, OnMarkFocusUI) == 0x0003B8, "Member 'UWBP_ListEntry_CommunityRequest_CM_C::OnMarkFocusUI' has a wrong offset!");

}

