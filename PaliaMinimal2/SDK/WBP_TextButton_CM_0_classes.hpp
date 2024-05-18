#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TextButton_CM_0

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TextButton_CM.WBP_TextButton_CM_C
// 0x0070 (0x0330 - 0x02C0)
class WBP_TextButton_CM_0::UWBP_TextButton_CM_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_Button_Styled*                   Button;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_RichTextBlock_Styled*            RichTextStyled;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ButtonClicked;                                     // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             ButtonHovered;                                     // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             ButtonUnhovered;                                   // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   ButtonText;                                        // 0x0308(0x0018)(Edit, BlueprintVisible)
	class UVALUI_RichTextBlockStyle*              NormalRichTextStyle;                               // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVALUI_RichTextBlockStyle*              HoveredRichTextStyle;                              // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_TextButton_VALUI_Button_Styled_46_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_TextButton_VALUI_Button_Styled_46_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_TextButton_VALUI_Button_Styled_46_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ButtonClicked__DelegateSignature();
	void ButtonHovered__DelegateSignature();
	void ButtonUnhovered__DelegateSignature();
	void ExecuteUbergraph_WBP_TextButton_CM(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
	void PreConstruct(bool IsDesignTime);
	void SetText(class FText New_Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WidgetBlueprintGeneratedClass WBP_TextButton_CM.WBP_TextButton_CM_C", true, "WBP_TextButton_CM_C">();
	}
	static class WBP_TextButton_CM_0::UWBP_TextButton_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<WBP_TextButton_CM_0::UWBP_TextButton_CM_C>();
	}
};
static_assert(alignof(WBP_TextButton_CM_0::UWBP_TextButton_CM_C) == 0x000008, "Wrong alignment on WBP_TextButton_CM_0::UWBP_TextButton_CM_C");
static_assert(sizeof(WBP_TextButton_CM_0::UWBP_TextButton_CM_C) == 0x000330, "Wrong size on WBP_TextButton_CM_0::UWBP_TextButton_CM_C");
static_assert(offsetof(WBP_TextButton_CM_0::UWBP_TextButton_CM_C, UberGraphFrame) == 0x0002C0, "Member 'WBP_TextButton_CM_0::UWBP_TextButton_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(WBP_TextButton_CM_0::UWBP_TextButton_CM_C, Button) == 0x0002C8, "Member 'WBP_TextButton_CM_0::UWBP_TextButton_CM_C::Button' has a wrong offset!");
static_assert(offsetof(WBP_TextButton_CM_0::UWBP_TextButton_CM_C, RichTextStyled) == 0x0002D0, "Member 'WBP_TextButton_CM_0::UWBP_TextButton_CM_C::RichTextStyled' has a wrong offset!");
static_assert(offsetof(WBP_TextButton_CM_0::UWBP_TextButton_CM_C, ButtonClicked) == 0x0002D8, "Member 'WBP_TextButton_CM_0::UWBP_TextButton_CM_C::ButtonClicked' has a wrong offset!");
static_assert(offsetof(WBP_TextButton_CM_0::UWBP_TextButton_CM_C, ButtonHovered) == 0x0002E8, "Member 'WBP_TextButton_CM_0::UWBP_TextButton_CM_C::ButtonHovered' has a wrong offset!");
static_assert(offsetof(WBP_TextButton_CM_0::UWBP_TextButton_CM_C, ButtonUnhovered) == 0x0002F8, "Member 'WBP_TextButton_CM_0::UWBP_TextButton_CM_C::ButtonUnhovered' has a wrong offset!");
static_assert(offsetof(WBP_TextButton_CM_0::UWBP_TextButton_CM_C, ButtonText) == 0x000308, "Member 'WBP_TextButton_CM_0::UWBP_TextButton_CM_C::ButtonText' has a wrong offset!");
static_assert(offsetof(WBP_TextButton_CM_0::UWBP_TextButton_CM_C, NormalRichTextStyle) == 0x000320, "Member 'WBP_TextButton_CM_0::UWBP_TextButton_CM_C::NormalRichTextStyle' has a wrong offset!");
static_assert(offsetof(WBP_TextButton_CM_0::UWBP_TextButton_CM_C, HoveredRichTextStyle) == 0x000328, "Member 'WBP_TextButton_CM_0::UWBP_TextButton_CM_C::HoveredRichTextStyle' has a wrong offset!");

}
