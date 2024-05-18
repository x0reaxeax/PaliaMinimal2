#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Loot

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Loot.BP_Loot_C.AdjustPosition
// 0x0360 (0x0360 - 0x0000)
struct BP_Loot_C_AdjustPosition final
{
public:
	struct FVector                                InstigatorPosition;                                // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OldPosition;                                       // 0x0018(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewPosition;                                       // 0x0030(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  Instigators;                                       // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_VectorVector_ReturnValue;        // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60D7[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0088(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0098(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0183(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60D8[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0200(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60D9[0x4];                                     // 0x0224(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0258(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0270(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Loot_C_AdjustPosition) == 0x000008, "Wrong alignment on BP_Loot_C_AdjustPosition");
static_assert(sizeof(BP_Loot_C_AdjustPosition) == 0x000360, "Wrong size on BP_Loot_C_AdjustPosition");
static_assert(offsetof(BP_Loot_C_AdjustPosition, InstigatorPosition) == 0x000000, "Member 'BP_Loot_C_AdjustPosition::InstigatorPosition' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, OldPosition) == 0x000018, "Member 'BP_Loot_C_AdjustPosition::OldPosition' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, NewPosition) == 0x000030, "Member 'BP_Loot_C_AdjustPosition::NewPosition' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, Instigators) == 0x000048, "Member 'BP_Loot_C_AdjustPosition::Instigators' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_Add_VectorVector_ReturnValue) == 0x000050, "Member 'BP_Loot_C_AdjustPosition::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000068, "Member 'BP_Loot_C_AdjustPosition::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_NotEqual_VectorVector_ReturnValue) == 0x000080, "Member 'BP_Loot_C_AdjustPosition::CallFunc_NotEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, Temp_object_Variable) == 0x000088, "Member 'BP_Loot_C_AdjustPosition::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_LineTraceSingle_OutHit) == 0x000098, "Member 'BP_Loot_C_AdjustPosition::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_LineTraceSingle_ReturnValue) == 0x000180, "Member 'BP_Loot_C_AdjustPosition::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_IsValid_ReturnValue) == 0x000181, "Member 'BP_Loot_C_AdjustPosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_BreakHitResult_bBlockingHit) == 0x000182, "Member 'BP_Loot_C_AdjustPosition::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_BreakHitResult_bInitialOverlap) == 0x000183, "Member 'BP_Loot_C_AdjustPosition::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_BreakHitResult_Time) == 0x000184, "Member 'BP_Loot_C_AdjustPosition::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_BreakHitResult_Distance) == 0x000188, "Member 'BP_Loot_C_AdjustPosition::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_BreakHitResult_Location) == 0x000190, "Member 'BP_Loot_C_AdjustPosition::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_BreakHitResult_ImpactPoint) == 0x0001A8, "Member 'BP_Loot_C_AdjustPosition::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_BreakHitResult_Normal) == 0x0001C0, "Member 'BP_Loot_C_AdjustPosition::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_BreakHitResult_ImpactNormal) == 0x0001D8, "Member 'BP_Loot_C_AdjustPosition::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_BreakHitResult_PhysMat) == 0x0001F0, "Member 'BP_Loot_C_AdjustPosition::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_BreakHitResult_HitActor) == 0x0001F8, "Member 'BP_Loot_C_AdjustPosition::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_BreakHitResult_HitComponent) == 0x000200, "Member 'BP_Loot_C_AdjustPosition::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_BreakHitResult_HitBoneName) == 0x000208, "Member 'BP_Loot_C_AdjustPosition::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_BreakHitResult_BoneName) == 0x000210, "Member 'BP_Loot_C_AdjustPosition::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_BreakHitResult_HitItem) == 0x000218, "Member 'BP_Loot_C_AdjustPosition::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_BreakHitResult_ElementIndex) == 0x00021C, "Member 'BP_Loot_C_AdjustPosition::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_BreakHitResult_FaceIndex) == 0x000220, "Member 'BP_Loot_C_AdjustPosition::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_BreakHitResult_TraceStart) == 0x000228, "Member 'BP_Loot_C_AdjustPosition::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_BreakHitResult_TraceEnd) == 0x000240, "Member 'BP_Loot_C_AdjustPosition::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000258, "Member 'BP_Loot_C_AdjustPosition::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000270, "Member 'BP_Loot_C_AdjustPosition::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_AdjustPosition, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000358, "Member 'BP_Loot_C_AdjustPosition::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");

