#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CosmeticItemTooltip

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.Show Set Name
// 0x0005 (0x0005 - 0x0000)
struct WBP_CosmeticItemTooltip_C_Show_Set_Name final
{
public:
	bool                                          Param_Visibility;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CosmeticItemTooltip_C_Show_Set_Name) == 0x000001, "Wrong alignment on WBP_CosmeticItemTooltip_C_Show_Set_Name");
static_assert(sizeof(WBP_CosmeticItemTooltip_C_Show_Set_Name) == 0x000005, "Wrong size on WBP_CosmeticItemTooltip_C_Show_Set_Name");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_Show_Set_Name, Param_Visibility) == 0x000000, "Member 'WBP_CosmeticItemTooltip_C_Show_Set_Name::Param_Visibility' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_Show_Set_Name, Temp_bool_Variable) == 0x000001, "Member 'WBP_CosmeticItemTooltip_C_Show_Set_Name::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_Show_Set_Name, Temp_byte_Variable) == 0x000002, "Member 'WBP_CosmeticItemTooltip_C_Show_Set_Name::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_Show_Set_Name, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_CosmeticItemTooltip_C_Show_Set_Name::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_Show_Set_Name, K2Node_Select_Default) == 0x000004, "Member 'WBP_CosmeticItemTooltip_C_Show_Set_Name::K2Node_Select_Default' has a wrong offset!");

// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.SetSetName
// 0x0018 (0x0018 - 0x0000)
struct WBP_CosmeticItemTooltip_C_SetSetName final
{
public:
	class FText                                   New_Text;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CosmeticItemTooltip_C_SetSetName) == 0x000008, "Wrong alignment on WBP_CosmeticItemTooltip_C_SetSetName");
static_assert(sizeof(WBP_CosmeticItemTooltip_C_SetSetName) == 0x000018, "Wrong size on WBP_CosmeticItemTooltip_C_SetSetName");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_SetSetName, New_Text) == 0x000000, "Member 'WBP_CosmeticItemTooltip_C_SetSetName::New_Text' has a wrong offset!");

// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.SetItemName
// 0x0018 (0x0018 - 0x0000)
struct WBP_CosmeticItemTooltip_C_SetItemName final
{
public:
	class FText                                   New_Text;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CosmeticItemTooltip_C_SetItemName) == 0x000008, "Wrong alignment on WBP_CosmeticItemTooltip_C_SetItemName");
static_assert(sizeof(WBP_CosmeticItemTooltip_C_SetItemName) == 0x000018, "Wrong size on WBP_CosmeticItemTooltip_C_SetItemName");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_SetItemName, New_Text) == 0x000000, "Member 'WBP_CosmeticItemTooltip_C_SetItemName::New_Text' has a wrong offset!");

// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.SetAdditionalTextFromAssetAndDataTable
// 0x0050 (0x0050 - 0x0000)
struct WBP_CosmeticItemTooltip_C_SetAdditionalTextFromAssetAndDataTable final
{
public:
	class UDataTable*                             DataTable;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVAL_CharacterCustomization_TooltipDataRow CallFunc_GetDataTableRowFromName_OutRow;           // 0x0038(0x0010)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CosmeticItemTooltip_C_SetAdditionalTextFromAssetAndDataTable) == 0x000008, "Wrong alignment on WBP_CosmeticItemTooltip_C_SetAdditionalTextFromAssetAndDataTable");
static_assert(sizeof(WBP_CosmeticItemTooltip_C_SetAdditionalTextFromAssetAndDataTable) == 0x000050, "Wrong size on WBP_CosmeticItemTooltip_C_SetAdditionalTextFromAssetAndDataTable");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_SetAdditionalTextFromAssetAndDataTable, DataTable) == 0x000000, "Member 'WBP_CosmeticItemTooltip_C_SetAdditionalTextFromAssetAndDataTable::DataTable' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_SetAdditionalTextFromAssetAndDataTable, CallFunc_Conv_NameToString_ReturnValue) == 0x000008, "Member 'WBP_CosmeticItemTooltip_C_SetAdditionalTextFromAssetAndDataTable::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_SetAdditionalTextFromAssetAndDataTable, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'WBP_CosmeticItemTooltip_C_SetAdditionalTextFromAssetAndDataTable::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_SetAdditionalTextFromAssetAndDataTable, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000028, "Member 'WBP_CosmeticItemTooltip_C_SetAdditionalTextFromAssetAndDataTable::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_SetAdditionalTextFromAssetAndDataTable, CallFunc_GetDataTableRowFromName_OutRow) == 0x000038, "Member 'WBP_CosmeticItemTooltip_C_SetAdditionalTextFromAssetAndDataTable::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_SetAdditionalTextFromAssetAndDataTable, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000048, "Member 'WBP_CosmeticItemTooltip_C_SetAdditionalTextFromAssetAndDataTable::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.OnLoaded_EE5957764FD030C1FA456182951557D5
// 0x0008 (0x0008 - 0x0000)
struct WBP_CosmeticItemTooltip_C_OnLoaded_EE5957764FD030C1FA456182951557D5 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CosmeticItemTooltip_C_OnLoaded_EE5957764FD030C1FA456182951557D5) == 0x000008, "Wrong alignment on WBP_CosmeticItemTooltip_C_OnLoaded_EE5957764FD030C1FA456182951557D5");
static_assert(sizeof(WBP_CosmeticItemTooltip_C_OnLoaded_EE5957764FD030C1FA456182951557D5) == 0x000008, "Wrong size on WBP_CosmeticItemTooltip_C_OnLoaded_EE5957764FD030C1FA456182951557D5");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_OnLoaded_EE5957764FD030C1FA456182951557D5, Loaded) == 0x000000, "Member 'WBP_CosmeticItemTooltip_C_OnLoaded_EE5957764FD030C1FA456182951557D5::Loaded' has a wrong offset!");

// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.InitializeFromAssetData
// 0x0130 (0x0130 - 0x0000)
struct WBP_CosmeticItemTooltip_C_InitializeFromAssetData final
{
public:
	struct FVAL_CharCustomization_AssetData       Param_Asset_Data;                                  // 0x0000(0x0128)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_GetConsoleVariableBoolValue_ReturnValue;  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CosmeticItemTooltip_C_InitializeFromAssetData) == 0x000008, "Wrong alignment on WBP_CosmeticItemTooltip_C_InitializeFromAssetData");
static_assert(sizeof(WBP_CosmeticItemTooltip_C_InitializeFromAssetData) == 0x000130, "Wrong size on WBP_CosmeticItemTooltip_C_InitializeFromAssetData");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_InitializeFromAssetData, Param_Asset_Data) == 0x000000, "Member 'WBP_CosmeticItemTooltip_C_InitializeFromAssetData::Param_Asset_Data' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_InitializeFromAssetData, CallFunc_GetConsoleVariableBoolValue_ReturnValue) == 0x000128, "Member 'WBP_CosmeticItemTooltip_C_InitializeFromAssetData::CallFunc_GetConsoleVariableBoolValue_ReturnValue' has a wrong offset!");

// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.GetSetTagName
// 0x0068 (0x0068 - 0x0000)
struct WBP_CosmeticItemTooltip_C_GetSetTagName final
{
public:
	class FText                                   SetText;                                           // 0x0000(0x0018)(Parm, OutParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVAL_CharacterCustomization_CosmeticTagFilterStruct CallFunc_Array_Get_Item;                           // 0x0028(0x0038)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CosmeticItemTooltip_C_GetSetTagName) == 0x000008, "Wrong alignment on WBP_CosmeticItemTooltip_C_GetSetTagName");
static_assert(sizeof(WBP_CosmeticItemTooltip_C_GetSetTagName) == 0x000068, "Wrong size on WBP_CosmeticItemTooltip_C_GetSetTagName");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_GetSetTagName, SetText) == 0x000000, "Member 'WBP_CosmeticItemTooltip_C_GetSetTagName::SetText' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_GetSetTagName, Temp_int_Array_Index_Variable) == 0x000018, "Member 'WBP_CosmeticItemTooltip_C_GetSetTagName::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_GetSetTagName, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'WBP_CosmeticItemTooltip_C_GetSetTagName::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_GetSetTagName, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'WBP_CosmeticItemTooltip_C_GetSetTagName::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_GetSetTagName, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'WBP_CosmeticItemTooltip_C_GetSetTagName::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_GetSetTagName, CallFunc_Array_Get_Item) == 0x000028, "Member 'WBP_CosmeticItemTooltip_C_GetSetTagName::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_GetSetTagName, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'WBP_CosmeticItemTooltip_C_GetSetTagName::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_GetSetTagName, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000061, "Member 'WBP_CosmeticItemTooltip_C_GetSetTagName::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.ExecuteUbergraph_WBP_CosmeticItemTooltip
// 0x0040 (0x0040 - 0x0000)
struct WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FNameIsNone_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_123A[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_123B[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             K2Node_DynamicCast_AsData_Table;                   // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip) == 0x000008, "Wrong alignment on WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip");
static_assert(sizeof(WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip) == 0x000040, "Wrong size on WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip, EntryPoint) == 0x000000, "Member 'WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip, CallFunc_FNameIsNone_ReturnValue) == 0x000014, "Member 'WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip::CallFunc_FNameIsNone_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip, K2Node_CustomEvent_Loaded) == 0x000018, "Member 'WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip, Temp_object_Variable) == 0x000028, "Member 'WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip, K2Node_DynamicCast_AsData_Table) == 0x000030, "Member 'WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip::K2Node_DynamicCast_AsData_Table' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.DisplayTooltip
// 0x0038 (0x0038 - 0x0000)
struct WBP_CosmeticItemTooltip_C_DisplayTooltip final
{
public:
	class FText                                   SetDisplayName;                                    // 0x0000(0x0018)(Edit, BlueprintVisible)
	class FText                                   CallFunc_GetSetTagName_SetText;                    // 0x0018(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue_1;                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CosmeticItemTooltip_C_DisplayTooltip) == 0x000008, "Wrong alignment on WBP_CosmeticItemTooltip_C_DisplayTooltip");
static_assert(sizeof(WBP_CosmeticItemTooltip_C_DisplayTooltip) == 0x000038, "Wrong size on WBP_CosmeticItemTooltip_C_DisplayTooltip");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_DisplayTooltip, SetDisplayName) == 0x000000, "Member 'WBP_CosmeticItemTooltip_C_DisplayTooltip::SetDisplayName' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_DisplayTooltip, CallFunc_GetSetTagName_SetText) == 0x000018, "Member 'WBP_CosmeticItemTooltip_C_DisplayTooltip::CallFunc_GetSetTagName_SetText' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_DisplayTooltip, CallFunc_TextIsEmpty_ReturnValue) == 0x000030, "Member 'WBP_CosmeticItemTooltip_C_DisplayTooltip::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_DisplayTooltip, CallFunc_TextIsEmpty_ReturnValue_1) == 0x000031, "Member 'WBP_CosmeticItemTooltip_C_DisplayTooltip::CallFunc_TextIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_DisplayTooltip, CallFunc_Not_PreBool_ReturnValue) == 0x000032, "Member 'WBP_CosmeticItemTooltip_C_DisplayTooltip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.DisplayDebugTooltip
// 0x0018 (0x0018 - 0x0000)
struct WBP_CosmeticItemTooltip_C_DisplayDebugTooltip final
{
public:
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0000(0x0018)()
};
static_assert(alignof(WBP_CosmeticItemTooltip_C_DisplayDebugTooltip) == 0x000008, "Wrong alignment on WBP_CosmeticItemTooltip_C_DisplayDebugTooltip");
static_assert(sizeof(WBP_CosmeticItemTooltip_C_DisplayDebugTooltip) == 0x000018, "Wrong size on WBP_CosmeticItemTooltip_C_DisplayDebugTooltip");
static_assert(offsetof(WBP_CosmeticItemTooltip_C_DisplayDebugTooltip, CallFunc_Conv_NameToText_ReturnValue) == 0x000000, "Member 'WBP_CosmeticItemTooltip_C_DisplayDebugTooltip::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");

}

