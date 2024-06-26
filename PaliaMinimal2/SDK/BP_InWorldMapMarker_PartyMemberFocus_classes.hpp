#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InWorldMapMarker_PartyMemberFocus

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InWorldMapMarker_PartyMemberFocus.BP_InWorldMapMarker_PartyMemberFocus_C
// 0x0018 (0x02C0 - 0x02A8)
class ABP_InWorldMapMarker_PartyMemberFocus_C final : public AActor
{
public:
	class UDecalComponent*                        Decal;                                             // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_waypoint;                                       // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InWorldMapMarker_PartyMemberFocus_C">();
	}
	static class ABP_InWorldMapMarker_PartyMemberFocus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_InWorldMapMarker_PartyMemberFocus_C>();
	}
};
static_assert(alignof(ABP_InWorldMapMarker_PartyMemberFocus_C) == 0x000008, "Wrong alignment on ABP_InWorldMapMarker_PartyMemberFocus_C");
static_assert(sizeof(ABP_InWorldMapMarker_PartyMemberFocus_C) == 0x0002C0, "Wrong size on ABP_InWorldMapMarker_PartyMemberFocus_C");
static_assert(offsetof(ABP_InWorldMapMarker_PartyMemberFocus_C, Decal) == 0x0002A8, "Member 'ABP_InWorldMapMarker_PartyMemberFocus_C::Decal' has a wrong offset!");
static_assert(offsetof(ABP_InWorldMapMarker_PartyMemberFocus_C, NS_waypoint) == 0x0002B0, "Member 'ABP_InWorldMapMarker_PartyMemberFocus_C::NS_waypoint' has a wrong offset!");
static_assert(offsetof(ABP_InWorldMapMarker_PartyMemberFocus_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_InWorldMapMarker_PartyMemberFocus_C::DefaultSceneRoot' has a wrong offset!");

}

