#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ValeriaGameState

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ValeriaGameState.BP_ValeriaGameState_C.OnVillagerAddedOrRemoved__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_ValeriaGameState_C_OnVillagerAddedOrRemoved__DelegateSignature final
{
public:
	class AValeriaVillagerCharacter*              Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          WasAdded;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ValeriaGameState_C_OnVillagerAddedOrRemoved__DelegateSignature) == 0x000008, "Wrong alignment on BP_ValeriaGameState_C_OnVillagerAddedOrRemoved__DelegateSignature");
static_assert(sizeof(BP_ValeriaGameState_C_OnVillagerAddedOrRemoved__DelegateSignature) == 0x000010, "Wrong size on BP_ValeriaGameState_C_OnVillagerAddedOrRemoved__DelegateSignature");
static_assert(offsetof(BP_ValeriaGameState_C_OnVillagerAddedOrRemoved__DelegateSignature, Character) == 0x000000, "Member 'BP_ValeriaGameState_C_OnVillagerAddedOrRemoved__DelegateSignature::Character' has a wrong offset!");
static_assert(offsetof(BP_ValeriaGameState_C_OnVillagerAddedOrRemoved__DelegateSignature, WasAdded) == 0x000008, "Member 'BP_ValeriaGameState_C_OnVillagerAddedOrRemoved__DelegateSignature::WasAdded' has a wrong offset!");

}
