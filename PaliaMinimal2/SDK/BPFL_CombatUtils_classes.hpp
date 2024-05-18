#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_CombatUtils

#include "Basic.hpp"

#include "EAIBehaviourRange_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPFL_CombatUtils.BPFL_CombatUtils_C
// 0x0000 (0x0028 - 0x0028)
class UBPFL_CombatUtils_C final : public UBlueprintFunctionLibrary
{
public:
	static void SetMaxWalkSpeedOfActor(class AActor* Owner, double Speed, class UObject* __WorldContext, class APawn* TmpActor, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UValeriaBaseMovementComponent* K2Node_DynamicCast_AsValeria_Base_Movement_Component, bool K2Node_DynamicCast_bSuccess_2, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess_3, float K2Node_VariableSet_MaxWalkSpeed_ImplicitCast, float K2Node_VariableSet_MaxWalkSpeed_ImplicitCast_1);
	static void GetSpeedFromType(class AActor* Owner, class FName SpeedType, class UObject* __WorldContext, double* Speed, class UAICombatStateComponent* CombatStateComp, class APawn* TmpActor, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, float CallFunc_GetMaxSpeed_ReturnValue, class UValeriaBaseMovementComponent* K2Node_DynamicCast_AsValeria_Base_Movement_Component, bool K2Node_DynamicCast_bSuccess_1, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess_2, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess_3, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSpeed_ReturnValue, class UAICombatStateComponent* CallFunc_GetComponentByClass_ReturnValue, double K2Node_FunctionResult_Speed_ImplicitCast, double K2Node_FunctionResult_Speed_ImplicitCast_1, double K2Node_FunctionResult_Speed_ImplicitCast_2, double K2Node_FunctionResult_Speed_ImplicitCast_3);
	static void GetMaxWalkSpeedOfActor(class AActor* Owner, class UObject* __WorldContext, double* Speed, class APawn* TmpActor, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UValeriaBaseMovementComponent* K2Node_DynamicCast_AsValeria_Base_Movement_Component, bool K2Node_DynamicCast_bSuccess_1, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess_2, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess_3, class APawn* CallFunc_K2_GetPawn_ReturnValue, double K2Node_FunctionResult_Speed_ImplicitCast, double K2Node_FunctionResult_Speed_ImplicitCast_1);
	static void GetCombatStateFloatFromActor(EAIBehaviourRange CombatStatePropertyName, class AActor* Actor, const struct FFloatRange& CustomValue, class UObject* __WorldContext, struct FFloatRange* Output, class UAICombatStateComponent* CombatStateComp, EAIBehaviourRange Temp_byte_Variable, const class FString& CallFunc_GetDisplayName_ReturnValue, class UAICombatStateComponent* CallFunc_GetComponentByClass_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FAIBehaviourRanges& CallFunc_GetBehaviourRanges_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFloatRange& K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPFL_CombatUtils_C">();
	}
	static class UBPFL_CombatUtils_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPFL_CombatUtils_C>();
	}
};
static_assert(alignof(UBPFL_CombatUtils_C) == 0x000008, "Wrong alignment on UBPFL_CombatUtils_C");
static_assert(sizeof(UBPFL_CombatUtils_C) == 0x000028, "Wrong size on UBPFL_CombatUtils_C");

}

