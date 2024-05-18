#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MatchmakingQueue_CM

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "OnlineSubsystemValeria_structs.hpp"


namespace SDK::Params
{

// Function WBP_MatchmakingQueue_CM.WBP_MatchmakingQueue_CM_C.DisplayMatchmakingQueueNumber
// 0x0098 (0x0098 - 0x0000)
struct WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber final
{
public:
	int32                                         Number;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewMatchmakingNumber;                              // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5218[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0080(0x0018)()
};
static_assert(alignof(WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber) == 0x000008, "Wrong alignment on WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber");
static_assert(sizeof(WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber) == 0x000098, "Wrong size on WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber, Number) == 0x000000, "Member 'WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber::Number' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber, NewMatchmakingNumber) == 0x000004, "Member 'WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber::NewMatchmakingNumber' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber, Temp_byte_Variable) == 0x000009, "Member 'WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber, Temp_byte_Variable_1) == 0x00000A, "Member 'WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber, CallFunc_Less_IntInt_ReturnValue) == 0x00000B, "Member 'WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber, Temp_bool_Variable) == 0x00000C, "Member 'WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00000D, "Member 'WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber, CallFunc_BooleanAND_ReturnValue) == 0x00000E, "Member 'WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber, CallFunc_Greater_IntInt_ReturnValue_2) == 0x00000F, "Member 'WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000010, "Member 'WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber, K2Node_Select_Default) == 0x000018, "Member 'WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber, K2Node_MakeArray_Array) == 0x000070, "Member 'WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber, CallFunc_Format_ReturnValue) == 0x000080, "Member 'WBP_MatchmakingQueue_CM_C_DisplayMatchmakingQueueNumber::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_MatchmakingQueue_CM.WBP_MatchmakingQueue_CM_C.ExecuteUbergraph_WBP_MatchmakingQueue_CM
// 0x01B8 (0x01B8 - 0x0000)
struct WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5219[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOSSVAL_MatchmakingResult              K2Node_CustomEvent_Result;                         // 0x0008(0x00C0)(ConstParm)
	TDelegate<void(struct FOSSVAL_MatchmakingResult& Result)> K2Node_CreateDelegate_OutputDelegate;              // 0x00C8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FOSSVAL_MatchmakingResult              Temp_struct_Variable;                              // 0x00D8(0x00C0)()
	int32                                         K2Node_Event_Number;                               // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_521A[0x4];                                     // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULocalPlayer*                           CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAL_AsyncAction_MatchmakingDeleteRequest* CallFunc_DeleteMatchmakingRequest_ReturnValue;     // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM) == 0x000008, "Wrong alignment on WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM");
static_assert(sizeof(WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM) == 0x0001B8, "Wrong size on WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM, EntryPoint) == 0x000000, "Member 'WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM, K2Node_CustomEvent_Result) == 0x000008, "Member 'WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM, K2Node_CreateDelegate_OutputDelegate) == 0x0000C8, "Member 'WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM, Temp_struct_Variable) == 0x0000D8, "Member 'WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM, K2Node_Event_Number) == 0x000198, "Member 'WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM::K2Node_Event_Number' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM, CallFunc_GetOwningLocalPlayer_ReturnValue) == 0x0001A0, "Member 'WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM::CallFunc_GetOwningLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM, CallFunc_DeleteMatchmakingRequest_ReturnValue) == 0x0001A8, "Member 'WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM::CallFunc_DeleteMatchmakingRequest_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM, CallFunc_IsValid_ReturnValue) == 0x0001B0, "Member 'WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM, K2Node_Event_IsDesignTime) == 0x0001B1, "Member 'WBP_MatchmakingQueue_CM_C_ExecuteUbergraph_WBP_MatchmakingQueue_CM::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WBP_MatchmakingQueue_CM.WBP_MatchmakingQueue_CM_C.OnResultObtained_48D6A75C430B95A3FDB3FFB1703F163C
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_MatchmakingQueue_CM_C_OnResultObtained_48D6A75C430B95A3FDB3FFB1703F163C final
{
public:
	struct FOSSVAL_MatchmakingResult              Result;                                            // 0x0000(0x00C0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_MatchmakingQueue_CM_C_OnResultObtained_48D6A75C430B95A3FDB3FFB1703F163C) == 0x000008, "Wrong alignment on WBP_MatchmakingQueue_CM_C_OnResultObtained_48D6A75C430B95A3FDB3FFB1703F163C");
static_assert(sizeof(WBP_MatchmakingQueue_CM_C_OnResultObtained_48D6A75C430B95A3FDB3FFB1703F163C) == 0x0000C0, "Wrong size on WBP_MatchmakingQueue_CM_C_OnResultObtained_48D6A75C430B95A3FDB3FFB1703F163C");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_OnResultObtained_48D6A75C430B95A3FDB3FFB1703F163C, Result) == 0x000000, "Member 'WBP_MatchmakingQueue_CM_C_OnResultObtained_48D6A75C430B95A3FDB3FFB1703F163C::Result' has a wrong offset!");

// Function WBP_MatchmakingQueue_CM.WBP_MatchmakingQueue_CM_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_MatchmakingQueue_CM_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MatchmakingQueue_CM_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_MatchmakingQueue_CM_C_PreConstruct");
static_assert(sizeof(WBP_MatchmakingQueue_CM_C_PreConstruct) == 0x000001, "Wrong size on WBP_MatchmakingQueue_CM_C_PreConstruct");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_MatchmakingQueue_CM_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_MatchmakingQueue_CM.WBP_MatchmakingQueue_CM_C.UpdateNumber
// 0x0004 (0x0004 - 0x0000)
struct WBP_MatchmakingQueue_CM_C_UpdateNumber final
{
public:
	int32                                         Number;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MatchmakingQueue_CM_C_UpdateNumber) == 0x000004, "Wrong alignment on WBP_MatchmakingQueue_CM_C_UpdateNumber");
static_assert(sizeof(WBP_MatchmakingQueue_CM_C_UpdateNumber) == 0x000004, "Wrong size on WBP_MatchmakingQueue_CM_C_UpdateNumber");
static_assert(offsetof(WBP_MatchmakingQueue_CM_C_UpdateNumber, Number) == 0x000000, "Member 'WBP_MatchmakingQueue_CM_C_UpdateNumber::Number' has a wrong offset!");

}

