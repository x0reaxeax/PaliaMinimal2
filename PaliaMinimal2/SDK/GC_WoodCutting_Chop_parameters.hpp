#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_WoodCutting_Chop

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GC_WoodCutting_Chop.GC_WoodCutting_Chop_C.OnExecute
// 0x00E8 (0x00E8 - 0x0000)
struct GC_WoodCutting_Chop_C_OnExecute final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00E0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OnExecute_ReturnValue;                    // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_WoodCutting_Chop_C_OnExecute) == 0x000008, "Wrong alignment on GC_WoodCutting_Chop_C_OnExecute");
static_assert(sizeof(GC_WoodCutting_Chop_C_OnExecute) == 0x0000E8, "Wrong size on GC_WoodCutting_Chop_C_OnExecute");
static_assert(offsetof(GC_WoodCutting_Chop_C_OnExecute, MyTarget) == 0x000000, "Member 'GC_WoodCutting_Chop_C_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_WoodCutting_Chop_C_OnExecute, Parameters) == 0x000008, "Member 'GC_WoodCutting_Chop_C_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GC_WoodCutting_Chop_C_OnExecute, ReturnValue) == 0x0000E0, "Member 'GC_WoodCutting_Chop_C_OnExecute::ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_WoodCutting_Chop_C_OnExecute, CallFunc_OnExecute_ReturnValue) == 0x0000E1, "Member 'GC_WoodCutting_Chop_C_OnExecute::CallFunc_OnExecute_ReturnValue' has a wrong offset!");

}

