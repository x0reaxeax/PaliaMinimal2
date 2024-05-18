#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SingleGenericErrorModal_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "F_GenericErrorModalPayload_structs.hpp"
#include "ValeriaUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SingleGenericErrorModal_CM.WBP_SingleGenericErrorModal_CM_C
// 0x00E0 (0x0638 - 0x0558)
class UWBP_SingleGenericErrorModal_CM_C final : public UVALUI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_Button_Primary_01_CM_C*   Button_Primary_Confirm_CM;                         // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_39;                                          // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Button;                                    // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_Message;                                      // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_SubError;                                     // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_Title;                                        // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_ErrorContainer;                               // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Primary_01_CM_C*   WBP_Template_Button_Primary_01;                    // 0x0598(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FF_GenericErrorModalPayload            Payload;                                           // 0x05A0(0x0098)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__WBP_SingleGenericErrorModal_CM_Button_Primary_Confirm_CM_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
	void BndEvt__WBP_SingleGenericErrorModal_CM_WBP_Template_Button_Primary_01_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_SingleGenericErrorModal_CM(int32 EntryPoint, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FF_GenericErrorModalPayload& K2Node_Event_payload, int32 CallFunc_AkEventGlobal_ReturnValue);
	void InpActEvt_IA_UI_Confirm_Select_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void PreConstruct(bool IsDesignTime);
	void SetErrorPayload(const struct FF_GenericErrorModalPayload& Param_Payload);
	void UpdateFromPayload(bool CallFunc_IsWindowsPlatform_ReturnValue, bool CallFunc_IsConsolePlatform_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_TextIsEmpty_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot_1, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SingleGenericErrorModal_CM_C">();
	}
	static class UWBP_SingleGenericErrorModal_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SingleGenericErrorModal_CM_C>();
	}
};
static_assert(alignof(UWBP_SingleGenericErrorModal_CM_C) == 0x000008, "Wrong alignment on UWBP_SingleGenericErrorModal_CM_C");
static_assert(sizeof(UWBP_SingleGenericErrorModal_CM_C) == 0x000638, "Wrong size on UWBP_SingleGenericErrorModal_CM_C");
static_assert(offsetof(UWBP_SingleGenericErrorModal_CM_C, UberGraphFrame) == 0x000558, "Member 'UWBP_SingleGenericErrorModal_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SingleGenericErrorModal_CM_C, Button_Primary_Confirm_CM) == 0x000560, "Member 'UWBP_SingleGenericErrorModal_CM_C::Button_Primary_Confirm_CM' has a wrong offset!");
static_assert(offsetof(UWBP_SingleGenericErrorModal_CM_C, Image_39) == 0x000568, "Member 'UWBP_SingleGenericErrorModal_CM_C::Image_39' has a wrong offset!");
static_assert(offsetof(UWBP_SingleGenericErrorModal_CM_C, SizeBox_Button) == 0x000570, "Member 'UWBP_SingleGenericErrorModal_CM_C::SizeBox_Button' has a wrong offset!");
static_assert(offsetof(UWBP_SingleGenericErrorModal_CM_C, Text_Message) == 0x000578, "Member 'UWBP_SingleGenericErrorModal_CM_C::Text_Message' has a wrong offset!");
static_assert(offsetof(UWBP_SingleGenericErrorModal_CM_C, Text_SubError) == 0x000580, "Member 'UWBP_SingleGenericErrorModal_CM_C::Text_SubError' has a wrong offset!");
static_assert(offsetof(UWBP_SingleGenericErrorModal_CM_C, Text_Title) == 0x000588, "Member 'UWBP_SingleGenericErrorModal_CM_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UWBP_SingleGenericErrorModal_CM_C, VBox_ErrorContainer) == 0x000590, "Member 'UWBP_SingleGenericErrorModal_CM_C::VBox_ErrorContainer' has a wrong offset!");
static_assert(offsetof(UWBP_SingleGenericErrorModal_CM_C, WBP_Template_Button_Primary_01) == 0x000598, "Member 'UWBP_SingleGenericErrorModal_CM_C::WBP_Template_Button_Primary_01' has a wrong offset!");
static_assert(offsetof(UWBP_SingleGenericErrorModal_CM_C, Payload) == 0x0005A0, "Member 'UWBP_SingleGenericErrorModal_CM_C::Payload' has a wrong offset!");

}

