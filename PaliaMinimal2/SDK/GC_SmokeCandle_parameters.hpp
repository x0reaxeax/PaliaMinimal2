#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_SmokeCandle

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GC_SmokeCandle.GC_SmokeCandle_C.ExecuteUbergraph_GC_SmokeCandle
// 0x0008 (0x0008 - 0x0000)
struct GC_SmokeCandle_C_ExecuteUbergraph_GC_SmokeCandle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_SmokeCandle_C_ExecuteUbergraph_GC_SmokeCandle) == 0x000004, "Wrong alignment on GC_SmokeCandle_C_ExecuteUbergraph_GC_SmokeCandle");
static_assert(sizeof(GC_SmokeCandle_C_ExecuteUbergraph_GC_SmokeCandle) == 0x000008, "Wrong size on GC_SmokeCandle_C_ExecuteUbergraph_GC_SmokeCandle");
static_assert(offsetof(GC_SmokeCandle_C_ExecuteUbergraph_GC_SmokeCandle, EntryPoint) == 0x000000, "Member 'GC_SmokeCandle_C_ExecuteUbergraph_GC_SmokeCandle::EntryPoint' has a wrong offset!");
static_assert(offsetof(GC_SmokeCandle_C_ExecuteUbergraph_GC_SmokeCandle, K2Node_Event_EndPlayReason) == 0x000004, "Member 'GC_SmokeCandle_C_ExecuteUbergraph_GC_SmokeCandle::K2Node_Event_EndPlayReason' has a wrong offset!");

// Function GC_SmokeCandle.GC_SmokeCandle_C.OnActive
// 0x00F8 (0x00F8 - 0x0000)
struct GC_SmokeCandle_C_OnActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00E0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6080[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ValeriaCharacter_C*                 K2Node_DynamicCast_AsBP_Valeria_Character;         // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6081[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AkEventActor_ReturnValue;                 // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_SmokeCandle_C_OnActive) == 0x000008, "Wrong alignment on GC_SmokeCandle_C_OnActive");
static_assert(sizeof(GC_SmokeCandle_C_OnActive) == 0x0000F8, "Wrong size on GC_SmokeCandle_C_OnActive");
static_assert(offsetof(GC_SmokeCandle_C_OnActive, MyTarget) == 0x000000, "Member 'GC_SmokeCandle_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_SmokeCandle_C_OnActive, Parameters) == 0x000008, "Member 'GC_SmokeCandle_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(GC_SmokeCandle_C_OnActive, ReturnValue) == 0x0000E0, "Member 'GC_SmokeCandle_C_OnActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_SmokeCandle_C_OnActive, K2Node_DynamicCast_AsBP_Valeria_Character) == 0x0000E8, "Member 'GC_SmokeCandle_C_OnActive::K2Node_DynamicCast_AsBP_Valeria_Character' has a wrong offset!");
static_assert(offsetof(GC_SmokeCandle_C_OnActive, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'GC_SmokeCandle_C_OnActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GC_SmokeCandle_C_OnActive, CallFunc_AkEventActor_ReturnValue) == 0x0000F4, "Member 'GC_SmokeCandle_C_OnActive::CallFunc_AkEventActor_ReturnValue' has a wrong offset!");

// Function GC_SmokeCandle.GC_SmokeCandle_C.OnRemove
// 0x00E8 (0x00E8 - 0x0000)
struct GC_SmokeCandle_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00E0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6082[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AkEventActor_ReturnValue;                 // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_SmokeCandle_C_OnRemove) == 0x000008, "Wrong alignment on GC_SmokeCandle_C_OnRemove");
static_assert(sizeof(GC_SmokeCandle_C_OnRemove) == 0x0000E8, "Wrong size on GC_SmokeCandle_C_OnRemove");
static_assert(offsetof(GC_SmokeCandle_C_OnRemove, MyTarget) == 0x000000, "Member 'GC_SmokeCandle_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_SmokeCandle_C_OnRemove, Parameters) == 0x000008, "Member 'GC_SmokeCandle_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GC_SmokeCandle_C_OnRemove, ReturnValue) == 0x0000E0, "Member 'GC_SmokeCandle_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_SmokeCandle_C_OnRemove, CallFunc_AkEventActor_ReturnValue) == 0x0000E4, "Member 'GC_SmokeCandle_C_OnRemove::CallFunc_AkEventActor_ReturnValue' has a wrong offset!");

// Function GC_SmokeCandle.GC_SmokeCandle_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct GC_SmokeCandle_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_SmokeCandle_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on GC_SmokeCandle_C_ReceiveEndPlay");
static_assert(sizeof(GC_SmokeCandle_C_ReceiveEndPlay) == 0x000001, "Wrong size on GC_SmokeCandle_C_ReceiveEndPlay");
static_assert(offsetof(GC_SmokeCandle_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'GC_SmokeCandle_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}

