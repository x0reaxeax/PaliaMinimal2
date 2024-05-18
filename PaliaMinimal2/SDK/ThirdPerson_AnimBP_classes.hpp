#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ThirdPerson_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ThirdPerson_AnimBP_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ThirdPerson_AnimBP.ThirdPerson_AnimBP_C
// 0x0380 (0x06D0 - 0x0350)
class UThirdPerson_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_4D53[0x8];                                     // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ThirdPerson_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0358(0x0008)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0360(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0368(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0370(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0390(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x03B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x03E0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0408(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0430(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0478(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0498(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x04E0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0500(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0548(0x0020)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x0568(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x05D8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x05F8(0x00C8)()
	bool                                          IsInAir_;                                          // 0x06C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D54[0x7];                                     // 0x06C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Speed;                                             // 0x06C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_175FFF54400CA0EC412B7083B0989D7E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_F867B5374C7EFB9ED9010FA7431019DF();
	void ExecuteUbergraph_ThirdPerson_AnimBP(int32 EntryPoint, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_VSize_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ThirdPerson_AnimBP_C">();
	}
	static class UThirdPerson_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UThirdPerson_AnimBP_C>();
	}
};
static_assert(alignof(UThirdPerson_AnimBP_C) == 0x000010, "Wrong alignment on UThirdPerson_AnimBP_C");
static_assert(sizeof(UThirdPerson_AnimBP_C) == 0x0006D0, "Wrong size on UThirdPerson_AnimBP_C");
static_assert(offsetof(UThirdPerson_AnimBP_C, UberGraphFrame) == 0x000350, "Member 'UThirdPerson_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UThirdPerson_AnimBP_C, __AnimBlueprintMutables) == 0x000358, "Member 'UThirdPerson_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UThirdPerson_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000360, "Member 'UThirdPerson_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UThirdPerson_AnimBP_C, AnimBlueprintExtension_Base) == 0x000368, "Member 'UThirdPerson_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UThirdPerson_AnimBP_C, AnimGraphNode_Root) == 0x000370, "Member 'UThirdPerson_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UThirdPerson_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x000390, "Member 'UThirdPerson_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UThirdPerson_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x0003B8, "Member 'UThirdPerson_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UThirdPerson_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x0003E0, "Member 'UThirdPerson_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UThirdPerson_AnimBP_C, AnimGraphNode_TransitionResult) == 0x000408, "Member 'UThirdPerson_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UThirdPerson_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000430, "Member 'UThirdPerson_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UThirdPerson_AnimBP_C, AnimGraphNode_StateResult_3) == 0x000478, "Member 'UThirdPerson_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UThirdPerson_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000498, "Member 'UThirdPerson_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UThirdPerson_AnimBP_C, AnimGraphNode_StateResult_2) == 0x0004E0, "Member 'UThirdPerson_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UThirdPerson_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x000500, "Member 'UThirdPerson_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UThirdPerson_AnimBP_C, AnimGraphNode_StateResult_1) == 0x000548, "Member 'UThirdPerson_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UThirdPerson_AnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x000568, "Member 'UThirdPerson_AnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UThirdPerson_AnimBP_C, AnimGraphNode_StateResult) == 0x0005D8, "Member 'UThirdPerson_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UThirdPerson_AnimBP_C, AnimGraphNode_StateMachine) == 0x0005F8, "Member 'UThirdPerson_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UThirdPerson_AnimBP_C, IsInAir_) == 0x0006C0, "Member 'UThirdPerson_AnimBP_C::IsInAir_' has a wrong offset!");
static_assert(offsetof(UThirdPerson_AnimBP_C, Speed) == 0x0006C8, "Member 'UThirdPerson_AnimBP_C::Speed' has a wrong offset!");

}
