#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SettingsPanel_PF

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ValeriaUI_classes.hpp"
#include "E_CloseKeyRebindMenuType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SettingsPanel_PF.WBP_SettingsPanel_PF_C
// 0x0068 (0x05C0 - 0x0558)
class UWBP_SettingsPanel_PF_C final : public UVALUI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActionWidget*                    CommonActionWidget_LB;                             // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    CommonActionWidget_RB;                             // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*       SwitcherSettings;                                  // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TabHost_Template_Large_CM_C*       TabHost;                                           // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AccessibilitySettings_PF_C*        WBP_AccessibilitySettings_PF;                      // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Audio_Settings_PF_C*               WBP_Audio_Settings_PF;                             // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonUIButtonPrompt_C*            WBP_CommonUIButtonPrompt;                          // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GamepadSettings_CM_C*              WBP_GamepadSettings_CM;                            // 0x0598(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameplaySettings_PF_C*             WBP_GameplaySettings_PF;                           // 0x05A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_PopupMain_02_C*           WBP_Template_PopupMain_02;                         // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsItem_Dropdown_CM_C*        OpenedDropDownBox;                                 // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ClosedViaCloseButton;                              // 0x05B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_SettingsPanel_PF_WBP_AccessibilitySettings_PF_K2Node_ComponentBoundEvent_12_OnWidgetActivationChanged__DelegateSignature();
	void BndEvt__WBP_SettingsPanel_PF_WBP_AccessibilitySettings_PF_K2Node_ComponentBoundEvent_5_OnDropDownOpened__DelegateSignature(class UWBP_SettingsItem_Dropdown_CM_C* Param_OpenedDropDownBox);
	void BndEvt__WBP_SettingsPanel_PF_WBP_AccessibilitySettings_PF_K2Node_ComponentBoundEvent_6_OnDropDownClosed__DelegateSignature();
	void BndEvt__WBP_SettingsPanel_PF_WBP_Audio_Settings_PF_K2Node_ComponentBoundEvent_10_OnWidgetActivationChanged__DelegateSignature();
	void BndEvt__WBP_SettingsPanel_PF_WBP_Audio_Settings_PF_K2Node_ComponentBoundEvent_3_OnDropDownOpened__DelegateSignature(class UWBP_SettingsItem_Dropdown_CM_C* Param_OpenedDropDownBox);
	void BndEvt__WBP_SettingsPanel_PF_WBP_Audio_Settings_PF_K2Node_ComponentBoundEvent_4_OnDropDownClosed__DelegateSignature();
	void BndEvt__WBP_SettingsPanel_PF_WBP_GamepadSettings_CM_K2Node_ComponentBoundEvent_11_OnWidgetActivationChanged__DelegateSignature();
	void BndEvt__WBP_SettingsPanel_PF_WBP_GameplaySettings_PF_K2Node_ComponentBoundEvent_0_OnDropDownOpened__DelegateSignature(class UWBP_SettingsItem_Dropdown_CM_C* Param_OpenedDropDownBox);
	void BndEvt__WBP_SettingsPanel_PF_WBP_GameplaySettings_PF_K2Node_ComponentBoundEvent_13_OnFTUEFocusedItemChanged__DelegateSignature(bool IsFTUEFlag);
	void BndEvt__WBP_SettingsPanel_PF_WBP_GameplaySettings_PF_K2Node_ComponentBoundEvent_1_OnDropDownClosed__DelegateSignature();
	void BndEvt__WBP_SettingsPanel_PF_WBP_GameplaySettings_PF_K2Node_ComponentBoundEvent_9_OnGameplayVisble__DelegateSignature();
	void BndEvt__WBP_SettingsPanel_PF_WBP_Template_PopupMain_02_K2Node_ComponentBoundEvent_7_CloseButton_OnClicked__DelegateSignature();
	void BndEvt__WBP_SettingsPanel_TabHost_K2Node_ComponentBoundEvent_2_OnDifferentActiveTabSet__DelegateSignature(class UVALUI_TabButtonHostBase* TabButtonHost);
	bool BP_OnHandleBackAction();
	void CloseSettingsPanel(bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue);
	void Construct();
	void Destruct();
	void DisplayKeyRebindPrompt(bool bIsActivated);
	void ExecutePrePopupAction(E_CloseKeyRebindMenuType PrePopupAction);
	void ExecuteUbergraph_WBP_SettingsPanel_PF(int32 EntryPoint, bool CallFunc_GetNextTabName_ReturnValue, class FName CallFunc_GetNextTabName_Output, bool K2Node_Event_IsDesignTime, int32 CallFunc_AkEventGlobal_ReturnValue, class FName CallFunc_GetActiveTabName_ReturnValue, class UVALUI_TabButtonHostBase* K2Node_ComponentBoundEvent_TabButtonHost, const struct FVALUI_InstantiatedTabButtonInfo& CallFunc_TryGetTabInfo_OutInfo, bool CallFunc_TryGetTabInfo_ReturnValue, class FName CallFunc_GetActiveTabName_ReturnValue_1, const struct FVALUI_InstantiatedTabButtonInfo& CallFunc_TryGetTabInfo_OutInfo_1, bool CallFunc_TryGetTabInfo_ReturnValue_1, class UCommonActivatableWidgetInputExtended* K2Node_DynamicCast_AsCommon_Activatable_Widget_Input_Extended, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, double Temp_real_Variable, class UWBP_SettingsItem_Dropdown_CM_C* K2Node_ComponentBoundEvent_OpenedDropDownBox_2, class UWBP_SettingsItem_Dropdown_CM_C* K2Node_ComponentBoundEvent_OpenedDropDownBox_1, class UWBP_SettingsItem_Dropdown_CM_C* K2Node_ComponentBoundEvent_OpenedDropDownBox, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1, int32 CallFunc_AkEventGlobal_ReturnValue_2, double Temp_real_Variable_1, class UInputAction* Temp_object_Variable, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, double Temp_real_Variable_1_0, double Temp_real_Variable_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_4, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_ComponentBoundEvent_IsFTUEFlag, bool Temp_bool_Variable_1, TDelegate<void(bool bIsActivated)> K2Node_CreateDelegate_OutputDelegate_6, TScriptInterface<class IBPI_KeyRebindInterface_C> K2Node_Event_OwnerWidget, E_CloseKeyRebindMenuType K2Node_Event_PrePopupAction_1, const struct FKeyRebind_DisplayResult& K2Node_Event_KeyRebindResultInfo, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_7, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_8, double Temp_real_Variable_2, double Temp_real_Variable_3, E_CloseKeyRebindMenuType K2Node_Event_PrePopupAction, class UInputAction* Temp_object_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, double Temp_real_Variable_3_0, double Temp_real_Variable_2_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, bool K2Node_CustomEvent_bIsActivated, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetNextTabName_ReturnValue_1, class FName CallFunc_GetNextTabName_Output_1);
	bool GetNextTabName(bool Condition, class FName* Output, int32 NextIndex, TArray<class FName>& CallFunc_GetTabNames_ReturnValue, class FName CallFunc_Array_Get_Item, class FName CallFunc_GetActiveTabName_ReturnValue, TArray<class FName>& CallFunc_GetTabNames_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void Handing_Input_Action_Switch_Tab(bool bLeftSwitch, bool CallFunc_GetNextTabName_ReturnValue, class FName CallFunc_GetNextTabName_Output, bool CallFunc_TrySetActiveTabName_ReturnValue);
	void InpActEvt_IA_UI_PrimaryTab_Switch_L_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_PrimaryTab_Switch_R_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void OnResetPopupClose_Event();
	void OnResetPopupOpen_Event();
	void PreConstruct(bool IsDesignTime);
	void PreswitchCheckforKeyRebindMenu(E_CloseKeyRebindMenuType ExcuteStatus, class UWidget* CallFunc_GetActiveWidget_ReturnValue, TScriptInterface<class IBPI_KeyRebindInterface_C> K2Node_DynamicCast_AsBPI_Key_Rebind_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_KeyRebindInterface_C> CallFunc_ToggleButtonCheckPopup_OwnerWidget_CastInput);
	void RefreshKeyRebindTips(const struct FKeyRebind_DisplayResult& KeyRebindResultInfo);
	void ToggleButtonCheckPopup(TScriptInterface<class IBPI_KeyRebindInterface_C> OwnerWidget, E_CloseKeyRebindMenuType PrePopupAction);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SettingsPanel_PF_C">();
	}
	static class UWBP_SettingsPanel_PF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SettingsPanel_PF_C>();
	}
};
static_assert(alignof(UWBP_SettingsPanel_PF_C) == 0x000008, "Wrong alignment on UWBP_SettingsPanel_PF_C");
static_assert(sizeof(UWBP_SettingsPanel_PF_C) == 0x0005C0, "Wrong size on UWBP_SettingsPanel_PF_C");
static_assert(offsetof(UWBP_SettingsPanel_PF_C, UberGraphFrame) == 0x000558, "Member 'UWBP_SettingsPanel_PF_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_PF_C, CommonActionWidget_LB) == 0x000560, "Member 'UWBP_SettingsPanel_PF_C::CommonActionWidget_LB' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_PF_C, CommonActionWidget_RB) == 0x000568, "Member 'UWBP_SettingsPanel_PF_C::CommonActionWidget_RB' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_PF_C, SwitcherSettings) == 0x000570, "Member 'UWBP_SettingsPanel_PF_C::SwitcherSettings' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_PF_C, TabHost) == 0x000578, "Member 'UWBP_SettingsPanel_PF_C::TabHost' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_PF_C, WBP_AccessibilitySettings_PF) == 0x000580, "Member 'UWBP_SettingsPanel_PF_C::WBP_AccessibilitySettings_PF' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_PF_C, WBP_Audio_Settings_PF) == 0x000588, "Member 'UWBP_SettingsPanel_PF_C::WBP_Audio_Settings_PF' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_PF_C, WBP_CommonUIButtonPrompt) == 0x000590, "Member 'UWBP_SettingsPanel_PF_C::WBP_CommonUIButtonPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_PF_C, WBP_GamepadSettings_CM) == 0x000598, "Member 'UWBP_SettingsPanel_PF_C::WBP_GamepadSettings_CM' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_PF_C, WBP_GameplaySettings_PF) == 0x0005A0, "Member 'UWBP_SettingsPanel_PF_C::WBP_GameplaySettings_PF' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_PF_C, WBP_Template_PopupMain_02) == 0x0005A8, "Member 'UWBP_SettingsPanel_PF_C::WBP_Template_PopupMain_02' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_PF_C, OpenedDropDownBox) == 0x0005B0, "Member 'UWBP_SettingsPanel_PF_C::OpenedDropDownBox' has a wrong offset!");
static_assert(offsetof(UWBP_SettingsPanel_PF_C, ClosedViaCloseButton) == 0x0005B8, "Member 'UWBP_SettingsPanel_PF_C::ClosedViaCloseButton' has a wrong offset!");

}
