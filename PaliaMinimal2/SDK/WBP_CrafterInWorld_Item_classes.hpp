#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CrafterInWorld_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CrafterInWorld_Item.WBP_CrafterInWorld_Item_C
// 0x00B8 (0x0378 - 0x02C0)
class UWBP_CrafterInWorld_Item_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Item_CM_C*                         CurrentlyCraftingItem;                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Failed;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Failed_Background;                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Success;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   NS_BurstEmitter;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_CurrentItem;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_CraftedItem_Amount;                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_CraftedItem_Name;                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   WarningAnchor;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              Widget_Status;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Status;                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClosed;                                          // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UCrafterComponent*                      CurrentCrafter;                                    // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ECrafterState                                 CurrentCrafterState;                               // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1318[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             HandleCrafterChanged;                              // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           WarningIndicatorEvent;                             // 0x0350(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_ValeriaCrafter_Base_C*              ParentCrafterActor;                                // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                ParentWidget;                                      // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          HasFailed;                                         // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1319[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           AkLoop;                                            // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void SetItem(const struct FValeriaItem& NewItem, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, ESlateVisibility Temp_byte_Variable, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
	void SetItemColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void GetRecipeItem(int32 RecipeConfigId, struct FValeriaItem* Item, EValeriaFuncResult CallFunc_FindRecipeConfigById_OutResult, const struct FRecipeConfig& CallFunc_FindRecipeConfigById_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FValeriaItem& K2Node_MakeStruct_ValeriaItem);
	void UpdateCraftTimer(class UCrafterComponent* Crafter, ECrafterState LocalState, int32 EndTime, int32 StartTime, struct FCrafterConfig& CallFunc_GetCrafterConfig_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, ECrafterState CallFunc_GetCrafterState_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool Temp_bool_Variable_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetRecipeIdCrafting_ReturnValue, int32 CallFunc_GetCraftLimitTimes_startTime, int32 CallFunc_GetCraftLimitTimes_endTime, bool CallFunc_GetCraftLimitTimes_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_2, int32 CallFunc_GetCraftPhaseTimes_startTime, int32 CallFunc_GetCraftPhaseTimes_endTime, bool CallFunc_GetCraftPhaseTimes_ReturnValue, EValeriaFuncResult CallFunc_FindRecipeConfigById_OutResult, const struct FRecipeConfig& CallFunc_FindRecipeConfigById_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, ECrafterMode Temp_byte_Variable, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue);
	void SetCurrentCrafter(class UCrafterComponent* NewCrafter, class UCrafterComponent** OutCrafter, bool CallFunc_IsValid_ReturnValue, TDelegate<void(class UCrafterComponent* Crafter)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class UCrafterComponent* Crafter)> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1);
	void UpdateWarningIndicator();
	void Construct();
	void Destruct();
	void BP_OnCrafterChanged(class UCrafterComponent* Crafter);
	void PlayVFX();
	void LinkOrUnlinkCrafter(class UCrafterComponent* Crafter);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetNiagaraOpacity();
	void HandleCrafterChanged__DelegateSignature(class UObject* Crafter);
	void OnClosed__DelegateSignature();
	void ExecuteUbergraph_WBP_CrafterInWorld_Item(int32 EntryPoint, ECrafterState Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsAlmostBurnt__IsAlmostBurnt, ECrafterState CallFunc_GetCrafterState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, ESlateVisibility K2Node_Select_Default, class UCrafterComponent* K2Node_CustomEvent_Crafter, bool CallFunc_IsValid_ReturnValue_2, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, const struct FValeriaItem& CallFunc_GetItemCrafting_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_HasRecipeFailed_ReturnValue, const struct FValeriaItem& CallFunc_GetRecipeItemToProduce_ReturnValue, ESlateVisibility Temp_byte_Variable_4, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UCrafterComponent* K2Node_Event_Crafter, class UCrafterComponent* CallFunc_SetCurrentCrafter_OutCrafter, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UNiagaraUIComponent* CallFunc_GetNiagaraComponent_ReturnValue, class UWidget* CallFunc_FindOuterMostWidget_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, ESlateVisibility Temp_byte_Variable_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAkComponent* CallFunc_AkSpawnAtLocation_ReturnValue, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, bool CallFunc_IsValid_ReturnValue_3, ESlateVisibility K2Node_Select_Default_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CrafterInWorld_Item_C">();
	}
	static class UWBP_CrafterInWorld_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CrafterInWorld_Item_C>();
	}
};
static_assert(alignof(UWBP_CrafterInWorld_Item_C) == 0x000008, "Wrong alignment on UWBP_CrafterInWorld_Item_C");
static_assert(sizeof(UWBP_CrafterInWorld_Item_C) == 0x000378, "Wrong size on UWBP_CrafterInWorld_Item_C");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_CrafterInWorld_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, CurrentlyCraftingItem) == 0x0002C8, "Member 'UWBP_CrafterInWorld_Item_C::CurrentlyCraftingItem' has a wrong offset!");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, Image_Failed) == 0x0002D0, "Member 'UWBP_CrafterInWorld_Item_C::Image_Failed' has a wrong offset!");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, Image_Failed_Background) == 0x0002D8, "Member 'UWBP_CrafterInWorld_Item_C::Image_Failed_Background' has a wrong offset!");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, Image_Success) == 0x0002E0, "Member 'UWBP_CrafterInWorld_Item_C::Image_Success' has a wrong offset!");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, NS_BurstEmitter) == 0x0002E8, "Member 'UWBP_CrafterInWorld_Item_C::NS_BurstEmitter' has a wrong offset!");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, Overlay_CurrentItem) == 0x0002F0, "Member 'UWBP_CrafterInWorld_Item_C::Overlay_CurrentItem' has a wrong offset!");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, Text_CraftedItem_Amount) == 0x0002F8, "Member 'UWBP_CrafterInWorld_Item_C::Text_CraftedItem_Amount' has a wrong offset!");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, Text_CraftedItem_Name) == 0x000300, "Member 'UWBP_CrafterInWorld_Item_C::Text_CraftedItem_Name' has a wrong offset!");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, WarningAnchor) == 0x000308, "Member 'UWBP_CrafterInWorld_Item_C::WarningAnchor' has a wrong offset!");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, Widget_Status) == 0x000310, "Member 'UWBP_CrafterInWorld_Item_C::Widget_Status' has a wrong offset!");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, WidgetSwitcher_Status) == 0x000318, "Member 'UWBP_CrafterInWorld_Item_C::WidgetSwitcher_Status' has a wrong offset!");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, OnClosed) == 0x000320, "Member 'UWBP_CrafterInWorld_Item_C::OnClosed' has a wrong offset!");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, CurrentCrafter) == 0x000330, "Member 'UWBP_CrafterInWorld_Item_C::CurrentCrafter' has a wrong offset!");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, CurrentCrafterState) == 0x000338, "Member 'UWBP_CrafterInWorld_Item_C::CurrentCrafterState' has a wrong offset!");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, HandleCrafterChanged) == 0x000340, "Member 'UWBP_CrafterInWorld_Item_C::HandleCrafterChanged' has a wrong offset!");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, WarningIndicatorEvent) == 0x000350, "Member 'UWBP_CrafterInWorld_Item_C::WarningIndicatorEvent' has a wrong offset!");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, ParentCrafterActor) == 0x000358, "Member 'UWBP_CrafterInWorld_Item_C::ParentCrafterActor' has a wrong offset!");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, ParentWidget) == 0x000360, "Member 'UWBP_CrafterInWorld_Item_C::ParentWidget' has a wrong offset!");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, HasFailed) == 0x000368, "Member 'UWBP_CrafterInWorld_Item_C::HasFailed' has a wrong offset!");
static_assert(offsetof(UWBP_CrafterInWorld_Item_C, AkLoop) == 0x000370, "Member 'UWBP_CrafterInWorld_Item_C::AkLoop' has a wrong offset!");

}

