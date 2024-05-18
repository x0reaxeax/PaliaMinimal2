#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FilterDropdownPanel_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FilterDropdownPanel_CM.WBP_FilterDropdownPanel_CM_C
// 0x0128 (0x0538 - 0x0410)
class UWBP_FilterDropdownPanel_CM_C final : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CheckmarkButton_CM_C*              CheckmarkButton_HidePremiumItems_CM;               // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CheckmarkButton_CM_C*              CheckmarkButton_ShowOwnedItems_CM;                 // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class US6UI_CustomNavigationGroup*            CustomNavigationGroup_Dropdown;                    // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ListView_Styled*                 ListView_DropdownMenus;                            // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_DebugOnly*                       VALUI_DebugOnly_118;                               // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_DebugFilterOptions;                           // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFilterOptionsChanged;                            // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<EVAL_CharacterCustomization_CosmeticTagType, struct FVAL_CharacterCustomization_DropdownMenuData> OptionsMap;                                        // 0x0458(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                           Options;                                           // 0x04A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVAL_CharacterCustomization_CosmeticTagFilterStruct> CachedOptions;                                     // 0x04B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSet<class FName>                             EnabledTagNames;                                   // 0x04C8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnInLineFocused;                                   // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFilterOptionFocuse;                              // 0x0528(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_FilterDropdownPanel_CM_CheckmarkButton_HidePremiumItems_CM_K2Node_ComponentBoundEvent_5_OnCheckedStateChanged__DelegateSignature(bool IsSelected);
	void BndEvt__WBP_FilterDropdownPanel_CM_CheckmarkButton_ShowOwnedItems_CM_K2Node_ComponentBoundEvent_4_OnCheckedStateChanged__DelegateSignature(bool IsSelected);
	void BndEvt__WBP_FilterDropdownPanel_CM_CustomNavigationGroup_Dropdown_K2Node_ComponentBoundEvent_1_OnCustomNavigationGroupInitialized__DelegateSignature(class US6UI_CustomNavigationGroup* NavGroup);
	void BndEvt__WBP_FilterDropdownPanel_CM_ListView_DropdownMenus_K2Node_ComponentBoundEvent_3_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void CallOnFilterOptionsChanged(const TArray<class FText>& NewLocalVar_0, TArray<struct FVAL_CharacterCustomization_CosmeticTagFilterStruct>& CallFunc_GetAllCurrentSelectedFilterOptions_CurrentlySelectedOptionsText);
	void ClearCurrentFilters(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UObject* CallFunc_Array_Get_Item, class UListEntry_CharacterCustomization_FilteringDropdownMenu_C* K2Node_DynamicCast_AsList_Entry_Character_Customization_Filtering_Dropdown_Menu, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ExecuteUbergraph_WBP_FilterDropdownPanel_CM(int32 EntryPoint, bool K2Node_ComponentBoundEvent_IsSelected, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<EVAL_CharacterCustomization_CosmeticTagType>& CallFunc_Map_Keys_Keys, class UListEntry_CharacterCustomization_FilteringDropdownMenu_C* CallFunc_SpawnObject_ReturnValue, EVAL_CharacterCustomization_CosmeticTagType CallFunc_Array_Get_Item, bool CallFunc_HasTagOptions_HasOptions, const struct FVAL_CharacterCustomization_DropdownMenuData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TDelegate<void(class UVALUI_ListView_Styled* ListView)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, const TSet<EVAL_CharacterCustomization_CosmeticTagType>& Temp_byte_Variable, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, const TSet<class FName>& K2Node_CustomEvent_TagNames, TArray<class FName>& CallFunc_Set_ToArray_Result, class US6UI_CustomNavigationGroup* K2Node_ComponentBoundEvent_NavGroup, TArray<class FName>& CallFunc_SortCosmeticTagRowNamesByDisplayName_ReturnValue, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FVAL_CharCustomization_CosmeticTagData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FVAL_CharacterCustomization_CosmeticTagFilterStruct& K2Node_MakeStruct_VAL_CharacterCustomization_CosmeticTagFilterStruct, TArray<struct FVAL_CharacterCustomization_CosmeticTagFilterStruct>& K2Node_MakeArray_Array, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_Set_Contains_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FVAL_CharacterCustomization_DropdownMenuData& K2Node_MakeStruct_VAL_CharacterCustomization_DropdownMenuData, const struct FVAL_CharacterCustomization_DropdownMenuData& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FVAL_CharacterCustomization_DropdownMenuData& K2Node_SetFieldsInStruct_StructOut, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UWidget*>& K2Node_MakeArray_Array_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UObject* K2Node_ComponentBoundEvent_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UWBP_FilteringDropdownMenu_CM_C* K2Node_DynamicCast_AsWBP_Filtering_Dropdown_Menu_CM, bool K2Node_DynamicCast_bSuccess, class UVALUI_ListView_Styled* K2Node_CustomEvent_ListView, int32 CallFunc_Array_Add_ReturnValue, bool K2Node_ComponentBoundEvent_IsSelected_1);
	void GetAllCurrentSelectedFilterOptions(TArray<struct FVAL_CharacterCustomization_CosmeticTagFilterStruct>* CurrentlySelectedOptionsText, const TArray<struct FVAL_CharacterCustomization_CosmeticTagFilterStruct>& CurrentlySelectedOptions, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UListEntry_CharacterCustomization_FilteringDropdownMenu_C* K2Node_DynamicCast_AsList_Entry_Character_Customization_Filtering_Dropdown_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue);
	void HandleComboBoxOptionSelected();
	void HasAnyActiveFilters(bool* HasActiveFilters, TArray<struct FVAL_CharacterCustomization_CosmeticTagFilterStruct>& CallFunc_GetAllCurrentSelectedFilterOptions_CurrentlySelectedOptionsText, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void InitializeNewTagNames(const TSet<class FName>& TagNames);
	void OnFilterOptionFocuse__DelegateSignature(class UVALUI_ListView_Styled* ListView);
	void OnFilterOptionFocusedEvent(class UVALUI_ListView_Styled* ListView);
	void OnFilterOptionsChanged__DelegateSignature(bool HidePremiumItems, bool OnlyShowOwned, TArray<struct FVAL_CharacterCustomization_CosmeticTagFilterStruct>& CurrentSelectedFilters);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue);
	void OnInLineFocused__DelegateSignature();
	void OnInLineFocusedEvent();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_FilterDropdownPanel_CM_C">();
	}
	static class UWBP_FilterDropdownPanel_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FilterDropdownPanel_CM_C>();
	}
};
static_assert(alignof(UWBP_FilterDropdownPanel_CM_C) == 0x000008, "Wrong alignment on UWBP_FilterDropdownPanel_CM_C");
static_assert(sizeof(UWBP_FilterDropdownPanel_CM_C) == 0x000538, "Wrong size on UWBP_FilterDropdownPanel_CM_C");
static_assert(offsetof(UWBP_FilterDropdownPanel_CM_C, UberGraphFrame) == 0x000410, "Member 'UWBP_FilterDropdownPanel_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_FilterDropdownPanel_CM_C, CheckmarkButton_HidePremiumItems_CM) == 0x000418, "Member 'UWBP_FilterDropdownPanel_CM_C::CheckmarkButton_HidePremiumItems_CM' has a wrong offset!");
static_assert(offsetof(UWBP_FilterDropdownPanel_CM_C, CheckmarkButton_ShowOwnedItems_CM) == 0x000420, "Member 'UWBP_FilterDropdownPanel_CM_C::CheckmarkButton_ShowOwnedItems_CM' has a wrong offset!");
static_assert(offsetof(UWBP_FilterDropdownPanel_CM_C, CustomNavigationGroup_Dropdown) == 0x000428, "Member 'UWBP_FilterDropdownPanel_CM_C::CustomNavigationGroup_Dropdown' has a wrong offset!");
static_assert(offsetof(UWBP_FilterDropdownPanel_CM_C, ListView_DropdownMenus) == 0x000430, "Member 'UWBP_FilterDropdownPanel_CM_C::ListView_DropdownMenus' has a wrong offset!");
static_assert(offsetof(UWBP_FilterDropdownPanel_CM_C, VALUI_DebugOnly_118) == 0x000438, "Member 'UWBP_FilterDropdownPanel_CM_C::VALUI_DebugOnly_118' has a wrong offset!");
static_assert(offsetof(UWBP_FilterDropdownPanel_CM_C, VBox_DebugFilterOptions) == 0x000440, "Member 'UWBP_FilterDropdownPanel_CM_C::VBox_DebugFilterOptions' has a wrong offset!");
static_assert(offsetof(UWBP_FilterDropdownPanel_CM_C, OnFilterOptionsChanged) == 0x000448, "Member 'UWBP_FilterDropdownPanel_CM_C::OnFilterOptionsChanged' has a wrong offset!");
static_assert(offsetof(UWBP_FilterDropdownPanel_CM_C, OptionsMap) == 0x000458, "Member 'UWBP_FilterDropdownPanel_CM_C::OptionsMap' has a wrong offset!");
static_assert(offsetof(UWBP_FilterDropdownPanel_CM_C, Options) == 0x0004A8, "Member 'UWBP_FilterDropdownPanel_CM_C::Options' has a wrong offset!");
static_assert(offsetof(UWBP_FilterDropdownPanel_CM_C, CachedOptions) == 0x0004B8, "Member 'UWBP_FilterDropdownPanel_CM_C::CachedOptions' has a wrong offset!");
static_assert(offsetof(UWBP_FilterDropdownPanel_CM_C, EnabledTagNames) == 0x0004C8, "Member 'UWBP_FilterDropdownPanel_CM_C::EnabledTagNames' has a wrong offset!");
static_assert(offsetof(UWBP_FilterDropdownPanel_CM_C, OnInLineFocused) == 0x000518, "Member 'UWBP_FilterDropdownPanel_CM_C::OnInLineFocused' has a wrong offset!");
static_assert(offsetof(UWBP_FilterDropdownPanel_CM_C, OnFilterOptionFocuse) == 0x000528, "Member 'UWBP_FilterDropdownPanel_CM_C::OnFilterOptionFocuse' has a wrong offset!");

}
