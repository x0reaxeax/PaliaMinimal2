#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Female_Hair_Bun

#include "Basic.hpp"

#include "F_HairMorphAlphas_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "E_HairMorphOptions_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Female_Hair_Bun.ABP_Female_Hair_Bun_C
// 0x0780 (0x0AD0 - 0x0350)
class UABP_Female_Hair_Bun_C : public UAnimInstance
{
public:
	uint8                                         Pad_1705[0x8];                                     // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0358(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0360(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0368(0x0020)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x0388(0x0158)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x04E0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0500(0x0020)()
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics;                        // 0x0520(0x0520)()
	struct FTimerHandle                           TimerHandle;                                       // 0x0A40(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Hair_Chain_CAlpha;                                 // 0x0A48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Hair_Bangs_Alpha;                                  // 0x0A50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<E_HairMorphOptions, struct FF_HairMorphAlphas> Alpha_Mapping;                                     // 0x0A58(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 HairDynamicsEnabledCvar;                           // 0x0AA8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          HairDynamicsEnabled;                               // 0x0AB8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1706[0x7];                                     // 0x0AB9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      WardrobeDoll;                                      // 0x0AC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_Female_Hair_Bun(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Event_DeltaTimeX, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, E_HairMorphOptions K2Node_CustomEvent_CurrentMorph, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, E_HairMorphOptions Temp_byte_Variable, float CallFunc_GetMorphTarget_ReturnValue, float CallFunc_GetMorphTarget_ReturnValue_1, float CallFunc_GetMorphTarget_ReturnValue_2, TArray<float>& K2Node_MakeArray_Array, E_HairMorphOptions Temp_byte_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, E_HairMorphOptions Temp_byte_Variable_2, const struct FF_HairMorphAlphas& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, int32 Temp_int_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, E_HairMorphOptions K2Node_Select_Default, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, float Temp_real_Variable, bool CallFunc_Array_Contains_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
	void SetAlphas(E_HairMorphOptions CurrentMorph);
	void UpdateMorphTargets();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Female_Hair_Bun_C">();
	}
	static class UABP_Female_Hair_Bun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Female_Hair_Bun_C>();
	}
};
static_assert(alignof(UABP_Female_Hair_Bun_C) == 0x000010, "Wrong alignment on UABP_Female_Hair_Bun_C");
static_assert(sizeof(UABP_Female_Hair_Bun_C) == 0x000AD0, "Wrong size on UABP_Female_Hair_Bun_C");
static_assert(offsetof(UABP_Female_Hair_Bun_C, UberGraphFrame) == 0x000350, "Member 'UABP_Female_Hair_Bun_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Female_Hair_Bun_C, AnimBlueprintExtension_PropertyAccess) == 0x000358, "Member 'UABP_Female_Hair_Bun_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Female_Hair_Bun_C, AnimBlueprintExtension_Base) == 0x000360, "Member 'UABP_Female_Hair_Bun_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Female_Hair_Bun_C, AnimGraphNode_Root) == 0x000368, "Member 'UABP_Female_Hair_Bun_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Female_Hair_Bun_C, AnimGraphNode_CopyPoseFromMesh) == 0x000388, "Member 'UABP_Female_Hair_Bun_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UABP_Female_Hair_Bun_C, AnimGraphNode_LocalToComponentSpace) == 0x0004E0, "Member 'UABP_Female_Hair_Bun_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_Female_Hair_Bun_C, AnimGraphNode_ComponentToLocalSpace) == 0x000500, "Member 'UABP_Female_Hair_Bun_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_Female_Hair_Bun_C, AnimGraphNode_AnimDynamics) == 0x000520, "Member 'UABP_Female_Hair_Bun_C::AnimGraphNode_AnimDynamics' has a wrong offset!");
static_assert(offsetof(UABP_Female_Hair_Bun_C, TimerHandle) == 0x000A40, "Member 'UABP_Female_Hair_Bun_C::TimerHandle' has a wrong offset!");
static_assert(offsetof(UABP_Female_Hair_Bun_C, Hair_Chain_CAlpha) == 0x000A48, "Member 'UABP_Female_Hair_Bun_C::Hair_Chain_CAlpha' has a wrong offset!");
static_assert(offsetof(UABP_Female_Hair_Bun_C, Hair_Bangs_Alpha) == 0x000A50, "Member 'UABP_Female_Hair_Bun_C::Hair_Bangs_Alpha' has a wrong offset!");
static_assert(offsetof(UABP_Female_Hair_Bun_C, Alpha_Mapping) == 0x000A58, "Member 'UABP_Female_Hair_Bun_C::Alpha_Mapping' has a wrong offset!");
static_assert(offsetof(UABP_Female_Hair_Bun_C, HairDynamicsEnabledCvar) == 0x000AA8, "Member 'UABP_Female_Hair_Bun_C::HairDynamicsEnabledCvar' has a wrong offset!");
static_assert(offsetof(UABP_Female_Hair_Bun_C, HairDynamicsEnabled) == 0x000AB8, "Member 'UABP_Female_Hair_Bun_C::HairDynamicsEnabled' has a wrong offset!");
static_assert(offsetof(UABP_Female_Hair_Bun_C, WardrobeDoll) == 0x000AC0, "Member 'UABP_Female_Hair_Bun_C::WardrobeDoll' has a wrong offset!");

}

