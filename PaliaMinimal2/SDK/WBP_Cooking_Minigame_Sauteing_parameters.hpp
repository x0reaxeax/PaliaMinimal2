#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Cooking_Minigame_Sauteing

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_Cooking_Minigame_Sauteing.WBP_Cooking_Minigame_Sauteing_C.ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing
// 0x0088 (0x0088 - 0x0000)
struct WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPaused_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsButtonHeld_ReturnValue;                 // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_520F[0x1];                                     // 0x0047(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTargetPosition_ReturnValue;            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5210[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_NormalizeDegrees_ReturnValue;             // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsButtonHeld_ReturnValue_1;               // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5211[0x2];                                     // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_NormalizeDegrees_degrees_ImplicitCast;    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing) == 0x000008, "Wrong alignment on WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing");
static_assert(sizeof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing) == 0x000088, "Wrong size on WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing, EntryPoint) == 0x000000, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing, K2Node_Event_MyGeometry) == 0x000004, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing, CallFunc_IsPaused_ReturnValue) == 0x000040, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing::CallFunc_IsPaused_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing, CallFunc_Not_PreBool_ReturnValue) == 0x000041, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing, CallFunc_IsValid_ReturnValue) == 0x000042, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing, CallFunc_IsPlaying_ReturnValue) == 0x000043, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing, CallFunc_BooleanAND_ReturnValue) == 0x000044, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing, Temp_bool_Variable) == 0x000045, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing, CallFunc_IsButtonHeld_ReturnValue) == 0x000046, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing::CallFunc_IsButtonHeld_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing, K2Node_Select_Default) == 0x000048, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing, CallFunc_GetTargetPosition_ReturnValue) == 0x000050, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing::CallFunc_GetTargetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000058, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing, CallFunc_NormalizeDegrees_ReturnValue) == 0x000060, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing::CallFunc_NormalizeDegrees_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing, CallFunc_IsButtonHeld_ReturnValue_1) == 0x000064, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing::CallFunc_IsButtonHeld_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000065, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing, CallFunc_PlayAnimationForward_ReturnValue) == 0x000068, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000070, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000078, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing, CallFunc_NormalizeDegrees_degrees_ImplicitCast) == 0x000080, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExecuteUbergraph_WBP_Cooking_Minigame_Sauteing::CallFunc_NormalizeDegrees_degrees_ImplicitCast' has a wrong offset!");

// Function WBP_Cooking_Minigame_Sauteing.WBP_Cooking_Minigame_Sauteing_C.ExpectedInputMissed
// 0x0008 (0x0008 - 0x0000)
struct WBP_Cooking_Minigame_Sauteing_C_ExpectedInputMissed final
{
public:
	class UMinigameComponentMasterQTE*            Comp;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Cooking_Minigame_Sauteing_C_ExpectedInputMissed) == 0x000008, "Wrong alignment on WBP_Cooking_Minigame_Sauteing_C_ExpectedInputMissed");
static_assert(sizeof(WBP_Cooking_Minigame_Sauteing_C_ExpectedInputMissed) == 0x000008, "Wrong size on WBP_Cooking_Minigame_Sauteing_C_ExpectedInputMissed");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_ExpectedInputMissed, Comp) == 0x000000, "Member 'WBP_Cooking_Minigame_Sauteing_C_ExpectedInputMissed::Comp' has a wrong offset!");

// Function WBP_Cooking_Minigame_Sauteing.WBP_Cooking_Minigame_Sauteing_C.MinigameOnStateChanged
// 0x0020 (0x0020 - 0x0000)
struct WBP_Cooking_Minigame_Sauteing_C_MinigameOnStateChanged final
{
public:
	class UMinigameComponentBase*                 Comp;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EMinigameState                                PrevState;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMinigameState                                NewState;                                          // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5212[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5213[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AkEventGlobal_ReturnValue_1;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Cooking_Minigame_Sauteing_C_MinigameOnStateChanged) == 0x000008, "Wrong alignment on WBP_Cooking_Minigame_Sauteing_C_MinigameOnStateChanged");
static_assert(sizeof(WBP_Cooking_Minigame_Sauteing_C_MinigameOnStateChanged) == 0x000020, "Wrong size on WBP_Cooking_Minigame_Sauteing_C_MinigameOnStateChanged");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_MinigameOnStateChanged, Comp) == 0x000000, "Member 'WBP_Cooking_Minigame_Sauteing_C_MinigameOnStateChanged::Comp' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_MinigameOnStateChanged, PrevState) == 0x000008, "Member 'WBP_Cooking_Minigame_Sauteing_C_MinigameOnStateChanged::PrevState' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_MinigameOnStateChanged, NewState) == 0x000009, "Member 'WBP_Cooking_Minigame_Sauteing_C_MinigameOnStateChanged::NewState' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_MinigameOnStateChanged, CallFunc_AkEventGlobal_ReturnValue) == 0x00000C, "Member 'WBP_Cooking_Minigame_Sauteing_C_MinigameOnStateChanged::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_MinigameOnStateChanged, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'WBP_Cooking_Minigame_Sauteing_C_MinigameOnStateChanged::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_MinigameOnStateChanged, CallFunc_AkEventGlobal_ReturnValue_1) == 0x000014, "Member 'WBP_Cooking_Minigame_Sauteing_C_MinigameOnStateChanged::CallFunc_AkEventGlobal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_MinigameOnStateChanged, CallFunc_PlayAnimationForward_ReturnValue) == 0x000018, "Member 'WBP_Cooking_Minigame_Sauteing_C_MinigameOnStateChanged::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function WBP_Cooking_Minigame_Sauteing.WBP_Cooking_Minigame_Sauteing_C.MistimedInputReceived
// 0x0018 (0x0018 - 0x0000)
struct WBP_Cooking_Minigame_Sauteing_C_MistimedInputReceived final
{
public:
	class UMinigameComponentMasterQTE*            Comp;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5214[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Cooking_Minigame_Sauteing_C_MistimedInputReceived) == 0x000008, "Wrong alignment on WBP_Cooking_Minigame_Sauteing_C_MistimedInputReceived");
