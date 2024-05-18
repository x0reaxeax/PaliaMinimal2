#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CosmeticItemTooltip

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C
// 0x0150 (0x0410 - 0x02C0)
class UWBP_CosmeticItemTooltip_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_TextBlock_Styled*                AdditionalText;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBox_SetName;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_ItemName;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_SetName;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVAL_CharCustomization_AssetData       Asset_Data;                                        // 0x02E8(0x0128)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Show_Set_Name(bool Param_Visibility, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
	void SetSetName(class FText New_Text);
	void SetItemName(class FText New_Text);
	void SetAdditionalTextFromAssetAndDataTable(class UDataTable* DataTable, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FVAL_CharacterCustomization_TooltipDataRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void OnLoaded_EE5957764FD030C1FA456182951557D5(class UObject* Loaded);
	void InitializeFromAssetData(const struct FVAL_CharCustomization_AssetData& Param_Asset_Data, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue);
	void InitAdditionalText();
	void GetSetTagName(class FText* SetText, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVAL_CharacterCustomization_CosmeticTagFilterStruct& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ExecuteUbergraph_WBP_CosmeticItemTooltip(int32 EntryPoint, TDelegate<void(class UObject* Loaded)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_FNameIsNone_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_Not_PreBool_ReturnValue, class UObject* Temp_object_Variable, class UDataTable* K2Node_DynamicCast_AsData_Table, bool K2Node_DynamicCast_bSuccess);
	void DisplayTooltip(class FText SetDisplayName, class FText CallFunc_GetSetTagName_SetText, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue);
	void DisplayDebugTooltip(class FText CallFunc_Conv_NameToText_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CosmeticItemTooltip_C">();
	}
	static class UWBP_CosmeticItemTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CosmeticItemTooltip_C>();
	}
};
static_assert(alignof(UWBP_CosmeticItemTooltip_C) == 0x000008, "Wrong alignment on UWBP_CosmeticItemTooltip_C");
static_assert(sizeof(UWBP_CosmeticItemTooltip_C) == 0x000410, "Wrong size on UWBP_CosmeticItemTooltip_C");
static_assert(offsetof(UWBP_CosmeticItemTooltip_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_CosmeticItemTooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CosmeticItemTooltip_C, AdditionalText) == 0x0002C8, "Member 'UWBP_CosmeticItemTooltip_C::AdditionalText' has a wrong offset!");
static_assert(offsetof(UWBP_CosmeticItemTooltip_C, HBox_SetName) == 0x0002D0, "Member 'UWBP_CosmeticItemTooltip_C::HBox_SetName' has a wrong offset!");
static_assert(offsetof(UWBP_CosmeticItemTooltip_C, Text_ItemName) == 0x0002D8, "Member 'UWBP_CosmeticItemTooltip_C::Text_ItemName' has a wrong offset!");
static_assert(offsetof(UWBP_CosmeticItemTooltip_C, Text_SetName) == 0x0002E0, "Member 'UWBP_CosmeticItemTooltip_C::Text_SetName' has a wrong offset!");
static_assert(offsetof(UWBP_CosmeticItemTooltip_C, Asset_Data) == 0x0002E8, "Member 'UWBP_CosmeticItemTooltip_C::Asset_Data' has a wrong offset!");

}

