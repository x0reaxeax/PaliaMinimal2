#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CheckmarkButton_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonInput_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CheckmarkButton_CM.WBP_CheckmarkButton_CM_C
// 0x0080 (0x0368 - 0x02E8)
class UWBP_CheckmarkButton_CM_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_TextBlock_Styled*                TextBlock_Text;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Checkmark_CM_C*                    WBP_Checkmark_CM;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_FocusTip_CM_C*                     WBP_FocusTip_CM;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              WBP_Template_Button_CM;                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Is_Selected;                                       // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_510D[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   In_Text;                                           // 0x0318(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnCheckedStateChanged;                             // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FMargin                                Desktop_Padding;                                   // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                                Gamepad_Padding;                                   // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEnableFocusTipPadding;                            // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_CheckmarkButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ClearSelection();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_CheckmarkButton_CM(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, const struct FFocusEvent& K2Node_Event_InFocusEvent, ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_Event_IsDesignTime, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue);
	void HandleOnInputMethodChanged_Event(ECommonInputType bNewInputType);
	void OnCheckedStateChanged__DelegateSignature(bool IsSelected);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void SetButtonPadding(ECommonInputType CurrentInputType, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FMargin& K2Node_Select_Default, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue);
	void SetFocusTipVisibility(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_HasAnyUserFocus_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_HasFocusedDescendants_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default);
	void SetSelected(bool IsSelected);
	void SetText(class FText Text);
	void ToggleCheckbox(class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CheckmarkButton_CM_C">();
	}
	static class UWBP_CheckmarkButton_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CheckmarkButton_CM_C>();
	}
};
static_assert(alignof(UWBP_CheckmarkButton_CM_C) == 0x000008, "Wrong alignment on UWBP_CheckmarkButton_CM_C");
static_assert(sizeof(UWBP_CheckmarkButton_CM_C) == 0x000368, "Wrong size on UWBP_CheckmarkButton_CM_C");
static_assert(offsetof(UWBP_CheckmarkButton_CM_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_CheckmarkButton_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CheckmarkButton_CM_C, TextBlock_Text) == 0x0002F0, "Member 'UWBP_CheckmarkButton_CM_C::TextBlock_Text' has a wrong offset!");
static_assert(offsetof(UWBP_CheckmarkButton_CM_C, WBP_Checkmark_CM) == 0x0002F8, "Member 'UWBP_CheckmarkButton_CM_C::WBP_Checkmark_CM' has a wrong offset!");
static_assert(offsetof(UWBP_CheckmarkButton_CM_C, WBP_FocusTip_CM) == 0x000300, "Member 'UWBP_CheckmarkButton_CM_C::WBP_FocusTip_CM' has a wrong offset!");
static_assert(offsetof(UWBP_CheckmarkButton_CM_C, WBP_Template_Button_CM) == 0x000308, "Member 'UWBP_CheckmarkButton_CM_C::WBP_Template_Button_CM' has a wrong offset!");
static_assert(offsetof(UWBP_CheckmarkButton_CM_C, Is_Selected) == 0x000310, "Member 'UWBP_CheckmarkButton_CM_C::Is_Selected' has a wrong offset!");
static_assert(offsetof(UWBP_CheckmarkButton_CM_C, In_Text) == 0x000318, "Member 'UWBP_CheckmarkButton_CM_C::In_Text' has a wrong offset!");
static_assert(offsetof(UWBP_CheckmarkButton_CM_C, OnCheckedStateChanged) == 0x000330, "Member 'UWBP_CheckmarkButton_CM_C::OnCheckedStateChanged' has a wrong offset!");
static_assert(offsetof(UWBP_CheckmarkButton_CM_C, Desktop_Padding) == 0x000340, "Member 'UWBP_CheckmarkButton_CM_C::Desktop_Padding' has a wrong offset!");
static_assert(offsetof(UWBP_CheckmarkButton_CM_C, Gamepad_Padding) == 0x000350, "Member 'UWBP_CheckmarkButton_CM_C::Gamepad_Padding' has a wrong offset!");
static_assert(offsetof(UWBP_CheckmarkButton_CM_C, bEnableFocusTipPadding) == 0x000360, "Member 'UWBP_CheckmarkButton_CM_C::bEnableFocusTipPadding' has a wrong offset!");

}

