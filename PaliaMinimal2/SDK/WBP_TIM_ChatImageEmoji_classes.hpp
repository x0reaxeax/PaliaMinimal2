#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TIM_ChatImageEmoji

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TIM_ChatImageEmoji.WBP_TIM_ChatImageEmoji_C
// 0x0100 (0x03C0 - 0x02C0)
class UWBP_TIM_ChatImageEmoji_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_Button_Styled*                   Emoji_Button;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Emoji_ImageWidget;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                         Pad_529B[0x8];                                     // 0x02D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            EmojiImage;                                        // 0x02E0(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   EmojiImageName;                                    // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_TIM_ChatEmoji_Emoji_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_WBP_TIM_ChatImageEmoji(int32 EntryPoint, class UChatManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, class UBP_TIM_ChatImageEmojiListItem_C* K2Node_DynamicCast_AsBP_TIM_Chat_Image_Emoji_List_Item, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnListItemObjectSet(class UObject* ListItemObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TIM_ChatImageEmoji_C">();
	}
	static class UWBP_TIM_ChatImageEmoji_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TIM_ChatImageEmoji_C>();
	}
};
static_assert(alignof(UWBP_TIM_ChatImageEmoji_C) == 0x000010, "Wrong alignment on UWBP_TIM_ChatImageEmoji_C");
static_assert(sizeof(UWBP_TIM_ChatImageEmoji_C) == 0x0003C0, "Wrong size on UWBP_TIM_ChatImageEmoji_C");
static_assert(offsetof(UWBP_TIM_ChatImageEmoji_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_TIM_ChatImageEmoji_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatImageEmoji_C, Emoji_Button) == 0x0002C8, "Member 'UWBP_TIM_ChatImageEmoji_C::Emoji_Button' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatImageEmoji_C, Emoji_ImageWidget) == 0x0002D0, "Member 'UWBP_TIM_ChatImageEmoji_C::Emoji_ImageWidget' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatImageEmoji_C, EmojiImage) == 0x0002E0, "Member 'UWBP_TIM_ChatImageEmoji_C::EmojiImage' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatImageEmoji_C, EmojiImageName) == 0x0003B0, "Member 'UWBP_TIM_ChatImageEmoji_C::EmojiImageName' has a wrong offset!");

}
