#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GpPopup_DescriptivePopupBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ValeriaUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GpPopup_DescriptivePopupBase.WBP_GpPopup_DescriptivePopupBase_C
// 0x0018 (0x0570 - 0x0558)
class UWBP_GpPopup_DescriptivePopupBase_C final : public UVALUI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_GPPopup_TutorialModal_C*           WBP_GPPopup_TutorialModal;                         // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVAL_DescriptivePopupType*              DescriptiveModalBase;                              // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void CloseWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue);
	void Construct();
	void ExecuteUbergraph_WBP_GpPopup_DescriptivePopupBase(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UVAL_DescriptivePopupType* K2Node_DynamicCast_AsDescriptive_Modal_Type, bool K2Node_DynamicCast_bSuccess);
	void OnClosed();
	void SetModalAlignment(class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GpPopup_DescriptivePopupBase_C">();
	}
	static class UWBP_GpPopup_DescriptivePopupBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GpPopup_DescriptivePopupBase_C>();
	}
};
static_assert(alignof(UWBP_GpPopup_DescriptivePopupBase_C) == 0x000008, "Wrong alignment on UWBP_GpPopup_DescriptivePopupBase_C");
static_assert(sizeof(UWBP_GpPopup_DescriptivePopupBase_C) == 0x000570, "Wrong size on UWBP_GpPopup_DescriptivePopupBase_C");
static_assert(offsetof(UWBP_GpPopup_DescriptivePopupBase_C, UberGraphFrame) == 0x000558, "Member 'UWBP_GpPopup_DescriptivePopupBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GpPopup_DescriptivePopupBase_C, WBP_GPPopup_TutorialModal) == 0x000560, "Member 'UWBP_GpPopup_DescriptivePopupBase_C::WBP_GPPopup_TutorialModal' has a wrong offset!");
static_assert(offsetof(UWBP_GpPopup_DescriptivePopupBase_C, DescriptiveModalBase) == 0x000568, "Member 'UWBP_GpPopup_DescriptivePopupBase_C::DescriptiveModalBase' has a wrong offset!");

}

