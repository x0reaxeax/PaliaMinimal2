#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Template_Button_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S6UICommonWidgets_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Template_Button_CM.WBP_Template_Button_CM_C
// 0x0030 (0x15A0 - 0x1570)
class UWBP_Template_Button_CM_C final : public US6UI_CommonButton_Styled
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1570(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                             NamedSlot;                                         // 0x1578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFocused;                                         // 0x1580(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnfocused;                                       // 0x1590(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BP_OnFocusLost();
	void BP_OnFocusReceived();
	void ExecuteUbergraph_WBP_Template_Button_CM(int32 EntryPoint);
	void OnFocused__DelegateSignature();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnUnfocused__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Template_Button_CM_C">();
	}
	static class UWBP_Template_Button_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Template_Button_CM_C>();
	}
};
static_assert(alignof(UWBP_Template_Button_CM_C) == 0x000010, "Wrong alignment on UWBP_Template_Button_CM_C");
static_assert(sizeof(UWBP_Template_Button_CM_C) == 0x0015A0, "Wrong size on UWBP_Template_Button_CM_C");
static_assert(offsetof(UWBP_Template_Button_CM_C, UberGraphFrame) == 0x001570, "Member 'UWBP_Template_Button_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Button_CM_C, NamedSlot) == 0x001578, "Member 'UWBP_Template_Button_CM_C::NamedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Button_CM_C, OnFocused) == 0x001580, "Member 'UWBP_Template_Button_CM_C::OnFocused' has a wrong offset!");
static_assert(offsetof(UWBP_Template_Button_CM_C, OnUnfocused) == 0x001590, "Member 'UWBP_Template_Button_CM_C::OnUnfocused' has a wrong offset!");

}

