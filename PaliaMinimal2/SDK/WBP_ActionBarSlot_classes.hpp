#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ActionBarSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Palia_structs.hpp"
#include "S6UICore_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ActionBarSlot.WBP_ActionBarSlot_C
// 0x0070 (0x0590 - 0x0520)
class UWBP_ActionBarSlot_C final : public US6UI_InputActionHandlingUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0520(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Extra_ItemInfo;                                    // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ErrorBorder;                                 // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_SlotNumber;                                   // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ActionBarItemInfo_C*               WBP_ActionBarItemInfo;                             // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Item_CM_C*                         WBP_Item_CM;                                       // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemSlot_CM_C*                     WBP_ItemSlot_CM;                                   // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SlotNumber;                                        // 0x0558(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           DeselectedAmountTextColor;                         // 0x055C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SelectedAmountTextColor;                           // 0x056C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHighlighted;                                      // 0x057C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHovered;                                          // 0x057D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52FF[0x2];                                     // 0x057E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnActionBarIsActivated;                            // 0x0580(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	bool BP_OnHandleBackAction();
	void Construct();
	void ExecuteUbergraph_WBP_ActionBarSlot(int32 EntryPoint, TDelegate<void(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)> K2Node_CreateDelegate_OutputDelegate, const struct FValeriaItem& K2Node_CustomEvent_Item, bool K2Node_CustomEvent_NewHighlighted, ESlateVisibility Temp_byte_Variable, bool CallFunc_ItemIsEmpty_ReturnValue, ESlateVisibility Temp_byte_Variable_1, TDelegate<void(class UWBP_ItemSlot_CM_C* Slot)> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(class UWBP_ItemSlot_CM_C* Slot)> K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable, bool CallFunc_Set_Item_Definition_Displays, ESlateVisibility K2Node_Select_Default, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UPlacementComponent* CallFunc_GetPlacement_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TDelegate<void(class UPlacementComponent* PC, bool IsPlacing)> K2Node_CreateDelegate_OutputDelegate_3, class UPlacementComponent* K2Node_CustomEvent_PC, bool K2Node_CustomEvent_isPlacing, TDelegate<void(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)> K2Node_CreateDelegate_OutputDelegate_4, const struct FGuid& CallFunc_RegisterInputActionBinding_ReturnValue, const struct FGuid& CallFunc_RegisterInputActionBinding_ReturnValue_1);
	void HandleHovered(class UWBP_ItemSlot_CM_C* Param_Slot);
	void HandleInputAction_EatActionBarItem(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleInputAction_UseActionBarItem(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsPlacing_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HandleUnhovered(class UWBP_ItemSlot_CM_C* Param_Slot);
	void OnActionBarIsActivated__DelegateSignature(bool bIsActionBarActivated);
	void OnInitialized();
	void OnPlacementChanged(class UPlacementComponent* PC, bool IsPlacing);
	void SetSlotNumber(int32 Param_SlotNumber, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void ToggleHighlight(bool IsHighlighted, ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, class UVALUI_TextBlockStyle* Temp_object_Variable, class UVALUI_TextBlockStyle* Temp_object_Variable_1, bool Temp_bool_Variable_1, double Temp_real_Variable, double Temp_real_Variable_1, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, ESlateVisibility K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, class UVALUI_TextBlockStyle* K2Node_Select_Default_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, double K2Node_Select_Default_2, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void UpdateActionBarSlot(const struct FValeriaItem& Item, bool NewHighlighted);
	void UpdateErrorBorder(bool ShouldBeVisible, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ActionBarSlot_C">();
	}
	static class UWBP_ActionBarSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ActionBarSlot_C>();
	}
};
static_assert(alignof(UWBP_ActionBarSlot_C) == 0x000008, "Wrong alignment on UWBP_ActionBarSlot_C");
static_assert(sizeof(UWBP_ActionBarSlot_C) == 0x000590, "Wrong size on UWBP_ActionBarSlot_C");
static_assert(offsetof(UWBP_ActionBarSlot_C, UberGraphFrame) == 0x000520, "Member 'UWBP_ActionBarSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarSlot_C, Extra_ItemInfo) == 0x000528, "Member 'UWBP_ActionBarSlot_C::Extra_ItemInfo' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarSlot_C, Image_ErrorBorder) == 0x000530, "Member 'UWBP_ActionBarSlot_C::Image_ErrorBorder' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarSlot_C, Text_SlotNumber) == 0x000538, "Member 'UWBP_ActionBarSlot_C::Text_SlotNumber' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarSlot_C, WBP_ActionBarItemInfo) == 0x000540, "Member 'UWBP_ActionBarSlot_C::WBP_ActionBarItemInfo' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarSlot_C, WBP_Item_CM) == 0x000548, "Member 'UWBP_ActionBarSlot_C::WBP_Item_CM' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarSlot_C, WBP_ItemSlot_CM) == 0x000550, "Member 'UWBP_ActionBarSlot_C::WBP_ItemSlot_CM' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarSlot_C, SlotNumber) == 0x000558, "Member 'UWBP_ActionBarSlot_C::SlotNumber' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarSlot_C, DeselectedAmountTextColor) == 0x00055C, "Member 'UWBP_ActionBarSlot_C::DeselectedAmountTextColor' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarSlot_C, SelectedAmountTextColor) == 0x00056C, "Member 'UWBP_ActionBarSlot_C::SelectedAmountTextColor' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarSlot_C, bHighlighted) == 0x00057C, "Member 'UWBP_ActionBarSlot_C::bHighlighted' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarSlot_C, bHovered) == 0x00057D, "Member 'UWBP_ActionBarSlot_C::bHovered' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarSlot_C, OnActionBarIsActivated) == 0x000580, "Member 'UWBP_ActionBarSlot_C::OnActionBarIsActivated' has a wrong offset!");

}
