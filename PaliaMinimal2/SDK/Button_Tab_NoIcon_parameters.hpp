#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Button_Tab_NoIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function Button_Tab_NoIcon.Button_Tab_NoIcon_C.ExecuteUbergraph_Button_Tab_NoIcon
// 0x0010 (0x0010 - 0x0000)
struct Button_Tab_NoIcon_C_ExecuteUbergraph_Button_Tab_NoIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsActive;                            // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EDD[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UVALUI_ButtonStyle*                     K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Button_Tab_NoIcon_C_ExecuteUbergraph_Button_Tab_NoIcon) == 0x000008, "Wrong alignment on Button_Tab_NoIcon_C_ExecuteUbergraph_Button_Tab_NoIcon");
static_assert(sizeof(Button_Tab_NoIcon_C_ExecuteUbergraph_Button_Tab_NoIcon) == 0x000010, "Wrong size on Button_Tab_NoIcon_C_ExecuteUbergraph_Button_Tab_NoIcon");
static_assert(offsetof(Button_Tab_NoIcon_C_ExecuteUbergraph_Button_Tab_NoIcon, EntryPoint) == 0x000000, "Member 'Button_Tab_NoIcon_C_ExecuteUbergraph_Button_Tab_NoIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(Button_Tab_NoIcon_C_ExecuteUbergraph_Button_Tab_NoIcon, K2Node_Event_bIsActive) == 0x000004, "Member 'Button_Tab_NoIcon_C_ExecuteUbergraph_Button_Tab_NoIcon::K2Node_Event_bIsActive' has a wrong offset!");
static_assert(offsetof(Button_Tab_NoIcon_C_ExecuteUbergraph_Button_Tab_NoIcon, K2Node_Event_IsDesignTime) == 0x000005, "Member 'Button_Tab_NoIcon_C_ExecuteUbergraph_Button_Tab_NoIcon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Button_Tab_NoIcon_C_ExecuteUbergraph_Button_Tab_NoIcon, Temp_bool_Variable) == 0x000006, "Member 'Button_Tab_NoIcon_C_ExecuteUbergraph_Button_Tab_NoIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Button_Tab_NoIcon_C_ExecuteUbergraph_Button_Tab_NoIcon, K2Node_Select_Default) == 0x000008, "Member 'Button_Tab_NoIcon_C_ExecuteUbergraph_Button_Tab_NoIcon::K2Node_Select_Default' has a wrong offset!");

// Function Button_Tab_NoIcon.Button_Tab_NoIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Button_Tab_NoIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Button_Tab_NoIcon_C_PreConstruct) == 0x000001, "Wrong alignment on Button_Tab_NoIcon_C_PreConstruct");
static_assert(sizeof(Button_Tab_NoIcon_C_PreConstruct) == 0x000001, "Wrong size on Button_Tab_NoIcon_C_PreConstruct");
static_assert(offsetof(Button_Tab_NoIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Button_Tab_NoIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Button_Tab_NoIcon.Button_Tab_NoIcon_C.SetIsActiveTabButton
// 0x0001 (0x0001 - 0x0000)
struct Button_Tab_NoIcon_C_SetIsActiveTabButton final
{
public:
	bool                                          bIsActive;                                         // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Button_Tab_NoIcon_C_SetIsActiveTabButton) == 0x000001, "Wrong alignment on Button_Tab_NoIcon_C_SetIsActiveTabButton");
static_assert(sizeof(Button_Tab_NoIcon_C_SetIsActiveTabButton) == 0x000001, "Wrong size on Button_Tab_NoIcon_C_SetIsActiveTabButton");
static_assert(offsetof(Button_Tab_NoIcon_C_SetIsActiveTabButton, bIsActive) == 0x000000, "Member 'Button_Tab_NoIcon_C_SetIsActiveTabButton::bIsActive' has a wrong offset!");

}
