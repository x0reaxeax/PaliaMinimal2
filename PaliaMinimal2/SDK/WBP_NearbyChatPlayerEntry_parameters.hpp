#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NearbyChatPlayerEntry

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "OnlineSubsystemValeria_structs.hpp"


namespace SDK::Params
{

// Function WBP_NearbyChatPlayerEntry.WBP_NearbyChatPlayerEntry_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_NearbyChatPlayerEntry_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NearbyChatPlayerEntry_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on WBP_NearbyChatPlayerEntry_C_BP_OnItemExpansionChanged");
static_assert(sizeof(WBP_NearbyChatPlayerEntry_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on WBP_NearbyChatPlayerEntry_C_BP_OnItemExpansionChanged");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'WBP_NearbyChatPlayerEntry_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function WBP_NearbyChatPlayerEntry.WBP_NearbyChatPlayerEntry_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_NearbyChatPlayerEntry_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NearbyChatPlayerEntry_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on WBP_NearbyChatPlayerEntry_C_BP_OnItemSelectionChanged");
static_assert(sizeof(WBP_NearbyChatPlayerEntry_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on WBP_NearbyChatPlayerEntry_C_BP_OnItemSelectionChanged");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'WBP_NearbyChatPlayerEntry_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function WBP_NearbyChatPlayerEntry.WBP_NearbyChatPlayerEntry_C.ExecuteUbergraph_WBP_NearbyChatPlayerEntry
// 0x0118 (0x0118 - 0x0000)
struct WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  K2Node_CustomEvent_AccountId_1;                    // 0x0004(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  K2Node_CustomEvent_CharacterId_1;                  // 0x0014(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGuid& AccountId, struct FGuid& CharacterId)> K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  K2Node_CustomEvent_AccountId;                      // 0x0034(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  K2Node_CustomEvent_CharacterId;                    // 0x0044(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BA7[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOSSVAL_CharacterNameAndId             K2Node_CustomEvent_Name;                           // 0x0058(0x0030)(ConstParm)
	TDelegate<void(struct FGuid& AccountId, struct FGuid& CharacterId, struct FOSSVAL_CharacterNameAndId& Name)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0088(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FOSSVAL_CharacterNameAndId             Temp_struct_Variable;                              // 0x0098(0x0030)()
	struct FGuid                                  Temp_struct_Variable_1;                            // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  Temp_struct_Variable_2;                            // 0x00D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BA8[0x6];                                     // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_NearbyChatEntry_C*                  K2Node_DynamicCast_AsBP_Nearby_Chat_Entry;         // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BA9[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy* CallFunc_GetCharacterNameByAccountIdAndCharacterId_ReturnValue; // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry) == 0x000008, "Wrong alignment on WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry");
static_assert(sizeof(WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry) == 0x000118, "Wrong size on WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry, EntryPoint) == 0x000000, "Member 'WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry, K2Node_CustomEvent_AccountId_1) == 0x000004, "Member 'WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry::K2Node_CustomEvent_AccountId_1' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry, K2Node_CustomEvent_CharacterId_1) == 0x000014, "Member 'WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry::K2Node_CustomEvent_CharacterId_1' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry, K2Node_CustomEvent_AccountId) == 0x000034, "Member 'WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry::K2Node_CustomEvent_AccountId' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry, K2Node_CustomEvent_CharacterId) == 0x000044, "Member 'WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry::K2Node_CustomEvent_CharacterId' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry, K2Node_CustomEvent_Name) == 0x000058, "Member 'WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry::K2Node_CustomEvent_Name' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry, K2Node_CreateDelegate_OutputDelegate_1) == 0x000088, "Member 'WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry, Temp_struct_Variable) == 0x000098, "Member 'WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry, Temp_struct_Variable_1) == 0x0000C8, "Member 'WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry, Temp_struct_Variable_2) == 0x0000D8, "Member 'WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry, K2Node_Event_bIsExpanded) == 0x0000E8, "Member 'WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry, K2Node_Event_bIsSelected) == 0x0000E9, "Member 'WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry, K2Node_Event_ListItemObject) == 0x0000F0, "Member 'WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry, K2Node_DynamicCast_AsBP_Nearby_Chat_Entry) == 0x0000F8, "Member 'WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry::K2Node_DynamicCast_AsBP_Nearby_Chat_Entry' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry, CallFunc_GetCharacterNameByAccountIdAndCharacterId_ReturnValue) == 0x000108, "Member 'WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry::CallFunc_GetCharacterNameByAccountIdAndCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry, CallFunc_IsValid_ReturnValue) == 0x000110, "Member 'WBP_NearbyChatPlayerEntry_C_ExecuteUbergraph_WBP_NearbyChatPlayerEntry::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_NearbyChatPlayerEntry.WBP_NearbyChatPlayerEntry_C.OnFailure_B88370F24494268F2C181994EE5770DF
// 0x0020 (0x0020 - 0x0000)
struct WBP_NearbyChatPlayerEntry_C_OnFailure_B88370F24494268F2C181994EE5770DF final
{
public:
	struct FGuid                                  AccountId;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CharacterId;                                       // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NearbyChatPlayerEntry_C_OnFailure_B88370F24494268F2C181994EE5770DF) == 0x000004, "Wrong alignment on WBP_NearbyChatPlayerEntry_C_OnFailure_B88370F24494268F2C181994EE5770DF");
static_assert(sizeof(WBP_NearbyChatPlayerEntry_C_OnFailure_B88370F24494268F2C181994EE5770DF) == 0x000020, "Wrong size on WBP_NearbyChatPlayerEntry_C_OnFailure_B88370F24494268F2C181994EE5770DF");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_OnFailure_B88370F24494268F2C181994EE5770DF, AccountId) == 0x000000, "Member 'WBP_NearbyChatPlayerEntry_C_OnFailure_B88370F24494268F2C181994EE5770DF::AccountId' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_OnFailure_B88370F24494268F2C181994EE5770DF, CharacterId) == 0x000010, "Member 'WBP_NearbyChatPlayerEntry_C_OnFailure_B88370F24494268F2C181994EE5770DF::CharacterId' has a wrong offset!");

// Function WBP_NearbyChatPlayerEntry.WBP_NearbyChatPlayerEntry_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct WBP_NearbyChatPlayerEntry_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NearbyChatPlayerEntry_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on WBP_NearbyChatPlayerEntry_C_OnListItemObjectSet");
static_assert(sizeof(WBP_NearbyChatPlayerEntry_C_OnListItemObjectSet) == 0x000008, "Wrong size on WBP_NearbyChatPlayerEntry_C_OnListItemObjectSet");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'WBP_NearbyChatPlayerEntry_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function WBP_NearbyChatPlayerEntry.WBP_NearbyChatPlayerEntry_C.OnSuccess_B88370F24494268F2C181994EE5770DF
// 0x0050 (0x0050 - 0x0000)
struct WBP_NearbyChatPlayerEntry_C_OnSuccess_B88370F24494268F2C181994EE5770DF final
{
public:
	struct FGuid                                  AccountId;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CharacterId;                                       // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOSSVAL_CharacterNameAndId             Param_Name;                                        // 0x0020(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_NearbyChatPlayerEntry_C_OnSuccess_B88370F24494268F2C181994EE5770DF) == 0x000008, "Wrong alignment on WBP_NearbyChatPlayerEntry_C_OnSuccess_B88370F24494268F2C181994EE5770DF");
static_assert(sizeof(WBP_NearbyChatPlayerEntry_C_OnSuccess_B88370F24494268F2C181994EE5770DF) == 0x000050, "Wrong size on WBP_NearbyChatPlayerEntry_C_OnSuccess_B88370F24494268F2C181994EE5770DF");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_OnSuccess_B88370F24494268F2C181994EE5770DF, AccountId) == 0x000000, "Member 'WBP_NearbyChatPlayerEntry_C_OnSuccess_B88370F24494268F2C181994EE5770DF::AccountId' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_OnSuccess_B88370F24494268F2C181994EE5770DF, CharacterId) == 0x000010, "Member 'WBP_NearbyChatPlayerEntry_C_OnSuccess_B88370F24494268F2C181994EE5770DF::CharacterId' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_OnSuccess_B88370F24494268F2C181994EE5770DF, Param_Name) == 0x000020, "Member 'WBP_NearbyChatPlayerEntry_C_OnSuccess_B88370F24494268F2C181994EE5770DF::Param_Name' has a wrong offset!");

// Function WBP_NearbyChatPlayerEntry.WBP_NearbyChatPlayerEntry_C.SetName
// 0x0028 (0x0028 - 0x0000)
struct WBP_NearbyChatPlayerEntry_C_SetName final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(WBP_NearbyChatPlayerEntry_C_SetName) == 0x000008, "Wrong alignment on WBP_NearbyChatPlayerEntry_C_SetName");
static_assert(sizeof(WBP_NearbyChatPlayerEntry_C_SetName) == 0x000028, "Wrong size on WBP_NearbyChatPlayerEntry_C_SetName");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_SetName, Param_Name) == 0x000000, "Member 'WBP_NearbyChatPlayerEntry_C_SetName::Param_Name' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerEntry_C_SetName, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WBP_NearbyChatPlayerEntry_C_SetName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

