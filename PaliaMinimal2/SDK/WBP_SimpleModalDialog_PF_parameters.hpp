#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SimpleModalDialog_PF

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_SimpleModalDialog_PF.WBP_SimpleModalDialog_PF_C.BndEvt__WBP_SimpleModalDialog_PF_WBP_Button_A_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_SimpleModalDialog_PF_C_BndEvt__WBP_SimpleModalDialog_PF_WBP_Button_A_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SimpleModalDialog_PF_C_BndEvt__WBP_SimpleModalDialog_PF_WBP_Button_A_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_SimpleModalDialog_PF_C_BndEvt__WBP_SimpleModalDialog_PF_WBP_Button_A_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_SimpleModalDialog_PF_C_BndEvt__WBP_SimpleModalDialog_PF_WBP_Button_A_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_SimpleModalDialog_PF_C_BndEvt__WBP_SimpleModalDialog_PF_WBP_Button_A_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_SimpleModalDialog_PF_C_BndEvt__WBP_SimpleModalDialog_PF_WBP_Button_A_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_SimpleModalDialog_PF_C_BndEvt__WBP_SimpleModalDialog_PF_WBP_Button_A_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_SimpleModalDialog_PF.WBP_SimpleModalDialog_PF_C.ExecuteUbergraph_WBP_SimpleModalDialog_PF
// 0x0030 (0x0030 - 0x0000)
struct WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50F6[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class US6UI_UIManagerWidgetBase*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50F7[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF) == 0x000008, "Wrong alignment on WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF");
static_assert(sizeof(WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF) == 0x000030, "Wrong size on WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF");
static_assert(offsetof(WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF, EntryPoint) == 0x000000, "Member 'WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000010, "Member 'WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF, CallFunc_BooleanAND_ReturnValue) == 0x000019, "Member 'WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF, K2Node_ComponentBoundEvent_Button) == 0x000020, "Member 'WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF, CallFunc_Not_PreBool_ReturnValue) == 0x000028, "Member 'WBP_SimpleModalDialog_PF_C_ExecuteUbergraph_WBP_SimpleModalDialog_PF::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_SimpleModalDialog_PF.WBP_SimpleModalDialog_PF_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_SimpleModalDialog_PF_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SimpleModalDialog_PF_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_SimpleModalDialog_PF_C_PreConstruct");
static_assert(sizeof(WBP_SimpleModalDialog_PF_C_PreConstruct) == 0x000001, "Wrong size on WBP_SimpleModalDialog_PF_C_PreConstruct");
static_assert(offsetof(WBP_SimpleModalDialog_PF_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_SimpleModalDialog_PF_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

