#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Template_ProgressBar_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Template_ProgressBar_CM.WBP_Template_ProgressBar_CM_C
// 0x00A0 (0x0360 - 0x02C0)
class UWBP_Template_ProgressBar_CM_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             ItemCount;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LockedAmountText;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               SliderAmountContainer;                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SliderAmountText;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SliderSizeBox;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ProgressBar_Styled*              VALUI_ProgressBar_Complete;                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ProgressBar_Styled*              VALUI_ProgressBar_Locked;                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ProgressBar_Styled*              VALUI_ProgressBar_Unlocked;                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Slider_CM_C*                       WBP_Slider_CM;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        ValueCurrent;                                      // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        ValueLocked;                                       // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        ValueMax;                                          // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        ValuePossible;                                     // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bCanContribute;                                    // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsComplete;                                       // 0x0331(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B97[0x2];                                     // 0x0332(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CheckAgainstValue;                                 // 0x0334(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ValueScale;                                        // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFocusedSlider;                                   // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSliderMouseEnter;                                // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void AttemptToSetSliderValue(double Value, bool* WasSet, float CallFunc_GetValue_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast);
	void BndEvt__WBP_Template_ProgressBar_CM_WBP_Slider_CM_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature(double Value);
	void BndEvt__WBP_Template_ProgressBar_CM_WBP_Slider_CM_K2Node_ComponentBoundEvent_1_OnMouseCaptureEnd__DelegateSignature();
	void BndEvt__WBP_Template_ProgressBar_CM_WBP_Slider_CM_K2Node_ComponentBoundEvent_2_OnControllerCaptureEnd__DelegateSignature();
	void Clamp_Values(double Current, double Locked, double Max, double Possible, double CallFunc_FClamp_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_FMin_ReturnValue, double CallFunc_FClamp_ReturnValue_2);
	void ExecuteUbergraph_WBP_Template_ProgressBar_CM(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float CallFunc_GetValue_ReturnValue, double K2Node_ComponentBoundEvent_Value, const struct FGeometry& K2Node_Event_MyGeometry, struct FPointerEvent& K2Node_Event_MouseEvent, double CallFunc_SetNewValue_Amount_ImplicitCast);
	double GetCurrentValue(double CallFunc_Multiply_DoubleDouble_ReturnValue);
	void InitializeValues(double Current, double Locked, double Max, double Possible, bool IsKeepSliderValue, double CallFunc_NormalizeValues_OutCurrent, double CallFunc_NormalizeValues_OutLocked, double CallFunc_NormalizeValues_OutMax, double CallFunc_NormalizeValues_OutPossible, float CallFunc_SetValue_InValue_ImplicitCast);
	void NormalizeValues(double Current, double Locked, double Max, double Possible, double* OutCurrent, double* OutLocked, double* OutMax, double* OutPossible, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_4, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float CallFunc_SetStepSize_InValue_ImplicitCast);
	void OnFocusedSlider__DelegateSignature(class UWidget* Widget);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnSliderMouseEnter__DelegateSignature(class UWidget* Widget);
	void PreConstruct(bool IsDesignTime);
	void SetNewValue(double Amount, double CallFunc_Subtract_DoubleDouble_ReturnValue);
	void SetProgressBarState(bool IsEnabled, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
	void SetValues(double Current, double Locked, double Max, double Possible, float CallFunc_GetValue_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_Value_ImplicitCast);
	void UpdateProgressVisuals(double _CurrentAndLocked, int32 CallFunc_AkEventGlobal_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Round_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Round_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Round_ReturnValue_2, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, int32 CallFunc_Round_ReturnValue_3, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, float CallFunc_SetMaxValue_InValue_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetPercent_InPercent_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Template_ProgressBar_CM_C">();
	}
	static class UWBP_Template_ProgressBar_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Template_ProgressBar_CM_C>();
	}
};
static_assert(alignof(UWBP_Template_ProgressBar_CM_C) == 0x000008, "Wrong alignment on UWBP_Template_ProgressBar_CM_C");
static_assert(sizeof(UWBP_Template_ProgressBar_CM_C) == 0x000360, "Wrong size on UWBP_Template_ProgressBar_CM_C");
static_assert(offsetof(UWBP_Template_ProgressBar_CM_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_Template_ProgressBar_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ProgressBar_CM_C, ItemCount) == 0x0002C8, "Member 'UWBP_Template_ProgressBar_CM_C::ItemCount' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ProgressBar_CM_C, LockedAmountText) == 0x0002D0, "Member 'UWBP_Template_ProgressBar_CM_C::LockedAmountText' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ProgressBar_CM_C, SliderAmountContainer) == 0x0002D8, "Member 'UWBP_Template_ProgressBar_CM_C::SliderAmountContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ProgressBar_CM_C, SliderAmountText) == 0x0002E0, "Member 'UWBP_Template_ProgressBar_CM_C::SliderAmountText' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ProgressBar_CM_C, SliderSizeBox) == 0x0002E8, "Member 'UWBP_Template_ProgressBar_CM_C::SliderSizeBox' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ProgressBar_CM_C, VALUI_ProgressBar_Complete) == 0x0002F0, "Member 'UWBP_Template_ProgressBar_CM_C::VALUI_ProgressBar_Complete' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ProgressBar_CM_C, VALUI_ProgressBar_Locked) == 0x0002F8, "Member 'UWBP_Template_ProgressBar_CM_C::VALUI_ProgressBar_Locked' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ProgressBar_CM_C, VALUI_ProgressBar_Unlocked) == 0x000300, "Member 'UWBP_Template_ProgressBar_CM_C::VALUI_ProgressBar_Unlocked' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ProgressBar_CM_C, WBP_Slider_CM) == 0x000308, "Member 'UWBP_Template_ProgressBar_CM_C::WBP_Slider_CM' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ProgressBar_CM_C, ValueCurrent) == 0x000310, "Member 'UWBP_Template_ProgressBar_CM_C::ValueCurrent' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ProgressBar_CM_C, ValueLocked) == 0x000318, "Member 'UWBP_Template_ProgressBar_CM_C::ValueLocked' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ProgressBar_CM_C, ValueMax) == 0x000320, "Member 'UWBP_Template_ProgressBar_CM_C::ValueMax' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ProgressBar_CM_C, ValuePossible) == 0x000328, "Member 'UWBP_Template_ProgressBar_CM_C::ValuePossible' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ProgressBar_CM_C, bCanContribute) == 0x000330, "Member 'UWBP_Template_ProgressBar_CM_C::bCanContribute' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ProgressBar_CM_C, bIsComplete) == 0x000331, "Member 'UWBP_Template_ProgressBar_CM_C::bIsComplete' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ProgressBar_CM_C, CheckAgainstValue) == 0x000334, "Member 'UWBP_Template_ProgressBar_CM_C::CheckAgainstValue' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ProgressBar_CM_C, ValueScale) == 0x000338, "Member 'UWBP_Template_ProgressBar_CM_C::ValueScale' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ProgressBar_CM_C, OnFocusedSlider) == 0x000340, "Member 'UWBP_Template_ProgressBar_CM_C::OnFocusedSlider' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ProgressBar_CM_C, OnSliderMouseEnter) == 0x000350, "Member 'UWBP_Template_ProgressBar_CM_C::OnSliderMouseEnter' has a wrong offset!");

}

