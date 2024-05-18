#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Starter_Tent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Starter_Tent.BP_Starter_Tent_C
// 0x00B0 (0x0358 - 0x02A8)
class ABP_Starter_Tent_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPlacementRegionComponent*              PlacementRegion_Floor;                             // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlacementRegionComponent*              PlacementRegion_Wall_XPos;                         // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlacementRegionComponent*              PlacementRegion_Wall_Back;                         // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlacementRegionComponent*              PlacementRegion_Wall_YPos;                         // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Placement_Regions;                                 // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Lantern1;                                          // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal;                                             // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight2;                                       // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UComp_AkHomeRoom_C*                     AkHomeRoom;                                        // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   GrassMask;                                         // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          AudioPortal;                                       // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkPortalComponent*                     AkPortal;                                          // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          AudioRoom;                                         // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_InteriorCameraVol;                              // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       InteractableCollider;                              // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                 Interactable;                                      // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractablePlateWidgetComponent_C* BP_InteractablePlateWidgetComponent;               // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPersistComponent*                      Persist;                                           // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Tent;                                              // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGatherableComponent*                   Gatherable;                                        // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Model;                                             // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Starter_Tent(int32 EntryPoint, bool K2Node_CustomEvent_bIsNight);
	void ReceiveBeginPlay();
	void ToggleLights(bool bIsNight);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Starter_Tent_C">();
	}
	static class ABP_Starter_Tent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Starter_Tent_C>();
	}
};
static_assert(alignof(ABP_Starter_Tent_C) == 0x000008, "Wrong alignment on ABP_Starter_Tent_C");
static_assert(sizeof(ABP_Starter_Tent_C) == 0x000358, "Wrong size on ABP_Starter_Tent_C");
static_assert(offsetof(ABP_Starter_Tent_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_Starter_Tent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, PlacementRegion_Floor) == 0x0002B0, "Member 'ABP_Starter_Tent_C::PlacementRegion_Floor' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, PlacementRegion_Wall_XPos) == 0x0002B8, "Member 'ABP_Starter_Tent_C::PlacementRegion_Wall_XPos' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, PlacementRegion_Wall_Back) == 0x0002C0, "Member 'ABP_Starter_Tent_C::PlacementRegion_Wall_Back' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, PlacementRegion_Wall_YPos) == 0x0002C8, "Member 'ABP_Starter_Tent_C::PlacementRegion_Wall_YPos' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, Placement_Regions) == 0x0002D0, "Member 'ABP_Starter_Tent_C::Placement_Regions' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, Lantern1) == 0x0002D8, "Member 'ABP_Starter_Tent_C::Lantern1' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, Decal) == 0x0002E0, "Member 'ABP_Starter_Tent_C::Decal' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, PointLight2) == 0x0002E8, "Member 'ABP_Starter_Tent_C::PointLight2' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, AkHomeRoom) == 0x0002F0, "Member 'ABP_Starter_Tent_C::AkHomeRoom' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, GrassMask) == 0x0002F8, "Member 'ABP_Starter_Tent_C::GrassMask' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, AudioPortal) == 0x000300, "Member 'ABP_Starter_Tent_C::AudioPortal' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, AkPortal) == 0x000308, "Member 'ABP_Starter_Tent_C::AkPortal' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, AudioRoom) == 0x000310, "Member 'ABP_Starter_Tent_C::AudioRoom' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, BP_InteriorCameraVol) == 0x000318, "Member 'ABP_Starter_Tent_C::BP_InteriorCameraVol' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, InteractableCollider) == 0x000320, "Member 'ABP_Starter_Tent_C::InteractableCollider' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, Interactable) == 0x000328, "Member 'ABP_Starter_Tent_C::Interactable' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, BP_InteractablePlateWidgetComponent) == 0x000330, "Member 'ABP_Starter_Tent_C::BP_InteractablePlateWidgetComponent' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, Persist) == 0x000338, "Member 'ABP_Starter_Tent_C::Persist' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, Tent) == 0x000340, "Member 'ABP_Starter_Tent_C::Tent' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, Gatherable) == 0x000348, "Member 'ABP_Starter_Tent_C::Gatherable' has a wrong offset!");
static_assert(offsetof(ABP_Starter_Tent_C, Model) == 0x000350, "Member 'ABP_Starter_Tent_C::Model' has a wrong offset!");

}
