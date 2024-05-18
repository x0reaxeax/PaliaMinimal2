#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Audio_Settings_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonWidgetInputExtended_classes.hpp"
#include "S6Core_structs.hpp"
#include "AkAudio_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Audio_Settings_CM.WBP_Audio_Settings_CM_C
// 0x0060 (0x0570 - 0x0510)
class UWBP_Audio_Settings_CM_C final : public UCommonActivatableWidgetInputExtended
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_Button_Secondary_01_CM_C* Button_Secondary_ResetToDefault_CM;                // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkmark_MuteInBackground;                        // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Dropdown_CM_C*        ComboBox_MixProfile;                               // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Dropdown_CM_C*        ComboBox_PanningRule;                              // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Slider_CM_C*          Slider_DialogueVolume;                             // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Slider_CM_C*          Slider_MusicVolume;                                // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Slider_CM_C*          Slider_OverallVolume;                              // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Slider_CM_C*          Slider_SFXVolume;                                  // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ScrollBox_Styled*                VALUI_ScrollBox_Styled_175;                        // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_DescriptionBox_C*         WBP_Settings_DescriptionBox;                       // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         AkMusID;                                           // 0x0568(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSynced;                                         // 0x056C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Audio_Settings_CM_Button_Secondary_ResetToDefault_CM_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_Audio_Settings_CM_Slider_DialogueVolume_K2Node_ComponentBoundEvent_8_OnSettingsItem_Unhovered__DelegateSignature();
	void BndEvt__WBP_Audio_Settings_CM_Slider_MusicVolume_K2Node_ComponentBoundEvent_3_OnSettingsItem_Unhovered__DelegateSignature();
	void BndEvt__WBP_Audio_Settings_CM_Slider_OverallVolume_K2Node_ComponentBoundEvent_1_OnSettingsItem_Unhovered__DelegateSignature();
	void BndEvt__WBP_Audio_Settings_CM_Slider_SFXVolume_K2Node_ComponentBoundEvent_2_OnSettingsItem_Unhovered__DelegateSignature();
	void BndEvt__WBP_Audio_Settings_CM_WBP_SettingsItem_Checkbox_CM_K2Node_ComponentBoundEvent_23_OnCheckedStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_Audio_Settings_CM_WBP_SettingsItem_Dropdown_CM_K2Node_ComponentBoundEvent_21_OnOptionChanged__DelegateSignature(int32 Param_Index, class FText Text);
	void BndEvt__WBP_Audio_Settings_CM_WBP_SettingsItem_Dropdown_CM_K2Node_ComponentBoundEvent_22_OnOptionChanged__DelegateSignature(int32 Param_Index, class FText Text);
	void BndEvt__WBP_Audio_Settings_CM_WBP_SettingsItem_Slider_CM_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature(double Value);
	void BndEvt__WBP_Audio_Settings_CM_WBP_SettingsItem_Slider_CM_K2Node_ComponentBoundEvent_10_OnSlider_MouseCaptureEnd__DelegateSignature();
	void BndEvt__WBP_Audio_Settings_CM_WBP_SettingsItem_Slider_CM_K2Node_ComponentBoundEvent_12_OnSliderValueChanged__DelegateSignature(double Value);
	void BndEvt__WBP_Audio_Settings_CM_WBP_SettingsItem_Slider_CM_K2Node_ComponentBoundEvent_13_OnSlider_MouseCaptureEnd__DelegateSignature();
	void BndEvt__WBP_Audio_Settings_CM_WBP_SettingsItem_Slider_CM_K2Node_ComponentBoundEvent_15_OnSlider_ControllerCaptureEnd__DelegateSignature();
	void BndEvt__WBP_Audio_Settings_CM_WBP_SettingsItem_Slider_CM_K2Node_ComponentBoundEvent_16_OnSlider_ControllerCaptureEnd__DelegateSignature();
	void BndEvt__WBP_Audio_Settings_CM_WBP_SettingsItem_Slider_CM_K2Node_ComponentBoundEvent_17_OnSliderValueChanged__DelegateSignature(double Value);
	void BndEvt__WBP_Audio_Settings_CM_WBP_SettingsItem_Slider_CM_K2Node_ComponentBoundEvent_19_OnSlider_MouseCaptureEnd__DelegateSignature();
	void BndEvt__WBP_Audio_Settings_CM_WBP_SettingsItem_Slider_CM_K2Node_ComponentBoundEvent_20_OnSlider_ControllerCaptureEnd__DelegateSignature();
	void BndEvt__WBP_Audio_Settings_CM_WBP_SettingsItem_Slider_CM_K2Node_ComponentBoundEvent_4_OnSliderValueChanged__DelegateSignature(double Value);
	void BndEvt__WBP_Audio_Settings_CM_WBP_SettingsItem_Slider_CM_K2Node_ComponentBoundEvent_5_OnSlider_MouseCaptureEnd__DelegateSignature();
	void BndEvt__WBP_Audio_Settings_CM_WBP_SettingsItem_Slider_CM_K2Node_ComponentBoundEvent_7_OnSlider_ControllerCaptureEnd__DelegateSignature();
	void BP_OnActivated();
	void Construct();
	void ExecuteUbergraph_WBP_Audio_Settings_CM(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_IsLocalController_ReturnValue, bool CallFunc_IsLocalController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, bool CallFunc_IsLocalController_ReturnValue_2, bool CallFunc_IsLocalController_ReturnValue_3, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_1, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_2, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_3, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, double Temp_real_Variable, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_4, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_5, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_6, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_7, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_8, double Temp_real_Variable_1, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_9, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_10, class UInputAction* Temp_object_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, double Temp_real_Variable_1_0, double Temp_real_Variable_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class FText K2Node_CustomEvent_Name, class FText K2Node_CustomEvent_Description, TDelegate<void(class FText Name, class FText Description)> K2Node_CreateDelegate_OutputDelegate_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_SettingsItem_Parent_DoNotEdit_C* K2Node_DynamicCast_AsWBP_Settings_Item_Parent_Do_Not_Edit, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, double K2Node_ComponentBoundEvent_Value_3, double K2Node_ComponentBoundEvent_Value_2, double K2Node_ComponentBoundEvent_Value_1, double K2Node_ComponentBoundEvent_Value, int32 K2Node_ComponentBoundEvent_Index_1, class FText K2Node_ComponentBoundEvent_Text_1, int32 K2Node_ComponentBoundEvent_Index, class FText K2Node_ComponentBoundEvent_Text, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_ComponentBoundEvent_Checked, float CallFunc_SetOverallVolume_value_ImplicitCast, float CallFunc_SetSoundVolume_value_ImplicitCast, float CallFunc_SetMusicVolume_value_ImplicitCast, float CallFunc_SetDialogueVolume_value_ImplicitCast);
	void HandleSettingsItemHovered(class FText Param_Name, class FText Description);
	void HandleSettingsItemUnhovered();
	void InpActEvt_IA_UI_ResetToDefault_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void ResetSettings(bool NewLocalVar, ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue);
	void SynchronizeState(int32 Temp_int_Variable, int32 Temp_int_Variable_1, EPanningRule Temp_byte_Variable, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, EAudioMixProfiles Temp_byte_Variable_1, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, double CallFunc_SetSliderValue_SliderValue_ImplicitCast, double CallFunc_SetSliderValue_SliderValue_ImplicitCast_1, double CallFunc_SetSliderValue_SliderValue_ImplicitCast_2, double CallFunc_SetSliderValue_SliderValue_ImplicitCast_3);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Audio_Settings_CM_C">();
	}
	static class UWBP_Audio_Settings_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Audio_Settings_CM_C>();
	}
};
static_assert(alignof(UWBP_Audio_Settings_CM_C) == 0x000008, "Wrong alignment on UWBP_Audio_Settings_CM_C");
static_assert(sizeof(UWBP_Audio_Settings_CM_C) == 0x000570, "Wrong size on UWBP_Audio_Settings_CM_C");
static_assert(offsetof(UWBP_Audio_Settings_CM_C, UberGraphFrame) == 0x000510, "Member 'UWBP_Audio_Settings_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Audio_Settings_CM_C, Button_Secondary_ResetToDefault_CM) == 0x000518, "Member 'UWBP_Audio_Settings_CM_C::Button_Secondary_ResetToDefault_CM' has a wrong offset!");
static_assert(offsetof(UWBP_Audio_Settings_CM_C, Checkmark_MuteInBackground) == 0x000520, "Member 'UWBP_Audio_Settings_CM_C::Checkmark_MuteInBackground' has a wrong offset!");
static_assert(offsetof(UWBP_Audio_Settings_CM_C, ComboBox_MixProfile) == 0x000528, "Member 'UWBP_Audio_Settings_CM_C::ComboBox_MixProfile' has a wrong offset!");
static_assert(offsetof(UWBP_Audio_Settings_CM_C, ComboBox_PanningRule) == 0x000530, "Member 'UWBP_Audio_Settings_CM_C::ComboBox_PanningRule' has a wrong offset!");
static_assert(offsetof(UWBP_Audio_Settings_CM_C, Slider_DialogueVolume) == 0x000538, "Member 'UWBP_Audio_Settings_CM_C::Slider_DialogueVolume' has a wrong offset!");
static_assert(offsetof(UWBP_Audio_Settings_CM_C, Slider_MusicVolume) == 0x000540, "Member 'UWBP_Audio_Settings_CM_C::Slider_MusicVolume' has a wrong offset!");
static_assert(offsetof(UWBP_Audio_Settings_CM_C, Slider_OverallVolume) == 0x000548, "Member 'UWBP_Audio_Settings_CM_C::Slider_OverallVolume' has a wrong offset!");
static_assert(offsetof(UWBP_Audio_Settings_CM_C, Slider_SFXVolume) == 0x000550, "Member 'UWBP_Audio_Settings_CM_C::Slider_SFXVolume' has a wrong offset!");
static_assert(offsetof(UWBP_Audio_Settings_CM_C, VALUI_ScrollBox_Styled_175) == 0x000558, "Member 'UWBP_Audio_Settings_CM_C::VALUI_ScrollBox_Styled_175' has a wrong offset!");
static_assert(offsetof(UWBP_Audio_Settings_CM_C, WBP_Settings_DescriptionBox) == 0x000560, "Member 'UWBP_Audio_Settings_CM_C::WBP_Settings_DescriptionBox' has a wrong offset!");
static_assert(offsetof(UWBP_Audio_Settings_CM_C, AkMusID) == 0x000568, "Member 'UWBP_Audio_Settings_CM_C::AkMusID' has a wrong offset!");
static_assert(offsetof(UWBP_Audio_Settings_CM_C, bIsSynced) == 0x00056C, "Member 'UWBP_Audio_Settings_CM_C::bIsSynced' has a wrong offset!");

}
