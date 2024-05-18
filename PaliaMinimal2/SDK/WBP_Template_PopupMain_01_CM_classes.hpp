#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Template_PopupMain_01_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "BP_TopBackerSettings_CloseButton_structs.hpp"
#include "BP_TopBackerSettings_Popup_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Template_PopupMain_01_CM.WBP_Template_PopupMain_01_CM_C
// 0x0128 (0x03E8 - 0x02C0)
class UWBP_Template_PopupMain_01_CM_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                             NamedSlot_Content;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TopBacker_01_CM_C*                 WBP_TopBacker_CloseButton_CM;                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnExitButtonClicked;                               // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FMargin                                ContentPadding;                                    // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseTopHeaderWithCloseButton;                       // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_516D[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBP_TopBackerSettings_Popup            Settings_Popup;                                    // 0x0300(0x0040)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FBP_TopBackerSettings_CloseButton      Settings_CloseButton;                              // 0x0340(0x00A0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	EHorizontalAlignment                          HAlign_Content;                                    // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVerticalAlignment                            VAlign_Content;                                    // 0x03E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Template_PopupMain_01_CM_WBP_TopBacker_CloseButton_CM_K2Node_ComponentBoundEvent_1_OnExitButtonClicked__DelegateSignature();
	void CheckResetSettings(const struct FBP_TopBackerSettings_CloseButton& TempSettings, bool CallFunc_IsConsolePlatform_ReturnValue);
	void ExecuteUbergraph_WBP_Template_PopupMain_01_CM(int32 EntryPoint, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_Is_Visible);
	void OnExitButtonClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Set_Close_Button_Visibility(bool Is_Visible);
	void SetHeaderText(class FText InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Template_PopupMain_01_CM_C">();
	}
	static class UWBP_Template_PopupMain_01_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Template_PopupMain_01_CM_C>();
	}
};
static_assert(alignof(UWBP_Template_PopupMain_01_CM_C) == 0x000008, "Wrong alignment on UWBP_Template_PopupMain_01_CM_C");
static_assert(sizeof(UWBP_Template_PopupMain_01_CM_C) == 0x0003E8, "Wrong size on UWBP_Template_PopupMain_01_CM_C");
static_assert(offsetof(UWBP_Template_PopupMain_01_CM_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_Template_PopupMain_01_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupMain_01_CM_C, NamedSlot_Content) == 0x0002C8, "Member 'UWBP_Template_PopupMain_01_CM_C::NamedSlot_Content' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupMain_01_CM_C, WBP_TopBacker_CloseButton_CM) == 0x0002D0, "Member 'UWBP_Template_PopupMain_01_CM_C::WBP_TopBacker_CloseButton_CM' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupMain_01_CM_C, OnExitButtonClicked) == 0x0002D8, "Member 'UWBP_Template_PopupMain_01_CM_C::OnExitButtonClicked' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupMain_01_CM_C, ContentPadding) == 0x0002E8, "Member 'UWBP_Template_PopupMain_01_CM_C::ContentPadding' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupMain_01_CM_C, UseTopHeaderWithCloseButton) == 0x0002F8, "Member 'UWBP_Template_PopupMain_01_CM_C::UseTopHeaderWithCloseButton' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupMain_01_CM_C, Settings_Popup) == 0x000300, "Member 'UWBP_Template_PopupMain_01_CM_C::Settings_Popup' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupMain_01_CM_C, Settings_CloseButton) == 0x000340, "Member 'UWBP_Template_PopupMain_01_CM_C::Settings_CloseButton' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupMain_01_CM_C, HAlign_Content) == 0x0003E0, "Member 'UWBP_Template_PopupMain_01_CM_C::HAlign_Content' has a wrong offset!");
static_assert(offsetof(UWBP_Template_PopupMain_01_CM_C, VAlign_Content) == 0x0003E1, "Member 'UWBP_Template_PopupMain_01_CM_C::VAlign_Content' has a wrong offset!");

}

