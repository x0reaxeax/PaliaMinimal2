#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TileEntry_SkinTone_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TileEntry_SkinTone_CM.WBP_TileEntry_SkinTone_CM_C
// 0x0010 (0x02D0 - 0x02C0)
class UWBP_TileEntry_SkinTone_CM_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_Button_ColorPicker_01_CM_C* WBP_Button_ColorPicker_CM;                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__WBP_TileEntry_SkinTone_CM_WBP_Button_ColorPicker_CM_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UWBP_Template_Button_ColorPicker_01_CM_C* Button);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_WBP_TileEntry_SkinTone_CM(int32 EntryPoint, bool K2Node_Event_bIsExpanded, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsSelected, class UTileItem_CharacterCustomizationItem_C* K2Node_DynamicCast_AsTile_Item_Character_Customization_Item, bool K2Node_DynamicCast_bSuccess, class UListViewBase* CallFunc_GetOwningListView_ReturnValue, class UListView* K2Node_DynamicCast_AsList_View, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_GetListItemObject_ReturnValue, class UObject* Temp_object_Variable, class UObject* K2Node_CustomEvent_Loaded, class UVAL_CharacterCustomizationItem_SkinTone* K2Node_DynamicCast_AsVAL_Character_Customization_Item_Skin_Tone, bool K2Node_DynamicCast_bSuccess_2, const struct FVAL_CharacterCustomizationItem_SkinTone_PerBodyTypeConfig& CallFunc_TryGetBodyTypeSpecificConfig_SkinTone_OutBodyTypeSpecificConfig, bool CallFunc_TryGetBodyTypeSpecificConfig_SkinTone_ReturnValue, TDelegate<void(class UObject* Loaded)> K2Node_CreateDelegate_OutputDelegate, class UWBP_Template_Button_ColorPicker_01_CM_C* K2Node_ComponentBoundEvent_Button, const struct FFocusEvent& K2Node_Event_InFocusEvent);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnLoaded_FC3ACC8645F0E8957046398EBD58492B(class UObject* Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TileEntry_SkinTone_CM_C">();
	}
	static class UWBP_TileEntry_SkinTone_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TileEntry_SkinTone_CM_C>();
	}
};
static_assert(alignof(UWBP_TileEntry_SkinTone_CM_C) == 0x000008, "Wrong alignment on UWBP_TileEntry_SkinTone_CM_C");
static_assert(sizeof(UWBP_TileEntry_SkinTone_CM_C) == 0x0002D0, "Wrong size on UWBP_TileEntry_SkinTone_CM_C");
static_assert(offsetof(UWBP_TileEntry_SkinTone_CM_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_TileEntry_SkinTone_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SkinTone_CM_C, WBP_Button_ColorPicker_CM) == 0x0002C8, "Member 'UWBP_TileEntry_SkinTone_CM_C::WBP_Button_ColorPicker_CM' has a wrong offset!");

}
