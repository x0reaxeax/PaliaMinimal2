#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PinnedQuest

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_PinnedQuest.WBP_PinnedQuest_C.ExecuteUbergraph_WBP_PinnedQuest
// 0x0008 (0x0008 - 0x0000)
struct WBP_PinnedQuest_C_ExecuteUbergraph_WBP_PinnedQuest final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsConsole_ReturnValue;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PinnedQuest_C_ExecuteUbergraph_WBP_PinnedQuest) == 0x000004, "Wrong alignment on WBP_PinnedQuest_C_ExecuteUbergraph_WBP_PinnedQuest");
static_assert(sizeof(WBP_PinnedQuest_C_ExecuteUbergraph_WBP_PinnedQuest) == 0x000008, "Wrong size on WBP_PinnedQuest_C_ExecuteUbergraph_WBP_PinnedQuest");
static_assert(offsetof(WBP_PinnedQuest_C_ExecuteUbergraph_WBP_PinnedQuest, EntryPoint) == 0x000000, "Member 'WBP_PinnedQuest_C_ExecuteUbergraph_WBP_PinnedQuest::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_ExecuteUbergraph_WBP_PinnedQuest, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_PinnedQuest_C_ExecuteUbergraph_WBP_PinnedQuest::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_ExecuteUbergraph_WBP_PinnedQuest, CallFunc_IsConsole_ReturnValue) == 0x000005, "Member 'WBP_PinnedQuest_C_ExecuteUbergraph_WBP_PinnedQuest::CallFunc_IsConsole_ReturnValue' has a wrong offset!");

// Function WBP_PinnedQuest.WBP_PinnedQuest_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_PinnedQuest_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PinnedQuest_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_PinnedQuest_C_PreConstruct");
static_assert(sizeof(WBP_PinnedQuest_C_PreConstruct) == 0x000001, "Wrong size on WBP_PinnedQuest_C_PreConstruct");
static_assert(offsetof(WBP_PinnedQuest_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_PinnedQuest_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_PinnedQuest.WBP_PinnedQuest_C.SetFromQuestState
// 0x04B8 (0x04B8 - 0x0000)
struct WBP_PinnedQuest_C_SetFromQuestState final
{
public:
	struct FVAL_QuestState                        QuestState;                                        // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          HasReturnText;                                     // 0x0098(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E38[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E39[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UVAL_QuestDef*                    K2Node_DynamicCast_AsQuest_Definition;             // 0x00B0(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_BP_CreateEntry_ReturnValue;               // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E3A[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PinnedQuestGoal_C*                 K2Node_DynamicCast_AsWBP_Pinned_Quest_Goal;        // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E3B[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E3C[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_BP_CreateEntry_ReturnValue_1;             // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PinnedQuestGoal_C*                 K2Node_DynamicCast_AsWBP_Pinned_Quest_Goal_1;      // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x00FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x00FF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetQuestTitle_ReturnValue;                // 0x0100(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E3D[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_BP_CreateEntry_ReturnValue_2;             // 0x0120(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVAL_QuestStepDef                      CallFunc_GetCurrentQuestStepDefinition_QuestStepDef; // 0x0128(0x0108)(ContainsInstancedReference)
	bool                                          CallFunc_GetCurrentQuestStepDefinition_bFoundQuestStep; // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E3E[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PinnedQuestGoal_C*                 K2Node_DynamicCast_AsWBP_Pinned_Quest_Goal_2;      // 0x0238(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E3F[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetBranchingStatement_BranchingStatement; // 0x0248(0x0018)()
	bool                                          CallFunc_DoesQuestStepHaveVisibleBranchingGoals_ReturnValue; // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetReturnToText_WasSuccess;               // 0x0262(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E40[0x5];                                     // 0x0263(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetReturnToText_ReturnToText;             // 0x0268(0x0018)()
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetReturnToText_ReturnToIcon;             // 0x0280(0x0028)(HasGetValueTypeHash)
	struct FVAL_QuestStepState                    CallFunc_GetCurrentQuestStep_QuestStepState;       // 0x02A8(0x0070)()
	bool                                          CallFunc_GetCurrentQuestStep_bFoundQuestStep;      // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0319(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E41[0x6];                                     // 0x031A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVAL_QuestGoalState                    CallFunc_Array_Get_Item;                           // 0x0320(0x0068)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E42[0x4];                                     // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVAL_QuestGoalDef                      CallFunc_GetQuestGoalDefinition_ReturnValue;       // 0x0390(0x0050)(ConstParm, ContainsInstancedReference)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x03E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x03E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x03E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E43[0x4];                                     // 0x03E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVAL_QuestBranchingGoalState           CallFunc_Array_Get_Item_1;                         // 0x03E8(0x0070)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0458(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x045C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVAL_QuestGoalDef                      CallFunc_GetQuestGoalDefinition_ReturnValue_1;     // 0x0460(0x0050)(ConstParm, ContainsInstancedReference)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E44[0x3];                                     // 0x04B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x04B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PinnedQuest_C_SetFromQuestState) == 0x000008, "Wrong alignment on WBP_PinnedQuest_C_SetFromQuestState");
static_assert(sizeof(WBP_PinnedQuest_C_SetFromQuestState) == 0x0004B8, "Wrong size on WBP_PinnedQuest_C_SetFromQuestState");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, QuestState) == 0x000000, "Member 'WBP_PinnedQuest_C_SetFromQuestState::QuestState' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, HasReturnText) == 0x000098, "Member 'WBP_PinnedQuest_C_SetFromQuestState::HasReturnText' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x0000A0, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, Temp_int_Array_Index_Variable) == 0x0000A8, "Member 'WBP_PinnedQuest_C_SetFromQuestState::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, K2Node_DynamicCast_AsQuest_Definition) == 0x0000B0, "Member 'WBP_PinnedQuest_C_SetFromQuestState::K2Node_DynamicCast_AsQuest_Definition' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'WBP_PinnedQuest_C_SetFromQuestState::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_IsValid_ReturnValue) == 0x0000B9, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000BA, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_Not_PreBool_ReturnValue) == 0x0000BB, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, Temp_int_Array_Index_Variable_1) == 0x0000BC, "Member 'WBP_PinnedQuest_C_SetFromQuestState::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_BP_CreateEntry_ReturnValue) == 0x0000C0, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_BP_CreateEntry_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, Temp_int_Loop_Counter_Variable) == 0x0000C8, "Member 'WBP_PinnedQuest_C_SetFromQuestState::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, K2Node_DynamicCast_AsWBP_Pinned_Quest_Goal) == 0x0000D0, "Member 'WBP_PinnedQuest_C_SetFromQuestState::K2Node_DynamicCast_AsWBP_Pinned_Quest_Goal' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, K2Node_DynamicCast_bSuccess_1) == 0x0000D8, "Member 'WBP_PinnedQuest_C_SetFromQuestState::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_Add_IntInt_ReturnValue) == 0x0000DC, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, Temp_byte_Variable) == 0x0000E0, "Member 'WBP_PinnedQuest_C_SetFromQuestState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_BP_CreateEntry_ReturnValue_1) == 0x0000E8, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_BP_CreateEntry_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, K2Node_DynamicCast_AsWBP_Pinned_Quest_Goal_1) == 0x0000F0, "Member 'WBP_PinnedQuest_C_SetFromQuestState::K2Node_DynamicCast_AsWBP_Pinned_Quest_Goal_1' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, K2Node_DynamicCast_bSuccess_2) == 0x0000F8, "Member 'WBP_PinnedQuest_C_SetFromQuestState::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, Temp_byte_Variable_1) == 0x0000F9, "Member 'WBP_PinnedQuest_C_SetFromQuestState::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, Temp_bool_Variable) == 0x0000FA, "Member 'WBP_PinnedQuest_C_SetFromQuestState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, Temp_byte_Variable_2) == 0x0000FB, "Member 'WBP_PinnedQuest_C_SetFromQuestState::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, K2Node_Select_Default) == 0x0000FC, "Member 'WBP_PinnedQuest_C_SetFromQuestState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, Temp_byte_Variable_3) == 0x0000FD, "Member 'WBP_PinnedQuest_C_SetFromQuestState::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, Temp_bool_Variable_1) == 0x0000FE, "Member 'WBP_PinnedQuest_C_SetFromQuestState::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, Temp_byte_Variable_4) == 0x0000FF, "Member 'WBP_PinnedQuest_C_SetFromQuestState::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_GetQuestTitle_ReturnValue) == 0x000100, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_GetQuestTitle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, Temp_byte_Variable_5) == 0x000118, "Member 'WBP_PinnedQuest_C_SetFromQuestState::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, Temp_bool_Variable_2) == 0x000119, "Member 'WBP_PinnedQuest_C_SetFromQuestState::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_BP_CreateEntry_ReturnValue_2) == 0x000120, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_BP_CreateEntry_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_GetCurrentQuestStepDefinition_QuestStepDef) == 0x000128, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_GetCurrentQuestStepDefinition_QuestStepDef' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_GetCurrentQuestStepDefinition_bFoundQuestStep) == 0x000230, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_GetCurrentQuestStepDefinition_bFoundQuestStep' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, K2Node_DynamicCast_AsWBP_Pinned_Quest_Goal_2) == 0x000238, "Member 'WBP_PinnedQuest_C_SetFromQuestState::K2Node_DynamicCast_AsWBP_Pinned_Quest_Goal_2' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, K2Node_DynamicCast_bSuccess_3) == 0x000240, "Member 'WBP_PinnedQuest_C_SetFromQuestState::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_GetBranchingStatement_BranchingStatement) == 0x000248, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_GetBranchingStatement_BranchingStatement' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_DoesQuestStepHaveVisibleBranchingGoals_ReturnValue) == 0x000260, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_DoesQuestStepHaveVisibleBranchingGoals_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_BooleanAND_ReturnValue) == 0x000261, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_GetReturnToText_WasSuccess) == 0x000262, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_GetReturnToText_WasSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_GetReturnToText_ReturnToText) == 0x000268, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_GetReturnToText_ReturnToText' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_GetReturnToText_ReturnToIcon) == 0x000280, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_GetReturnToText_ReturnToIcon' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_GetCurrentQuestStep_QuestStepState) == 0x0002A8, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_GetCurrentQuestStep_QuestStepState' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_GetCurrentQuestStep_bFoundQuestStep) == 0x000318, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_GetCurrentQuestStep_bFoundQuestStep' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_BooleanAND_ReturnValue_1) == 0x000319, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_Array_Get_Item) == 0x000320, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_Array_Length_ReturnValue) == 0x000388, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_GetQuestGoalDefinition_ReturnValue) == 0x000390, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_GetQuestGoalDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_Less_IntInt_ReturnValue) == 0x0003E0, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_Array_IsEmpty_ReturnValue) == 0x0003E1, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, K2Node_Select_Default_1) == 0x0003E2, "Member 'WBP_PinnedQuest_C_SetFromQuestState::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, K2Node_Select_Default_2) == 0x0003E3, "Member 'WBP_PinnedQuest_C_SetFromQuestState::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_Array_Get_Item_1) == 0x0003E8, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_Array_Length_ReturnValue_1) == 0x000458, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, Temp_int_Loop_Counter_Variable_1) == 0x00045C, "Member 'WBP_PinnedQuest_C_SetFromQuestState::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_GetQuestGoalDefinition_ReturnValue_1) == 0x000460, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_GetQuestGoalDefinition_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_Less_IntInt_ReturnValue_1) == 0x0004B0, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PinnedQuest_C_SetFromQuestState, CallFunc_Add_IntInt_ReturnValue_1) == 0x0004B4, "Member 'WBP_PinnedQuest_C_SetFromQuestState::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

}