// Function BP_Loot.BP_Loot_C.BndEvt__BP_Loot_Interactable_K2Node_ComponentBoundEvent_0_InteractableClientInteractDelegate__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_Loot_C_BndEvt__BP_Loot_Interactable_K2Node_ComponentBoundEvent_0_InteractableClientInteractDelegate__DelegateSignature final
{
public:
	class UInteractableComponent*                 InteractableComponent;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      Character;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Loot_C_BndEvt__BP_Loot_Interactable_K2Node_ComponentBoundEvent_0_InteractableClientInteractDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_Loot_C_BndEvt__BP_Loot_Interactable_K2Node_ComponentBoundEvent_0_InteractableClientInteractDelegate__DelegateSignature");
static_assert(sizeof(BP_Loot_C_BndEvt__BP_Loot_Interactable_K2Node_ComponentBoundEvent_0_InteractableClientInteractDelegate__DelegateSignature) == 0x000010, "Wrong size on BP_Loot_C_BndEvt__BP_Loot_Interactable_K2Node_ComponentBoundEvent_0_InteractableClientInteractDelegate__DelegateSignature");
static_assert(offsetof(BP_Loot_C_BndEvt__BP_Loot_Interactable_K2Node_ComponentBoundEvent_0_InteractableClientInteractDelegate__DelegateSignature, InteractableComponent) == 0x000000, "Member 'BP_Loot_C_BndEvt__BP_Loot_Interactable_K2Node_ComponentBoundEvent_0_InteractableClientInteractDelegate__DelegateSignature::InteractableComponent' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_BndEvt__BP_Loot_Interactable_K2Node_ComponentBoundEvent_0_InteractableClientInteractDelegate__DelegateSignature, Character) == 0x000008, "Member 'BP_Loot_C_BndEvt__BP_Loot_Interactable_K2Node_ComponentBoundEvent_0_InteractableClientInteractDelegate__DelegateSignature::Character' has a wrong offset!");

// Function BP_Loot.BP_Loot_C.BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_1_InteractableClientInteractDelegate__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_Loot_C_BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_1_InteractableClientInteractDelegate__DelegateSignature final
{
public:
	class UInteractableComponent*                 InteractableComponent;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      Character;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Loot_C_BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_1_InteractableClientInteractDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_Loot_C_BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_1_InteractableClientInteractDelegate__DelegateSignature");
static_assert(sizeof(BP_Loot_C_BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_1_InteractableClientInteractDelegate__DelegateSignature) == 0x000010, "Wrong size on BP_Loot_C_BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_1_InteractableClientInteractDelegate__DelegateSignature");
static_assert(offsetof(BP_Loot_C_BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_1_InteractableClientInteractDelegate__DelegateSignature, InteractableComponent) == 0x000000, "Member 'BP_Loot_C_BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_1_InteractableClientInteractDelegate__DelegateSignature::InteractableComponent' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_1_InteractableClientInteractDelegate__DelegateSignature, Character) == 0x000008, "Member 'BP_Loot_C_BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_1_InteractableClientInteractDelegate__DelegateSignature::Character' has a wrong offset!");

// Function BP_Loot.BP_Loot_C.BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_2_InteractableClientInteractDelegate__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_Loot_C_BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_2_InteractableClientInteractDelegate__DelegateSignature final
{
public:
	class UInteractableComponent*                 InteractableComponent;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      Character;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Loot_C_BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_2_InteractableClientInteractDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_Loot_C_BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_2_InteractableClientInteractDelegate__DelegateSignature");
static_assert(sizeof(BP_Loot_C_BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_2_InteractableClientInteractDelegate__DelegateSignature) == 0x000010, "Wrong size on BP_Loot_C_BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_2_InteractableClientInteractDelegate__DelegateSignature");
static_assert(offsetof(BP_Loot_C_BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_2_InteractableClientInteractDelegate__DelegateSignature, InteractableComponent) == 0x000000, "Member 'BP_Loot_C_BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_2_InteractableClientInteractDelegate__DelegateSignature::InteractableComponent' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_2_InteractableClientInteractDelegate__DelegateSignature, Character) == 0x000008, "Member 'BP_Loot_C_BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_2_InteractableClientInteractDelegate__DelegateSignature::Character' has a wrong offset!");

// Function BP_Loot.BP_Loot_C.ExecuteUbergraph_BP_Loot
// 0x0130 (0x0130 - 0x0000)
struct BP_Loot_C_ExecuteUbergraph_BP_Loot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DisableIfServer_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60DA[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocalBounds_Min;                       // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocalBounds_Max;                       // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60DB[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetMaxElement_ReturnValue;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue_1;                   // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60DC[0x5];                                     // 0x0073(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocalBounds_Min_1;                     // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocalBounds_Max_1;                     // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60DD[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetMaxElement_ReturnValue_1;              // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60DE[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_AkEventLocation_AkComponent;              // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventLocation_Playing_ID;               // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60DF[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInteractableComponent*                 K2Node_ComponentBoundEvent_InteractableComponent_2; // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      K2Node_ComponentBoundEvent_character_2;            // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                 K2Node_ComponentBoundEvent_InteractableComponent_1; // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      K2Node_ComponentBoundEvent_character_1;            // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                 K2Node_ComponentBoundEvent_InteractableComponent;  // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      K2Node_ComponentBoundEvent_character;              // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60E0[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Loot_C_ExecuteUbergraph_BP_Loot) == 0x000008, "Wrong alignment on BP_Loot_C_ExecuteUbergraph_BP_Loot");
static_assert(sizeof(BP_Loot_C_ExecuteUbergraph_BP_Loot) == 0x000130, "Wrong size on BP_Loot_C_ExecuteUbergraph_BP_Loot");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, EntryPoint) == 0x000000, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, K2Node_Event_EndPlayReason) == 0x000004, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_DisableIfServer_ReturnValue) == 0x000005, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_DisableIfServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000020, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_GetLocalBounds_Min) == 0x000028, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_GetLocalBounds_Min' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_GetLocalBounds_Max) == 0x000040, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_GetLocalBounds_Max' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_GetMaxElement_ReturnValue) == 0x000060, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_GetMaxElement_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_FClamp_ReturnValue) == 0x000068, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_IsServer_ReturnValue) == 0x000070, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_IsServer_ReturnValue_1) == 0x000071, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_IsServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_IsValid_ReturnValue_1) == 0x000072, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_GetLocalBounds_Min_1) == 0x000078, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_GetLocalBounds_Min_1' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_GetLocalBounds_Max_1) == 0x000090, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_GetLocalBounds_Max_1' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_IsValid_ReturnValue_2) == 0x0000A8, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_GetMaxElement_ReturnValue_1) == 0x0000B0, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_GetMaxElement_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_FClamp_ReturnValue_1) == 0x0000B8, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000C0, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_IsValid_ReturnValue_3) == 0x0000D8, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_AkEventLocation_AkComponent) == 0x0000E0, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_AkEventLocation_AkComponent' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_AkEventLocation_Playing_ID) == 0x0000E8, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_AkEventLocation_Playing_ID' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, K2Node_ComponentBoundEvent_InteractableComponent_2) == 0x0000F0, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::K2Node_ComponentBoundEvent_InteractableComponent_2' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, K2Node_ComponentBoundEvent_character_2) == 0x0000F8, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::K2Node_ComponentBoundEvent_character_2' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, K2Node_ComponentBoundEvent_InteractableComponent_1) == 0x000100, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::K2Node_ComponentBoundEvent_InteractableComponent_1' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, K2Node_ComponentBoundEvent_character_1) == 0x000108, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::K2Node_ComponentBoundEvent_character_1' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, K2Node_ComponentBoundEvent_InteractableComponent) == 0x000110, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::K2Node_ComponentBoundEvent_InteractableComponent' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, K2Node_ComponentBoundEvent_character) == 0x000118, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::K2Node_ComponentBoundEvent_character' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_IsValid_ReturnValue_4) == 0x000120, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000124, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Loot_C_ExecuteUbergraph_BP_Loot, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x000128, "Member 'BP_Loot_C_ExecuteUbergraph_BP_Loot::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");

// Function BP_Loot.BP_Loot_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_Loot_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Loot_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_Loot_C_ReceiveEndPlay");
static_assert(sizeof(BP_Loot_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_Loot_C_ReceiveEndPlay");
static_assert(offsetof(BP_Loot_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_Loot_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_Loot.BP_Loot_C.UserConstructionScript
// 0x0001 (0x0001 - 0x0000)
struct BP_Loot_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Loot_C_UserConstructionScript) == 0x000001, "Wrong alignment on BP_Loot_C_UserConstructionScript");
static_assert(sizeof(BP_Loot_C_UserConstructionScript) == 0x000001, "Wrong size on BP_Loot_C_UserConstructionScript");
static_assert(offsetof(BP_Loot_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_Loot_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
