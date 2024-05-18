#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Aiming

#include "Basic.hpp"

#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function WBP_Aiming.WBP_Aiming_C.ExecuteUbergraph_WBP_Aiming
// 0x0130 (0x0130 - 0x0000)
struct WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5271[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5272[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_GetValeriaCharacter_OutResult;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5273[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacter_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FValeriaItem                           CallFunc_GetEquippedItem_ReturnValue;              // 0x0030(0x0060)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5274[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAL_ItemTypeDefinitionAsset*           K2Node_DynamicCast_AsItem_Type_Definition;         // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5275[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x00AC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5276[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLauncherConfig                        CallFunc_GetLauncherConfig_ReturnValue;            // 0x00C0(0x0058)()
	bool                                          CallFunc_IsLauncher_ReturnValue;                   // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsVisible;                            // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5277[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming) == 0x000008, "Wrong alignment on WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming");
static_assert(sizeof(WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming) == 0x000130, "Wrong size on WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming");
static_assert(offsetof(WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming, EntryPoint) == 0x000000, "Member 'WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming, Temp_object_Variable) == 0x000008, "Member 'WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming, K2Node_DynamicCast_AsTexture_2D) == 0x000018, "Member 'WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming, CallFunc_GetValeriaCharacter_OutResult) == 0x000021, "Member 'WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming::CallFunc_GetValeriaCharacter_OutResult' has a wrong offset!");
static_assert(offsetof(WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming, CallFunc_GetValeriaCharacter_ReturnValue) == 0x000028, "Member 'WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming::CallFunc_GetValeriaCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming, CallFunc_GetEquippedItem_ReturnValue) == 0x000030, "Member 'WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming::CallFunc_GetEquippedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming, K2Node_SwitchEnum_CmpSuccess) == 0x000090, "Member 'WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x000098, "Member 'WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming, K2Node_DynamicCast_AsItem_Type_Definition) == 0x0000A0, "Member 'WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming::K2Node_DynamicCast_AsItem_Type_Definition' has a wrong offset!");
static_assert(offsetof(WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming, K2Node_DynamicCast_bSuccess_1) == 0x0000A8, "Member 'WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming, K2Node_CreateDelegate_OutputDelegate) == 0x0000AC, "Member 'WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming, CallFunc_GetLauncherConfig_ReturnValue) == 0x0000C0, "Member 'WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming::CallFunc_GetLauncherConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming, CallFunc_IsLauncher_ReturnValue) == 0x000118, "Member 'WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming::CallFunc_IsLauncher_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming, K2Node_Event_IsVisible) == 0x000119, "Member 'WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming::K2Node_Event_IsVisible' has a wrong offset!");
static_assert(offsetof(WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming, K2Node_CustomEvent_Loaded) == 0x000120, "Member 'WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000128, "Member 'WBP_Aiming_C_ExecuteUbergraph_WBP_Aiming::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

// Function WBP_Aiming.WBP_Aiming_C.OnLoaded_CEB142364BC9299DCDD0738E4AD96AF2
// 0x0008 (0x0008 - 0x0000)
struct WBP_Aiming_C_OnLoaded_CEB142364BC9299DCDD0738E4AD96AF2 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Aiming_C_OnLoaded_CEB142364BC9299DCDD0738E4AD96AF2) == 0x000008, "Wrong alignment on WBP_Aiming_C_OnLoaded_CEB142364BC9299DCDD0738E4AD96AF2");
static_assert(sizeof(WBP_Aiming_C_OnLoaded_CEB142364BC9299DCDD0738E4AD96AF2) == 0x000008, "Wrong size on WBP_Aiming_C_OnLoaded_CEB142364BC9299DCDD0738E4AD96AF2");
static_assert(offsetof(WBP_Aiming_C_OnLoaded_CEB142364BC9299DCDD0738E4AD96AF2, Loaded) == 0x000000, "Member 'WBP_Aiming_C_OnLoaded_CEB142364BC9299DCDD0738E4AD96AF2::Loaded' has a wrong offset!");

// Function WBP_Aiming.WBP_Aiming_C.S6OnVisibilityChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_Aiming_C_S6OnVisibilityChanged final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Aiming_C_S6OnVisibilityChanged) == 0x000001, "Wrong alignment on WBP_Aiming_C_S6OnVisibilityChanged");
static_assert(sizeof(WBP_Aiming_C_S6OnVisibilityChanged) == 0x000001, "Wrong size on WBP_Aiming_C_S6OnVisibilityChanged");
static_assert(offsetof(WBP_Aiming_C_S6OnVisibilityChanged, Param_IsVisible) == 0x000000, "Member 'WBP_Aiming_C_S6OnVisibilityChanged::Param_IsVisible' has a wrong offset!");

}

