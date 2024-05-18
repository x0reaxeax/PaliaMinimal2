#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Stables_FrontGate_02

#include "Basic.hpp"

#include "BP_DoorBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Stables_FrontGate_02.BP_Stables_FrontGate_02_C
// 0x0010 (0x03B8 - 0x03A8)
class ABP_Stables_FrontGate_02_C final : public ABP_DoorBase_C
{
public:
	class UStaticMeshComponent*                   SM_Stables_GateDoor_03;                            // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Stables_GateDoor_02;                            // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Stables_FrontGate_02_C">();
	}
	static class ABP_Stables_FrontGate_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Stables_FrontGate_02_C>();
	}
};
static_assert(alignof(ABP_Stables_FrontGate_02_C) == 0x000008, "Wrong alignment on ABP_Stables_FrontGate_02_C");
static_assert(sizeof(ABP_Stables_FrontGate_02_C) == 0x0003B8, "Wrong size on ABP_Stables_FrontGate_02_C");
static_assert(offsetof(ABP_Stables_FrontGate_02_C, SM_Stables_GateDoor_03) == 0x0003A8, "Member 'ABP_Stables_FrontGate_02_C::SM_Stables_GateDoor_03' has a wrong offset!");
static_assert(offsetof(ABP_Stables_FrontGate_02_C, SM_Stables_GateDoor_02) == 0x0003B0, "Member 'ABP_Stables_FrontGate_02_C::SM_Stables_GateDoor_02' has a wrong offset!");

}

