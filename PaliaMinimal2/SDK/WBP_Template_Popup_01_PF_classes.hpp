#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Template_Popup_01_PF

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Template_Popup_01_PF.WBP_Template_Popup_01_PF_C
// 0x00A0 (0x0360 - 0x02C0)
class UWBP_Template_Popup_01_PF_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_Button_Primary_01_CM_C*   Button_Primary_Confirm;                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Secondary_01_CM_C* Button_Secondary_Cancel;                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_94;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot_Body;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Cancel;                                            // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Confirm;                                           // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   Primary_Button_Text;                               // 0x0308(0x0018)(Edit, BlueprintVisible)
	class FText                                   SecondaryButtonText;                               // 0x0320(0x0018)(Edit, BlueprintVisible)
	bool                                          OnlyConfirm;                                       // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoButtons;                                         // 0x0339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_514A[0x6];                                     // 0x033A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Button_Cancel_Style_Override;                      // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Button_Confirm_Style_Override;                     // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           Confirm_Input_Action;                              // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           Cancel_Input_Action;                               // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Template_Popup_01_PF_Button_Primary_Confirm_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature();
	void BndEvt__WBP_Template_Popup_01_PF_Button_Primary_Confirm_K2Node_ComponentBoundEvent_7_ButtonHovered__DelegateSignature();
	void BndEvt__WBP_Template_Popup_01_PF_Button_Secondary_Cancel_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_Template_Popup_01_PF_Button_Secondary_Cancel_K2Node_ComponentBoundEvent_5_OnButtonHovered__DelegateSignature();
	void Cancel__DelegateSignature();
	void Confirm__DelegateSignature();
	void ExecuteUbergraph_WBP_Template_Popup_01_PF(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, int32 CallFunc_AkEventGlobal_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_AkEventGlobal_ReturnValue_1, ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, ESlateVisibility K2Node_Select_Default_1);
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void Setup_Input_Action(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Template_Popup_01_PF_C">();
	}
	static class UWBP_Template_Popup_01_PF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Template_Popup_01_PF_C>();
	}
};
static_assert(alignof(UWBP_Template_Popup_01_PF_C) == 0x000008, "Wrong alignment on UWBP_Template_Popup_01_PF_C");
static_assert(sizeof(UWBP_Template_Popup_01_PF_C) == 0x000360, "Wrong size on UWBP_Template_Popup_01_PF_C");
static_assert(offsetof(UWBP_Template_Popup_01_PF_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_Template_Popup_01_PF_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Popup_01_PF_C, Button_Primary_Confirm) == 0x0002C8, "Member 'UWBP_Template_Popup_01_PF_C::Button_Primary_Confirm' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Popup_01_PF_C, Button_Secondary_Cancel) == 0x0002D0, "Member 'UWBP_Template_Popup_01_PF_C::Button_Secondary_Cancel' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Popup_01_PF_C, Image_94) == 0x0002D8, "Member 'UWBP_Template_Popup_01_PF_C::Image_94' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Popup_01_PF_C, NamedSlot_Body) == 0x0002E0, "Member 'UWBP_Template_Popup_01_PF_C::NamedSlot_Body' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Popup_01_PF_C, Cancel) == 0x0002E8, "Member 'UWBP_Template_Popup_01_PF_C::Cancel' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Popup_01_PF_C, Confirm) == 0x0002F8, "Member 'UWBP_Template_Popup_01_PF_C::Confirm' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Popup_01_PF_C, Primary_Button_Text) == 0x000308, "Member 'UWBP_Template_Popup_01_PF_C::Primary_Button_Text' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Popup_01_PF_C, SecondaryButtonText) == 0x000320, "Member 'UWBP_Template_Popup_01_PF_C::SecondaryButtonText' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Popup_01_PF_C, OnlyConfirm) == 0x000338, "Member 'UWBP_Template_Popup_01_PF_C::OnlyConfirm' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Popup_01_PF_C, NoButtons) == 0x000339, "Member 'UWBP_Template_Popup_01_PF_C::NoButtons' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Popup_01_PF_C, Button_Cancel_Style_Override) == 0x000340, "Member 'UWBP_Template_Popup_01_PF_C::Button_Cancel_Style_Override' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Popup_01_PF_C, Button_Confirm_Style_Override) == 0x000348, "Member 'UWBP_Template_Popup_01_PF_C::Button_Confirm_Style_Override' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Popup_01_PF_C, Confirm_Input_Action) == 0x000350, "Member 'UWBP_Template_Popup_01_PF_C::Confirm_Input_Action' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Popup_01_PF_C, Cancel_Input_Action) == 0x000358, "Member 'UWBP_Template_Popup_01_PF_C::Cancel_Input_Action' has a wrong offset!");

}
