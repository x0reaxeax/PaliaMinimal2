#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FilterOption_CM

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function WBP_FilterOption_CM.WBP_FilterOption_CM_C.BndEvt__WBP_FilterOption_CM_WBP_CheckmarkButton_CM_K2Node_ComponentBoundEvent_0_OnCheckedStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_FilterOption_CM_C_BndEvt__WBP_FilterOption_CM_WBP_CheckmarkButton_CM_K2Node_ComponentBoundEvent_0_OnCheckedStateChanged__DelegateSignature final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FilterOption_CM_C_BndEvt__WBP_FilterOption_CM_WBP_CheckmarkButton_CM_K2Node_ComponentBoundEvent_0_OnCheckedStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on WBP_FilterOption_CM_C_BndEvt__WBP_FilterOption_CM_WBP_CheckmarkButton_CM_K2Node_ComponentBoundEvent_0_OnCheckedStateChanged__DelegateSignature");
static_assert(sizeof(WBP_FilterOption_CM_C_BndEvt__WBP_FilterOption_CM_WBP_CheckmarkButton_CM_K2Node_ComponentBoundEvent_0_OnCheckedStateChanged__DelegateSignature) == 0x000001, "Wrong size on WBP_FilterOption_CM_C_BndEvt__WBP_FilterOption_CM_WBP_CheckmarkButton_CM_K2Node_ComponentBoundEvent_0_OnCheckedStateChanged__DelegateSignature");
static_assert(offsetof(WBP_FilterOption_CM_C_BndEvt__WBP_FilterOption_CM_WBP_CheckmarkButton_CM_K2Node_ComponentBoundEvent_0_OnCheckedStateChanged__DelegateSignature, IsSelected) == 0x000000, "Member 'WBP_FilterOption_CM_C_BndEvt__WBP_FilterOption_CM_WBP_CheckmarkButton_CM_K2Node_ComponentBoundEvent_0_OnCheckedStateChanged__DelegateSignature::IsSelected' has a wrong offset!");

// Function WBP_FilterOption_CM.WBP_FilterOption_CM_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_FilterOption_CM_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FilterOption_CM_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on WBP_FilterOption_CM_C_BP_OnItemExpansionChanged");
static_assert(sizeof(WBP_FilterOption_CM_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on WBP_FilterOption_CM_C_BP_OnItemExpansionChanged");
static_assert(offsetof(WBP_FilterOption_CM_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'WBP_FilterOption_CM_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function WBP_FilterOption_CM.WBP_FilterOption_CM_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_FilterOption_CM_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FilterOption_CM_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on WBP_FilterOption_CM_C_BP_OnItemSelectionChanged");
static_assert(sizeof(WBP_FilterOption_CM_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on WBP_FilterOption_CM_C_BP_OnItemSelectionChanged");
static_assert(offsetof(WBP_FilterOption_CM_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'WBP_FilterOption_CM_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function WBP_FilterOption_CM.WBP_FilterOption_CM_C.ExecuteUbergraph_WBP_FilterOption_CM
// 0x0028 (0x0028 - 0x0000)
struct WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_IsSelected;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5156[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5157[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UListEntry_CharacterCustomization_FilterOption_C* K2Node_DynamicCast_AsList_Entry_Character_Customization_Filter_Option; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsListItemSelected_ReturnValue;           // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM) == 0x000008, "Wrong alignment on WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM");
static_assert(sizeof(WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM) == 0x000028, "Wrong size on WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM");
static_assert(offsetof(WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM, EntryPoint) == 0x000000, "Member 'WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM, K2Node_ComponentBoundEvent_IsSelected) == 0x000004, "Member 'WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM::K2Node_ComponentBoundEvent_IsSelected' has a wrong offset!");
static_assert(offsetof(WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM, K2Node_Event_bIsExpanded) == 0x000005, "Member 'WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM, K2Node_Event_bIsSelected) == 0x000006, "Member 'WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM, CallFunc_AkEventGlobal_ReturnValue) == 0x000008, "Member 'WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM, K2Node_Event_ListItemObject) == 0x000010, "Member 'WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM, K2Node_DynamicCast_AsList_Entry_Character_Customization_Filter_Option) == 0x000018, "Member 'WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM::K2Node_DynamicCast_AsList_Entry_Character_Customization_Filter_Option' has a wrong offset!");
static_assert(offsetof(WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM, CallFunc_IsListItemSelected_ReturnValue) == 0x000021, "Member 'WBP_FilterOption_CM_C_ExecuteUbergraph_WBP_FilterOption_CM::CallFunc_IsListItemSelected_ReturnValue' has a wrong offset!");

// Function WBP_FilterOption_CM.WBP_FilterOption_CM_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct WBP_FilterOption_CM_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
static_assert(alignof(WBP_FilterOption_CM_C_OnFocusReceived) == 0x000008, "Wrong alignment on WBP_FilterOption_CM_C_OnFocusReceived");
static_assert(sizeof(WBP_FilterOption_CM_C_OnFocusReceived) == 0x0001B0, "Wrong size on WBP_FilterOption_CM_C_OnFocusReceived");
static_assert(offsetof(WBP_FilterOption_CM_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'WBP_FilterOption_CM_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_FilterOption_CM_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'WBP_FilterOption_CM_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(WBP_FilterOption_CM_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'WBP_FilterOption_CM_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FilterOption_CM_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x0000F8, "Member 'WBP_FilterOption_CM_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_FilterOption_CM.WBP_FilterOption_CM_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct WBP_FilterOption_CM_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FilterOption_CM_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on WBP_FilterOption_CM_C_OnListItemObjectSet");
static_assert(sizeof(WBP_FilterOption_CM_C_OnListItemObjectSet) == 0x000008, "Wrong size on WBP_FilterOption_CM_C_OnListItemObjectSet");
static_assert(offsetof(WBP_FilterOption_CM_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'WBP_FilterOption_CM_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function WBP_FilterOption_CM.WBP_FilterOption_CM_C.OnOptionSelected__DelegateSignature
// 0x0040 (0x0040 - 0x0000)
struct WBP_FilterOption_CM_C_OnOptionSelected__DelegateSignature final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5158[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVAL_CharacterCustomization_CosmeticTagFilterStruct SelectedCosmeticTag;                               // 0x0008(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_FilterOption_CM_C_OnOptionSelected__DelegateSignature) == 0x000008, "Wrong alignment on WBP_FilterOption_CM_C_OnOptionSelected__DelegateSignature");
static_assert(sizeof(WBP_FilterOption_CM_C_OnOptionSelected__DelegateSignature) == 0x000040, "Wrong size on WBP_FilterOption_CM_C_OnOptionSelected__DelegateSignature");
static_assert(offsetof(WBP_FilterOption_CM_C_OnOptionSelected__DelegateSignature, IsSelected) == 0x000000, "Member 'WBP_FilterOption_CM_C_OnOptionSelected__DelegateSignature::IsSelected' has a wrong offset!");
static_assert(offsetof(WBP_FilterOption_CM_C_OnOptionSelected__DelegateSignature, SelectedCosmeticTag) == 0x000008, "Member 'WBP_FilterOption_CM_C_OnOptionSelected__DelegateSignature::SelectedCosmeticTag' has a wrong offset!");

}
