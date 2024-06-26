#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ValeriaGatherableLoot_Mining_Base

#include "Basic.hpp"

#include "BP_ValeriaGatherableLoot_Mining_Base_classes.hpp"
#include "BP_ValeriaGatherableLoot_Mining_Base_parameters.hpp"


namespace SDK
{

// Function BP_ValeriaGatherableLoot_Mining_Base.BP_ValeriaGatherableLoot_Mining_Base_C.ApplyImpactDecal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                                  CallFunc_RandomFloatInRange_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_RandomFloatInRange_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_RandomFloatInRange_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_MakeVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         CallFunc_MakeRotator_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                         CallFunc_ComposeRotators_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDecalComponent*                  CallFunc_SpawnDecalAttached_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_MakeRotator_Roll_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValeriaGatherableLoot_Mining_Base_C::ApplyImpactDecal(const struct FVector& Position, const struct FRotator& Rotation, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_MakeRotator_Roll_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ValeriaGatherableLoot_Mining_Base_C", "ApplyImpactDecal");

	Params::BP_ValeriaGatherableLoot_Mining_Base_C_ApplyImpactDecal Parms{};

	Parms.Position = std::move(Position);
	Parms.Rotation = std::move(Rotation);
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue = std::move(CallFunc_MakeVector_ReturnValue);
	Parms.CallFunc_MakeRotator_ReturnValue = std::move(CallFunc_MakeRotator_ReturnValue);
	Parms.CallFunc_ComposeRotators_ReturnValue = std::move(CallFunc_ComposeRotators_ReturnValue);
	Parms.CallFunc_SpawnDecalAttached_ReturnValue = CallFunc_SpawnDecalAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast = CallFunc_MakeRotator_Roll_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ValeriaGatherableLoot_Mining_Base.BP_ValeriaGatherableLoot_Mining_Base_C.ExecuteUbergraph_BP_ValeriaGatherableLoot_Mining_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// Enum_vfx_mineNodeType                   Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Temp_object_Variable                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Temp_object_Variable_1                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Temp_object_Variable_2                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Temp_object_Variable_3                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Temp_object_Variable_4                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Temp_object_Variable_5                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Temp_object_Variable_6                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           K2Node_Event_Instigator_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVitalsComponent*                 K2Node_Event_vital                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetComponentLocation_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           K2Node_Event_Instigator                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsServer_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               K2Node_Select_Default                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Conv_ByteToInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Conv_ByteToInt_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       CallFunc_K2_SetRelativeLocation_SweepHitResult         (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                          CallFunc_VLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       CallFunc_K2_SetRelativeLocation_SweepHitResult_1       (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ValeriaGatherableLoot_Mining_Base_C::ExecuteUbergraph_BP_ValeriaGatherableLoot_Mining_Base(int32 EntryPoint, Enum_vfx_mineNodeType Temp_byte_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, class UMaterialInterface* Temp_object_Variable_4, class UMaterialInterface* Temp_object_Variable_5, class UMaterialInterface* Temp_object_Variable_6, class AActor* K2Node_Event_Instigator_1, class UVitalsComponent* K2Node_Event_vital, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AActor* K2Node_Event_Instigator, bool CallFunc_IsServer_ReturnValue, class UMaterialInterface* K2Node_Select_Default, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ValeriaGatherableLoot_Mining_Base_C", "ExecuteUbergraph_BP_ValeriaGatherableLoot_Mining_Base");

