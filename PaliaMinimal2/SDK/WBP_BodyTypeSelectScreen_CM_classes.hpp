#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BodyTypeSelectScreen_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "UMG_structs.hpp"
#include "CommonWidgetInputExtended_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BodyTypeSelectScreen_CM.WBP_BodyTypeSelectScreen_CM_C
// 0x0078 (0x0588 - 0x0510)
class UWBP_BodyTypeSelectScreen_CM_C final : public UCommonActivatableWidgetInputExtended
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActionWidget*                    Action_L;                                          // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    Action_R;                                          // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonUIButtonPrompt_C*            BottomPrompt;                                      // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Primary_01_CM_C*   Button_Primary_Continue;                           // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_156;                                         // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_221;                                         // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButton_C*                SelectableButton_BodyTypeA;                        // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButton_C*                SelectableButton_BodyTypeB;                        // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EVAL_CharacterBodyType                        SelectedBodyType;                                  // 0x0558(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43AF[0x7];                                     // 0x0559(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnContinueClicked;                                 // 0x0560(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnBodyTypeButtonSelected;                          // 0x0570(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          FirstSelection;                                    // 0x0580(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              In_Visibility;                                     // 0x0581(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_BodyTypeSelectScreen_CM_Button_Primary_Continue_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
	void BndEvt__WBP_BodyTypeSelectScreen_WBP_SelectableButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void BndEvt__WBP_BodyTypeSelectScreen_WBP_SelectableButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature();
	void Construct();
	void EnableContinueButton(bool Enable, bool CallFunc_IsConsolePlatform_ReturnValue, class UWBP_CommonUIButtonPromptItem_C* CallFunc_GetPromptItemByIA_PromptItem);
	void ExecuteUbergraph_WBP_BodyTypeSelectScreen_CM(int32 EntryPoint, int32 CallFunc_AkEventGlobal_ReturnValue, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_2, float K2Node_EnhancedInputActionEvent_ElapsedTime_2, float K2Node_EnhancedInputActionEvent_TriggeredTime_2, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_2, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, bool Temp_bool_Variable, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, class UInputAction* Temp_object_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_2_0, double Temp_real_Variable_3, bool Temp_bool_Variable_1, double Temp_real_Variable_3_0, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, class UInputAction* Temp_object_Variable_2, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_2, double Temp_real_Variable_4, double Temp_real_Variable_5, double Temp_real_Variable_4_0, double Temp_real_Variable_5_0, bool Temp_bool_Variable_2, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_1, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_IsActivated_ReturnValue_1, bool CallFunc_GetIsEnabled_ReturnValue_2, int32 CallFunc_AkEventGlobal_ReturnValue_1, int32 CallFunc_AkEventGlobal_ReturnValue_2);
	void InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_PrimaryTab_Switch_L_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_PrimaryTab_Switch_R_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void OnBodyTypeButtonSelected__DelegateSignature(EVAL_CharacterBodyType BodyTypeClicked, bool FirstClick);
	void OnContinueClicked__DelegateSignature(EVAL_CharacterBodyType Selected_Body_Type);
	void SetAllButtonsEnabled(bool Is_Enabled);
	void SetAllowedContinueButton(bool Allowed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BodyTypeSelectScreen_CM_C">();
	}
	static class UWBP_BodyTypeSelectScreen_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BodyTypeSelectScreen_CM_C>();
	}
};
static_assert(alignof(UWBP_BodyTypeSelectScreen_CM_C) == 0x000008, "Wrong alignment on UWBP_BodyTypeSelectScreen_CM_C");
static_assert(sizeof(UWBP_BodyTypeSelectScreen_CM_C) == 0x000588, "Wrong size on UWBP_BodyTypeSelectScreen_CM_C");
static_assert(offsetof(UWBP_BodyTypeSelectScreen_CM_C, UberGraphFrame) == 0x000510, "Member 'UWBP_BodyTypeSelectScreen_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_BodyTypeSelectScreen_CM_C, Action_L) == 0x000518, "Member 'UWBP_BodyTypeSelectScreen_CM_C::Action_L' has a wrong offset!");
static_assert(offsetof(UWBP_BodyTypeSelectScreen_CM_C, Action_R) == 0x000520, "Member 'UWBP_BodyTypeSelectScreen_CM_C::Action_R' has a wrong offset!");
static_assert(offsetof(UWBP_BodyTypeSelectScreen_CM_C, BottomPrompt) == 0x000528, "Member 'UWBP_BodyTypeSelectScreen_CM_C::BottomPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_BodyTypeSelectScreen_CM_C, Button_Primary_Continue) == 0x000530, "Member 'UWBP_BodyTypeSelectScreen_CM_C::Button_Primary_Continue' has a wrong offset!");
static_assert(offsetof(UWBP_BodyTypeSelectScreen_CM_C, Image_156) == 0x000538, "Member 'UWBP_BodyTypeSelectScreen_CM_C::Image_156' has a wrong offset!");
static_assert(offsetof(UWBP_BodyTypeSelectScreen_CM_C, Image_221) == 0x000540, "Member 'UWBP_BodyTypeSelectScreen_CM_C::Image_221' has a wrong offset!");
static_assert(offsetof(UWBP_BodyTypeSelectScreen_CM_C, SelectableButton_BodyTypeA) == 0x000548, "Member 'UWBP_BodyTypeSelectScreen_CM_C::SelectableButton_BodyTypeA' has a wrong offset!");
static_assert(offsetof(UWBP_BodyTypeSelectScreen_CM_C, SelectableButton_BodyTypeB) == 0x000550, "Member 'UWBP_BodyTypeSelectScreen_CM_C::SelectableButton_BodyTypeB' has a wrong offset!");
static_assert(offsetof(UWBP_BodyTypeSelectScreen_CM_C, SelectedBodyType) == 0x000558, "Member 'UWBP_BodyTypeSelectScreen_CM_C::SelectedBodyType' has a wrong offset!");
static_assert(offsetof(UWBP_BodyTypeSelectScreen_CM_C, OnContinueClicked) == 0x000560, "Member 'UWBP_BodyTypeSelectScreen_CM_C::OnContinueClicked' has a wrong offset!");
static_assert(offsetof(UWBP_BodyTypeSelectScreen_CM_C, OnBodyTypeButtonSelected) == 0x000570, "Member 'UWBP_BodyTypeSelectScreen_CM_C::OnBodyTypeButtonSelected' has a wrong offset!");
static_assert(offsetof(UWBP_BodyTypeSelectScreen_CM_C, FirstSelection) == 0x000580, "Member 'UWBP_BodyTypeSelectScreen_CM_C::FirstSelection' has a wrong offset!");
static_assert(offsetof(UWBP_BodyTypeSelectScreen_CM_C, In_Visibility) == 0x000581, "Member 'UWBP_BodyTypeSelectScreen_CM_C::In_Visibility' has a wrong offset!");

}

