#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Gather

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Gather.GA_Gather_C.ExecuteUbergraph_GA_Gather
// 0x00B8 (0x00B8 - 0x0000)
struct GA_Gather_C_ExecuteUbergraph_GA_Gather final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4647[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0008(0x00B0)(ConstParm)
};
static_assert(alignof(GA_Gather_C_ExecuteUbergraph_GA_Gather) == 0x000008, "Wrong alignment on GA_Gather_C_ExecuteUbergraph_GA_Gather");
static_assert(sizeof(GA_Gather_C_ExecuteUbergraph_GA_Gather) == 0x0000B8, "Wrong size on GA_Gather_C_ExecuteUbergraph_GA_Gather");
static_assert(offsetof(GA_Gather_C_ExecuteUbergraph_GA_Gather, EntryPoint) == 0x000000, "Member 'GA_Gather_C_ExecuteUbergraph_GA_Gather::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Gather_C_ExecuteUbergraph_GA_Gather, K2Node_Event_EventData) == 0x000008, "Member 'GA_Gather_C_ExecuteUbergraph_GA_Gather::K2Node_Event_EventData' has a wrong offset!");

// Function GA_Gather.GA_Gather_C.GetTargetActor
// 0x0008 (0x0008 - 0x0000)
struct GA_Gather_C_GetTargetActor final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Gather_C_GetTargetActor) == 0x000008, "Wrong alignment on GA_Gather_C_GetTargetActor");
static_assert(sizeof(GA_Gather_C_GetTargetActor) == 0x000008, "Wrong size on GA_Gather_C_GetTargetActor");
static_assert(offsetof(GA_Gather_C_GetTargetActor, Actor) == 0x000000, "Member 'GA_Gather_C_GetTargetActor::Actor' has a wrong offset!");

// Function GA_Gather.GA_Gather_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Gather_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Gather_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_Gather_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Gather_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_Gather_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Gather_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Gather_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GA_Gather.GA_Gather_C.OnGatherServer
// 0x0060 (0x0060 - 0x0000)
struct GA_Gather_C_OnGatherServer final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULootInteractorBaseComponent*           LootInteractorComponent;                           // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGatherableComponent*                   GatherableComponent;                               // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4648[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      K2Node_DynamicCast_AsValeria_Character;            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Server_TriggerGather_ReturnValue;         // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4649[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ULootInteractorBaseComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGatherableComponent*                   CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue_1; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      K2Node_DynamicCast_AsValeria_Character_1;          // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Gather_C_OnGatherServer) == 0x000008, "Wrong alignment on GA_Gather_C_OnGatherServer");
static_assert(sizeof(GA_Gather_C_OnGatherServer) == 0x000060, "Wrong size on GA_Gather_C_OnGatherServer");
static_assert(offsetof(GA_Gather_C_OnGatherServer, Actor) == 0x000000, "Member 'GA_Gather_C_OnGatherServer::Actor' has a wrong offset!");
static_assert(offsetof(GA_Gather_C_OnGatherServer, LootInteractorComponent) == 0x000008, "Member 'GA_Gather_C_OnGatherServer::LootInteractorComponent' has a wrong offset!");
static_assert(offsetof(GA_Gather_C_OnGatherServer, GatherableComponent) == 0x000010, "Member 'GA_Gather_C_OnGatherServer::GatherableComponent' has a wrong offset!");
static_assert(offsetof(GA_Gather_C_OnGatherServer, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000018, "Member 'GA_Gather_C_OnGatherServer::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gather_C_OnGatherServer, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'GA_Gather_C_OnGatherServer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gather_C_OnGatherServer, K2Node_DynamicCast_AsValeria_Character) == 0x000028, "Member 'GA_Gather_C_OnGatherServer::K2Node_DynamicCast_AsValeria_Character' has a wrong offset!");
static_assert(offsetof(GA_Gather_C_OnGatherServer, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'GA_Gather_C_OnGatherServer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Gather_C_OnGatherServer, CallFunc_Server_TriggerGather_ReturnValue) == 0x000031, "Member 'GA_Gather_C_OnGatherServer::CallFunc_Server_TriggerGather_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gather_C_OnGatherServer, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'GA_Gather_C_OnGatherServer::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Gather_C_OnGatherServer, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000040, "Member 'GA_Gather_C_OnGatherServer::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Gather_C_OnGatherServer, CallFunc_GetOwningActorFromActorInfo_ReturnValue_1) == 0x000048, "Member 'GA_Gather_C_OnGatherServer::CallFunc_GetOwningActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Gather_C_OnGatherServer, K2Node_DynamicCast_AsValeria_Character_1) == 0x000050, "Member 'GA_Gather_C_OnGatherServer::K2Node_DynamicCast_AsValeria_Character_1' has a wrong offset!");
static_assert(offsetof(GA_Gather_C_OnGatherServer, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'GA_Gather_C_OnGatherServer::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Gather_C_OnGatherServer, CallFunc_IsValid_ReturnValue_1) == 0x000059, "Member 'GA_Gather_C_OnGatherServer::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function GA_Gather.GA_Gather_C.SetMovementBlock
// 0x000C (0x000C - 0x0000)
struct GA_Gather_C_SetMovementBlock final
{
public:
	bool                                          bLock;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_464A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Gather_C_SetMovementBlock) == 0x000004, "Wrong alignment on GA_Gather_C_SetMovementBlock");
static_assert(sizeof(GA_Gather_C_SetMovementBlock) == 0x00000C, "Wrong size on GA_Gather_C_SetMovementBlock");
static_assert(offsetof(GA_Gather_C_SetMovementBlock, bLock) == 0x000000, "Member 'GA_Gather_C_SetMovementBlock::bLock' has a wrong offset!");
static_assert(offsetof(GA_Gather_C_SetMovementBlock, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000004, "Member 'GA_Gather_C_SetMovementBlock::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");

}