	Params::BP_ValeriaGatherableLoot_Mining_Base_C_ExecuteUbergraph_BP_ValeriaGatherableLoot_Mining_Base Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.K2Node_Event_Instigator_1 = K2Node_Event_Instigator_1;
	Parms.K2Node_Event_vital = K2Node_Event_vital;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = std::move(CallFunc_K2_GetComponentLocation_ReturnValue);
	Parms.K2Node_Event_Instigator = K2Node_Event_Instigator;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = std::move(CallFunc_K2_SetRelativeLocation_SweepHitResult);
	Parms.CallFunc_VLerp_ReturnValue = std::move(CallFunc_VLerp_ReturnValue);
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = std::move(CallFunc_K2_SetRelativeLocation_SweepHitResult_1);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ValeriaGatherableLoot_Mining_Base.BP_ValeriaGatherableLoot_Mining_Base_C.GetImpactLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Hit_power                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Hit_Position                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Hit_rot                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AEquipViewActor*>          SpawnedActors                                          (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<EObjectTypeQuery>                NewLocalVar_0                                          (Edit, BlueprintVisible)
// struct FVector                          My_hitPos                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  My_power                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<EObjectTypeQuery>                K2Node_MakeArray_Array                                 (ReferenceParm)
// class AEquipViewActor*                  CallFunc_Array_Get_Item                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Pick_EquipView_C*             K2Node_DynamicCast_AsBP_Pick_Equip_View                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetComponentLocation_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetComponentLocation_ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_BreakVector_X                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_BreakVector_Y                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_BreakVector_Z                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Add_DoubleDouble_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Add_DoubleDouble_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_MakeVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_MakeVector_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetComponentLocation_ReturnValue_2         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_LineTraceComponent_HitLocation             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_LineTraceComponent_HitNormal               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CallFunc_K2_LineTraceComponent_BoneName                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       CallFunc_K2_LineTraceComponent_OutHit                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    CallFunc_K2_LineTraceComponent_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsServer_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         CallFunc_MakeRotFromX_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_Subtract_VectorVector_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Array_IsValidIndex_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetPlayerController_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            CallFunc_K2_GetPawn_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ValeriaCharacter_C*           K2Node_DynamicCast_AsBP_Valeria_Character              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEquipmentComponent*              CallFunc_GetEquipment_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FEquipmentItem                   CallFunc_GetEquippedItem_ReturnValue                   ()

void ABP_ValeriaGatherableLoot_Mining_Base_C::GetImpactLocation(double* Hit_power, struct FVector* Hit_Position, struct FRotator* Hit_rot, const TArray<class AEquipViewActor*>& SpawnedActors, const TArray<EObjectTypeQuery>& NewLocalVar_0, const struct FVector& My_hitPos, double My_power, TArray<EObjectTypeQuery>& K2Node_MakeArray_Array, class AEquipViewActor* CallFunc_Array_Get_Item, class ABP_Pick_EquipView_C* K2Node_DynamicCast_AsBP_Pick_Equip_View, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FVector& CallFunc_K2_LineTraceComponent_HitLocation, const struct FVector& CallFunc_K2_LineTraceComponent_HitNormal, class FName CallFunc_K2_LineTraceComponent_BoneName, const struct FHitResult& CallFunc_K2_LineTraceComponent_OutHit, bool CallFunc_K2_LineTraceComponent_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_ValeriaCharacter_C* K2Node_DynamicCast_AsBP_Valeria_Character, bool K2Node_DynamicCast_bSuccess_1, class UEquipmentComponent* CallFunc_GetEquipment_ReturnValue, const struct FEquipmentItem& CallFunc_GetEquippedItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ValeriaGatherableLoot_Mining_Base_C", "GetImpactLocation");

	Params::BP_ValeriaGatherableLoot_Mining_Base_C_GetImpactLocation Parms{};

	Parms.SpawnedActors = std::move(SpawnedActors);
	Parms.NewLocalVar_0 = std::move(NewLocalVar_0);
	Parms.My_hitPos = std::move(My_hitPos);
	Parms.My_power = My_power;
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_Pick_Equip_View = K2Node_DynamicCast_AsBP_Pick_Equip_View;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = std::move(CallFunc_K2_GetComponentLocation_ReturnValue);
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = std::move(CallFunc_K2_GetComponentLocation_ReturnValue_1);
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = std::move(CallFunc_MakeVector_ReturnValue);
	Parms.CallFunc_MakeVector_ReturnValue_1 = std::move(CallFunc_MakeVector_ReturnValue_1);
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = std::move(CallFunc_K2_GetComponentLocation_ReturnValue_2);
	Parms.CallFunc_K2_LineTraceComponent_HitLocation = std::move(CallFunc_K2_LineTraceComponent_HitLocation);
	Parms.CallFunc_K2_LineTraceComponent_HitNormal = std::move(CallFunc_K2_LineTraceComponent_HitNormal);
	Parms.CallFunc_K2_LineTraceComponent_BoneName = CallFunc_K2_LineTraceComponent_BoneName;
	Parms.CallFunc_K2_LineTraceComponent_OutHit = std::move(CallFunc_K2_LineTraceComponent_OutHit);
	Parms.CallFunc_K2_LineTraceComponent_ReturnValue = CallFunc_K2_LineTraceComponent_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_MakeRotFromX_ReturnValue = std::move(CallFunc_MakeRotFromX_ReturnValue);
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = std::move(CallFunc_Subtract_VectorVector_ReturnValue);
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Valeria_Character = K2Node_DynamicCast_AsBP_Valeria_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetEquipment_ReturnValue = CallFunc_GetEquipment_ReturnValue;
	Parms.CallFunc_GetEquippedItem_ReturnValue = std::move(CallFunc_GetEquippedItem_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (Hit_power != nullptr)
		*Hit_power = Parms.Hit_power;

	if (Hit_Position != nullptr)
		*Hit_Position = std::move(Parms.Hit_Position);

	if (Hit_rot != nullptr)
		*Hit_rot = std::move(Parms.Hit_rot);
}


// Function BP_ValeriaGatherableLoot_Mining_Base.BP_ValeriaGatherableLoot_Mining_Base_C.HandlePickImpact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  CallFunc_Multiply_DoubleDouble_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Multiply_DoubleDouble_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_RandomFloatInRange_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_RandomFloatInRange_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_GetImpactLocation_hit_power                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_GetImpactLocation_hit_position                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         CallFunc_GetImpactLocation_hit_rot                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_MakeVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Divide_DoubleDouble_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Lerp_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValeriaGatherableLoot_Mining_Base_C::HandlePickImpact(double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_GetImpactLocation_hit_power, const struct FVector& CallFunc_GetImpactLocation_hit_position, const struct FRotator& CallFunc_GetImpactLocation_hit_rot, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ValeriaGatherableLoot_Mining_Base_C", "HandlePickImpact");

	Params::BP_ValeriaGatherableLoot_Mining_Base_C_HandlePickImpact Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_GetImpactLocation_hit_power = CallFunc_GetImpactLocation_hit_power;
	Parms.CallFunc_GetImpactLocation_hit_position = std::move(CallFunc_GetImpactLocation_hit_position);
	Parms.CallFunc_GetImpactLocation_hit_rot = std::move(CallFunc_GetImpactLocation_hit_rot);
	Parms.CallFunc_MakeVector_ReturnValue = std::move(CallFunc_MakeVector_ReturnValue);
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ValeriaGatherableLoot_Mining_Base.BP_ValeriaGatherableLoot_Mining_Base_C.OnGatherableDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ValeriaGatherableLoot_Mining_Base_C::OnGatherableDestroyed(class AActor* Param_Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ValeriaGatherableLoot_Mining_Base_C", "OnGatherableDestroyed");

	Params::BP_ValeriaGatherableLoot_Mining_Base_C_OnGatherableDestroyed Parms{};

	Parms.Param_Instigator = Param_Instigator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ValeriaGatherableLoot_Mining_Base.BP_ValeriaGatherableLoot_Mining_Base_C.OnGatherableHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVitalsComponent*                 Vital                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_ValeriaGatherableLoot_Mining_Base_C::OnGatherableHit(class AActor* Param_Instigator, class UVitalsComponent* Vital)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ValeriaGatherableLoot_Mining_Base_C", "OnGatherableHit");

	Params::BP_ValeriaGatherableLoot_Mining_Base_C_OnGatherableHit Parms{};

	Parms.Param_Instigator = Param_Instigator;
	Parms.Vital = Vital;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ValeriaGatherableLoot_Mining_Base.BP_ValeriaGatherableLoot_Mining_Base_C.PlayImpactAnimation
// (BlueprintCallable, BlueprintEvent)

void ABP_ValeriaGatherableLoot_Mining_Base_C::PlayImpactAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ValeriaGatherableLoot_Mining_Base_C", "PlayImpactAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ValeriaGatherableLoot_Mining_Base.BP_ValeriaGatherableLoot_Mining_Base_C.TL_ShakeMe__FinishedFunc
// (BlueprintEvent)

void ABP_ValeriaGatherableLoot_Mining_Base_C::TL_ShakeMe__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ValeriaGatherableLoot_Mining_Base_C", "TL_ShakeMe__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ValeriaGatherableLoot_Mining_Base.BP_ValeriaGatherableLoot_Mining_Base_C.TL_ShakeMe__UpdateFunc
// (BlueprintEvent)

void ABP_ValeriaGatherableLoot_Mining_Base_C::TL_ShakeMe__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ValeriaGatherableLoot_Mining_Base_C", "TL_ShakeMe__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ValeriaGatherableLoot_Mining_Base.BP_ValeriaGatherableLoot_Mining_Base_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentIndex                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               CallFunc_Array_Get_Item                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_CreateDynamicMaterialInstance_ReturnValue     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Add_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               CallFunc_GetMaterial_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetNumMaterials_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_CreateDynamicMaterialInstance_ReturnValue_1   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Subtract_IntInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_LessEqual_IntInt_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Add_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       CallFunc_K2_SetRelativeLocation_SweepHitResult         (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetNumMaterials_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Subtract_IntInt_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_LessEqual_IntInt_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_SetStaticMesh_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValeriaGatherableLoot_Mining_Base_C::UserConstructionScript(int32 CurrentIndex, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, int32 Temp_int_Variable_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ValeriaGatherableLoot_Mining_Base_C", "UserConstructionScript");

	Params::BP_ValeriaGatherableLoot_Mining_Base_C_UserConstructionScript Parms{};

	Parms.CurrentIndex = CurrentIndex;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = std::move(CallFunc_K2_SetRelativeLocation_SweepHitResult);
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetNumMaterials_ReturnValue_1 = CallFunc_GetNumMaterials_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ValeriaGatherableLoot_Mining_Base.BP_ValeriaGatherableLoot_Mining_Base_C.VFX_OnHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanDamage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           CallFunc_GetComponentByClass_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Conv_ByteToInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*                CallFunc_SpawnSystemAttached_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Conv_ByteToInt_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValeriaGatherableLoot_Mining_Base_C::VFX_OnHit(bool CanDamage, class AActor* Param_Instigator, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ValeriaGatherableLoot_Mining_Base_C", "VFX_OnHit");

	Params::BP_ValeriaGatherableLoot_Mining_Base_C_VFX_OnHit Parms{};

	Parms.CanDamage = CanDamage;
	Parms.Param_Instigator = Param_Instigator;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}

}

