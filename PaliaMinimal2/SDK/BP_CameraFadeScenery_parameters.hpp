#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CameraFadeScenery

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_CameraFadeScenery.BP_CameraFadeScenery_C.ExecuteUbergraph_BP_CameraFadeScenery
// 0x0038 (0x0038 - 0x0000)
struct BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_actor;                          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAllChildActors_ChildActors;            // 0x0010(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4727[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery) == 0x000008, "Wrong alignment on BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery");
static_assert(sizeof(BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery) == 0x000038, "Wrong size on BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery");
static_assert(offsetof(BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery, EntryPoint) == 0x000000, "Member 'BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery, K2Node_CustomEvent_actor) == 0x000008, "Member 'BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery::K2Node_CustomEvent_actor' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery, CallFunc_GetAllChildActors_ChildActors) == 0x000010, "Member 'BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery::CallFunc_GetAllChildActors_ChildActors' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'BP_CameraFadeScenery_C_ExecuteUbergraph_BP_CameraFadeScenery::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_CameraFadeScenery.BP_CameraFadeScenery_C.FilterPrimitive
// 0x0110 (0x0110 - 0x0000)
struct BP_CameraFadeScenery_C_FilterPrimitive final
{
public:
	class UPrimitiveComponent*                    Primitive;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         FilterList;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          FilterPawns;                                       // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Matches;                                           // 0x0019(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4728[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         ListToCheck;                                       // 0x0020(0x0010)(Edit, BlueprintVisible)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4729[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_472A[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_DynamicCast_AsPawn;                         // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ComponentHasTag_ReturnValue;              // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_472B[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPathName_ReturnValue;                  // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item_1;                         // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item_2;                         // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_472C[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCleanFilename_ReturnValue;             // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_472D[0x2];                                     // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_472E[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPathName_ReturnValue_1;                // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   K2Node_DynamicCast_AsStatic_Mesh_Component;        // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_472F[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4730[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue_1;            // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CameraFadeScenery_C_FilterPrimitive) == 0x000008, "Wrong alignment on BP_CameraFadeScenery_C_FilterPrimitive");
static_assert(sizeof(BP_CameraFadeScenery_C_FilterPrimitive) == 0x000110, "Wrong size on BP_CameraFadeScenery_C_FilterPrimitive");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, Primitive) == 0x000000, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::Primitive' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, FilterList) == 0x000008, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::FilterList' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, FilterPawns) == 0x000018, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::FilterPawns' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, Matches) == 0x000019, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::Matches' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, ListToCheck) == 0x000020, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::ListToCheck' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, Temp_int_Array_Index_Variable) == 0x00003C, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, Temp_int_Array_Index_Variable_1) == 0x000040, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_Array_Get_Item) == 0x000048, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_Conv_StringToName_ReturnValue) == 0x000058, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, Temp_int_Array_Index_Variable_2) == 0x000060, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_GetOwner_ReturnValue) == 0x000068, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, K2Node_DynamicCast_AsPawn) == 0x000070, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::K2Node_DynamicCast_AsPawn' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_ComponentHasTag_ReturnValue) == 0x000079, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_ComponentHasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_GetPathName_ReturnValue) == 0x000080, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_GetPathName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_Array_Get_Item_1) == 0x000090, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_Array_Get_Item_2) == 0x0000A0, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_Array_Length_ReturnValue_1) == 0x0000B0, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_GetCleanFilename_ReturnValue) == 0x0000B8, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_GetCleanFilename_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_Less_IntInt_ReturnValue) == 0x0000C8, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_Contains_ReturnValue) == 0x0000C9, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_Array_Length_ReturnValue_2) == 0x0000CC, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, Temp_int_Loop_Counter_Variable_1) == 0x0000D0, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000D4, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000D8, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, Temp_int_Loop_Counter_Variable_2) == 0x0000DC, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_GetPathName_ReturnValue_1) == 0x0000E0, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_GetPathName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, K2Node_DynamicCast_AsStatic_Mesh_Component) == 0x0000F0, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::K2Node_DynamicCast_AsStatic_Mesh_Component' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, K2Node_DynamicCast_bSuccess_1) == 0x0000F8, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_Array_AddUnique_ReturnValue) == 0x0000FC, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_Less_IntInt_ReturnValue_2) == 0x000100, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_Add_IntInt_ReturnValue_2) == 0x000104, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_FilterPrimitive, CallFunc_Array_AddUnique_ReturnValue_1) == 0x000108, "Member 'BP_CameraFadeScenery_C_FilterPrimitive::CallFunc_Array_AddUnique_ReturnValue_1' has a wrong offset!");

// Function BP_CameraFadeScenery.BP_CameraFadeScenery_C.OnActorSpawned
// 0x0008 (0x0008 - 0x0000)
struct BP_CameraFadeScenery_C_OnActorSpawned final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CameraFadeScenery_C_OnActorSpawned) == 0x000008, "Wrong alignment on BP_CameraFadeScenery_C_OnActorSpawned");
static_assert(sizeof(BP_CameraFadeScenery_C_OnActorSpawned) == 0x000008, "Wrong size on BP_CameraFadeScenery_C_OnActorSpawned");
static_assert(offsetof(BP_CameraFadeScenery_C_OnActorSpawned, Actor) == 0x000000, "Member 'BP_CameraFadeScenery_C_OnActorSpawned::Actor' has a wrong offset!");

