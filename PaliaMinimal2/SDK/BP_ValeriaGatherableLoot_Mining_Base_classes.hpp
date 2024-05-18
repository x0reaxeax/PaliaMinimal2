#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ValeriaGatherableLoot_Mining_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_vfx_mineNodeType_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Enum_vfx_mineNodeSize_structs.hpp"
#include "BP_ValeriaGatherableLoot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ValeriaGatherableLoot_Mining_Base.BP_ValeriaGatherableLoot_Mining_Base_C
// 0x00C8 (0x0410 - 0x0348)
class ABP_ValeriaGatherableLoot_Mining_Base_C : public ABP_ValeriaGatherableLoot_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ValeriaGatherableLoot_Mining_Base_C; // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTrackedResourceComponent*              TrackedResource;                                   // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MySM_mineNode;                                     // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Root_mine;                                         // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Root_visual;                                       // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticipationTrackingComponent*        ParticipationTracking;                             // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TL_ShakeMe_shake_64813AE44BF51BEC7B158D8C8CCCE611; // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_ShakeMe__Direction_64813AE44BF51BEC7B158D8C8CCCE611; // 0x037C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60FC[0x3];                                     // 0x037D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_ShakeMe;                                        // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	Enum_vfx_mineNodeType                         MineNode_type;                                     // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	Enum_vfx_mineNodeSize                         MineNode_size;                                     // 0x0389(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_60FD[0x6];                                     // 0x038A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            SM_miningNode;                                     // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Override_meshMaterial;                             // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_60FE[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             Mat_miningNode;                                    // 0x03A0(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FVector                                Pos_offsetMesh;                                    // 0x03B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                Scale_mesh;                                        // 0x03C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Shake_amount;                                      // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Pos_shake;                                         // 0x03E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       MI_miningNode;                                     // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ApplyImpactDecal(const struct FVector& Position, const struct FRotator& Rotation, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_MakeRotator_Roll_ImplicitCast);
	void ExecuteUbergraph_BP_ValeriaGatherableLoot_Mining_Base(int32 EntryPoint, Enum_vfx_mineNodeType Temp_byte_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, class UMaterialInterface* Temp_object_Variable_4, class UMaterialInterface* Temp_object_Variable_5, class UMaterialInterface* Temp_object_Variable_6, class AActor* K2Node_Event_Instigator_1, class UVitalsComponent* K2Node_Event_vital, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AActor* K2Node_Event_Instigator, bool CallFunc_IsServer_ReturnValue, class UMaterialInterface* K2Node_Select_Default, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1);
	void GetImpactLocation(double* Hit_power, struct FVector* Hit_Position, struct FRotator* Hit_rot, const TArray<class AEquipViewActor*>& SpawnedActors, const TArray<EObjectTypeQuery>& NewLocalVar_0, const struct FVector& My_hitPos, double My_power, TArray<EObjectTypeQuery>& K2Node_MakeArray_Array, class AEquipViewActor* CallFunc_Array_Get_Item, class ABP_Pick_EquipView_C* K2Node_DynamicCast_AsBP_Pick_Equip_View, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FVector& CallFunc_K2_LineTraceComponent_HitLocation, const struct FVector& CallFunc_K2_LineTraceComponent_HitNormal, class FName CallFunc_K2_LineTraceComponent_BoneName, const struct FHitResult& CallFunc_K2_LineTraceComponent_OutHit, bool CallFunc_K2_LineTraceComponent_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_ValeriaCharacter_C* K2Node_DynamicCast_AsBP_Valeria_Character, bool K2Node_DynamicCast_bSuccess_1, class UEquipmentComponent* CallFunc_GetEquipment_ReturnValue, const struct FEquipmentItem& CallFunc_GetEquippedItem_ReturnValue);
	void HandlePickImpact(double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_GetImpactLocation_hit_power, const struct FVector& CallFunc_GetImpactLocation_hit_position, const struct FRotator& CallFunc_GetImpactLocation_hit_rot, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue);
	void OnGatherableDestroyed(class AActor* Param_Instigator);
	void OnGatherableHit(class AActor* Param_Instigator, class UVitalsComponent* Vital);
	void PlayImpactAnimation();
	void TL_ShakeMe__FinishedFunc();
	void TL_ShakeMe__UpdateFunc();
	void UserConstructionScript(int32 CurrentIndex, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, int32 Temp_int_Variable_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue);
	void VFX_OnHit(bool CanDamage, class AActor* Param_Instigator, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ValeriaGatherableLoot_Mining_Base_C">();
	}
	static class ABP_ValeriaGatherableLoot_Mining_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ValeriaGatherableLoot_Mining_Base_C>();
	}
};
static_assert(alignof(ABP_ValeriaGatherableLoot_Mining_Base_C) == 0x000008, "Wrong alignment on ABP_ValeriaGatherableLoot_Mining_Base_C");
static_assert(sizeof(ABP_ValeriaGatherableLoot_Mining_Base_C) == 0x000410, "Wrong size on ABP_ValeriaGatherableLoot_Mining_Base_C");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Mining_Base_C, UberGraphFrame_BP_ValeriaGatherableLoot_Mining_Base_C) == 0x000348, "Member 'ABP_ValeriaGatherableLoot_Mining_Base_C::UberGraphFrame_BP_ValeriaGatherableLoot_Mining_Base_C' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Mining_Base_C, TrackedResource) == 0x000350, "Member 'ABP_ValeriaGatherableLoot_Mining_Base_C::TrackedResource' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Mining_Base_C, MySM_mineNode) == 0x000358, "Member 'ABP_ValeriaGatherableLoot_Mining_Base_C::MySM_mineNode' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Mining_Base_C, Root_mine) == 0x000360, "Member 'ABP_ValeriaGatherableLoot_Mining_Base_C::Root_mine' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Mining_Base_C, Root_visual) == 0x000368, "Member 'ABP_ValeriaGatherableLoot_Mining_Base_C::Root_visual' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Mining_Base_C, ParticipationTracking) == 0x000370, "Member 'ABP_ValeriaGatherableLoot_Mining_Base_C::ParticipationTracking' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Mining_Base_C, TL_ShakeMe_shake_64813AE44BF51BEC7B158D8C8CCCE611) == 0x000378, "Member 'ABP_ValeriaGatherableLoot_Mining_Base_C::TL_ShakeMe_shake_64813AE44BF51BEC7B158D8C8CCCE611' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Mining_Base_C, TL_ShakeMe__Direction_64813AE44BF51BEC7B158D8C8CCCE611) == 0x00037C, "Member 'ABP_ValeriaGatherableLoot_Mining_Base_C::TL_ShakeMe__Direction_64813AE44BF51BEC7B158D8C8CCCE611' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Mining_Base_C, TL_ShakeMe) == 0x000380, "Member 'ABP_ValeriaGatherableLoot_Mining_Base_C::TL_ShakeMe' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Mining_Base_C, MineNode_type) == 0x000388, "Member 'ABP_ValeriaGatherableLoot_Mining_Base_C::MineNode_type' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Mining_Base_C, MineNode_size) == 0x000389, "Member 'ABP_ValeriaGatherableLoot_Mining_Base_C::MineNode_size' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Mining_Base_C, SM_miningNode) == 0x000390, "Member 'ABP_ValeriaGatherableLoot_Mining_Base_C::SM_miningNode' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Mining_Base_C, Override_meshMaterial) == 0x000398, "Member 'ABP_ValeriaGatherableLoot_Mining_Base_C::Override_meshMaterial' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Mining_Base_C, Mat_miningNode) == 0x0003A0, "Member 'ABP_ValeriaGatherableLoot_Mining_Base_C::Mat_miningNode' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Mining_Base_C, Pos_offsetMesh) == 0x0003B0, "Member 'ABP_ValeriaGatherableLoot_Mining_Base_C::Pos_offsetMesh' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Mining_Base_C, Scale_mesh) == 0x0003C8, "Member 'ABP_ValeriaGatherableLoot_Mining_Base_C::Scale_mesh' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Mining_Base_C, Shake_amount) == 0x0003E0, "Member 'ABP_ValeriaGatherableLoot_Mining_Base_C::Shake_amount' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Mining_Base_C, Pos_shake) == 0x0003E8, "Member 'ABP_ValeriaGatherableLoot_Mining_Base_C::Pos_shake' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaGatherableLoot_Mining_Base_C, MI_miningNode) == 0x000400, "Member 'ABP_ValeriaGatherableLoot_Mining_Base_C::MI_miningNode' has a wrong offset!");

}
