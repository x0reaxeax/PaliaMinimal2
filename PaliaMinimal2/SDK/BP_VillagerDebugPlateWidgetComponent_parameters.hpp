#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VillagerDebugPlateWidgetComponent

#include "Basic.hpp"

#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function BP_VillagerDebugPlateWidgetComponent.BP_VillagerDebugPlateWidgetComponent_C.ExecuteUbergraph_BP_VillagerDebugPlateWidgetComponent
// 0x0038 (0x0038 - 0x0000)
struct BP_VillagerDebugPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerDebugPlateWidgetComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D4B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_VillagerDebugPlate_C*              K2Node_DynamicCast_AsWBP_Villager_Debug_Plate;     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D4C[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaVillagerCharacter*              K2Node_DynamicCast_AsValeria_Villager_Character;   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VillagerDebugPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerDebugPlateWidgetComponent) == 0x000008, "Wrong alignment on BP_VillagerDebugPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerDebugPlateWidgetComponent");
static_assert(sizeof(BP_VillagerDebugPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerDebugPlateWidgetComponent) == 0x000038, "Wrong size on BP_VillagerDebugPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerDebugPlateWidgetComponent");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerDebugPlateWidgetComponent, EntryPoint) == 0x000000, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerDebugPlateWidgetComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerDebugPlateWidgetComponent, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000008, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerDebugPlateWidgetComponent::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerDebugPlateWidgetComponent, K2Node_DynamicCast_AsWBP_Villager_Debug_Plate) == 0x000010, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerDebugPlateWidgetComponent::K2Node_DynamicCast_AsWBP_Villager_Debug_Plate' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerDebugPlateWidgetComponent, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerDebugPlateWidgetComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerDebugPlateWidgetComponent, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerDebugPlateWidgetComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerDebugPlateWidgetComponent, K2Node_DynamicCast_AsValeria_Villager_Character) == 0x000028, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerDebugPlateWidgetComponent::K2Node_DynamicCast_AsValeria_Villager_Character' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerDebugPlateWidgetComponent, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ExecuteUbergraph_BP_VillagerDebugPlateWidgetComponent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_VillagerDebugPlateWidgetComponent.BP_VillagerDebugPlateWidgetComponent_C.ShouldPlateBeVisible
// 0x0030 (0x0030 - 0x0000)
struct BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_7;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_8;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_9;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_10;                             // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_11;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_12;                             // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_13;                             // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_14;                             // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_15;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_16;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_17;                             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_18;                             // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_19;                             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_20;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_21;                             // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_22;                             // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_23;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_24;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_25;                             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_26;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_27;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_28;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D4D[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetLocalPlayerCharacter_ReturnValue;      // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharacterState                               CallFunc_GetCurrentStateType_ReturnValue;          // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharacterState                               Temp_byte_Variable;                                // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShouldPlateBeVisible_ReturnValue;         // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible) == 0x000008, "Wrong alignment on BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible");
static_assert(sizeof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible) == 0x000030, "Wrong size on BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, ReturnValue) == 0x000000, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable) == 0x000001, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_1) == 0x000002, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_2) == 0x000003, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_3) == 0x000004, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_4) == 0x000005, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_5) == 0x000006, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_6) == 0x000007, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_7) == 0x000008, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_8) == 0x000009, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_9) == 0x00000A, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_10) == 0x00000B, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_11) == 0x00000C, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_12) == 0x00000D, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_13) == 0x00000E, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_13' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_14) == 0x00000F, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_14' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_15) == 0x000010, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_15' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_16) == 0x000011, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_16' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_17) == 0x000012, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_17' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_18) == 0x000013, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_18' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_19) == 0x000014, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_19' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_20) == 0x000015, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_20' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_21) == 0x000016, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_21' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_22) == 0x000017, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_22' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_23) == 0x000018, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_23' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_24) == 0x000019, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_24' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_25) == 0x00001A, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_25' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_26) == 0x00001B, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_26' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_27) == 0x00001C, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_27' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_bool_Variable_28) == 0x00001D, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_bool_Variable_28' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, CallFunc_GetLocalPlayerCharacter_ReturnValue) == 0x000020, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::CallFunc_GetLocalPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, CallFunc_GetCurrentStateType_ReturnValue) == 0x000029, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::CallFunc_GetCurrentStateType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, Temp_byte_Variable) == 0x00002A, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, CallFunc_ShouldPlateBeVisible_ReturnValue) == 0x00002B, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::CallFunc_ShouldPlateBeVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible, K2Node_Select_Default) == 0x00002C, "Member 'BP_VillagerDebugPlateWidgetComponent_C_ShouldPlateBeVisible::K2Node_Select_Default' has a wrong offset!");

}

