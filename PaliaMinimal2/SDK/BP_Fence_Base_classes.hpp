#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Fence_Base

#include "Basic.hpp"

#include "BP_ValeriaGatherable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Fence_Base.BP_Fence_Base_C
// 0x0018 (0x0310 - 0x02F8)
class ABP_Fence_Base_C : public ABP_ValeriaGatherable_C
{
public:
	class UStaticMeshComponent*                   GrassMask;                                         // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPersistComponent*                      Persist;                                           // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFenceComponent*                        Fence;                                             // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Fence_Base_C">();
	}
	static class ABP_Fence_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Fence_Base_C>();
	}
};
static_assert(alignof(ABP_Fence_Base_C) == 0x000008, "Wrong alignment on ABP_Fence_Base_C");
static_assert(sizeof(ABP_Fence_Base_C) == 0x000310, "Wrong size on ABP_Fence_Base_C");
static_assert(offsetof(ABP_Fence_Base_C, GrassMask) == 0x0002F8, "Member 'ABP_Fence_Base_C::GrassMask' has a wrong offset!");
static_assert(offsetof(ABP_Fence_Base_C, Persist) == 0x000300, "Member 'ABP_Fence_Base_C::Persist' has a wrong offset!");
static_assert(offsetof(ABP_Fence_Base_C, Fence) == 0x000308, "Member 'ABP_Fence_Base_C::Fence' has a wrong offset!");

}
