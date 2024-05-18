#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Comp_CV_Overlaps

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Comp_CV_Overlaps.Comp_CV_Overlaps_C.BeginOverlap
// 0x0010 (0x0010 - 0x0000)
struct Comp_CV_Overlaps_C_BeginOverlap final
{
public:
	class AActor*                                 OverlappedActor;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Comp_CV_Overlaps_C_BeginOverlap) == 0x000008, "Wrong alignment on Comp_CV_Overlaps_C_BeginOverlap");
static_assert(sizeof(Comp_CV_Overlaps_C_BeginOverlap) == 0x000010, "Wrong size on Comp_CV_Overlaps_C_BeginOverlap");
static_assert(offsetof(Comp_CV_Overlaps_C_BeginOverlap, OverlappedActor) == 0x000000, "Member 'Comp_CV_Overlaps_C_BeginOverlap::OverlappedActor' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_BeginOverlap, OtherActor) == 0x000008, "Member 'Comp_CV_Overlaps_C_BeginOverlap::OtherActor' has a wrong offset!");

// Function Comp_CV_Overlaps.Comp_CV_Overlaps_C.EndOverlap
// 0x0010 (0x0010 - 0x0000)
struct Comp_CV_Overlaps_C_EndOverlap final
{
public:
	class AActor*                                 OverlappedActor;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Comp_CV_Overlaps_C_EndOverlap) == 0x000008, "Wrong alignment on Comp_CV_Overlaps_C_EndOverlap");
static_assert(sizeof(Comp_CV_Overlaps_C_EndOverlap) == 0x000010, "Wrong size on Comp_CV_Overlaps_C_EndOverlap");
static_assert(offsetof(Comp_CV_Overlaps_C_EndOverlap, OverlappedActor) == 0x000000, "Member 'Comp_CV_Overlaps_C_EndOverlap::OverlappedActor' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_EndOverlap, OtherActor) == 0x000008, "Member 'Comp_CV_Overlaps_C_EndOverlap::OtherActor' has a wrong offset!");

// Function Comp_CV_Overlaps.Comp_CV_Overlaps_C.ExecuteUbergraph_Comp_CV_Overlaps
// 0x00A0 (0x00A0 - 0x0000)
struct Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CCC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AEnv_CompVolume*                        K2Node_DynamicCast_AsEnv_Comp_Volume;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CCD[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* OverlappedActor, class AActor* OtherActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CCE[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AEnv_CompVolume*                        K2Node_DynamicCast_AsEnv_Comp_Volume_1;            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CCF[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* OverlappedActor, class AActor* OtherActor)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OverlappedActor_1;              // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherActor_1;                   // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OverlappedActor;                // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherActor;                     // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CD0[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0078(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps) == 0x000008, "Wrong alignment on Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps");
static_assert(sizeof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps) == 0x0000A0, "Wrong size on Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps");
static_assert(offsetof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps, EntryPoint) == 0x000000, "Member 'Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps::EntryPoint' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps, K2Node_DynamicCast_AsEnv_Comp_Volume) == 0x000008, "Member 'Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps::K2Node_DynamicCast_AsEnv_Comp_Volume' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps, K2Node_DynamicCast_AsEnv_Comp_Volume_1) == 0x000028, "Member 'Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps::K2Node_DynamicCast_AsEnv_Comp_Volume_1' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps, Temp_int_Array_Index_Variable) == 0x000034, "Member 'Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps, K2Node_CreateDelegate_OutputDelegate_1) == 0x000038, "Member 'Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps, CallFunc_GetOwner_ReturnValue) == 0x000048, "Member 'Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps, K2Node_CustomEvent_OverlappedActor_1) == 0x000050, "Member 'Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps::K2Node_CustomEvent_OverlappedActor_1' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps, K2Node_CustomEvent_OtherActor_1) == 0x000058, "Member 'Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps::K2Node_CustomEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps, K2Node_CustomEvent_OverlappedActor) == 0x000060, "Member 'Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps::K2Node_CustomEvent_OverlappedActor' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps, K2Node_CustomEvent_OtherActor) == 0x000068, "Member 'Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps::K2Node_CustomEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps, K2Node_Event_EndPlayReason) == 0x000070, "Member 'Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps, Temp_int_Loop_Counter_Variable) == 0x000074, "Member 'Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000078, "Member 'Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps, CallFunc_Array_Get_Item) == 0x000088, "Member 'Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps, CallFunc_Add_IntInt_ReturnValue) == 0x000094, "Member 'Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps, CallFunc_Less_IntInt_ReturnValue) == 0x000098, "Member 'Comp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function Comp_CV_Overlaps.Comp_CV_Overlaps_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct Comp_CV_Overlaps_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Comp_CV_Overlaps_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on Comp_CV_Overlaps_C_ReceiveEndPlay");
static_assert(sizeof(Comp_CV_Overlaps_C_ReceiveEndPlay) == 0x000001, "Wrong size on Comp_CV_Overlaps_C_ReceiveEndPlay");
static_assert(offsetof(Comp_CV_Overlaps_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'Comp_CV_Overlaps_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}
