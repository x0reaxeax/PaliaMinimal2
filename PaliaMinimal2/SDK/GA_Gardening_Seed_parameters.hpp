#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Gardening_Seed

#include "Basic.hpp"


namespace SDK::Params
{

// Function GA_Gardening_Seed.GA_Gardening_Seed_C.ExecuteUbergraph_GA_Gardening_Seed
// 0x0078 (0x0078 - 0x0000)
struct GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A45[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGardenPlantingComponent*               CallFunc_GetGardenPlanting_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDesiredCharacterYaw_outYaw;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDesiredCharacterYaw_ReturnValue;       // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A46[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGardenPlantingComponent*               CallFunc_GetGardenPlanting_ReturnValue_1;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A47[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGardenPlantingComponent*               CallFunc_GetGardenPlanting_ReturnValue_2;          // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue_1;                   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A48[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4; // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGardenPlantingComponent*               CallFunc_GetGardenPlanting_ReturnValue_3;          // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_EnforcedYaw_ImplicitCast;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed) == 0x000008, "Wrong alignment on GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed");
static_assert(sizeof(GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed) == 0x000078, "Wrong size on GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed");
static_assert(offsetof(GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed, EntryPoint) == 0x000000, "Member 'GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed, K2Node_Event_bWasCancelled) == 0x000004, "Member 'GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed, CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed::CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed, CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1) == 0x000010, "Member 'GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed::CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed, CallFunc_GetGardenPlanting_ReturnValue) == 0x000018, "Member 'GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed::CallFunc_GetGardenPlanting_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000020, "Member 'GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed, CallFunc_GetDesiredCharacterYaw_outYaw) == 0x000028, "Member 'GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed::CallFunc_GetDesiredCharacterYaw_outYaw' has a wrong offset!");
static_assert(offsetof(GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed, CallFunc_GetDesiredCharacterYaw_ReturnValue) == 0x00002C, "Member 'GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed::CallFunc_GetDesiredCharacterYaw_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed, CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2) == 0x000030, "Member 'GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed::CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed, CallFunc_GetGardenPlanting_ReturnValue_1) == 0x000038, "Member 'GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed::CallFunc_GetGardenPlanting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed, CallFunc_IsServer_ReturnValue) == 0x000040, "Member 'GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed, CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3) == 0x000048, "Member 'GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed::CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed, CallFunc_GetGardenPlanting_ReturnValue_2) == 0x000050, "Member 'GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed::CallFunc_GetGardenPlanting_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed, CallFunc_IsServer_ReturnValue_1) == 0x000058, "Member 'GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed::CallFunc_IsServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed, CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4) == 0x000060, "Member 'GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed::CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed, CallFunc_GetGardenPlanting_ReturnValue_3) == 0x000068, "Member 'GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed::CallFunc_GetGardenPlanting_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed, K2Node_VariableSet_EnforcedYaw_ImplicitCast) == 0x000070, "Member 'GA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed::K2Node_VariableSet_EnforcedYaw_ImplicitCast' has a wrong offset!");

// Function GA_Gardening_Seed.GA_Gardening_Seed_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Gardening_Seed_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Gardening_Seed_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Gardening_Seed_C_K2_OnEndAbility");
static_assert(sizeof(GA_Gardening_Seed_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Gardening_Seed_C_K2_OnEndAbility");
static_assert(offsetof(GA_Gardening_Seed_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Gardening_Seed_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}
