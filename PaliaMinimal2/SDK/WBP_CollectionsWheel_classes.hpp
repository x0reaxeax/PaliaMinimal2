#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CollectionsWheel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S6UICore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CollectionsWheel.WBP_CollectionsWheel_C
// 0x0040 (0x0560 - 0x0520)
class UWBP_CollectionsWheel_C final : public US6UI_InputActionHandlingUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0520(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CircularEmoteWheel_C*              WBP_CircularEmoteWheel;                            // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SavedLoadouts_Wheel_C*             WBP_SavedLoadouts_Wheel;                           // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*       WidgetSwitcher;                                    // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnRadialMenuSelect;                                // 0x0540(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCancelEmoteWheel;                                // 0x0550(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void CheckWantsToSelect(bool* WantsToSelect, bool CallFunc_BooleanOR_ReturnValue);
	void Construct();
	void ExecuteUbergraph_WBP_CollectionsWheel(int32 EntryPoint, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, bool Temp_bool_Variable, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1);
	void FinishSelecting(class UWidget* CallFunc_GetActiveWidget_ReturnValue, TScriptInterface<class IBPI_CollectionsWheel_C> K2Node_DynamicCast_AsBPI_Collections_Wheel, bool K2Node_DynamicCast_bSuccess);
	void HandleCancelEmoteWheel();
	void HandleRadialMenuSelect();
	void IncrementWidgetSwitcher(int32 NextActiveIndex, int32 TotalNumWidgets, class UWidget* CallFunc_GetActiveWidget_ReturnValue, TScriptInterface<class IBPI_CollectionsWheel_C> K2Node_DynamicCast_AsBPI_Collections_Wheel, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetActiveWidget_ReturnValue_1, TScriptInterface<class IBPI_CollectionsWheel_C> K2Node_DynamicCast_AsBPI_Collections_Wheel_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetNumWidgets_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void InpActEvt_IA_IncrementCollectionsWheel_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void OnCancelEmoteWheel__DelegateSignature();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnRadialMenuSelect__DelegateSignature();
	void Start_Selecting(class UWBP_MainWidget_CM_C* MainWidget, class UWidget* CallFunc_GetActiveWidget_ReturnValue, TScriptInterface<class IBPI_CollectionsWheel_C> K2Node_DynamicCast_AsBPI_Collections_Wheel, bool K2Node_DynamicCast_bSuccess);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CollectionsWheel_C">();
	}
	static class UWBP_CollectionsWheel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CollectionsWheel_C>();
	}
};
static_assert(alignof(UWBP_CollectionsWheel_C) == 0x000008, "Wrong alignment on UWBP_CollectionsWheel_C");
static_assert(sizeof(UWBP_CollectionsWheel_C) == 0x000560, "Wrong size on UWBP_CollectionsWheel_C");
static_assert(offsetof(UWBP_CollectionsWheel_C, UberGraphFrame) == 0x000520, "Member 'UWBP_CollectionsWheel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CollectionsWheel_C, WBP_CircularEmoteWheel) == 0x000528, "Member 'UWBP_CollectionsWheel_C::WBP_CircularEmoteWheel' has a wrong offset!");
static_assert(offsetof(UWBP_CollectionsWheel_C, WBP_SavedLoadouts_Wheel) == 0x000530, "Member 'UWBP_CollectionsWheel_C::WBP_SavedLoadouts_Wheel' has a wrong offset!");
static_assert(offsetof(UWBP_CollectionsWheel_C, WidgetSwitcher) == 0x000538, "Member 'UWBP_CollectionsWheel_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_CollectionsWheel_C, OnRadialMenuSelect) == 0x000540, "Member 'UWBP_CollectionsWheel_C::OnRadialMenuSelect' has a wrong offset!");
static_assert(offsetof(UWBP_CollectionsWheel_C, OnCancelEmoteWheel) == 0x000550, "Member 'UWBP_CollectionsWheel_C::OnCancelEmoteWheel' has a wrong offset!");

}

