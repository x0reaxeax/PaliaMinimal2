#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_VillagerPlate

#include "Basic.hpp"

#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function WBP_VillagerPlate.WBP_VillagerPlate_C.SetCurrentActionForPlate
// 0x0070 (0x0070 - 0x0000)
struct WBP_VillagerPlate_C_SetCurrentActionForPlate final
{
public:
	struct FVillagerActionInfo                    ActionInfo;                                        // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_VillagerPlate_C_SetCurrentActionForPlate) == 0x000008, "Wrong alignment on WBP_VillagerPlate_C_SetCurrentActionForPlate");
static_assert(sizeof(WBP_VillagerPlate_C_SetCurrentActionForPlate) == 0x000070, "Wrong size on WBP_VillagerPlate_C_SetCurrentActionForPlate");
static_assert(offsetof(WBP_VillagerPlate_C_SetCurrentActionForPlate, ActionInfo) == 0x000000, "Member 'WBP_VillagerPlate_C_SetCurrentActionForPlate::ActionInfo' has a wrong offset!");

}

