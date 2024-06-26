#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LockedRow

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_LockedRow.WBP_LockedRow_C.ExecuteUbergraph_WBP_LockedRow
// 0x0020 (0x0020 - 0x0000)
struct WBP_LockedRow_C_ExecuteUbergraph_WBP_LockedRow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_448F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X;                          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LockedRow_C_ExecuteUbergraph_WBP_LockedRow) == 0x000008, "Wrong alignment on WBP_LockedRow_C_ExecuteUbergraph_WBP_LockedRow");
static_assert(sizeof(WBP_LockedRow_C_ExecuteUbergraph_WBP_LockedRow) == 0x000020, "Wrong size on WBP_LockedRow_C_ExecuteUbergraph_WBP_LockedRow");
static_assert(offsetof(WBP_LockedRow_C_ExecuteUbergraph_WBP_LockedRow, EntryPoint) == 0x000000, "Member 'WBP_LockedRow_C_ExecuteUbergraph_WBP_LockedRow::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_LockedRow_C_ExecuteUbergraph_WBP_LockedRow, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_LockedRow_C_ExecuteUbergraph_WBP_LockedRow::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_LockedRow_C_ExecuteUbergraph_WBP_LockedRow, CallFunc_BreakVector2D_X) == 0x000008, "Member 'WBP_LockedRow_C_ExecuteUbergraph_WBP_LockedRow::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_LockedRow_C_ExecuteUbergraph_WBP_LockedRow, CallFunc_BreakVector2D_Y) == 0x000010, "Member 'WBP_LockedRow_C_ExecuteUbergraph_WBP_LockedRow::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_LockedRow_C_ExecuteUbergraph_WBP_LockedRow, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast) == 0x000018, "Member 'WBP_LockedRow_C_ExecuteUbergraph_WBP_LockedRow::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_LockedRow_C_ExecuteUbergraph_WBP_LockedRow, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast) == 0x00001C, "Member 'WBP_LockedRow_C_ExecuteUbergraph_WBP_LockedRow::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast' has a wrong offset!");

// Function WBP_LockedRow.WBP_LockedRow_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_LockedRow_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LockedRow_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_LockedRow_C_PreConstruct");
static_assert(sizeof(WBP_LockedRow_C_PreConstruct) == 0x000001, "Wrong size on WBP_LockedRow_C_PreConstruct");
static_assert(offsetof(WBP_LockedRow_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_LockedRow_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

