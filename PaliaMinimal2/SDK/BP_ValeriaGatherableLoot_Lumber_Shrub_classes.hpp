#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ValeriaGatherableLoot_Lumber_Shrub

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ValeriaGatherableLoot_Lumber_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ValeriaGatherableLoot_Lumber_Shrub.BP_ValeriaGatherableLoot_Lumber_Shrub_C
// 0x0018 (0x0618 - 0x0600)
class ABP_ValeriaGatherableLoot_Lumber_Shrub_C : public ABP_ValeriaGatherableLoot_Lumber_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ValeriaGatherableLoot_Lumber_Shrub_C; // 0x0600(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       AudioRustleCollision;                              // 0x0608(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          ImDyingStopBotheringMe;                            // 0x0610(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Event_shrubPoof();
	void ExecuteUbergraph_BP_ValeriaGatherableLoot_Lumber_Shrub(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UAkComponent* CallFunc_AkEventLocation_AkComponent, int32 CallFunc_AkEventLocation_Playing_ID, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UAkComponent* CallFunc_AkEventLocation_AkComponent_1, int32 CallFunc_AkEventLocation_Playing_ID_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UBP_PlateHealthBar_Tree_C* CallFunc_GetOrCreateHealthBar_HealthBar, class AActor* K2Node_Event_Instigator, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1);
	void OnGatherableDestroyed(class AActor* Param_Instigator);
	void ShowStaticMesh();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ValeriaGatherableLoot_Lumber_Shrub_C">();
	}
	static class ABP_ValeriaGatherableLoot_Lumber_Shrub_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ValeriaGatherableLoot_Lumber_Shrub_C>();
	}
};
static_assert(alignof(ABP_ValeriaGatherableLoot_Lumber_Shrub_C) == 0x000008, "Wrong alignment on ABP_ValeriaGatherableLoot_Lumber_Shrub_C");
static_assert(sizeof(ABP_ValeriaGatherableLoot_Lumber_Shrub_C) == 0x000618, "Wrong size on ABP_ValeriaGatherableLoot_Lumber_Shrub_C");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Lumber_Shrub_C, UberGraphFrame_BP_ValeriaGatherableLoot_Lumber_Shrub_C) == 0x000600, "Member 'ABP_ValeriaGatherableLoot_Lumber_Shrub_C::UberGraphFrame_BP_ValeriaGatherableLoot_Lumber_Shrub_C' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Lumber_Shrub_C, AudioRustleCollision) == 0x000608, "Member 'ABP_ValeriaGatherableLoot_Lumber_Shrub_C::AudioRustleCollision' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Lumber_Shrub_C, ImDyingStopBotheringMe) == 0x000610, "Member 'ABP_ValeriaGatherableLoot_Lumber_Shrub_C::ImDyingStopBotheringMe' has a wrong offset!");

}
