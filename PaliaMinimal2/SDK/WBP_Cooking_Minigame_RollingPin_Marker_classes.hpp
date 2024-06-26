#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Cooking_Minigame_RollingPin_Marker

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Cooking_Minigame_RollingPin_Marker.WBP_Cooking_Minigame_RollingPin_Marker_C
// 0x0008 (0x02C8 - 0x02C0)
class UWBP_Cooking_Minigame_RollingPin_Marker_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       SuccessfulHit;                                     // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void PlaySuccess(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Cooking_Minigame_RollingPin_Marker_C">();
	}
	static class UWBP_Cooking_Minigame_RollingPin_Marker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Cooking_Minigame_RollingPin_Marker_C>();
	}
};
static_assert(alignof(UWBP_Cooking_Minigame_RollingPin_Marker_C) == 0x000008, "Wrong alignment on UWBP_Cooking_Minigame_RollingPin_Marker_C");
static_assert(sizeof(UWBP_Cooking_Minigame_RollingPin_Marker_C) == 0x0002C8, "Wrong size on UWBP_Cooking_Minigame_RollingPin_Marker_C");
static_assert(offsetof(UWBP_Cooking_Minigame_RollingPin_Marker_C, SuccessfulHit) == 0x0002C0, "Member 'UWBP_Cooking_Minigame_RollingPin_Marker_C::SuccessfulHit' has a wrong offset!");

}

