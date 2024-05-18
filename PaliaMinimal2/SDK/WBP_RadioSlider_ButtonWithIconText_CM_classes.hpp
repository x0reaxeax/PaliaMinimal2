#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RadioSlider_ButtonWithIconText_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_RadioSlider_ButtonWithIconText_CM.WBP_RadioSlider_ButtonWithIconText_CM_C
// 0x0088 (0x0348 - 0x02C0)
class UWBP_RadioSlider_ButtonWithIconText_CM_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_Button_CM_C*              Button_Root;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBox_TextIcon;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot_OptionalContent;                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Icon;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_Name;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlockStyle*                  TextStyle_Active;                                  // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UVALUI_TextBlockStyle*                  TextStyle_Inactive;                                // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           IconColor_Active;                                  // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           IconColor_Inactive;                                // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UVALUI_TextBlockStyle*                  TextStyle_Active_Console;                          // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UVALUI_TextBlockStyle*                  TextStyle_Inactive_Console;                        // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AddOptionalContent(class UUserWidget* Content, class UHorizontalBoxSlot** NamedSlot, class UPanelSlot* CallFunc_SetContent_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue);
	void BindIA(class UInputAction* IA);
	void BndEvt__WBP_RadioSlider_ButtonWithIconText_CM_Button_Root_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_RadioSlider_ButtonWithIconText_CM(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void OnButtonClicked__DelegateSignature(class UWBP_RadioSlider_ButtonWithIconText_CM_C* Button);
	void SetActive(bool Active, class UVALUI_TextBlockStyle* InactiveStyle, class UVALUI_TextBlockStyle* ActiveStyle, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsConsole_ReturnValue, class UVALUI_TextBlockStyle* K2Node_Select_Default, bool Temp_bool_Variable_2, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, class UVALUI_TextBlockStyle* K2Node_Select_Default_1, class UVALUI_TextBlockStyle* K2Node_Select_Default_2);
	void SetIconAndText(class FText Text, TSoftObjectPtr<class UTexture2D> Icon);
	void SetIconVisibility(bool Param_IsVisible, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
	void SetNewPadding(const struct FMargin& Param_Padding, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, bool CallFunc_IsValid_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RadioSlider_ButtonWithIconText_CM_C">();
	}
	static class UWBP_RadioSlider_ButtonWithIconText_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RadioSlider_ButtonWithIconText_CM_C>();
	}
};
static_assert(alignof(UWBP_RadioSlider_ButtonWithIconText_CM_C) == 0x000008, "Wrong alignment on UWBP_RadioSlider_ButtonWithIconText_CM_C");
static_assert(sizeof(UWBP_RadioSlider_ButtonWithIconText_CM_C) == 0x000348, "Wrong size on UWBP_RadioSlider_ButtonWithIconText_CM_C");
static_assert(offsetof(UWBP_RadioSlider_ButtonWithIconText_CM_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_RadioSlider_ButtonWithIconText_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RadioSlider_ButtonWithIconText_CM_C, Button_Root) == 0x0002C8, "Member 'UWBP_RadioSlider_ButtonWithIconText_CM_C::Button_Root' has a wrong offset!");
static_assert(offsetof(UWBP_RadioSlider_ButtonWithIconText_CM_C, HBox_TextIcon) == 0x0002D0, "Member 'UWBP_RadioSlider_ButtonWithIconText_CM_C::HBox_TextIcon' has a wrong offset!");
static_assert(offsetof(UWBP_RadioSlider_ButtonWithIconText_CM_C, Image_Icon) == 0x0002D8, "Member 'UWBP_RadioSlider_ButtonWithIconText_CM_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_RadioSlider_ButtonWithIconText_CM_C, NamedSlot_OptionalContent) == 0x0002E0, "Member 'UWBP_RadioSlider_ButtonWithIconText_CM_C::NamedSlot_OptionalContent' has a wrong offset!");
static_assert(offsetof(UWBP_RadioSlider_ButtonWithIconText_CM_C, SizeBox_Icon) == 0x0002E8, "Member 'UWBP_RadioSlider_ButtonWithIconText_CM_C::SizeBox_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_RadioSlider_ButtonWithIconText_CM_C, Text_Name) == 0x0002F0, "Member 'UWBP_RadioSlider_ButtonWithIconText_CM_C::Text_Name' has a wrong offset!");
static_assert(offsetof(UWBP_RadioSlider_ButtonWithIconText_CM_C, TextStyle_Active) == 0x0002F8, "Member 'UWBP_RadioSlider_ButtonWithIconText_CM_C::TextStyle_Active' has a wrong offset!");
static_assert(offsetof(UWBP_RadioSlider_ButtonWithIconText_CM_C, TextStyle_Inactive) == 0x000300, "Member 'UWBP_RadioSlider_ButtonWithIconText_CM_C::TextStyle_Inactive' has a wrong offset!");
static_assert(offsetof(UWBP_RadioSlider_ButtonWithIconText_CM_C, IconColor_Active) == 0x000308, "Member 'UWBP_RadioSlider_ButtonWithIconText_CM_C::IconColor_Active' has a wrong offset!");
static_assert(offsetof(UWBP_RadioSlider_ButtonWithIconText_CM_C, IconColor_Inactive) == 0x000318, "Member 'UWBP_RadioSlider_ButtonWithIconText_CM_C::IconColor_Inactive' has a wrong offset!");
static_assert(offsetof(UWBP_RadioSlider_ButtonWithIconText_CM_C, OnButtonClicked) == 0x000328, "Member 'UWBP_RadioSlider_ButtonWithIconText_CM_C::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(UWBP_RadioSlider_ButtonWithIconText_CM_C, TextStyle_Active_Console) == 0x000338, "Member 'UWBP_RadioSlider_ButtonWithIconText_CM_C::TextStyle_Active_Console' has a wrong offset!");
static_assert(offsetof(UWBP_RadioSlider_ButtonWithIconText_CM_C, TextStyle_Inactive_Console) == 0x000340, "Member 'UWBP_RadioSlider_ButtonWithIconText_CM_C::TextStyle_Inactive_Console' has a wrong offset!");

}

