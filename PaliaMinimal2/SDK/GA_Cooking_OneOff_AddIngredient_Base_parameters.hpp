#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Cooking_OneOff_AddIngredient_Base

#include "Basic.hpp"

#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function GA_Cooking_OneOff_AddIngredient_Base.GA_Cooking_OneOff_AddIngredient_Base_C.ConsiderTriggeringMinigame
// 0x0028 (0x0028 - 0x0000)
struct GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame final
{
public:
	bool                                          CallFunc_GetWasCancelled_WasCancelled;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B7F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasBegunPlay_ReturnValue;                 // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B80[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaPlayerController*               CallFunc_GetValeriaPlayerControllerFromActorInfo_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECrafterEngageResult                          CallFunc_SetIsEngaging_ReturnValue;                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInteractingMode_ReturnValue;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ContainsAllIngredients_ReturnValue;       // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame) == 0x000008, "Wrong alignment on GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame");
static_assert(sizeof(GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame) == 0x000028, "Wrong size on GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame, CallFunc_GetWasCancelled_WasCancelled) == 0x000000, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame::CallFunc_GetWasCancelled_WasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame, CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame::CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame, CallFunc_HasBegunPlay_ReturnValue) == 0x000011, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame::CallFunc_HasBegunPlay_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame, CallFunc_IsServer_ReturnValue) == 0x000012, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame, CallFunc_BooleanAND_ReturnValue) == 0x000013, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame, CallFunc_GetValeriaPlayerControllerFromActorInfo_ReturnValue) == 0x000018, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame::CallFunc_GetValeriaPlayerControllerFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame, CallFunc_BooleanAND_ReturnValue_1) == 0x000020, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame, CallFunc_SetIsEngaging_ReturnValue) == 0x000021, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame::CallFunc_SetIsEngaging_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame, CallFunc_Not_PreBool_ReturnValue_1) == 0x000022, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame, CallFunc_IsValid_ReturnValue) == 0x000023, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame, CallFunc_IsInteractingMode_ReturnValue) == 0x000024, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame::CallFunc_IsInteractingMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame, CallFunc_ContainsAllIngredients_ReturnValue) == 0x000025, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame::CallFunc_ContainsAllIngredients_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame, CallFunc_BooleanAND_ReturnValue_2) == 0x000026, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

// Function GA_Cooking_OneOff_AddIngredient_Base.GA_Cooking_OneOff_AddIngredient_Base_C.ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Base
// 0x0008 (0x0008 - 0x0000)
struct GA_Cooking_OneOff_AddIngredient_Base_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Cooking_OneOff_AddIngredient_Base_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Base) == 0x000004, "Wrong alignment on GA_Cooking_OneOff_AddIngredient_Base_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Base");
static_assert(sizeof(GA_Cooking_OneOff_AddIngredient_Base_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Base) == 0x000008, "Wrong size on GA_Cooking_OneOff_AddIngredient_Base_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Base");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Base, EntryPoint) == 0x000000, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Base, K2Node_Event_bWasCancelled) == 0x000004, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Base::K2Node_Event_bWasCancelled' has a wrong offset!");

// Function GA_Cooking_OneOff_AddIngredient_Base.GA_Cooking_OneOff_AddIngredient_Base_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Cooking_OneOff_AddIngredient_Base_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Cooking_OneOff_AddIngredient_Base_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Cooking_OneOff_AddIngredient_Base_C_K2_OnEndAbility");
static_assert(sizeof(GA_Cooking_OneOff_AddIngredient_Base_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Cooking_OneOff_AddIngredient_Base_C_K2_OnEndAbility");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Cooking_OneOff_AddIngredient_Base.GA_Cooking_OneOff_AddIngredient_Base_C.SetMovementBlock
// 0x0004 (0x0004 - 0x0000)
struct GA_Cooking_OneOff_AddIngredient_Base_C_SetMovementBlock final
{
public:
	bool                                          bLock;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Changed;                                           // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetMovementBlock_Changed;                 // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Cooking_OneOff_AddIngredient_Base_C_SetMovementBlock) == 0x000001, "Wrong alignment on GA_Cooking_OneOff_AddIngredient_Base_C_SetMovementBlock");
static_assert(sizeof(GA_Cooking_OneOff_AddIngredient_Base_C_SetMovementBlock) == 0x000004, "Wrong size on GA_Cooking_OneOff_AddIngredient_Base_C_SetMovementBlock");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_SetMovementBlock, bLock) == 0x000000, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_SetMovementBlock::bLock' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_SetMovementBlock, Changed) == 0x000001, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_SetMovementBlock::Changed' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_SetMovementBlock, CallFunc_SetMovementBlock_Changed) == 0x000002, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_SetMovementBlock::CallFunc_SetMovementBlock_Changed' has a wrong offset!");
static_assert(offsetof(GA_Cooking_OneOff_AddIngredient_Base_C_SetMovementBlock, CallFunc_Not_PreBool_ReturnValue) == 0x000003, "Member 'GA_Cooking_OneOff_AddIngredient_Base_C_SetMovementBlock::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

