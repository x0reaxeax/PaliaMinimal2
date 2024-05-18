#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Decor_Generic_Lightpost

#include "Basic.hpp"

#include "BP_ValeriaGatherable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Decor_Generic_Lightpost.BP_Decor_Generic_Lightpost_C
// 0x0018 (0x0310 - 0x02F8)
class ABP_Decor_Generic_Lightpost_C final : public ABP_ValeriaGatherable_C
{
public:
	class UChildActorComponent*                   BP_Master_lampHangingFreeA;                        // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPersistComponent*                      Persist;                                           // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Decor_Generic_Lightpost_C">();
	}
	static class ABP_Decor_Generic_Lightpost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Decor_Generic_Lightpost_C>();
	}
};
static_assert(alignof(ABP_Decor_Generic_Lightpost_C) == 0x000008, "Wrong alignment on ABP_Decor_Generic_Lightpost_C");
static_assert(sizeof(ABP_Decor_Generic_Lightpost_C) == 0x000310, "Wrong size on ABP_Decor_Generic_Lightpost_C");
static_assert(offsetof(ABP_Decor_Generic_Lightpost_C, BP_Master_lampHangingFreeA) == 0x0002F8, "Member 'ABP_Decor_Generic_Lightpost_C::BP_Master_lampHangingFreeA' has a wrong offset!");
static_assert(offsetof(ABP_Decor_Generic_Lightpost_C, StaticMesh) == 0x000300, "Member 'ABP_Decor_Generic_Lightpost_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Decor_Generic_Lightpost_C, Persist) == 0x000308, "Member 'ABP_Decor_Generic_Lightpost_C::Persist' has a wrong offset!");

}
