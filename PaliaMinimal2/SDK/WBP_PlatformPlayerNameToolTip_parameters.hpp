#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlatformPlayerNameToolTip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S6Core_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function WBP_PlatformPlayerNameToolTip.WBP_PlatformPlayerNameToolTip_C.UpdatePlatformData
// 0x0038 (0x0038 - 0x0000)
struct WBP_PlatformPlayerNameToolTip_C_UpdatePlatformData final
{
public:
	struct FUniqueNetIdRepl                       NetId;                                             // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlatformPlayerNameToolTip_C_UpdatePlatformData) == 0x000008, "Wrong alignment on WBP_PlatformPlayerNameToolTip_C_UpdatePlatformData");
static_assert(sizeof(WBP_PlatformPlayerNameToolTip_C_UpdatePlatformData) == 0x000038, "Wrong size on WBP_PlatformPlayerNameToolTip_C_UpdatePlatformData");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_UpdatePlatformData, NetId) == 0x000000, "Member 'WBP_PlatformPlayerNameToolTip_C_UpdatePlatformData::NetId' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_UpdatePlatformData, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_PlatformPlayerNameToolTip_C_UpdatePlatformData::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PlatformPlayerNameToolTip.WBP_PlatformPlayerNameToolTip_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_PlatformPlayerNameToolTip_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlatformPlayerNameToolTip_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_PlatformPlayerNameToolTip_C_PreConstruct");
static_assert(sizeof(WBP_PlatformPlayerNameToolTip_C_PreConstruct) == 0x000001, "Wrong size on WBP_PlatformPlayerNameToolTip_C_PreConstruct");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_PlatformPlayerNameToolTip_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_PlatformPlayerNameToolTip.WBP_PlatformPlayerNameToolTip_C.ExecuteUbergraph_WBP_PlatformPlayerNameToolTip
// 0x01F0 (0x01F0 - 0x0000)
struct WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERedirectsPlatform                            Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4490[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0020(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x0038(0x0018)()
	class FText                                   Temp_text_Variable_3;                              // 0x0050(0x0018)()
	class FText                                   Temp_text_Variable_4;                              // 0x0068(0x0018)()
	class FText                                   Temp_text_Variable_5;                              // 0x0080(0x0018)()
	class FText                                   Temp_text_Variable_6;                              // 0x0098(0x0018)()
	class FText                                   Temp_text_Variable_7;                              // 0x00B0(0x0018)()
	class FText                                   Temp_text_Variable_8;                              // 0x00C8(0x0018)()
	class UPresenceManager*                       CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPresence                              CallFunc_GetPresenceForUserId_ReturnValue;         // 0x00E8(0x00B0)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0198(0x0018)()
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x01B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4491[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01B8(0x0018)()
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERedirectsPlatform                            CallFunc_GetPlatformType_ReturnValue;              // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4492[0x6];                                     // 0x01D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x01D8(0x0018)()
};
static_assert(alignof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip) == 0x000008, "Wrong alignment on WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip");
static_assert(sizeof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip) == 0x0001F0, "Wrong size on WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, EntryPoint) == 0x000000, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, Temp_byte_Variable) == 0x000005, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, Temp_text_Variable) == 0x000008, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, Temp_text_Variable_1) == 0x000020, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, Temp_text_Variable_2) == 0x000038, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, Temp_text_Variable_3) == 0x000050, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, Temp_text_Variable_4) == 0x000068, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, Temp_text_Variable_5) == 0x000080, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, Temp_text_Variable_6) == 0x000098, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::Temp_text_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, Temp_text_Variable_7) == 0x0000B0, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::Temp_text_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, Temp_text_Variable_8) == 0x0000C8, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::Temp_text_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x0000E0, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, CallFunc_GetPresenceForUserId_ReturnValue) == 0x0000E8, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::CallFunc_GetPresenceForUserId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, CallFunc_Conv_StringToText_ReturnValue) == 0x000198, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, CallFunc_IsEmpty_ReturnValue) == 0x0001B0, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, CallFunc_Not_PreBool_ReturnValue) == 0x0001B1, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001B2, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001B3, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001B8, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, CallFunc_BooleanOR_ReturnValue) == 0x0001D0, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, CallFunc_GetPlatformType_ReturnValue) == 0x0001D1, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::CallFunc_GetPlatformType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip, K2Node_Select_Default) == 0x0001D8, "Member 'WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip::K2Node_Select_Default' has a wrong offset!");

}
