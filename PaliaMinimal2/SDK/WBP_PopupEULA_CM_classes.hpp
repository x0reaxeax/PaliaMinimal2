#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PopupEULA_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ValeriaUI_classes.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PopupEULA_CM.WBP_PopupEULA_CM_C
// 0x0058 (0x05B0 - 0x0558)
class UWBP_PopupEULA_CM_C final : public UVALUI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonVisibilitySwitcher*              CommonVisibilitySwitcher_105;                      // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_Message;                             // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ScrollBox_Styled*                Scrollbox_Message;                                 // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonUIButtonPrompt_C*            WBP_CommonUIButtonPrompt;                          // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Primary_01_CM_C*   WBP_Template_Button_Primary_01_CM;                 // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_PopupSecondary_02_CM_C*   WBP_Template_PopupSecondary_02_CM;                 // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_MessageState;                       // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnConfirm;                                         // 0x0598(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        ScrollScale;                                       // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_PopupEULA_CM_WBP_Template_Button_Primary_01_CM_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
	void CheckScrollOffset(float CallFunc_GetScrollOffsetOfEnd_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
	void Construct();
	void ExecuteUbergraph_WBP_PopupEULA_CM(int32 EntryPoint, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, class UInputAction* Temp_object_Variable, double CallFunc_Conv_InputActionValueToAxis1D_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, double Temp_real_Variable_2, bool Temp_bool_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, class UInputAction* Temp_object_Variable_1, double Temp_real_Variable_3, double Temp_real_Variable_3_0, double Temp_real_Variable_4, bool Temp_bool_Variable_1, double Temp_real_Variable_4_0, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_AkEventGlobal_ReturnValue, double Temp_real_Variable_5, bool CallFunc_IsValid_ReturnValue, double K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Abs_ReturnValue_1, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, float CallFunc_GetScrollOffset_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, double CallFunc_FClamp_ReturnValue, double Temp_real_Variable_6, double Temp_real_Variable_7, class UInputAction* Temp_object_Variable_2, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_2, float K2Node_EnhancedInputActionEvent_ElapsedTime_2, float K2Node_EnhancedInputActionEvent_TriggeredTime_2, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_2, double Temp_real_Variable_7_0, double Temp_real_Variable_6_0, double CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, const struct FInputActionValue& K2Node_Event_ActionValue, float K2Node_Event_ElapsedTime, float K2Node_Event_TriggeredTime, class UInputAction* K2Node_Event_SourceAction, int32 CallFunc_AkEventGlobal_ReturnValue_1, ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_FClamp_Max_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast);
	class US6UI_InputActionHandlingWidgetComponent* GetInputActionHandlingComponent();
	void HandleInputAction_UIBack_Triggered(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_Confirm_Select_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_MoveCursor_Y_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_MoveCursor_Y_Left_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void OnConfirm__DelegateSignature();
	void OnInputChanged(ECommonInputType bNewInputType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PopupEULA_CM_C">();
	}
	static class UWBP_PopupEULA_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PopupEULA_CM_C>();
	}
};
static_assert(alignof(UWBP_PopupEULA_CM_C) == 0x000008, "Wrong alignment on UWBP_PopupEULA_CM_C");
static_assert(sizeof(UWBP_PopupEULA_CM_C) == 0x0005B0, "Wrong size on UWBP_PopupEULA_CM_C");
static_assert(offsetof(UWBP_PopupEULA_CM_C, UberGraphFrame) == 0x000558, "Member 'UWBP_PopupEULA_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PopupEULA_CM_C, CommonVisibilitySwitcher_105) == 0x000560, "Member 'UWBP_PopupEULA_CM_C::CommonVisibilitySwitcher_105' has a wrong offset!");
static_assert(offsetof(UWBP_PopupEULA_CM_C, RichTextBlock_Message) == 0x000568, "Member 'UWBP_PopupEULA_CM_C::RichTextBlock_Message' has a wrong offset!");
static_assert(offsetof(UWBP_PopupEULA_CM_C, Scrollbox_Message) == 0x000570, "Member 'UWBP_PopupEULA_CM_C::Scrollbox_Message' has a wrong offset!");
static_assert(offsetof(UWBP_PopupEULA_CM_C, WBP_CommonUIButtonPrompt) == 0x000578, "Member 'UWBP_PopupEULA_CM_C::WBP_CommonUIButtonPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_PopupEULA_CM_C, WBP_Template_Button_Primary_01_CM) == 0x000580, "Member 'UWBP_PopupEULA_CM_C::WBP_Template_Button_Primary_01_CM' has a wrong offset!");
static_assert(offsetof(UWBP_PopupEULA_CM_C, WBP_Template_PopupSecondary_02_CM) == 0x000588, "Member 'UWBP_PopupEULA_CM_C::WBP_Template_PopupSecondary_02_CM' has a wrong offset!");
static_assert(offsetof(UWBP_PopupEULA_CM_C, WidgetSwitcher_MessageState) == 0x000590, "Member 'UWBP_PopupEULA_CM_C::WidgetSwitcher_MessageState' has a wrong offset!");
static_assert(offsetof(UWBP_PopupEULA_CM_C, OnConfirm) == 0x000598, "Member 'UWBP_PopupEULA_CM_C::OnConfirm' has a wrong offset!");
static_assert(offsetof(UWBP_PopupEULA_CM_C, ScrollScale) == 0x0005A8, "Member 'UWBP_PopupEULA_CM_C::ScrollScale' has a wrong offset!");

}

