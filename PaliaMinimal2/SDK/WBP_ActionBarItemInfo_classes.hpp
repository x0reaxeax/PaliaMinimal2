#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ActionBarItemInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ActionBarItemInfo.WBP_ActionBarItemInfo_C
// 0x0060 (0x0320 - 0x02C0)
class UWBP_ActionBarItemInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Close;                                             // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OpenFade;                                          // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Open;                                              // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonLazyImage*                       ItemImage;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ItemSlotGroup;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PlacementIcons;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PrimitiveImage_C*                  WBP_PrimitiveImage;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVAL_ItemTypeDefinitionAsset*           Item;                                              // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FMargin                                HBoxElementPadding;                                // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShowItemIcon;                                      // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_ActionBarItemInfo(int32 EntryPoint, bool K2Node_CustomEvent_Activate, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1);
	void OnToggleChange(bool Activate);
	void Set_Item_Definition(TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> NewItem, bool* Displays, class UWBP_PrimitiveImage_C* CallFunc_Create_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UWBP_PrimitiveImage_C* CallFunc_Create_ReturnValue_1, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UObject> Temp_softobject_Variable, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, TSoftObjectPtr<class UObject> Temp_softobject_Variable_1, class UWBP_PrimitiveImage_C* CallFunc_Create_ReturnValue_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UWBP_PrimitiveImage_C* CallFunc_Create_ReturnValue_3, bool CallFunc_HasTag_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_2, bool CallFunc_HasTag_ReturnValue_3, TSoftObjectPtr<class UObject> Temp_softobject_Variable_2, bool CallFunc_BooleanOR_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2, TSoftObjectPtr<class UObject> Temp_softobject_Variable_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_2);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ActionBarItemInfo_C">();
	}
	static class UWBP_ActionBarItemInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ActionBarItemInfo_C>();
	}
};
static_assert(alignof(UWBP_ActionBarItemInfo_C) == 0x000008, "Wrong alignment on UWBP_ActionBarItemInfo_C");
static_assert(sizeof(UWBP_ActionBarItemInfo_C) == 0x000320, "Wrong size on UWBP_ActionBarItemInfo_C");
static_assert(offsetof(UWBP_ActionBarItemInfo_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_ActionBarItemInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarItemInfo_C, Close) == 0x0002C8, "Member 'UWBP_ActionBarItemInfo_C::Close' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarItemInfo_C, OpenFade) == 0x0002D0, "Member 'UWBP_ActionBarItemInfo_C::OpenFade' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarItemInfo_C, Open) == 0x0002D8, "Member 'UWBP_ActionBarItemInfo_C::Open' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarItemInfo_C, ItemImage) == 0x0002E0, "Member 'UWBP_ActionBarItemInfo_C::ItemImage' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarItemInfo_C, ItemSlotGroup) == 0x0002E8, "Member 'UWBP_ActionBarItemInfo_C::ItemSlotGroup' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarItemInfo_C, PlacementIcons) == 0x0002F0, "Member 'UWBP_ActionBarItemInfo_C::PlacementIcons' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarItemInfo_C, WBP_PrimitiveImage) == 0x0002F8, "Member 'UWBP_ActionBarItemInfo_C::WBP_PrimitiveImage' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarItemInfo_C, Item) == 0x000300, "Member 'UWBP_ActionBarItemInfo_C::Item' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarItemInfo_C, HBoxElementPadding) == 0x000308, "Member 'UWBP_ActionBarItemInfo_C::HBoxElementPadding' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBarItemInfo_C, ShowItemIcon) == 0x000318, "Member 'UWBP_ActionBarItemInfo_C::ShowItemIcon' has a wrong offset!");

}
