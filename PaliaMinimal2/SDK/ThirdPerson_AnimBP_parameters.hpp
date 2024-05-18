#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ThirdPerson_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ThirdPerson_AnimBP.ThirdPerson_AnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ThirdPerson_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ThirdPerson_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on ThirdPerson_AnimBP_C_AnimGraph");
static_assert(sizeof(ThirdPerson_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on ThirdPerson_AnimBP_C_AnimGraph");
static_assert(offsetof(ThirdPerson_AnimBP_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ThirdPerson_AnimBP_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ThirdPerson_AnimBP.ThirdPerson_AnimBP_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ThirdPerson_AnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ThirdPerson_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ThirdPerson_AnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(ThirdPerson_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ThirdPerson_AnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(ThirdPerson_AnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ThirdPerson_AnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ThirdPerson_AnimBP.ThirdPerson_AnimBP_C.ExecuteUbergraph_ThirdPerson_AnimBP
// 0x0070 (0x0070 - 0x0000)
struct ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue; // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D55[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1; // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D56[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D57[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D58[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActive_ReturnValue;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFalling_ReturnValue;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D59[0x5];                                     // 0x005B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast_1;       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP) == 0x000008, "Wrong alignment on ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP");
static_assert(sizeof(ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP) == 0x000070, "Wrong size on ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP");
static_assert(offsetof(ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP, EntryPoint) == 0x000000, "Member 'ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP, CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue) == 0x000004, "Member 'ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP::CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000008, "Member 'ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP, K2Node_Event_DeltaTimeX) == 0x00000C, "Member 'ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000010, "Member 'ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP, CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1) == 0x000018, "Member 'ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP::CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP, CallFunc_GetVelocity_ReturnValue) == 0x000020, "Member 'ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x000038, "Member 'ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP, CallFunc_VSize_ReturnValue) == 0x000040, "Member 'ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP, CallFunc_GetMovementComponent_ReturnValue) == 0x000050, "Member 'ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP, CallFunc_IsActive_ReturnValue) == 0x000058, "Member 'ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP::CallFunc_IsActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP, CallFunc_IsFalling_ReturnValue) == 0x000059, "Member 'ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP, CallFunc_BooleanAND_ReturnValue) == 0x00005A, "Member 'ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x000060, "Member 'ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP, CallFunc_Less_DoubleDouble_A_ImplicitCast_1) == 0x000068, "Member 'ThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP::CallFunc_Less_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

}
