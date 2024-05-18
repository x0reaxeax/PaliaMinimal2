#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FoliageOnPlot_Mining

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_FoliageOnPlot_Mining.BP_FoliageOnPlot_Mining_C.ExecuteUbergraph_BP_FoliageOnPlot_Mining
// 0x0050 (0x0050 - 0x0000)
struct BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6113[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaPlayerController*               K2Node_DynamicCast_AsValeria_Player_Controller;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6114[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacter_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAtHome_ReturnValue;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6115[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6116[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesCharacterSatisfyQuestActivityPrereq_ReturnValue; // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActive_ReturnValue;                     // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActive_ReturnValue_1;                   // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining) == 0x000008, "Wrong alignment on BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining");
static_assert(sizeof(BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining) == 0x000050, "Wrong size on BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining");
static_assert(offsetof(BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining, EntryPoint) == 0x000000, "Member 'BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining, K2Node_DynamicCast_AsValeria_Player_Controller) == 0x000010, "Member 'BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining::K2Node_DynamicCast_AsValeria_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining, CallFunc_Greater_IntInt_ReturnValue) == 0x000019, "Member 'BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining, CallFunc_GetValeriaCharacter_ReturnValue) == 0x000020, "Member 'BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining::CallFunc_GetValeriaCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining, CallFunc_IsAtHome_ReturnValue) == 0x000028, "Member 'BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining::CallFunc_IsAtHome_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining, K2Node_Event_EndPlayReason) == 0x000029, "Member 'BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000040, "Member 'BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining, CallFunc_DoesCharacterSatisfyQuestActivityPrereq_ReturnValue) == 0x000048, "Member 'BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining::CallFunc_DoesCharacterSatisfyQuestActivityPrereq_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining, CallFunc_IsActive_ReturnValue) == 0x000049, "Member 'BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining::CallFunc_IsActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining, CallFunc_IsActive_ReturnValue_1) == 0x00004A, "Member 'BP_FoliageOnPlot_Mining_C_ExecuteUbergraph_BP_FoliageOnPlot_Mining::CallFunc_IsActive_ReturnValue_1' has a wrong offset!");

// Function BP_FoliageOnPlot_Mining.BP_FoliageOnPlot_Mining_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_FoliageOnPlot_Mining_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FoliageOnPlot_Mining_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_FoliageOnPlot_Mining_C_ReceiveEndPlay");
static_assert(sizeof(BP_FoliageOnPlot_Mining_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_FoliageOnPlot_Mining_C_ReceiveEndPlay");
static_assert(offsetof(BP_FoliageOnPlot_Mining_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_FoliageOnPlot_Mining_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}
