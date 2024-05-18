#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HousingLight

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_HousingLight.BP_HousingLight_C.StoreLightState
// 0x0002 (0x0002 - 0x0000)
struct BP_HousingLight_C_StoreLightState final
{
public:
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HousingLight_C_StoreLightState) == 0x000001, "Wrong alignment on BP_HousingLight_C_StoreLightState");
static_assert(sizeof(BP_HousingLight_C_StoreLightState) == 0x000002, "Wrong size on BP_HousingLight_C_StoreLightState");
static_assert(offsetof(BP_HousingLight_C_StoreLightState, CallFunc_BooleanOR_ReturnValue) == 0x000000, "Member 'BP_HousingLight_C_StoreLightState::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HousingLight_C_StoreLightState, CallFunc_BooleanOR_ReturnValue_1) == 0x000001, "Member 'BP_HousingLight_C_StoreLightState::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function BP_HousingLight.BP_HousingLight_C.SetupSpotlight
// 0x0004 (0x0004 - 0x0000)
struct BP_HousingLight_C_SetupSpotlight final
{
public:
	float                                         CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast; // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HousingLight_C_SetupSpotlight) == 0x000004, "Wrong alignment on BP_HousingLight_C_SetupSpotlight");
static_assert(sizeof(BP_HousingLight_C_SetupSpotlight) == 0x000004, "Wrong size on BP_HousingLight_C_SetupSpotlight");
static_assert(offsetof(BP_HousingLight_C_SetupSpotlight, CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast) == 0x000000, "Member 'BP_HousingLight_C_SetupSpotlight::CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast' has a wrong offset!");

// Function BP_HousingLight.BP_HousingLight_C.SetupPointlight
// 0x0004 (0x0004 - 0x0000)
struct BP_HousingLight_C_SetupPointlight final
{
public:
	float                                         CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast; // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HousingLight_C_SetupPointlight) == 0x000004, "Wrong alignment on BP_HousingLight_C_SetupPointlight");
static_assert(sizeof(BP_HousingLight_C_SetupPointlight) == 0x000004, "Wrong size on BP_HousingLight_C_SetupPointlight");
static_assert(offsetof(BP_HousingLight_C_SetupPointlight, CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast) == 0x000000, "Member 'BP_HousingLight_C_SetupPointlight::CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast' has a wrong offset!");

// Function BP_HousingLight.BP_HousingLight_C.SetupLightCard
// 0x0040 (0x0040 - 0x0000)
struct BP_HousingLight_C_SetupLightCard final
{
public:
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HousingLight_C_SetupLightCard) == 0x000008, "Wrong alignment on BP_HousingLight_C_SetupLightCard");
static_assert(sizeof(BP_HousingLight_C_SetupLightCard) == 0x000040, "Wrong size on BP_HousingLight_C_SetupLightCard");
static_assert(offsetof(BP_HousingLight_C_SetupLightCard, CallFunc_MakeVector_ReturnValue) == 0x000000, "Member 'BP_HousingLight_C_SetupLightCard::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HousingLight_C_SetupLightCard, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_HousingLight_C_SetupLightCard::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HousingLight_C_SetupLightCard, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_HousingLight_C_SetupLightCard::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HousingLight_C_SetupLightCard, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000028, "Member 'BP_HousingLight_C_SetupLightCard::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HousingLight_C_SetupLightCard, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000030, "Member 'BP_HousingLight_C_SetupLightCard::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_HousingLight_C_SetupLightCard, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000038, "Member 'BP_HousingLight_C_SetupLightCard::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

// Function BP_HousingLight.BP_HousingLight_C.ExecuteUbergraph_BP_HousingLight
// 0x0008 (0x0008 - 0x0000)
struct BP_HousingLight_C_ExecuteUbergraph_BP_HousingLight final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HousingLight_C_ExecuteUbergraph_BP_HousingLight) == 0x000004, "Wrong alignment on BP_HousingLight_C_ExecuteUbergraph_BP_HousingLight");
static_assert(sizeof(BP_HousingLight_C_ExecuteUbergraph_BP_HousingLight) == 0x000008, "Wrong size on BP_HousingLight_C_ExecuteUbergraph_BP_HousingLight");
static_assert(offsetof(BP_HousingLight_C_ExecuteUbergraph_BP_HousingLight, EntryPoint) == 0x000000, "Member 'BP_HousingLight_C_ExecuteUbergraph_BP_HousingLight::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_HousingLight_C_ExecuteUbergraph_BP_HousingLight, Temp_bool_Variable) == 0x000004, "Member 'BP_HousingLight_C_ExecuteUbergraph_BP_HousingLight::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_HousingLight_C_ExecuteUbergraph_BP_HousingLight, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'BP_HousingLight_C_ExecuteUbergraph_BP_HousingLight::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HousingLight_C_ExecuteUbergraph_BP_HousingLight, Temp_bool_Variable_1) == 0x000006, "Member 'BP_HousingLight_C_ExecuteUbergraph_BP_HousingLight::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_HousingLight_C_ExecuteUbergraph_BP_HousingLight, CallFunc_Not_PreBool_ReturnValue_1) == 0x000007, "Member 'BP_HousingLight_C_ExecuteUbergraph_BP_HousingLight::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

}

