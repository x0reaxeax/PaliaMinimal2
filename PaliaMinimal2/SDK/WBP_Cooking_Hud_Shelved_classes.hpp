#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Cooking_Hud_Shelved

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Cooking_Hud_Shelved.WBP_Cooking_Hud_Shelved_C
// 0x0050 (0x0310 - 0x02C0)
class UWBP_Cooking_Hud_Shelved_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HideHud;                                           // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowHUD;                                           // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               Icon_ItemsShelved;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_108;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_KnifeBackground;                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         IngredientsBox;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCrafterComponent*                      ComplexCrafter;                                    // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          PartOfRecipe;                                      // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52C8[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      ValeriaCharacter;                                  // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_Cooking_Hud_Shelved(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, TDelegate<void(struct FComplexRecipeRecord& RecipeRecord)> K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AValeriaPlayerController* K2Node_DynamicCast_AsValeria_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, const struct FComplexRecipeRecord& K2Node_MakeStruct_ComplexRecipeRecord, class UCookingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_Client_GetLocalPlayerInCrafterCamera_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, class UCookingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, ESlateVisibility K2Node_Select_Default);
	void HandleCrafterCameraChanged();
	void HandleIngredientShelfChanged(struct FComplexRecipeRecord& RecipeRecord, const TArray<bool>& StarQuality, const TArray<int32>& ShelfIngredientCounts, const TArray<class UTexture2D*>& ShelfIngredientIcons, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FComplexRecipeIngredientSet& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_Cooking_ShelvedIngredient_C* K2Node_DynamicCast_AsWBP_Cooking_Shelved_Ingredient, bool K2Node_DynamicCast_bSuccess, ESlateVisibility K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UTexture2D* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Cooking_Hud_Shelved_C">();
	}
	static class UWBP_Cooking_Hud_Shelved_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Cooking_Hud_Shelved_C>();
	}
};
static_assert(alignof(UWBP_Cooking_Hud_Shelved_C) == 0x000008, "Wrong alignment on UWBP_Cooking_Hud_Shelved_C");
static_assert(sizeof(UWBP_Cooking_Hud_Shelved_C) == 0x000310, "Wrong size on UWBP_Cooking_Hud_Shelved_C");
static_assert(offsetof(UWBP_Cooking_Hud_Shelved_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_Cooking_Hud_Shelved_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Hud_Shelved_C, HideHud) == 0x0002C8, "Member 'UWBP_Cooking_Hud_Shelved_C::HideHud' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Hud_Shelved_C, ShowHUD) == 0x0002D0, "Member 'UWBP_Cooking_Hud_Shelved_C::ShowHUD' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Hud_Shelved_C, Icon_ItemsShelved) == 0x0002D8, "Member 'UWBP_Cooking_Hud_Shelved_C::Icon_ItemsShelved' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Hud_Shelved_C, Image_108) == 0x0002E0, "Member 'UWBP_Cooking_Hud_Shelved_C::Image_108' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Hud_Shelved_C, Image_KnifeBackground) == 0x0002E8, "Member 'UWBP_Cooking_Hud_Shelved_C::Image_KnifeBackground' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Hud_Shelved_C, IngredientsBox) == 0x0002F0, "Member 'UWBP_Cooking_Hud_Shelved_C::IngredientsBox' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Hud_Shelved_C, ComplexCrafter) == 0x0002F8, "Member 'UWBP_Cooking_Hud_Shelved_C::ComplexCrafter' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Hud_Shelved_C, PartOfRecipe) == 0x000300, "Member 'UWBP_Cooking_Hud_Shelved_C::PartOfRecipe' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Hud_Shelved_C, ValeriaCharacter) == 0x000308, "Member 'UWBP_Cooking_Hud_Shelved_C::ValeriaCharacter' has a wrong offset!");

}

