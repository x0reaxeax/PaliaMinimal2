#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FishingCastIndicatorActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Palia_structs.hpp"
#include "Palia_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FishingCastIndicatorActor.BP_FishingCastIndicatorActor_C
// 0x0080 (0x0328 - 0x02A8)
class ABP_FishingCastIndicatorActor_C final : public AFishingCastIndicatorActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_vfx_fishing_castGuideB;                         // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Root_midPoint;                                     // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline_tossGuide;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_fakeDecal_4water;                               // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal_landing;                                     // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Root_decal;                                        // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_tossGuideOLD;                                   // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Root_visual;                                       // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MI_tossGuide;                                      // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      Decal_surface;                                     // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FColor                                 Color_good;                                        // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FColor                                 Color_bad;                                         // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MI_fakeDecal;                                      // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MI_TossGuideB;                                     // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Event_amIGoodBoy(bool YesIAM);
	void Event_decalMe(double EndExtend);
	void Event_drawSpline();
	void ExecuteUbergraph_BP_FishingCastIndicatorActor(int32 EntryPoint, bool K2Node_CustomEvent_yesIAM, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_1, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& K2Node_CustomEvent_pos_mid, const struct FVector& K2Node_CustomEvent_pos_end, int32 Temp_int_Variable, double K2Node_CustomEvent_endExtend, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector& K2Node_Event_endPoint, EFishingCastIndicatorStatus K2Node_Event_status, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Vector_Distance2D_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, struct FTransform& Temp_struct_Variable, bool K2Node_SwitchEnum_CmpSuccess_1, class USplineMeshComponent* CallFunc_AddComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_2);
	void OnCastIndicatorChanged(const struct FVector& Endpoint, EFishingCastIndicatorStatus Status);
	void Update_splineStuff(const struct FVector& Pos_mid, const struct FVector& Pos_end);
	void UserConstructionScript(class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FishingCastIndicatorActor_C">();
	}
	static class ABP_FishingCastIndicatorActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FishingCastIndicatorActor_C>();
	}
};
static_assert(alignof(ABP_FishingCastIndicatorActor_C) == 0x000008, "Wrong alignment on ABP_FishingCastIndicatorActor_C");
static_assert(sizeof(ABP_FishingCastIndicatorActor_C) == 0x000328, "Wrong size on ABP_FishingCastIndicatorActor_C");
static_assert(offsetof(ABP_FishingCastIndicatorActor_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_FishingCastIndicatorActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FishingCastIndicatorActor_C, SM_vfx_fishing_castGuideB) == 0x0002B0, "Member 'ABP_FishingCastIndicatorActor_C::SM_vfx_fishing_castGuideB' has a wrong offset!");
static_assert(offsetof(ABP_FishingCastIndicatorActor_C, Root_midPoint) == 0x0002B8, "Member 'ABP_FishingCastIndicatorActor_C::Root_midPoint' has a wrong offset!");
static_assert(offsetof(ABP_FishingCastIndicatorActor_C, Spline_tossGuide) == 0x0002C0, "Member 'ABP_FishingCastIndicatorActor_C::Spline_tossGuide' has a wrong offset!");
static_assert(offsetof(ABP_FishingCastIndicatorActor_C, SM_fakeDecal_4water) == 0x0002C8, "Member 'ABP_FishingCastIndicatorActor_C::SM_fakeDecal_4water' has a wrong offset!");
static_assert(offsetof(ABP_FishingCastIndicatorActor_C, Decal_landing) == 0x0002D0, "Member 'ABP_FishingCastIndicatorActor_C::Decal_landing' has a wrong offset!");
static_assert(offsetof(ABP_FishingCastIndicatorActor_C, Root_decal) == 0x0002D8, "Member 'ABP_FishingCastIndicatorActor_C::Root_decal' has a wrong offset!");
static_assert(offsetof(ABP_FishingCastIndicatorActor_C, SM_tossGuideOLD) == 0x0002E0, "Member 'ABP_FishingCastIndicatorActor_C::SM_tossGuideOLD' has a wrong offset!");
static_assert(offsetof(ABP_FishingCastIndicatorActor_C, Root_visual) == 0x0002E8, "Member 'ABP_FishingCastIndicatorActor_C::Root_visual' has a wrong offset!");
static_assert(offsetof(ABP_FishingCastIndicatorActor_C, DefaultSceneRoot) == 0x0002F0, "Member 'ABP_FishingCastIndicatorActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_FishingCastIndicatorActor_C, MI_tossGuide) == 0x0002F8, "Member 'ABP_FishingCastIndicatorActor_C::MI_tossGuide' has a wrong offset!");
static_assert(offsetof(ABP_FishingCastIndicatorActor_C, Decal_surface) == 0x000300, "Member 'ABP_FishingCastIndicatorActor_C::Decal_surface' has a wrong offset!");
static_assert(offsetof(ABP_FishingCastIndicatorActor_C, Color_good) == 0x000310, "Member 'ABP_FishingCastIndicatorActor_C::Color_good' has a wrong offset!");
static_assert(offsetof(ABP_FishingCastIndicatorActor_C, Color_bad) == 0x000314, "Member 'ABP_FishingCastIndicatorActor_C::Color_bad' has a wrong offset!");
static_assert(offsetof(ABP_FishingCastIndicatorActor_C, MI_fakeDecal) == 0x000318, "Member 'ABP_FishingCastIndicatorActor_C::MI_fakeDecal' has a wrong offset!");
static_assert(offsetof(ABP_FishingCastIndicatorActor_C, MI_TossGuideB) == 0x000320, "Member 'ABP_FishingCastIndicatorActor_C::MI_TossGuideB' has a wrong offset!");

}

