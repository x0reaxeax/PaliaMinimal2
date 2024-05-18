#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HealthSlot

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_HealthSlot.WBP_HealthSlot_C.ExecuteUbergraph_WBP_HealthSlot
// 0x0010 (0x0010 - 0x0000)
struct WBP_HealthSlot_C_ExecuteUbergraph_WBP_HealthSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D6C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HealthSlot_C_ExecuteUbergraph_WBP_HealthSlot) == 0x000008, "Wrong alignment on WBP_HealthSlot_C_ExecuteUbergraph_WBP_HealthSlot");
static_assert(sizeof(WBP_HealthSlot_C_ExecuteUbergraph_WBP_HealthSlot) == 0x000010, "Wrong size on WBP_HealthSlot_C_ExecuteUbergraph_WBP_HealthSlot");
static_assert(offsetof(WBP_HealthSlot_C_ExecuteUbergraph_WBP_HealthSlot, EntryPoint) == 0x000000, "Member 'WBP_HealthSlot_C_ExecuteUbergraph_WBP_HealthSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_HealthSlot_C_ExecuteUbergraph_WBP_HealthSlot, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_HealthSlot_C_ExecuteUbergraph_WBP_HealthSlot::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function WBP_HealthSlot.WBP_HealthSlot_C.SetPercent
// 0x0018 (0x0018 - 0x0000)
struct WBP_HealthSlot_C_SetPercent final
{
public:
	double                                        Percent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HealthSlot_C_SetPercent) == 0x000008, "Wrong alignment on WBP_HealthSlot_C_SetPercent");
static_assert(sizeof(WBP_HealthSlot_C_SetPercent) == 0x000018, "Wrong size on WBP_HealthSlot_C_SetPercent");
static_assert(offsetof(WBP_HealthSlot_C_SetPercent, Percent) == 0x000000, "Member 'WBP_HealthSlot_C_SetPercent::Percent' has a wrong offset!");
static_assert(offsetof(WBP_HealthSlot_C_SetPercent, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_HealthSlot_C_SetPercent::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HealthSlot_C_SetPercent, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000010, "Member 'WBP_HealthSlot_C_SetPercent::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

}

