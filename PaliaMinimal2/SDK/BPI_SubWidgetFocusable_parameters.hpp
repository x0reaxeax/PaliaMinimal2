#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_SubWidgetFocusable

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_SubWidgetFocusable.BPI_SubWidgetFocusable_C.OnSubWidgetClosed
// 0x0002 (0x0002 - 0x0000)
struct BPI_SubWidgetFocusable_C_OnSubWidgetClosed final
{
public:
	bool                                          FocusedParentWidget;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewWidgetCreated;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SubWidgetFocusable_C_OnSubWidgetClosed) == 0x000001, "Wrong alignment on BPI_SubWidgetFocusable_C_OnSubWidgetClosed");
static_assert(sizeof(BPI_SubWidgetFocusable_C_OnSubWidgetClosed) == 0x000002, "Wrong size on BPI_SubWidgetFocusable_C_OnSubWidgetClosed");
static_assert(offsetof(BPI_SubWidgetFocusable_C_OnSubWidgetClosed, FocusedParentWidget) == 0x000000, "Member 'BPI_SubWidgetFocusable_C_OnSubWidgetClosed::FocusedParentWidget' has a wrong offset!");
static_assert(offsetof(BPI_SubWidgetFocusable_C_OnSubWidgetClosed, NewWidgetCreated) == 0x000001, "Member 'BPI_SubWidgetFocusable_C_OnSubWidgetClosed::NewWidgetCreated' has a wrong offset!");

// Function BPI_SubWidgetFocusable.BPI_SubWidgetFocusable_C.OnWidgetCreated
// 0x0010 (0x0010 - 0x0000)
struct BPI_SubWidgetFocusable_C_OnWidgetCreated final
{
public:
	class UWidget*                                ParentWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                ParentFocusedWidget;                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SubWidgetFocusable_C_OnWidgetCreated) == 0x000008, "Wrong alignment on BPI_SubWidgetFocusable_C_OnWidgetCreated");
static_assert(sizeof(BPI_SubWidgetFocusable_C_OnWidgetCreated) == 0x000010, "Wrong size on BPI_SubWidgetFocusable_C_OnWidgetCreated");
static_assert(offsetof(BPI_SubWidgetFocusable_C_OnWidgetCreated, ParentWidget) == 0x000000, "Member 'BPI_SubWidgetFocusable_C_OnWidgetCreated::ParentWidget' has a wrong offset!");
static_assert(offsetof(BPI_SubWidgetFocusable_C_OnWidgetCreated, ParentFocusedWidget) == 0x000008, "Member 'BPI_SubWidgetFocusable_C_OnWidgetCreated::ParentFocusedWidget' has a wrong offset!");

}

