#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_vfx_gen_waterfall_tallA

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_vfx_gen_waterfall_tallA.BP_vfx_gen_waterfall_tallA_C.BndEvt__BP_waterfall_tallA_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_vfx_gen_waterfall_tallA_C_BndEvt__BP_waterfall_tallA_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6156[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_vfx_gen_waterfall_tallA_C_BndEvt__BP_waterfall_tallA_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_vfx_gen_waterfall_tallA_C_BndEvt__BP_waterfall_tallA_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_vfx_gen_waterfall_tallA_C_BndEvt__BP_waterfall_tallA_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_vfx_gen_waterfall_tallA_C_BndEvt__BP_waterfall_tallA_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_BndEvt__BP_waterfall_tallA_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_vfx_gen_waterfall_tallA_C_BndEvt__BP_waterfall_tallA_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_BndEvt__BP_waterfall_tallA_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_vfx_gen_waterfall_tallA_C_BndEvt__BP_waterfall_tallA_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_BndEvt__BP_waterfall_tallA_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_vfx_gen_waterfall_tallA_C_BndEvt__BP_waterfall_tallA_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_BndEvt__BP_waterfall_tallA_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_vfx_gen_waterfall_tallA_C_BndEvt__BP_waterfall_tallA_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_BndEvt__BP_waterfall_tallA_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_vfx_gen_waterfall_tallA_C_BndEvt__BP_waterfall_tallA_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_BndEvt__BP_waterfall_tallA_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_vfx_gen_waterfall_tallA_C_BndEvt__BP_waterfall_tallA_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_vfx_gen_waterfall_tallA.BP_vfx_gen_waterfall_tallA_C.ExecuteUbergraph_BP_vfx_gen_waterfall_tallA
// 0x0118 (0x0118 - 0x0000)
struct BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6157[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6158[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA) == 0x000008, "Wrong alignment on BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA");
static_assert(sizeof(BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA) == 0x000118, "Wrong size on BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA, EntryPoint) == 0x000000, "Member 'BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA, CallFunc_SetStaticMesh_ReturnValue) == 0x000004, "Member 'BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA, CallFunc_BooleanAND_ReturnValue) == 0x000110, "Member 'BP_vfx_gen_waterfall_tallA_C_ExecuteUbergraph_BP_vfx_gen_waterfall_tallA::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_vfx_gen_waterfall_tallA.BP_vfx_gen_waterfall_tallA_C.Refresh VFX
// 0x00A8 (0x00A8 - 0x0000)
struct BP_vfx_gen_waterfall_tallA_C_Refresh_VFX final
{
public:
	struct FVector                                Scale_waterfall;                                   // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_2;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentScale_ReturnValue;         // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6159[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;     // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast_1;   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast_2;   // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast_3;   // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast_4;   // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_vfx_gen_waterfall_tallA_C_Refresh_VFX) == 0x000008, "Wrong alignment on BP_vfx_gen_waterfall_tallA_C_Refresh_VFX");
static_assert(sizeof(BP_vfx_gen_waterfall_tallA_C_Refresh_VFX) == 0x0000A8, "Wrong size on BP_vfx_gen_waterfall_tallA_C_Refresh_VFX");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_Refresh_VFX, Scale_waterfall) == 0x000000, "Member 'BP_vfx_gen_waterfall_tallA_C_Refresh_VFX::Scale_waterfall' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_Refresh_VFX, CallFunc_BreakVector_X) == 0x000018, "Member 'BP_vfx_gen_waterfall_tallA_C_Refresh_VFX::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_Refresh_VFX, CallFunc_BreakVector_Y) == 0x000020, "Member 'BP_vfx_gen_waterfall_tallA_C_Refresh_VFX::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_Refresh_VFX, CallFunc_BreakVector_Z) == 0x000028, "Member 'BP_vfx_gen_waterfall_tallA_C_Refresh_VFX::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_Refresh_VFX, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000030, "Member 'BP_vfx_gen_waterfall_tallA_C_Refresh_VFX::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_Refresh_VFX, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000038, "Member 'BP_vfx_gen_waterfall_tallA_C_Refresh_VFX::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_Refresh_VFX, CallFunc_SelectFloat_ReturnValue) == 0x000040, "Member 'BP_vfx_gen_waterfall_tallA_C_Refresh_VFX::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_Refresh_VFX, CallFunc_SelectFloat_ReturnValue_1) == 0x000048, "Member 'BP_vfx_gen_waterfall_tallA_C_Refresh_VFX::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_Refresh_VFX, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000050, "Member 'BP_vfx_gen_waterfall_tallA_C_Refresh_VFX::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_Refresh_VFX, CallFunc_SelectFloat_ReturnValue_2) == 0x000058, "Member 'BP_vfx_gen_waterfall_tallA_C_Refresh_VFX::CallFunc_SelectFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_Refresh_VFX, CallFunc_K2_GetComponentScale_ReturnValue) == 0x000060, "Member 'BP_vfx_gen_waterfall_tallA_C_Refresh_VFX::CallFunc_K2_GetComponentScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_Refresh_VFX, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000078, "Member 'BP_vfx_gen_waterfall_tallA_C_Refresh_VFX::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_Refresh_VFX, CallFunc_BooleanAND_ReturnValue) == 0x000090, "Member 'BP_vfx_gen_waterfall_tallA_C_Refresh_VFX::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_Refresh_VFX, CallFunc_SetFloatParameter_Param_ImplicitCast) == 0x000094, "Member 'BP_vfx_gen_waterfall_tallA_C_Refresh_VFX::CallFunc_SetFloatParameter_Param_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_Refresh_VFX, CallFunc_SetFloatParameter_Param_ImplicitCast_1) == 0x000098, "Member 'BP_vfx_gen_waterfall_tallA_C_Refresh_VFX::CallFunc_SetFloatParameter_Param_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_Refresh_VFX, CallFunc_SetFloatParameter_Param_ImplicitCast_2) == 0x00009C, "Member 'BP_vfx_gen_waterfall_tallA_C_Refresh_VFX::CallFunc_SetFloatParameter_Param_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_Refresh_VFX, CallFunc_SetFloatParameter_Param_ImplicitCast_3) == 0x0000A0, "Member 'BP_vfx_gen_waterfall_tallA_C_Refresh_VFX::CallFunc_SetFloatParameter_Param_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(BP_vfx_gen_waterfall_tallA_C_Refresh_VFX, CallFunc_SetFloatParameter_Param_ImplicitCast_4) == 0x0000A4, "Member 'BP_vfx_gen_waterfall_tallA_C_Refresh_VFX::CallFunc_SetFloatParameter_Param_ImplicitCast_4' has a wrong offset!");

}

