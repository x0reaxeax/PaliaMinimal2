#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Cooking_Cue_Station

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Cooking_Cue_Station.WBP_Cooking_Cue_Station_C
// 0x0080 (0x0340 - 0x02C0)
class UWBP_Cooking_Cue_Station_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_93;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_133;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               RecipesBox;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Widget_Main;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CrafterRecipe_RadialCountdown_Staged_C* WidgetStatus_BurnTime;                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CountdownTimer_C*                  WidgetStatus_CraftingTime;                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Status;                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        WorldCueScale;                                     // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         NumUncompletedRecipes;                             // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CrafterPersistId;                                  // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRecipe_RequireItem>            RequireItems;                                      // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_Cooking_Hud_Recipe_C*              LastBrowsed;                                       // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCrafterComponent*                      Crafter_Component;                                 // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ConsiderHidingSelf(int32 VisibleCount, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void Construct();
	void ExecuteUbergraph_WBP_Cooking_Cue_Station(int32 EntryPoint, class UCookingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Array_Index_Variable, TDelegate<void(struct FComplexRecipeRecord& ComplexState, struct FComplexRecipeCrafter& CrafterState, int32 RecipeIndex)> K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_Cooking_Hud_Recipe_C* K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe, bool K2Node_DynamicCast_bSuccess, TDelegate<void(struct FComplexRecipeRecord& ComplexState, struct FComplexRecipeCrafter& CrafterState, int32 RecipeIndex)> K2Node_CreateDelegate_OutputDelegate_2, struct FComplexRecipeRecord& K2Node_CustomEvent_complexState, struct FComplexRecipeCrafter& K2Node_CustomEvent_CrafterState, int32 K2Node_CustomEvent_recipeIndex, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandleOnCrafterChanged(class UCrafterComponent* Crafter, int32 RecipeIdCrafting, int64 CallFunc_TryGetBurnTimes_startTime, int64 CallFunc_TryGetBurnTimes_endTime, bool CallFunc_TryGetBurnTimes_ReturnValue, bool CallFunc_SetCountdownTimer_SetTimer, int32 CallFunc_GetCraftPhaseTimes_startTime, int32 CallFunc_GetCraftPhaseTimes_endTime, bool CallFunc_GetCraftPhaseTimes_ReturnValue, ECrafterState CallFunc_GetCrafterState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleSubRecipeChanged(struct FComplexRecipeRecord& ComplexState, struct FComplexRecipeCrafter& CrafterState, int32 RecipeIndex, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_Cooking_Hud_Recipe_C* K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
	void OnRecipeBrowsed(struct FComplexRecipeRecord& ComplexState, struct FComplexRecipeCrafter& CrafterState, int32 RecipeIndex);
	void PreConstruct(bool IsDesignTime);
	void SetFromCrafterState(const struct FComplexRecipeCrafter& CrafterRecipeInfo, class UCrafterComponent* CrafterComponent, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TDelegate<void(class UCrafterComponent* Crafter)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TDelegate<void(class UCrafterComponent* Crafter)> K2Node_CreateDelegate_OutputDelegate_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWBP_Cooking_Hud_Recipe_C* K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, const struct FAdditionalEnsureWidgetsOptions& K2Node_MakeStruct_AdditionalEnsureWidgetsOptions);
	void SetRecipeItemUsed(int32 RecipeIndex, int32 FoundRecipeIndex, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_Cooking_Hud_Recipe_C* K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetIngredientUsed_FullyUsed);
	void UpdateIsMakingOnThisCrafter(bool InProgress, bool IsCarrying, int32 RecipeIdCrafting, int32 Temp_int_Array_Index_Variable, class UCookingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, const struct FRecipeConfig& CallFunc_GetRecipeConfigById_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWBP_Cooking_Hud_Recipe_C* K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsRecipeRequireItemItemTypeAMatch_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, EComplexRecipeCueState CallFunc_GetCookingRecipeCueStateForCrafter_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetRecipeIdCrafting_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void UpdateVisualStates(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_Cooking_Hud_Recipe_C* K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe, bool K2Node_DynamicCast_bSuccess);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Cooking_Cue_Station_C">();
	}
	static class UWBP_Cooking_Cue_Station_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Cooking_Cue_Station_C>();
	}
};
static_assert(alignof(UWBP_Cooking_Cue_Station_C) == 0x000008, "Wrong alignment on UWBP_Cooking_Cue_Station_C");
static_assert(sizeof(UWBP_Cooking_Cue_Station_C) == 0x000340, "Wrong size on UWBP_Cooking_Cue_Station_C");
static_assert(offsetof(UWBP_Cooking_Cue_Station_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_Cooking_Cue_Station_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Cue_Station_C, Image) == 0x0002C8, "Member 'UWBP_Cooking_Cue_Station_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Cue_Station_C, Image_1) == 0x0002D0, "Member 'UWBP_Cooking_Cue_Station_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Cue_Station_C, Image_93) == 0x0002D8, "Member 'UWBP_Cooking_Cue_Station_C::Image_93' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Cue_Station_C, Image_133) == 0x0002E0, "Member 'UWBP_Cooking_Cue_Station_C::Image_133' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Cue_Station_C, RecipesBox) == 0x0002E8, "Member 'UWBP_Cooking_Cue_Station_C::RecipesBox' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Cue_Station_C, Widget_Main) == 0x0002F0, "Member 'UWBP_Cooking_Cue_Station_C::Widget_Main' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Cue_Station_C, WidgetStatus_BurnTime) == 0x0002F8, "Member 'UWBP_Cooking_Cue_Station_C::WidgetStatus_BurnTime' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Cue_Station_C, WidgetStatus_CraftingTime) == 0x000300, "Member 'UWBP_Cooking_Cue_Station_C::WidgetStatus_CraftingTime' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Cue_Station_C, WidgetSwitcher_Status) == 0x000308, "Member 'UWBP_Cooking_Cue_Station_C::WidgetSwitcher_Status' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Cue_Station_C, WorldCueScale) == 0x000310, "Member 'UWBP_Cooking_Cue_Station_C::WorldCueScale' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Cue_Station_C, NumUncompletedRecipes) == 0x000318, "Member 'UWBP_Cooking_Cue_Station_C::NumUncompletedRecipes' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Cue_Station_C, CrafterPersistId) == 0x00031C, "Member 'UWBP_Cooking_Cue_Station_C::CrafterPersistId' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Cue_Station_C, RequireItems) == 0x000320, "Member 'UWBP_Cooking_Cue_Station_C::RequireItems' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Cue_Station_C, LastBrowsed) == 0x000330, "Member 'UWBP_Cooking_Cue_Station_C::LastBrowsed' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Cue_Station_C, Crafter_Component) == 0x000338, "Member 'UWBP_Cooking_Cue_Station_C::Crafter_Component' has a wrong offset!");

}

