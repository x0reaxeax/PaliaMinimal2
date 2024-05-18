#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Valerian

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_Valerian.ABP_Valerian_C.AnimBlueprintGeneratedConstantData
// 0x013F (0x0140 - 0x0001)
struct ABP_Valerian::FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_4C68[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_133;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_134;                                // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_135;                                 // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_136;                                // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_137;                                 // 0x0020(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_138;                                // 0x0024(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_139;                                 // 0x002C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_140;                                // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_141;                                 // 0x0038(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_142;                                // 0x003C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_143;                                 // 0x0044(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_144;                                // 0x0048(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_145;                                // 0x0050(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_146;                                 // 0x0058(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C69[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_147;                                // 0x0060(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_148;                                  // 0x0068(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_149;                                // 0x0070(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_150;                                // 0x0071(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_151;                                // 0x0072(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C6A[0x5];                                     // 0x0073(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_152;                               // 0x0078(0x0010)(BlueprintVisible, EditFixedSize)
	struct FAnimNodeFunctionRef                   __StructProperty_153;                              // 0x0088(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00A8(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0128(0x0018)()
};
static_assert(alignof(ABP_Valerian::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_Valerian::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_Valerian::FAnimBlueprintGeneratedConstantData) == 0x000140, "Wrong size on ABP_Valerian::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __NameProperty_133) == 0x000004, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__NameProperty_133' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __NameProperty_134) == 0x00000C, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__NameProperty_134' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __IntProperty_135) == 0x000014, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__IntProperty_135' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __NameProperty_136) == 0x000018, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__NameProperty_136' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __IntProperty_137) == 0x000020, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__IntProperty_137' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __NameProperty_138) == 0x000024, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__NameProperty_138' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __IntProperty_139) == 0x00002C, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__IntProperty_139' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __NameProperty_140) == 0x000030, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__NameProperty_140' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __IntProperty_141) == 0x000038, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__IntProperty_141' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __NameProperty_142) == 0x00003C, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__NameProperty_142' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __IntProperty_143) == 0x000044, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__IntProperty_143' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __NameProperty_144) == 0x000048, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__NameProperty_144' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __NameProperty_145) == 0x000050, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__NameProperty_145' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __IntProperty_146) == 0x000058, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__IntProperty_146' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __BlendProfile_147) == 0x000060, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__BlendProfile_147' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __CurveFloat_148) == 0x000068, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__CurveFloat_148' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __BoolProperty_149) == 0x000070, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__BoolProperty_149' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __EnumProperty_150) == 0x000071, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__EnumProperty_150' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __EnumProperty_151) == 0x000072, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__EnumProperty_151' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __ArrayProperty_152) == 0x000078, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__ArrayProperty_152' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, __StructProperty_153) == 0x000088, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::__StructProperty_153' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000A8, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000128, "Member 'ABP_Valerian::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ABP_Valerian.ABP_Valerian_C.AnimBlueprintGeneratedMutableData
// 0x0001 (0x0002 - 0x0001)
struct ABP_Valerian::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Valerian::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on ABP_Valerian::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_Valerian::FAnimBlueprintGeneratedMutableData) == 0x000002, "Wrong size on ABP_Valerian::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_Valerian::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'ABP_Valerian::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");

}

