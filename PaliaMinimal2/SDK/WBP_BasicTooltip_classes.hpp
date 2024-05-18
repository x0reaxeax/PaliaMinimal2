#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BasicTooltip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BasicTooltip.WBP_BasicTooltip_C
// 0x0030 (0x02F0 - 0x02C0)
class UWBP_BasicTooltip_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Image;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_Body;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_Header;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TooltipImage;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void CenterBodyText(class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue);
	void Construct();
	void ExecuteUbergraph_WBP_BasicTooltip(int32 EntryPoint, class FText K2Node_Event_Text, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void HandleOnClosed();
	void HandleOnOpening();
	void PlayTooltipAnimation();
	void Reset(class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue);
	void UpdateFullTooltip(class FText Text, class UTexture2D* Image, class FText Header);
	void UpdateHeader(class FText Header);
	void UpdateImage(class UTexture2D* Image);
	void UpdateText(class FText Param_ToolTipText);
	void UpdateToolTipText(class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BasicTooltip_C">();
	}
	static class UWBP_BasicTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BasicTooltip_C>();
	}
};
static_assert(alignof(UWBP_BasicTooltip_C) == 0x000008, "Wrong alignment on UWBP_BasicTooltip_C");
static_assert(sizeof(UWBP_BasicTooltip_C) == 0x0002F0, "Wrong size on UWBP_BasicTooltip_C");
static_assert(offsetof(UWBP_BasicTooltip_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_BasicTooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_BasicTooltip_C, FadeIn) == 0x0002C8, "Member 'UWBP_BasicTooltip_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_BasicTooltip_C, SizeBox_Image) == 0x0002D0, "Member 'UWBP_BasicTooltip_C::SizeBox_Image' has a wrong offset!");
static_assert(offsetof(UWBP_BasicTooltip_C, TextBlock_Body) == 0x0002D8, "Member 'UWBP_BasicTooltip_C::TextBlock_Body' has a wrong offset!");
static_assert(offsetof(UWBP_BasicTooltip_C, TextBlock_Header) == 0x0002E0, "Member 'UWBP_BasicTooltip_C::TextBlock_Header' has a wrong offset!");
static_assert(offsetof(UWBP_BasicTooltip_C, TooltipImage) == 0x0002E8, "Member 'UWBP_BasicTooltip_C::TooltipImage' has a wrong offset!");

}

