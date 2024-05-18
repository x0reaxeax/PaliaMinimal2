#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlateHealthBar_Tree

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PlateHealthBar_Tree.BP_PlateHealthBar_Tree_C.ExecuteUbergraph_BP_PlateHealthBar_Tree
// 0x0050 (0x0050 - 0x0000)
struct BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47DF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVitalsComponent*                       CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47E0[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_HealthBar_C*                       K2Node_DynamicCast_AsWBP_Health_Bar;               // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47E1[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetVitalStart_ReturnValue;                // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetVital_ReturnValue;                     // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsVisibleToPlayer_IsVisible;           // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree) == 0x000008, "Wrong alignment on BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree");
static_assert(sizeof(BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree) == 0x000050, "Wrong size on BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree");
static_assert(offsetof(BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree, EntryPoint) == 0x000000, "Member 'BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000018, "Member 'BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree, K2Node_DynamicCast_AsWBP_Health_Bar) == 0x000028, "Member 'BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree::K2Node_DynamicCast_AsWBP_Health_Bar' has a wrong offset!");
static_assert(offsetof(BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree, CallFunc_GetVitalStart_ReturnValue) == 0x000040, "Member 'BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree::CallFunc_GetVitalStart_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree, CallFunc_GetVital_ReturnValue) == 0x000044, "Member 'BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree::CallFunc_GetVital_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree, CallFunc_Greater_IntInt_ReturnValue) == 0x000048, "Member 'BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000049, "Member 'BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00004A, "Member 'BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree, CallFunc_BooleanAND_ReturnValue) == 0x00004B, "Member 'BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree, CallFunc_BooleanAND_ReturnValue_1) == 0x00004C, "Member 'BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree, CallFunc_GetIsVisibleToPlayer_IsVisible) == 0x00004D, "Member 'BP_PlateHealthBar_Tree_C_ExecuteUbergraph_BP_PlateHealthBar_Tree::CallFunc_GetIsVisibleToPlayer_IsVisible' has a wrong offset!");

}

