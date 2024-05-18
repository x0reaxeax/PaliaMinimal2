#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GardenPlotActor_WeedStatusPlate

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_GardenPlotActor_WeedStatusPlate.WBP_GardenPlotActor_WeedStatusPlate_C.ExecuteUbergraph_WBP_GardenPlotActor_WeedStatusPlate
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_GardenPlotActor_WeedStatusPlate_C_ExecuteUbergraph_WBP_GardenPlotActor_WeedStatusPlate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6172[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0010(0x00D0)()
};
static_assert(alignof(WBP_GardenPlotActor_WeedStatusPlate_C_ExecuteUbergraph_WBP_GardenPlotActor_WeedStatusPlate) == 0x000010, "Wrong alignment on WBP_GardenPlotActor_WeedStatusPlate_C_ExecuteUbergraph_WBP_GardenPlotActor_WeedStatusPlate");
static_assert(sizeof(WBP_GardenPlotActor_WeedStatusPlate_C_ExecuteUbergraph_WBP_GardenPlotActor_WeedStatusPlate) == 0x0000E0, "Wrong size on WBP_GardenPlotActor_WeedStatusPlate_C_ExecuteUbergraph_WBP_GardenPlotActor_WeedStatusPlate");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_ExecuteUbergraph_WBP_GardenPlotActor_WeedStatusPlate, EntryPoint) == 0x000000, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_ExecuteUbergraph_WBP_GardenPlotActor_WeedStatusPlate::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_ExecuteUbergraph_WBP_GardenPlotActor_WeedStatusPlate, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_ExecuteUbergraph_WBP_GardenPlotActor_WeedStatusPlate::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_ExecuteUbergraph_WBP_GardenPlotActor_WeedStatusPlate, K2Node_MakeStruct_SlateBrush) == 0x000010, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_ExecuteUbergraph_WBP_GardenPlotActor_WeedStatusPlate::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function WBP_GardenPlotActor_WeedStatusPlate.WBP_GardenPlotActor_WeedStatusPlate_C.GetMinigameMaterial
// 0x0008 (0x0008 - 0x0000)
struct WBP_GardenPlotActor_WeedStatusPlate_C_GetMinigameMaterial final
{
public:
	class UImage*                                 Material;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GardenPlotActor_WeedStatusPlate_C_GetMinigameMaterial) == 0x000008, "Wrong alignment on WBP_GardenPlotActor_WeedStatusPlate_C_GetMinigameMaterial");
static_assert(sizeof(WBP_GardenPlotActor_WeedStatusPlate_C_GetMinigameMaterial) == 0x000008, "Wrong size on WBP_GardenPlotActor_WeedStatusPlate_C_GetMinigameMaterial");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_GetMinigameMaterial, Material) == 0x000000, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_GetMinigameMaterial::Material' has a wrong offset!");

// Function WBP_GardenPlotActor_WeedStatusPlate.WBP_GardenPlotActor_WeedStatusPlate_C.OnMinigameState
// 0x0150 (0x0150 - 0x0000)
struct WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState final
{
public:
	EMinigameState                                MinigameState;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6173[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6174[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_1;                              // 0x0028(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x0040(0x0018)()
	class FText                                   Temp_text_Variable_3;                              // 0x0058(0x0018)()
	class FText                                   Temp_text_Variable_4;                              // 0x0070(0x0018)()
	class FText                                   Temp_text_Variable_5;                              // 0x0088(0x0018)()
	EMinigameState                                Temp_byte_Variable;                                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6175[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       Temp_object_Variable;                              // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Temp_object_Variable_1;                            // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Temp_object_Variable_2;                            // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Temp_object_Variable_3;                            // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Temp_object_Variable_4;                            // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable_6;                              // 0x00D0(0x0018)()
	class FText                                   Temp_text_Variable_7;                              // 0x00E8(0x0018)()
	class FText                                   Temp_text_Variable_8;                              // 0x0100(0x0018)()
	EMinigameState                                Temp_byte_Variable_1;                              // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6176[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0120(0x0018)()
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6177[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Select_Default_1;                           // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState) == 0x000008, "Wrong alignment on WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState");
static_assert(sizeof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState) == 0x000150, "Wrong size on WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, MinigameState) == 0x000000, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::MinigameState' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, Temp_text_Variable) == 0x000008, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, Temp_text_Variable_1) == 0x000028, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, Temp_text_Variable_2) == 0x000040, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, Temp_text_Variable_3) == 0x000058, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, Temp_text_Variable_4) == 0x000070, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, Temp_text_Variable_5) == 0x000088, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, Temp_byte_Variable) == 0x0000A0, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, Temp_object_Variable) == 0x0000A8, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, Temp_object_Variable_1) == 0x0000B0, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, Temp_object_Variable_2) == 0x0000B8, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, Temp_object_Variable_3) == 0x0000C0, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, Temp_object_Variable_4) == 0x0000C8, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, Temp_text_Variable_6) == 0x0000D0, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::Temp_text_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, Temp_text_Variable_7) == 0x0000E8, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::Temp_text_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, Temp_text_Variable_8) == 0x000100, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::Temp_text_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, Temp_byte_Variable_1) == 0x000118, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000119, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, K2Node_Select_Default) == 0x000120, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000138, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, K2Node_Select_Default_1) == 0x000140, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState, CallFunc_PlayAnimation_ReturnValue) == 0x000148, "Member 'WBP_GardenPlotActor_WeedStatusPlate_C_OnMinigameState::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

