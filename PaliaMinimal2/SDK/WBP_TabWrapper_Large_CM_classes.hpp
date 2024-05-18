#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TabWrapper_Large_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TabWrapper_Large_CM.WBP_TabWrapper_Large_CM_C
// 0x0078 (0x0338 - 0x02C0)
class UWBP_TabWrapper_Large_CM_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hover;                                             // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot_Button;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonDisplayName;                                 // 0x02E0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UButton*                                ButtonContent;                                     // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   TabName;                                           // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          AllowedToPlayHoverAnim;                            // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsActiveTab;                                      // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B10[0x6];                                     // 0x030A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             IconTexture;                                       // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              IconSize;                                          // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FColor                                 IconInactiveColor;                                 // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FColor                                 IconActiveColor;                                   // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FColor                                 IconHoverColor;                                    // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_TabWrapper_Large_CM(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UPanelSlot* CallFunc_SetContent_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, struct FPointerEvent& K2Node_Event_MouseEvent_1, struct FPointerEvent& K2Node_Event_MouseEvent, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 CallFunc_AkEventGlobal_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_3);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void PreConstruct(bool IsDesignTime);
	void UpdateHoverStatePermission(bool Allowed, bool ResetTab, bool CallFunc_Not_PreBool_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TabWrapper_Large_CM_C">();
	}
	static class UWBP_TabWrapper_Large_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TabWrapper_Large_CM_C>();
	}
};
static_assert(alignof(UWBP_TabWrapper_Large_CM_C) == 0x000008, "Wrong alignment on UWBP_TabWrapper_Large_CM_C");
static_assert(sizeof(UWBP_TabWrapper_Large_CM_C) == 0x000338, "Wrong size on UWBP_TabWrapper_Large_CM_C");
static_assert(offsetof(UWBP_TabWrapper_Large_CM_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_TabWrapper_Large_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TabWrapper_Large_CM_C, Hover) == 0x0002C8, "Member 'UWBP_TabWrapper_Large_CM_C::Hover' has a wrong offset!");
static_assert(offsetof(UWBP_TabWrapper_Large_CM_C, Icon) == 0x0002D0, "Member 'UWBP_TabWrapper_Large_CM_C::Icon' has a wrong offset!");
static_assert(offsetof(UWBP_TabWrapper_Large_CM_C, NamedSlot_Button) == 0x0002D8, "Member 'UWBP_TabWrapper_Large_CM_C::NamedSlot_Button' has a wrong offset!");
static_assert(offsetof(UWBP_TabWrapper_Large_CM_C, ButtonDisplayName) == 0x0002E0, "Member 'UWBP_TabWrapper_Large_CM_C::ButtonDisplayName' has a wrong offset!");
static_assert(offsetof(UWBP_TabWrapper_Large_CM_C, ButtonContent) == 0x0002F8, "Member 'UWBP_TabWrapper_Large_CM_C::ButtonContent' has a wrong offset!");
static_assert(offsetof(UWBP_TabWrapper_Large_CM_C, TabName) == 0x000300, "Member 'UWBP_TabWrapper_Large_CM_C::TabName' has a wrong offset!");
static_assert(offsetof(UWBP_TabWrapper_Large_CM_C, AllowedToPlayHoverAnim) == 0x000308, "Member 'UWBP_TabWrapper_Large_CM_C::AllowedToPlayHoverAnim' has a wrong offset!");
static_assert(offsetof(UWBP_TabWrapper_Large_CM_C, bIsActiveTab) == 0x000309, "Member 'UWBP_TabWrapper_Large_CM_C::bIsActiveTab' has a wrong offset!");
static_assert(offsetof(UWBP_TabWrapper_Large_CM_C, IconTexture) == 0x000310, "Member 'UWBP_TabWrapper_Large_CM_C::IconTexture' has a wrong offset!");
static_assert(offsetof(UWBP_TabWrapper_Large_CM_C, IconSize) == 0x000318, "Member 'UWBP_TabWrapper_Large_CM_C::IconSize' has a wrong offset!");
static_assert(offsetof(UWBP_TabWrapper_Large_CM_C, IconInactiveColor) == 0x000328, "Member 'UWBP_TabWrapper_Large_CM_C::IconInactiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_TabWrapper_Large_CM_C, IconActiveColor) == 0x00032C, "Member 'UWBP_TabWrapper_Large_CM_C::IconActiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_TabWrapper_Large_CM_C, IconHoverColor) == 0x000330, "Member 'UWBP_TabWrapper_Large_CM_C::IconHoverColor' has a wrong offset!");

}