// Function BP_CameraFadeScenery.BP_CameraFadeScenery_C.SetActorPrimitiveFadeOut
// 0x0038 (0x0038 - 0x0000)
struct BP_CameraFadeScenery_C_SetActorPrimitiveFadeOut final
{
public:
	class UPrimitiveComponent*                    Primitive;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Set;                                               // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4731[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaterialIndex;                                     // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SetFilter;                                         // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4732[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         TransparencyFilterStrings;                         // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ReferenceParm)
};
static_assert(alignof(BP_CameraFadeScenery_C_SetActorPrimitiveFadeOut) == 0x000008, "Wrong alignment on BP_CameraFadeScenery_C_SetActorPrimitiveFadeOut");
static_assert(sizeof(BP_CameraFadeScenery_C_SetActorPrimitiveFadeOut) == 0x000038, "Wrong size on BP_CameraFadeScenery_C_SetActorPrimitiveFadeOut");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorPrimitiveFadeOut, Primitive) == 0x000000, "Member 'BP_CameraFadeScenery_C_SetActorPrimitiveFadeOut::Primitive' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorPrimitiveFadeOut, Set) == 0x000008, "Member 'BP_CameraFadeScenery_C_SetActorPrimitiveFadeOut::Set' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorPrimitiveFadeOut, MaterialIndex) == 0x00000C, "Member 'BP_CameraFadeScenery_C_SetActorPrimitiveFadeOut::MaterialIndex' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorPrimitiveFadeOut, SetFilter) == 0x000010, "Member 'BP_CameraFadeScenery_C_SetActorPrimitiveFadeOut::SetFilter' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorPrimitiveFadeOut, TransparencyFilterStrings) == 0x000018, "Member 'BP_CameraFadeScenery_C_SetActorPrimitiveFadeOut::TransparencyFilterStrings' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorPrimitiveFadeOut, K2Node_MakeArray_Array) == 0x000028, "Member 'BP_CameraFadeScenery_C_SetActorPrimitiveFadeOut::K2Node_MakeArray_Array' has a wrong offset!");

// Function BP_CameraFadeScenery.BP_CameraFadeScenery_C.SetActorSeeThrough
// 0x0070 (0x0070 - 0x0000)
struct BP_CameraFadeScenery_C_SetActorSeeThrough final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          PrimitiveFiltered;                                 // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CheckFilter;                                       // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4733[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         FilterInStrings;                                   // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4734[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0040(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPrimitiveComponent*>            CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UPrimitiveComponent*                    CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetActorPrimitiveFadeOut_Set;             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4735[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FilterPrimitive_matches;                  // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CameraFadeScenery_C_SetActorSeeThrough) == 0x000008, "Wrong alignment on BP_CameraFadeScenery_C_SetActorSeeThrough");
static_assert(sizeof(BP_CameraFadeScenery_C_SetActorSeeThrough) == 0x000070, "Wrong size on BP_CameraFadeScenery_C_SetActorSeeThrough");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorSeeThrough, Actor) == 0x000000, "Member 'BP_CameraFadeScenery_C_SetActorSeeThrough::Actor' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorSeeThrough, PrimitiveFiltered) == 0x000008, "Member 'BP_CameraFadeScenery_C_SetActorSeeThrough::PrimitiveFiltered' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorSeeThrough, CheckFilter) == 0x000009, "Member 'BP_CameraFadeScenery_C_SetActorSeeThrough::CheckFilter' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorSeeThrough, FilterInStrings) == 0x000010, "Member 'BP_CameraFadeScenery_C_SetActorSeeThrough::FilterInStrings' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorSeeThrough, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BP_CameraFadeScenery_C_SetActorSeeThrough::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorSeeThrough, K2Node_MakeArray_Array) == 0x000028, "Member 'BP_CameraFadeScenery_C_SetActorSeeThrough::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorSeeThrough, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'BP_CameraFadeScenery_C_SetActorSeeThrough::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorSeeThrough, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'BP_CameraFadeScenery_C_SetActorSeeThrough::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorSeeThrough, Temp_name_Variable) == 0x000040, "Member 'BP_CameraFadeScenery_C_SetActorSeeThrough::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorSeeThrough, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000048, "Member 'BP_CameraFadeScenery_C_SetActorSeeThrough::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorSeeThrough, CallFunc_Array_Get_Item) == 0x000058, "Member 'BP_CameraFadeScenery_C_SetActorSeeThrough::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorSeeThrough, CallFunc_Array_AddUnique_ReturnValue) == 0x000060, "Member 'BP_CameraFadeScenery_C_SetActorSeeThrough::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorSeeThrough, CallFunc_SetActorPrimitiveFadeOut_Set) == 0x000064, "Member 'BP_CameraFadeScenery_C_SetActorSeeThrough::CallFunc_SetActorPrimitiveFadeOut_Set' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorSeeThrough, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'BP_CameraFadeScenery_C_SetActorSeeThrough::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorSeeThrough, CallFunc_BooleanOR_ReturnValue) == 0x00006C, "Member 'BP_CameraFadeScenery_C_SetActorSeeThrough::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorSeeThrough, CallFunc_Less_IntInt_ReturnValue) == 0x00006D, "Member 'BP_CameraFadeScenery_C_SetActorSeeThrough::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraFadeScenery_C_SetActorSeeThrough, CallFunc_FilterPrimitive_matches) == 0x00006E, "Member 'BP_CameraFadeScenery_C_SetActorSeeThrough::CallFunc_FilterPrimitive_matches' has a wrong offset!");

}

