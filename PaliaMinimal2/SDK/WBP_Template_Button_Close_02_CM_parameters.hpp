#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Template_Button_Close_02_CM

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Template_Button_Close_02_CM.WBP_Template_Button_Close_02_CM_C.ExecuteUbergraph_WBP_Template_Button_Close_02_CM
// 0x000C (0x000C - 0x0000)
struct WBP_Template_Button_Close_02_CM_C_ExecuteUbergraph_WBP_Template_Button_Close_02_CM final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5332[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_Button_Close_02_CM_C_ExecuteUbergraph_WBP_Template_Button_Close_02_CM) == 0x000004, "Wrong alignment on WBP_Template_Button_Close_02_CM_C_ExecuteUbergraph_WBP_Template_Button_Close_02_CM");
static_assert(sizeof(WBP_Template_Button_Close_02_CM_C_ExecuteUbergraph_WBP_Template_Button_Close_02_CM) == 0x00000C, "Wrong size on WBP_Template_Button_Close_02_CM_C_ExecuteUbergraph_WBP_Template_Button_Close_02_CM");
static_assert(offsetof(WBP_Template_Button_Close_02_CM_C_ExecuteUbergraph_WBP_Template_Button_Close_02_CM, EntryPoint) == 0x000000, "Member 'WBP_Template_Button_Close_02_CM_C_ExecuteUbergraph_WBP_Template_Button_Close_02_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Template_Button_Close_02_CM_C_ExecuteUbergraph_WBP_Template_Button_Close_02_CM, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_Template_Button_Close_02_CM_C_ExecuteUbergraph_WBP_Template_Button_Close_02_CM::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_Template_Button_Close_02_CM_C_ExecuteUbergraph_WBP_Template_Button_Close_02_CM, CallFunc_AkEventGlobal_ReturnValue) == 0x000008, "Member 'WBP_Template_Button_Close_02_CM_C_ExecuteUbergraph_WBP_Template_Button_Close_02_CM::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");

// Function WBP_Template_Button_Close_02_CM.WBP_Template_Button_Close_02_CM_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_Template_Button_Close_02_CM_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_Button_Close_02_CM_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Template_Button_Close_02_CM_C_PreConstruct");
static_assert(sizeof(WBP_Template_Button_Close_02_CM_C_PreConstruct) == 0x000001, "Wrong size on WBP_Template_Button_Close_02_CM_C_PreConstruct");
static_assert(offsetof(WBP_Template_Button_Close_02_CM_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Template_Button_Close_02_CM_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_Template_Button_Close_02_CM.WBP_Template_Button_Close_02_CM_C.SetButtonStyle
// 0x0008 (0x0008 - 0x0000)
struct WBP_Template_Button_Close_02_CM_C_SetButtonStyle final
{
public:
	class UClass*                                 Param_Style;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Template_Button_Close_02_CM_C_SetButtonStyle) == 0x000008, "Wrong alignment on WBP_Template_Button_Close_02_CM_C_SetButtonStyle");
static_assert(sizeof(WBP_Template_Button_Close_02_CM_C_SetButtonStyle) == 0x000008, "Wrong size on WBP_Template_Button_Close_02_CM_C_SetButtonStyle");
static_assert(offsetof(WBP_Template_Button_Close_02_CM_C_SetButtonStyle, Param_Style) == 0x000000, "Member 'WBP_Template_Button_Close_02_CM_C_SetButtonStyle::Param_Style' has a wrong offset!");

}

