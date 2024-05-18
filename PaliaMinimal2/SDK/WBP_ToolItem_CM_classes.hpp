#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ToolItem_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "Palia_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ToolItem_CM.WBP_ToolItem_CM_C
// 0x00F0 (0x03D8 - 0x02E8)
class UWBP_ToolItem_CM_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_Border_Styled*                   Border_ItemContext;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                            MenuAnchor_Tooltip;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Root;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Dynamic2DDropShadow_C*             WBP_Dynamic2DDropShadow;                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolItemContext_C*                 WBP_ToolItemContext;                               // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ItemStyle*                       Style;                                             // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FValeriaItem                           Item;                                              // 0x0320(0x0060)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bVisible;                                          // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BC3[0x7];                                     // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVAL_ItemTypeDefinitionAsset*           CurrentItemType;                                   // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnWaterUpdated;                                    // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDurabilityUpdated;                               // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ShouldDisplayWater;                                // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BC4[0x7];                                     // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnItemChanged;                                     // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsItemVisible;                                     // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BC5[0x7];                                     // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemTooltip_C*                     ItemTooltip;                                       // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void CanOpenTooltip(bool* CanOpen, bool CallFunc_BooleanAND_ReturnValue);
	void CloseTooltip();
	void Construct();
	void ExecuteUbergraph_WBP_ToolItem_CM(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, struct FPointerEvent& K2Node_Event_MouseEvent_1, struct FPointerEvent& K2Node_Event_MouseEvent);
	void GetItem(struct FValeriaItem* Param_Item);
	void GetPlayerItemAmount(int32* Amount, struct FStarQualityConstraint& Temp_struct_Variable, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue, int32 CallFunc_K2_GetItemAmountByType_ReturnValue);
	void GetStyle(class UVALUI_ItemStyle** Param_Style);
	class UUserWidget* GetTooltipWidget();
	void OnDurabilityUpdated__DelegateSignature(const struct FValeriaItem& Param_Item);
	void OnItemChanged__DelegateSignature();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnWaterUpdated__DelegateSignature(double WaterPercent, bool Param_ShouldDisplayWater);
	void OpenTooltip(bool CallFunc_CanOpenTooltip_CanOpen);
	void SetStyle(class UVALUI_ItemStyle* NewStyle, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void SetTool(const struct FValeriaItem& NewItem, bool* Param_IsVisible, bool CallFunc_UpdateTool_AnythingVisible);
	void UpdateAmmo();
	void UpdateCapacity(float CallFunc_GetWaterPercent_percent, bool CallFunc_GetWaterPercent_ReturnValue, double K2Node_CallDelegate_WaterPercent_ImplicitCast);
	void UpdateDurability();
	void UpdateMainIcon(bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void UpdateStyle(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, const class FString& CallFunc_GetPathName_ReturnValue, bool CallFunc_UpdateTool_AnythingVisible, const class FString& CallFunc_Concat_StrStr_ReturnValue, ESlateVisibility K2Node_Select_Default);
	void UpdateTool(bool* AnythingVisible, ESlateVisibility Temp_byte_Variable, TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_NotEqual_SoftObjectReference_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_UpdateVisibility_bAnythingVisible, ESlateVisibility K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void UpdateVisibility(bool* bAnythingVisible, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Greater_IntInt_ReturnValue, double K2Node_Select_Default, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ToolItem_CM_C">();
	}
	static class UWBP_ToolItem_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ToolItem_CM_C>();
	}
};
static_assert(alignof(UWBP_ToolItem_CM_C) == 0x000008, "Wrong alignment on UWBP_ToolItem_CM_C");
static_assert(sizeof(UWBP_ToolItem_CM_C) == 0x0003D8, "Wrong size on UWBP_ToolItem_CM_C");
static_assert(offsetof(UWBP_ToolItem_CM_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_ToolItem_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItem_CM_C, Border_ItemContext) == 0x0002F0, "Member 'UWBP_ToolItem_CM_C::Border_ItemContext' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItem_CM_C, MenuAnchor_Tooltip) == 0x0002F8, "Member 'UWBP_ToolItem_CM_C::MenuAnchor_Tooltip' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItem_CM_C, Overlay_Root) == 0x000300, "Member 'UWBP_ToolItem_CM_C::Overlay_Root' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItem_CM_C, WBP_Dynamic2DDropShadow) == 0x000308, "Member 'UWBP_ToolItem_CM_C::WBP_Dynamic2DDropShadow' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItem_CM_C, WBP_ToolItemContext) == 0x000310, "Member 'UWBP_ToolItem_CM_C::WBP_ToolItemContext' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItem_CM_C, Style) == 0x000318, "Member 'UWBP_ToolItem_CM_C::Style' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItem_CM_C, Item) == 0x000320, "Member 'UWBP_ToolItem_CM_C::Item' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItem_CM_C, bVisible) == 0x000380, "Member 'UWBP_ToolItem_CM_C::bVisible' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItem_CM_C, CurrentItemType) == 0x000388, "Member 'UWBP_ToolItem_CM_C::CurrentItemType' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItem_CM_C, OnWaterUpdated) == 0x000390, "Member 'UWBP_ToolItem_CM_C::OnWaterUpdated' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItem_CM_C, OnDurabilityUpdated) == 0x0003A0, "Member 'UWBP_ToolItem_CM_C::OnDurabilityUpdated' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItem_CM_C, ShouldDisplayWater) == 0x0003B0, "Member 'UWBP_ToolItem_CM_C::ShouldDisplayWater' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItem_CM_C, OnItemChanged) == 0x0003B8, "Member 'UWBP_ToolItem_CM_C::OnItemChanged' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItem_CM_C, IsItemVisible) == 0x0003C8, "Member 'UWBP_ToolItem_CM_C::IsItemVisible' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItem_CM_C, ItemTooltip) == 0x0003D0, "Member 'UWBP_ToolItem_CM_C::ItemTooltip' has a wrong offset!");

}

