#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_arrow_fireworkA_BoomMe

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_arrow_fireworkA_BoomMe.BP_arrow_fireworkA_BoomMe_C.ExecuteUbergraph_BP_arrow_fireworkA_BoomMe
// 0x0078 (0x0078 - 0x0000)
struct BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D9F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DA0[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DA1[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           CallFunc_SpawnAkComponentAtLocation_ReturnValue;   // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventComponent_ReturnValue;             // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DA2[0x2];                                     // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetAttenuationScalingFactor_Value_ImplicitCast; // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe) == 0x000008, "Wrong alignment on BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe");
static_assert(sizeof(BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe) == 0x000078, "Wrong size on BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe");
static_assert(offsetof(BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe, EntryPoint) == 0x000000, "Member 'BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000020, "Member 'BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe, CallFunc_IsServer_ReturnValue) == 0x000029, "Member 'BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe, CallFunc_IsValid_ReturnValue_1) == 0x00002A, "Member 'BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe, CallFunc_GetInstigator_ReturnValue) == 0x000030, "Member 'BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe, CallFunc_IsLocallyControlled_ReturnValue) == 0x000038, "Member 'BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe, CallFunc_SelectFloat_ReturnValue) == 0x000040, "Member 'BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000048, "Member 'BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe, CallFunc_SpawnAkComponentAtLocation_ReturnValue) == 0x000060, "Member 'BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe::CallFunc_SpawnAkComponentAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe, CallFunc_AkEventComponent_ReturnValue) == 0x000068, "Member 'BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe::CallFunc_AkEventComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe, K2Node_Event_EndPlayReason) == 0x00006C, "Member 'BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe, CallFunc_IsValid_ReturnValue_2) == 0x00006D, "Member 'BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe, CallFunc_SetAttenuationScalingFactor_Value_ImplicitCast) == 0x000070, "Member 'BP_arrow_fireworkA_BoomMe_C_ExecuteUbergraph_BP_arrow_fireworkA_BoomMe::CallFunc_SetAttenuationScalingFactor_Value_ImplicitCast' has a wrong offset!");

// Function BP_arrow_fireworkA_BoomMe.BP_arrow_fireworkA_BoomMe_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_arrow_fireworkA_BoomMe_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_arrow_fireworkA_BoomMe_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_arrow_fireworkA_BoomMe_C_ReceiveEndPlay");
static_assert(sizeof(BP_arrow_fireworkA_BoomMe_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_arrow_fireworkA_BoomMe_C_ReceiveEndPlay");
static_assert(offsetof(BP_arrow_fireworkA_BoomMe_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_arrow_fireworkA_BoomMe_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}
