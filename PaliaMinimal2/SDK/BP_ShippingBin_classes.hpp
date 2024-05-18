#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ShippingBin

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ShippingBin.BP_ShippingBin_C
// 0x00A8 (0x0350 - 0x02A8)
class ABP_ShippingBin_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_ValeriaPlayerStorageInteractorData_Component_C* BP_ValeriaPlayerStorageInteractorData_Component;   // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           AudioLocation;                                     // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ValeriaStorageInteractorComponent_C* StorageInteractorComponent;                        // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShippingBinComponent*                  ShippingBin;                                       // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ShippingBin_Lid;                                   // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Pivot_Offset;                                      // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractablePlateWidgetComponent_C* BP_InteractablePlateWidgetComponent;               // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ShippingBin_Base;                                  // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                 Interactable;                                      // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPersistComponent*                      Persist;                                           // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProximityChecker*                      ProximityChecker;                                  // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       InteractableCollider;                              // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Close_Close_6DDEC1AF44E63471B37D13A26C660518;      // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Close__Direction_6DDEC1AF44E63471B37D13A26C660518; // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_616D[0x3];                                     // 0x031D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Close;                                             // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Open_Open_3CA6BB904DB82BB74FA36B8B66BC68A9;        // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Open__Direction_3CA6BB904DB82BB74FA36B8B66BC68A9;  // 0x032C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_616E[0x3];                                     // 0x032D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Open;                                              // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         IsOpenOrClosed;                                    // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_616F[0x4];                                     // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          OpenSound;                                         // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          CloseSound;                                        // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__StorageInteractorComponent_K2Node_ComponentBoundEvent_0_OnIsOpenedChanged__DelegateSignature(bool IsOpened);
	void Close__FinishedFunc();
	void Close__UpdateFunc();
	void ExecuteUbergraph_BP_ShippingBin(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, bool K2Node_ComponentBoundEvent_IsOpened, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_AkEventComponent_ReturnValue, int32 CallFunc_AkEventComponent_ReturnValue_1);
	void Open__FinishedFunc();
	void Open__UpdateFunc();
	void ShippingBin_Close();
	void ShippingBin_Open();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ShippingBin_C">();
	}
	static class ABP_ShippingBin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ShippingBin_C>();
	}
};
static_assert(alignof(ABP_ShippingBin_C) == 0x000008, "Wrong alignment on ABP_ShippingBin_C");
static_assert(sizeof(ABP_ShippingBin_C) == 0x000350, "Wrong size on ABP_ShippingBin_C");
static_assert(offsetof(ABP_ShippingBin_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_ShippingBin_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, BP_ValeriaPlayerStorageInteractorData_Component) == 0x0002B0, "Member 'ABP_ShippingBin_C::BP_ValeriaPlayerStorageInteractorData_Component' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, AudioLocation) == 0x0002B8, "Member 'ABP_ShippingBin_C::AudioLocation' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, StorageInteractorComponent) == 0x0002C0, "Member 'ABP_ShippingBin_C::StorageInteractorComponent' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, ShippingBin) == 0x0002C8, "Member 'ABP_ShippingBin_C::ShippingBin' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, ShippingBin_Lid) == 0x0002D0, "Member 'ABP_ShippingBin_C::ShippingBin_Lid' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, Pivot_Offset) == 0x0002D8, "Member 'ABP_ShippingBin_C::Pivot_Offset' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, BP_InteractablePlateWidgetComponent) == 0x0002E0, "Member 'ABP_ShippingBin_C::BP_InteractablePlateWidgetComponent' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, ShippingBin_Base) == 0x0002E8, "Member 'ABP_ShippingBin_C::ShippingBin_Base' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, Interactable) == 0x0002F0, "Member 'ABP_ShippingBin_C::Interactable' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, Persist) == 0x0002F8, "Member 'ABP_ShippingBin_C::Persist' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, ProximityChecker) == 0x000300, "Member 'ABP_ShippingBin_C::ProximityChecker' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, InteractableCollider) == 0x000308, "Member 'ABP_ShippingBin_C::InteractableCollider' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, DefaultSceneRoot) == 0x000310, "Member 'ABP_ShippingBin_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, Close_Close_6DDEC1AF44E63471B37D13A26C660518) == 0x000318, "Member 'ABP_ShippingBin_C::Close_Close_6DDEC1AF44E63471B37D13A26C660518' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, Close__Direction_6DDEC1AF44E63471B37D13A26C660518) == 0x00031C, "Member 'ABP_ShippingBin_C::Close__Direction_6DDEC1AF44E63471B37D13A26C660518' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, Close) == 0x000320, "Member 'ABP_ShippingBin_C::Close' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, Open_Open_3CA6BB904DB82BB74FA36B8B66BC68A9) == 0x000328, "Member 'ABP_ShippingBin_C::Open_Open_3CA6BB904DB82BB74FA36B8B66BC68A9' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, Open__Direction_3CA6BB904DB82BB74FA36B8B66BC68A9) == 0x00032C, "Member 'ABP_ShippingBin_C::Open__Direction_3CA6BB904DB82BB74FA36B8B66BC68A9' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, Open) == 0x000330, "Member 'ABP_ShippingBin_C::Open' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, IsOpenOrClosed) == 0x000338, "Member 'ABP_ShippingBin_C::IsOpenOrClosed' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, OpenSound) == 0x000340, "Member 'ABP_ShippingBin_C::OpenSound' has a wrong offset!");
static_assert(offsetof(ABP_ShippingBin_C, CloseSound) == 0x000348, "Member 'ABP_ShippingBin_C::CloseSound' has a wrong offset!");

}

