#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TIM_ChatTextEmoji_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TIM_ChatTextEmoji_CM.WBP_TIM_ChatTextEmoji_CM_C
// 0x0038 (0x02F8 - 0x02C0)
class UWBP_TIM_ChatTextEmoji_CM_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_Button_CM_C*              Button_Emoji;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Emoji_TextBlock;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Selected;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   EmojiText;                                         // 0x02E0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__WBP_TIM_ChatTextEmoji_CM_Button_Emoji_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_TIM_ChatTextEmoji_CM_Button_Emoji_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_TIM_ChatTextEmoji_CM_Button_Emoji_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_WBP_TIM_ChatTextEmoji_CM(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, class UBP_TIM_ChatTextEmojiListItem_C* K2Node_DynamicCast_AsBP_TIM_Chat_Text_Emoji_List_Item, bool K2Node_DynamicCast_bSuccess, class UChatManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class FText CallFunc_GetText_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnListItemObjectSet(class UObject* ListItemObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TIM_ChatTextEmoji_CM_C">();
	}
	static class UWBP_TIM_ChatTextEmoji_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TIM_ChatTextEmoji_CM_C>();
	}
};
static_assert(alignof(UWBP_TIM_ChatTextEmoji_CM_C) == 0x000008, "Wrong alignment on UWBP_TIM_ChatTextEmoji_CM_C");
static_assert(sizeof(UWBP_TIM_ChatTextEmoji_CM_C) == 0x0002F8, "Wrong size on UWBP_TIM_ChatTextEmoji_CM_C");
static_assert(offsetof(UWBP_TIM_ChatTextEmoji_CM_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_TIM_ChatTextEmoji_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatTextEmoji_CM_C, Button_Emoji) == 0x0002C8, "Member 'UWBP_TIM_ChatTextEmoji_CM_C::Button_Emoji' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatTextEmoji_CM_C, Emoji_TextBlock) == 0x0002D0, "Member 'UWBP_TIM_ChatTextEmoji_CM_C::Emoji_TextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatTextEmoji_CM_C, Image_Selected) == 0x0002D8, "Member 'UWBP_TIM_ChatTextEmoji_CM_C::Image_Selected' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatTextEmoji_CM_C, EmojiText) == 0x0002E0, "Member 'UWBP_TIM_ChatTextEmoji_CM_C::EmojiText' has a wrong offset!");

}