static_assert(sizeof(WBP_Cooking_Minigame_Sauteing_C_MistimedInputReceived) == 0x000018, "Wrong size on WBP_Cooking_Minigame_Sauteing_C_MistimedInputReceived");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_MistimedInputReceived, Comp) == 0x000000, "Member 'WBP_Cooking_Minigame_Sauteing_C_MistimedInputReceived::Comp' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_MistimedInputReceived, CallFunc_AkEventGlobal_ReturnValue) == 0x000008, "Member 'WBP_Cooking_Minigame_Sauteing_C_MistimedInputReceived::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_MistimedInputReceived, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'WBP_Cooking_Minigame_Sauteing_C_MistimedInputReceived::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function WBP_Cooking_Minigame_Sauteing.WBP_Cooking_Minigame_Sauteing_C.SetCursorPosition
// 0x0058 (0x0058 - 0x0000)
struct WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition final
{
public:
	float                                         CallFunc_GetTargetPosition_ReturnValue;            // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCursorPosition_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Abs_ReturnValue;                          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCursorPosition_ReturnValue_1;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5215[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_NormalizeDegrees_ReturnValue;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5216[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRTPCValue_Value_ImplicitCast;          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_NormalizeDegrees_degrees_ImplicitCast;    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition) == 0x000008, "Wrong alignment on WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition");
static_assert(sizeof(WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition) == 0x000058, "Wrong size on WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition, CallFunc_GetTargetPosition_ReturnValue) == 0x000000, "Member 'WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition::CallFunc_GetTargetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition, CallFunc_GetCursorPosition_ReturnValue) == 0x000004, "Member 'WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition::CallFunc_GetCursorPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000008, "Member 'WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition, CallFunc_Abs_ReturnValue) == 0x000010, "Member 'WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition, CallFunc_GetCursorPosition_ReturnValue_1) == 0x000018, "Member 'WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition::CallFunc_GetCursorPosition_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition, CallFunc_MapRangeClamped_ReturnValue) == 0x000020, "Member 'WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000028, "Member 'WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition, CallFunc_NormalizeDegrees_ReturnValue) == 0x000030, "Member 'WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition::CallFunc_NormalizeDegrees_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000038, "Member 'WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000040, "Member 'WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000048, "Member 'WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition, CallFunc_SetRTPCValue_Value_ImplicitCast) == 0x000050, "Member 'WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition::CallFunc_SetRTPCValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition, CallFunc_NormalizeDegrees_degrees_ImplicitCast) == 0x000054, "Member 'WBP_Cooking_Minigame_Sauteing_C_SetCursorPosition::CallFunc_NormalizeDegrees_degrees_ImplicitCast' has a wrong offset!");

// Function WBP_Cooking_Minigame_Sauteing.WBP_Cooking_Minigame_Sauteing_C.SuccessfulInputReceived
// 0x0018 (0x0018 - 0x0000)
struct WBP_Cooking_Minigame_Sauteing_C_SuccessfulInputReceived final
{
public:
	class UMinigameComponentMasterQTE*            Comp;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Cooking_Minigame_Sauteing_C_SuccessfulInputReceived) == 0x000008, "Wrong alignment on WBP_Cooking_Minigame_Sauteing_C_SuccessfulInputReceived");
static_assert(sizeof(WBP_Cooking_Minigame_Sauteing_C_SuccessfulInputReceived) == 0x000018, "Wrong size on WBP_Cooking_Minigame_Sauteing_C_SuccessfulInputReceived");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_SuccessfulInputReceived, Comp) == 0x000000, "Member 'WBP_Cooking_Minigame_Sauteing_C_SuccessfulInputReceived::Comp' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_SuccessfulInputReceived, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'WBP_Cooking_Minigame_Sauteing_C_SuccessfulInputReceived::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_SuccessfulInputReceived, CallFunc_AkEventGlobal_ReturnValue) == 0x000010, "Member 'WBP_Cooking_Minigame_Sauteing_C_SuccessfulInputReceived::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");

// Function WBP_Cooking_Minigame_Sauteing.WBP_Cooking_Minigame_Sauteing_C.Tick
// 0x003C (0x003C - 0x0000)
struct WBP_Cooking_Minigame_Sauteing_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Cooking_Minigame_Sauteing_C_Tick) == 0x000004, "Wrong alignment on WBP_Cooking_Minigame_Sauteing_C_Tick");
static_assert(sizeof(WBP_Cooking_Minigame_Sauteing_C_Tick) == 0x00003C, "Wrong size on WBP_Cooking_Minigame_Sauteing_C_Tick");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_Cooking_Minigame_Sauteing_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigame_Sauteing_C_Tick, InDeltaTime) == 0x000038, "Member 'WBP_Cooking_Minigame_Sauteing_C_Tick::InDeltaTime' has a wrong offset!");

}

