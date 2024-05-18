#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FTUESettings_PF

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonWidgetInputExtended_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FTUESettings_PF.WBP_FTUESettings_PF_C
// 0x0030 (0x0540 - 0x0510)
class UWBP_FTUESettings_PF_C final : public UCommonActivatableWidgetInputExtended
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_SettingsItem_Checkbox_CM_C*        Checkbox_EnableTips_CM;                            // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ListView_Styled*                 ListView_FTUEFlags_01;                             // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        ScrollMoveSpeed;                                   // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFocusedItemChanged;                              // 0x0530(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_FTUESettings_CM_Checkbox_EnableTips_CM_K2Node_ComponentBoundEvent_0_OnCheckedStateChanged__DelegateSignature(bool Checked);
	void BndEvt__WBP_FTUESettings_PF_ListView_FTUEFlags_01_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void Construct();
	void ExecuteUbergraph_WBP_FTUESettings_PF(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, bool Temp_bool_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, class UInputAction* Temp_object_Variable_1, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, double Temp_real_Variable_3_0, double Temp_real_Variable_2_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, int32 CallFunc_AkEventGlobal_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1, bool K2Node_ComponentBoundEvent_Checked, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UVAL_TutorialFlagDefinition* K2Node_DynamicCast_AsVAL_Tutorial_Flag_Definition, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UVAL_TutorialFlagDefinition> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_IsFlagSet_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Not_PreBool_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UWBP_FTUEFlagListEntry_C* K2Node_DynamicCast_AsWBP_FTUEFlag_List_Entry, bool K2Node_DynamicCast_bSuccess_1);
	void Get_Scroll_Offset(float* Offset, float* Offset_of_End);
	void HandleFTUEFlagsChanged(class UVAL_TutorialFlagsManager* FTUEFlagsManager);
	void InpActEvt_IA_UI_SecondaryAction_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_SwitchItem_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void OnButtonFocused();
	class UWidget* OnCheckmarkNavigationDown(EUINavigation Param_Navigation);
	void OnFocusedItemChanged__DelegateSignature(bool IsFTUEFlag);
	void OnFTUEFlagFocused();
	void OnInitialized();
	void PopulateFTUEFlagsList(const TArray<class UObject*>& HalfFTUEFlagsArray_02, const TArray<class UObject*>& HalfFTUEFlagsArray_01, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const TSet<TSoftObjectPtr<class UVAL_TutorialFlagDefinition>>& CallFunc_GetAllPossibleFlags_ReturnValue, TArray<TSoftObjectPtr<class UVAL_TutorialFlagDefinition>>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, TSoftObjectPtr<class UVAL_TutorialFlagDefinition> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Set_Scroll_Offset(float Offset);
	void SetNavigation(TDelegate<void(EUINavigation Navigation)> K2Node_CreateDelegate_OutputDelegate);
	void SynchronizeState(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, bool CallFunc_IsTutorialEnabled_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, class UWBP_FTUEFlagListEntry_C* K2Node_DynamicCast_AsWBP_FTUEFlag_List_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_FTUESettings_PF_C">();
	}
	static class UWBP_FTUESettings_PF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FTUESettings_PF_C>();
	}
};
static_assert(alignof(UWBP_FTUESettings_PF_C) == 0x000008, "Wrong alignment on UWBP_FTUESettings_PF_C");
static_assert(sizeof(UWBP_FTUESettings_PF_C) == 0x000540, "Wrong size on UWBP_FTUESettings_PF_C");
static_assert(offsetof(UWBP_FTUESettings_PF_C, UberGraphFrame) == 0x000510, "Member 'UWBP_FTUESettings_PF_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_FTUESettings_PF_C, Checkbox_EnableTips_CM) == 0x000518, "Member 'UWBP_FTUESettings_PF_C::Checkbox_EnableTips_CM' has a wrong offset!");
static_assert(offsetof(UWBP_FTUESettings_PF_C, ListView_FTUEFlags_01) == 0x000520, "Member 'UWBP_FTUESettings_PF_C::ListView_FTUEFlags_01' has a wrong offset!");
static_assert(offsetof(UWBP_FTUESettings_PF_C, ScrollMoveSpeed) == 0x000528, "Member 'UWBP_FTUESettings_PF_C::ScrollMoveSpeed' has a wrong offset!");
static_assert(offsetof(UWBP_FTUESettings_PF_C, OnFocusedItemChanged) == 0x000530, "Member 'UWBP_FTUESettings_PF_C::OnFocusedItemChanged' has a wrong offset!");

}

