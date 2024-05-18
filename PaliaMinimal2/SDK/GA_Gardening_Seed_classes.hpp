#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Gardening_Seed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_LoopableEvent_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Gardening_Seed.GA_Gardening_Seed_C
// 0x0010 (0x0560 - 0x0550)
class UGA_Gardening_Seed_C final : public UGA_LoopableEvent_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Gardening_Seed_C;                // 0x0550(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 BP_seed;                                           // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Event_vfx_throwSeeds();
	void ExecuteUbergraph_GA_Gardening_Seed(int32 EntryPoint, bool K2Node_Event_bWasCancelled, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1, class UGardenPlantingComponent* CallFunc_GetGardenPlanting_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, float CallFunc_GetDesiredCharacterYaw_outYaw, bool CallFunc_GetDesiredCharacterYaw_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2, class UGardenPlantingComponent* CallFunc_GetGardenPlanting_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3, class UGardenPlantingComponent* CallFunc_GetGardenPlanting_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4, class UGardenPlantingComponent* CallFunc_GetGardenPlanting_ReturnValue_3, double K2Node_VariableSet_EnforcedYaw_ImplicitCast);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Gardening_Seed_C">();
	}
	static class UGA_Gardening_Seed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Gardening_Seed_C>();
	}
};
static_assert(alignof(UGA_Gardening_Seed_C) == 0x000008, "Wrong alignment on UGA_Gardening_Seed_C");
static_assert(sizeof(UGA_Gardening_Seed_C) == 0x000560, "Wrong size on UGA_Gardening_Seed_C");
static_assert(offsetof(UGA_Gardening_Seed_C, UberGraphFrame_GA_Gardening_Seed_C) == 0x000550, "Member 'UGA_Gardening_Seed_C::UberGraphFrame_GA_Gardening_Seed_C' has a wrong offset!");
static_assert(offsetof(UGA_Gardening_Seed_C, BP_seed) == 0x000558, "Member 'UGA_Gardening_Seed_C::BP_seed' has a wrong offset!");

}

