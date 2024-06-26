#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_lanternC_PoleStableA

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_lanternC_PoleStableA.BP_lanternC_PoleStableA_C
// 0x0038 (0x02E0 - 0x02A8)
class ABP_lanternC_PoleStableA_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkCulledComponent*                     AkCulled;                                          // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_lanternHangingC;                                // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Signboard_Teleport_02;                          // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Lightpost_Teleport_01;                          // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Rotation;                                          // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_lanternC_PoleStableA(int32 EntryPoint, bool CallFunc_DestroyIfServer_ReturnValue, float K2Node_Event_DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_lanternC_PoleStableA_C">();
	}
	static class ABP_lanternC_PoleStableA_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_lanternC_PoleStableA_C>();
	}
};
static_assert(alignof(ABP_lanternC_PoleStableA_C) == 0x000008, "Wrong alignment on ABP_lanternC_PoleStableA_C");
static_assert(sizeof(ABP_lanternC_PoleStableA_C) == 0x0002E0, "Wrong size on ABP_lanternC_PoleStableA_C");
static_assert(offsetof(ABP_lanternC_PoleStableA_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_lanternC_PoleStableA_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_lanternC_PoleStableA_C, AkCulled) == 0x0002B0, "Member 'ABP_lanternC_PoleStableA_C::AkCulled' has a wrong offset!");
static_assert(offsetof(ABP_lanternC_PoleStableA_C, BP_lanternHangingC) == 0x0002B8, "Member 'ABP_lanternC_PoleStableA_C::BP_lanternHangingC' has a wrong offset!");
static_assert(offsetof(ABP_lanternC_PoleStableA_C, SM_Signboard_Teleport_02) == 0x0002C0, "Member 'ABP_lanternC_PoleStableA_C::SM_Signboard_Teleport_02' has a wrong offset!");
static_assert(offsetof(ABP_lanternC_PoleStableA_C, SM_Lightpost_Teleport_01) == 0x0002C8, "Member 'ABP_lanternC_PoleStableA_C::SM_Lightpost_Teleport_01' has a wrong offset!");
static_assert(offsetof(ABP_lanternC_PoleStableA_C, DefaultSceneRoot) == 0x0002D0, "Member 'ABP_lanternC_PoleStableA_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_lanternC_PoleStableA_C, Rotation) == 0x0002D8, "Member 'ABP_lanternC_PoleStableA_C::Rotation' has a wrong offset!");

}

