#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Timer_Crafting

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Timer_Crafting.WBP_Timer_Crafting_C
// 0x0088 (0x0348 - 0x02C0)
class UWBP_Timer_Crafting_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_154;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ProgressBar_Styled*              ProgressBar;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TimerText;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         StartValeriaTimeSecs;                              // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EndValeriaTimeSecs;                                // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrValeriaTimeSecs;                               // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Reverse;                                           // 0x02EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C49[0x3];                                     // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           ColorStart;                                        // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ColorMid;                                          // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ColorEnding;                                       // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RedZonePercent;                                    // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Alpha;                                             // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AlphaOld;                                          // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnRedZoneThreshold;                                // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_WBP_Timer_Crafting(int32 EntryPoint, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 K2Node_CustomEvent_StartValeriaTimeSecs, int32 K2Node_CustomEvent_EndValeriaTimeSecs, bool K2Node_CustomEvent_ShouldBeReverse, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_GetValeriaTimestampSecs_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime);
	bool IsRedZone(bool CallFunc_LessEqual_DoubleDouble_ReturnValue);
	void OnRedZoneThreshold__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetCountdownTimer(int32 Param_StartValeriaTimeSecs, int32 Param_EndValeriaTimeSecs, bool ShouldBeReverse);
	void SetTimerTextVisible(ESlateVisibility Visible);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateProgressColor(bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1);
	void UpdateUI(int32 TimePassed, int32 TotalTime, double LocalAlpha, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_FMax_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, const class FString& CallFunc_FormatDuration_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Timer_Crafting_C">();
	}
	static class UWBP_Timer_Crafting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Timer_Crafting_C>();
	}
};
static_assert(alignof(UWBP_Timer_Crafting_C) == 0x000008, "Wrong alignment on UWBP_Timer_Crafting_C");
static_assert(sizeof(UWBP_Timer_Crafting_C) == 0x000348, "Wrong size on UWBP_Timer_Crafting_C");
static_assert(offsetof(UWBP_Timer_Crafting_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_Timer_Crafting_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Timer_Crafting_C, Image_154) == 0x0002C8, "Member 'UWBP_Timer_Crafting_C::Image_154' has a wrong offset!");
static_assert(offsetof(UWBP_Timer_Crafting_C, ProgressBar) == 0x0002D0, "Member 'UWBP_Timer_Crafting_C::ProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_Timer_Crafting_C, TimerText) == 0x0002D8, "Member 'UWBP_Timer_Crafting_C::TimerText' has a wrong offset!");
static_assert(offsetof(UWBP_Timer_Crafting_C, StartValeriaTimeSecs) == 0x0002E0, "Member 'UWBP_Timer_Crafting_C::StartValeriaTimeSecs' has a wrong offset!");
static_assert(offsetof(UWBP_Timer_Crafting_C, EndValeriaTimeSecs) == 0x0002E4, "Member 'UWBP_Timer_Crafting_C::EndValeriaTimeSecs' has a wrong offset!");
static_assert(offsetof(UWBP_Timer_Crafting_C, CurrValeriaTimeSecs) == 0x0002E8, "Member 'UWBP_Timer_Crafting_C::CurrValeriaTimeSecs' has a wrong offset!");
static_assert(offsetof(UWBP_Timer_Crafting_C, Reverse) == 0x0002EC, "Member 'UWBP_Timer_Crafting_C::Reverse' has a wrong offset!");
static_assert(offsetof(UWBP_Timer_Crafting_C, ColorStart) == 0x0002F0, "Member 'UWBP_Timer_Crafting_C::ColorStart' has a wrong offset!");
static_assert(offsetof(UWBP_Timer_Crafting_C, ColorMid) == 0x000300, "Member 'UWBP_Timer_Crafting_C::ColorMid' has a wrong offset!");
static_assert(offsetof(UWBP_Timer_Crafting_C, ColorEnding) == 0x000310, "Member 'UWBP_Timer_Crafting_C::ColorEnding' has a wrong offset!");
static_assert(offsetof(UWBP_Timer_Crafting_C, RedZonePercent) == 0x000320, "Member 'UWBP_Timer_Crafting_C::RedZonePercent' has a wrong offset!");
static_assert(offsetof(UWBP_Timer_Crafting_C, Alpha) == 0x000328, "Member 'UWBP_Timer_Crafting_C::Alpha' has a wrong offset!");
static_assert(offsetof(UWBP_Timer_Crafting_C, AlphaOld) == 0x000330, "Member 'UWBP_Timer_Crafting_C::AlphaOld' has a wrong offset!");
static_assert(offsetof(UWBP_Timer_Crafting_C, OnRedZoneThreshold) == 0x000338, "Member 'UWBP_Timer_Crafting_C::OnRedZoneThreshold' has a wrong offset!");

}
