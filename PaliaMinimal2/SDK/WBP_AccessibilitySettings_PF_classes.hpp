#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AccessibilitySettings_PF

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonWidgetInputExtended_classes.hpp"
#include "Palia_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_AccessibilitySettings_PF.WBP_AccessibilitySettings_PF_C
// 0x0138 (0x0648 - 0x0510)
class UWBP_AccessibilitySettings_PF_C final : public UCommonActivatableWidgetInputExtended
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_AimAssist_CM;                             // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_AutoShoot_CM;                             // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_CameraAssist_CM;                          // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_SpeechToText_CM;                          // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_SubtitlesForCinematics_CM;                // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_ToolVibrationCues_CM;                     // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_TraversalCues_CM;                         // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Dropdown_CM_C*        ComboBox_FontSize_CM;                              // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Dropdown_CM_C*        ComboBox_HUDColorblindModes_CM;                    // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Dropdown_CM_C*        ComboBox_HUDOpacity_CM;                            // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Dropdown_CM_C*        ComboBox_SubtitlesBackground_CM;                   // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Dropdown_CM_C*        ComboBox_SubtitlesColor_CM;                        // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Dropdown_CM_C*        ComboBox_SubtitlesSize_CM;                         // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*       CommonActivatableWidgetSwitcher_29;                // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ScrollBox_Styled*                Scrollbar_Assistance;                              // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ScrollBox_Styled*                Scrollbar_HearingAids;                             // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ScrollBox_Styled*                Scrollbar_VisualAids;                              // 0x0598(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_AssistanceScrollbar;                       // 0x05A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_HearingAidsScrollbar;                      // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_VisualAidsScrollbar;                       // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_ButtonTab_Secondary_02_CM_C* TabSelector_CM;                                    // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsRefreshed;                                      // 0x05C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54C7[0x7];                                     // 0x05C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ScrollMoveSpeed;                                   // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_SettingsItem_Parent_DoNotEdit_C*   CurrentFocusWidget;                                // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnHearingAidsVisible;                              // 0x05D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnAssistanceVisible;                               // 0x05E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnVisualAidsVisible;                               // 0x05F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDropDownOpened;                                  // 0x0608(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDropDownClosed;                                  // 0x0618(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnResetPopupOpen;                                  // 0x0628(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnResetPopupClose;                                 // 0x0638(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_AccessibilitySettings_PF_Checkbox_CameraAssist_CM_K2Node_ComponentBoundEvent_1_OnCheckedStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_AccessibilitySettings_PF_Checkbox_SubtitlesForCinematics_CM_K2Node_ComponentBoundEvent_0_OnCheckedStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_AccessibilitySettings_PF_ComboBox_FontSize_CM_K2Node_ComponentBoundEvent_13_OnMenuOpened__DelegateSignature(class UWBP_SettingsItem_Dropdown_CM_C* OpenedDropBox);
	void BndEvt__WBP_AccessibilitySettings_PF_ComboBox_FontSize_CM_K2Node_ComponentBoundEvent_14_OnMenuClosed__DelegateSignature();
	void BndEvt__WBP_AccessibilitySettings_PF_ComboBox_HUDBackground_CM_K2Node_ComponentBoundEvent_10_OnMenuClosed__DelegateSignature();
	void BndEvt__WBP_AccessibilitySettings_PF_ComboBox_HUDBackground_CM_K2Node_ComponentBoundEvent_8_OnMenuOpened__DelegateSignature(class UWBP_SettingsItem_Dropdown_CM_C* OpenedDropBox);
	void BndEvt__WBP_AccessibilitySettings_PF_ComboBox_HUDColorblindModes_CM_K2Node_ComponentBoundEvent_11_OnMenuOpened__DelegateSignature(class UWBP_SettingsItem_Dropdown_CM_C* OpenedDropBox);
	void BndEvt__WBP_AccessibilitySettings_PF_ComboBox_HUDColorblindModes_CM_K2Node_ComponentBoundEvent_12_OnMenuClosed__DelegateSignature();
	void BndEvt__WBP_AccessibilitySettings_PF_ComboBox_HUDOpacity_CM_K2Node_ComponentBoundEvent_0_OnOptionChanged__DelegateSignature(int32 Param_Index, class FText Text);
	void BndEvt__WBP_AccessibilitySettings_PF_ComboBox_SubtitlesBackground_CM_K2Node_ComponentBoundEvent_6_OnMenuOpened__DelegateSignature(class UWBP_SettingsItem_Dropdown_CM_C* OpenedDropBox);
	void BndEvt__WBP_AccessibilitySettings_PF_ComboBox_SubtitlesBackground_CM_K2Node_ComponentBoundEvent_7_OnMenuClosed__DelegateSignature();
	void BndEvt__WBP_AccessibilitySettings_PF_ComboBox_SubtitlesColor_CM_K2Node_ComponentBoundEvent_4_OnMenuOpened__DelegateSignature(class UWBP_SettingsItem_Dropdown_CM_C* OpenedDropBox);
	void BndEvt__WBP_AccessibilitySettings_PF_ComboBox_SubtitlesColor_CM_K2Node_ComponentBoundEvent_5_OnMenuClosed__DelegateSignature();
	void BndEvt__WBP_AccessibilitySettings_PF_ComboBox_SubtitlesSize_CM_K2Node_ComponentBoundEvent_2_OnMenuOpened__DelegateSignature(class UWBP_SettingsItem_Dropdown_CM_C* OpenedDropBox);
	void BndEvt__WBP_AccessibilitySettings_PF_ComboBox_SubtitlesSize_CM_K2Node_ComponentBoundEvent_3_OnMenuClosed__DelegateSignature();
	void BndEvt__WBP_GameplaySettings_CM_TabSelector_CM_K2Node_ComponentBoundEvent_9_On_Tab_Selection_Changed__DelegateSignature(int32 Tab_Selection);
	void Construct();
	void Display_GamePad_Icon(bool IsShowIcon);
	void ExecuteUbergraph_WBP_AccessibilitySettings_PF(int32 EntryPoint, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, bool Temp_bool_Variable, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, class UInputAction* Temp_object_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_2_0, double Temp_real_Variable_3, bool Temp_bool_Variable_1, double Temp_real_Variable_3_0, int32 Temp_int_Variable, EVAL_HUDOpacity Temp_byte_Variable, EVAL_HUDOpacity Temp_byte_Variable_1, EVAL_HUDOpacity Temp_byte_Variable_2, class UWBP_SettingsItem_Parent_DoNotEdit_C* CallFunc_Get_Focus_Widget_SettingsItem, int32 K2Node_ComponentBoundEvent_Tab_Selection, class UWBP_SettingsItem_Parent_DoNotEdit_C* CallFunc_Get_Focus_Widget_SettingsItem_1, ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_SwitchEnum_CmpSuccess_1, TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_2, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, double Temp_real_Variable_4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, double Temp_real_Variable_5, bool K2Node_ComponentBoundEvent_Checked_1, class UInputAction* Temp_object_Variable_2, bool K2Node_ComponentBoundEvent_Checked, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_1, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_2, float K2Node_EnhancedInputActionEvent_ElapsedTime_2, float K2Node_EnhancedInputActionEvent_TriggeredTime_2, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_2, double Temp_real_Variable_5_0, double Temp_real_Variable_4_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_2, class UWBP_SettingsItem_Dropdown_CM_C* K2Node_ComponentBoundEvent_OpenedDropBox_5, class UWBP_SettingsItem_Dropdown_CM_C* K2Node_ComponentBoundEvent_OpenedDropBox_4, class UWBP_SettingsItem_Dropdown_CM_C* K2Node_ComponentBoundEvent_OpenedDropBox_3, class UWBP_SettingsItem_Dropdown_CM_C* K2Node_ComponentBoundEvent_OpenedDropBox_2, class UWBP_SettingsItem_Dropdown_CM_C* K2Node_ComponentBoundEvent_OpenedDropBox_1, class UWBP_SettingsItem_Dropdown_CM_C* K2Node_ComponentBoundEvent_OpenedDropBox, int32 K2Node_ComponentBoundEvent_Index, class FText K2Node_ComponentBoundEvent_Text, EVAL_HUDOpacity K2Node_Select_Default);
	void Get_Focus_Widget(class UWBP_SettingsItem_Parent_DoNotEdit_C** SettingsItem, class UWBP_SettingsItem_Parent_DoNotEdit_C* CallFunc_GetFocusWidgetFromTab_FocusWidget, class UWBP_SettingsItem_Parent_DoNotEdit_C* CallFunc_GetFocusWidgetFromTab_FocusWidget_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UWBP_SettingsItem_Parent_DoNotEdit_C* CallFunc_GetFocusWidgetFromTab_FocusWidget_2);
	void GetFocusWidgetFromTab(class UVALUI_ScrollBox_Styled* Scrollbar_Widget, class UWBP_SettingsItem_Parent_DoNotEdit_C* DefaultFocusWidget, class UWBP_SettingsItem_Parent_DoNotEdit_C** FocusWidget, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWBP_SettingsItem_Parent_DoNotEdit_C* K2Node_DynamicCast_AsWBP_Settings_Item_Parent_Do_Not_Edit, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasKeyboardFocus_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	double GetScrollDownOffset(class UScrollBox* ScrollBar, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_Max_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast);
	double GetScrollUpOffset(class UScrollBox* ScrollBar, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_Max_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast);
	void InpActEvt_IA_UI_SecondaryTab_Switch_L_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_SecondaryTab_Switch_R_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_SwitchItem_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void OnAssistanceVisible__DelegateSignature();
	void OnDropDownClosed__DelegateSignature();
	void OnDropDownOpened__DelegateSignature(class UWBP_SettingsItem_Dropdown_CM_C* OpenedDropDownBox);
	void OnHearingAidsVisible__DelegateSignature();
	void OnInputMethodChanged(ECommonInputType bNewInputType);
	void OnPopupClose();
	void OnResetConfirm();
	void OnResetPopupClose__DelegateSignature();
	void OnResetPopupOpen__DelegateSignature();
	void OnVisualAidsVisible__DelegateSignature();
	void Refresh_Accessibility_Settings();
	void Refresh_Assistance(class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, bool CallFunc_GetEnableCameraAssist_ReturnValue);
	void Refresh_State();
	void RefreshHearingAids(class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue);
	void RefreshVisualAids(class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue);
	void Reset_Items(class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue);
	void ResetSettings();
	void Save_Current_Focus_Widget(class UWBP_SettingsItem_Checkbox_CM_C* NewLocalVar, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void Set_Select_Item__Focus();
	void SetFocusWidgetFromTab(class UScrollBox* Scrollbar_Widget, class UWBP_SettingsItem_Parent_DoNotEdit_C* Default_Focus_Widget, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWBP_SettingsItem_Parent_DoNotEdit_C* K2Node_DynamicCast_AsWBP_Settings_Item_Parent_Do_Not_Edit, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasKeyboardFocus_ReturnValue);
	void SynchronizeInputSettings(class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void TryResetSettings(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_ResetToDefault_Confirmation_PF_C* CallFunc_Create_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue);
	void TryShowCheatSettings();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_AccessibilitySettings_PF_C">();
	}
	static class UWBP_AccessibilitySettings_PF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_AccessibilitySettings_PF_C>();
	}
};
static_assert(alignof(UWBP_AccessibilitySettings_PF_C) == 0x000008, "Wrong alignment on UWBP_AccessibilitySettings_PF_C");
static_assert(sizeof(UWBP_AccessibilitySettings_PF_C) == 0x000648, "Wrong size on UWBP_AccessibilitySettings_PF_C");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, UberGraphFrame) == 0x000510, "Member 'UWBP_AccessibilitySettings_PF_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, Checkbox_AimAssist_CM) == 0x000518, "Member 'UWBP_AccessibilitySettings_PF_C::Checkbox_AimAssist_CM' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, Checkbox_AutoShoot_CM) == 0x000520, "Member 'UWBP_AccessibilitySettings_PF_C::Checkbox_AutoShoot_CM' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, Checkbox_CameraAssist_CM) == 0x000528, "Member 'UWBP_AccessibilitySettings_PF_C::Checkbox_CameraAssist_CM' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, Checkbox_SpeechToText_CM) == 0x000530, "Member 'UWBP_AccessibilitySettings_PF_C::Checkbox_SpeechToText_CM' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, Checkbox_SubtitlesForCinematics_CM) == 0x000538, "Member 'UWBP_AccessibilitySettings_PF_C::Checkbox_SubtitlesForCinematics_CM' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, Checkbox_ToolVibrationCues_CM) == 0x000540, "Member 'UWBP_AccessibilitySettings_PF_C::Checkbox_ToolVibrationCues_CM' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, Checkbox_TraversalCues_CM) == 0x000548, "Member 'UWBP_AccessibilitySettings_PF_C::Checkbox_TraversalCues_CM' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, ComboBox_FontSize_CM) == 0x000550, "Member 'UWBP_AccessibilitySettings_PF_C::ComboBox_FontSize_CM' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, ComboBox_HUDColorblindModes_CM) == 0x000558, "Member 'UWBP_AccessibilitySettings_PF_C::ComboBox_HUDColorblindModes_CM' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, ComboBox_HUDOpacity_CM) == 0x000560, "Member 'UWBP_AccessibilitySettings_PF_C::ComboBox_HUDOpacity_CM' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, ComboBox_SubtitlesBackground_CM) == 0x000568, "Member 'UWBP_AccessibilitySettings_PF_C::ComboBox_SubtitlesBackground_CM' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, ComboBox_SubtitlesColor_CM) == 0x000570, "Member 'UWBP_AccessibilitySettings_PF_C::ComboBox_SubtitlesColor_CM' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, ComboBox_SubtitlesSize_CM) == 0x000578, "Member 'UWBP_AccessibilitySettings_PF_C::ComboBox_SubtitlesSize_CM' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, CommonActivatableWidgetSwitcher_29) == 0x000580, "Member 'UWBP_AccessibilitySettings_PF_C::CommonActivatableWidgetSwitcher_29' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, Scrollbar_Assistance) == 0x000588, "Member 'UWBP_AccessibilitySettings_PF_C::Scrollbar_Assistance' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, Scrollbar_HearingAids) == 0x000590, "Member 'UWBP_AccessibilitySettings_PF_C::Scrollbar_HearingAids' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, Scrollbar_VisualAids) == 0x000598, "Member 'UWBP_AccessibilitySettings_PF_C::Scrollbar_VisualAids' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, SizeBox_AssistanceScrollbar) == 0x0005A0, "Member 'UWBP_AccessibilitySettings_PF_C::SizeBox_AssistanceScrollbar' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, SizeBox_HearingAidsScrollbar) == 0x0005A8, "Member 'UWBP_AccessibilitySettings_PF_C::SizeBox_HearingAidsScrollbar' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, SizeBox_VisualAidsScrollbar) == 0x0005B0, "Member 'UWBP_AccessibilitySettings_PF_C::SizeBox_VisualAidsScrollbar' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, TabSelector_CM) == 0x0005B8, "Member 'UWBP_AccessibilitySettings_PF_C::TabSelector_CM' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, bIsRefreshed) == 0x0005C0, "Member 'UWBP_AccessibilitySettings_PF_C::bIsRefreshed' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, ScrollMoveSpeed) == 0x0005C8, "Member 'UWBP_AccessibilitySettings_PF_C::ScrollMoveSpeed' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, CurrentFocusWidget) == 0x0005D0, "Member 'UWBP_AccessibilitySettings_PF_C::CurrentFocusWidget' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, OnHearingAidsVisible) == 0x0005D8, "Member 'UWBP_AccessibilitySettings_PF_C::OnHearingAidsVisible' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, OnAssistanceVisible) == 0x0005E8, "Member 'UWBP_AccessibilitySettings_PF_C::OnAssistanceVisible' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, OnVisualAidsVisible) == 0x0005F8, "Member 'UWBP_AccessibilitySettings_PF_C::OnVisualAidsVisible' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, OnDropDownOpened) == 0x000608, "Member 'UWBP_AccessibilitySettings_PF_C::OnDropDownOpened' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, OnDropDownClosed) == 0x000618, "Member 'UWBP_AccessibilitySettings_PF_C::OnDropDownClosed' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, OnResetPopupOpen) == 0x000628, "Member 'UWBP_AccessibilitySettings_PF_C::OnResetPopupOpen' has a wrong offset!");
static_assert(offsetof(UWBP_AccessibilitySettings_PF_C, OnResetPopupClose) == 0x000638, "Member 'UWBP_AccessibilitySettings_PF_C::OnResetPopupClose' has a wrong offset!");

}
