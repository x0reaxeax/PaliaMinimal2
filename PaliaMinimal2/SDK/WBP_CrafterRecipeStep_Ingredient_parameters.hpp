#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CrafterRecipeStep_Ingredient

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_CrafterRecipeStep_Ingredient.WBP_CrafterRecipeStep_Ingredient_C.ExecuteUbergraph_WBP_CrafterRecipeStep_Ingredient
// 0x0058 (0x0058 - 0x0000)
struct WBP_CrafterRecipeStep_Ingredient_C_ExecuteUbergraph_WBP_CrafterRecipeStep_Ingredient final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61B3[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61B4[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCrafterComponent*                      K2Node_Event_Crafter;                              // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SlotIndex;                            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRequestStepDone_ReturnValue;            // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CrafterRecipeStep_Ingredient_C_ExecuteUbergraph_WBP_CrafterRecipeStep_Ingredient) == 0x000008, "Wrong alignment on WBP_CrafterRecipeStep_Ingredient_C_ExecuteUbergraph_WBP_CrafterRecipeStep_Ingredient");
static_assert(sizeof(WBP_CrafterRecipeStep_Ingredient_C_ExecuteUbergraph_WBP_CrafterRecipeStep_Ingredient) == 0x000058, "Wrong size on WBP_CrafterRecipeStep_Ingredient_C_ExecuteUbergraph_WBP_CrafterRecipeStep_Ingredient");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_ExecuteUbergraph_WBP_CrafterRecipeStep_Ingredient, EntryPoint) == 0x000000, "Member 'WBP_CrafterRecipeStep_Ingredient_C_ExecuteUbergraph_WBP_CrafterRecipeStep_Ingredient::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_ExecuteUbergraph_WBP_CrafterRecipeStep_Ingredient, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000004, "Member 'WBP_CrafterRecipeStep_Ingredient_C_ExecuteUbergraph_WBP_CrafterRecipeStep_Ingredient::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_ExecuteUbergraph_WBP_CrafterRecipeStep_Ingredient, K2Node_Event_MyGeometry) == 0x000008, "Member 'WBP_CrafterRecipeStep_Ingredient_C_ExecuteUbergraph_WBP_CrafterRecipeStep_Ingredient::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_ExecuteUbergraph_WBP_CrafterRecipeStep_Ingredient, K2Node_Event_InDeltaTime) == 0x000040, "Member 'WBP_CrafterRecipeStep_Ingredient_C_ExecuteUbergraph_WBP_CrafterRecipeStep_Ingredient::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_ExecuteUbergraph_WBP_CrafterRecipeStep_Ingredient, K2Node_Event_Crafter) == 0x000048, "Member 'WBP_CrafterRecipeStep_Ingredient_C_ExecuteUbergraph_WBP_CrafterRecipeStep_Ingredient::K2Node_Event_Crafter' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_ExecuteUbergraph_WBP_CrafterRecipeStep_Ingredient, K2Node_Event_SlotIndex) == 0x000050, "Member 'WBP_CrafterRecipeStep_Ingredient_C_ExecuteUbergraph_WBP_CrafterRecipeStep_Ingredient::K2Node_Event_SlotIndex' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_ExecuteUbergraph_WBP_CrafterRecipeStep_Ingredient, CallFunc_IsRequestStepDone_ReturnValue) == 0x000054, "Member 'WBP_CrafterRecipeStep_Ingredient_C_ExecuteUbergraph_WBP_CrafterRecipeStep_Ingredient::CallFunc_IsRequestStepDone_ReturnValue' has a wrong offset!");

// Function WBP_CrafterRecipeStep_Ingredient.WBP_CrafterRecipeStep_Ingredient_C.OnCrafterSlotUpdated
// 0x0010 (0x0010 - 0x0000)
struct WBP_CrafterRecipeStep_Ingredient_C_OnCrafterSlotUpdated final
{
public:
	class UCrafterComponent*                      Crafter;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         SlotIndex;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CrafterRecipeStep_Ingredient_C_OnCrafterSlotUpdated) == 0x000008, "Wrong alignment on WBP_CrafterRecipeStep_Ingredient_C_OnCrafterSlotUpdated");
static_assert(sizeof(WBP_CrafterRecipeStep_Ingredient_C_OnCrafterSlotUpdated) == 0x000010, "Wrong size on WBP_CrafterRecipeStep_Ingredient_C_OnCrafterSlotUpdated");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_OnCrafterSlotUpdated, Crafter) == 0x000000, "Member 'WBP_CrafterRecipeStep_Ingredient_C_OnCrafterSlotUpdated::Crafter' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_OnCrafterSlotUpdated, SlotIndex) == 0x000008, "Member 'WBP_CrafterRecipeStep_Ingredient_C_OnCrafterSlotUpdated::SlotIndex' has a wrong offset!");

// Function WBP_CrafterRecipeStep_Ingredient.WBP_CrafterRecipeStep_Ingredient_C.Tick
// 0x003C (0x003C - 0x0000)
struct WBP_CrafterRecipeStep_Ingredient_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CrafterRecipeStep_Ingredient_C_Tick) == 0x000004, "Wrong alignment on WBP_CrafterRecipeStep_Ingredient_C_Tick");
static_assert(sizeof(WBP_CrafterRecipeStep_Ingredient_C_Tick) == 0x00003C, "Wrong size on WBP_CrafterRecipeStep_Ingredient_C_Tick");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_CrafterRecipeStep_Ingredient_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_Tick, InDeltaTime) == 0x000038, "Member 'WBP_CrafterRecipeStep_Ingredient_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_CrafterRecipeStep_Ingredient.WBP_CrafterRecipeStep_Ingredient_C.Update Contributed Icon
// 0x0018 (0x0018 - 0x0000)
struct WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon final
{
public:
	EComplexRecipeCueState                        RecipeCueState;                                    // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FullyAdded;                                        // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61B5[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCookingSubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EComplexRecipeCueState                        CallFunc_GetCookingRecipeCueStateForIngredient_ReturnValue; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsIngredientFullyAdded_ReturnValue;       // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsIngredientExpired_ReturnValue;          // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsIngredientActive_ReturnValue;           // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon) == 0x000008, "Wrong alignment on WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon");
static_assert(sizeof(WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon) == 0x000018, "Wrong size on WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon, RecipeCueState) == 0x000000, "Member 'WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon::RecipeCueState' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon, FullyAdded) == 0x000001, "Member 'WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon::FullyAdded' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon, CallFunc_GetCookingRecipeCueStateForIngredient_ReturnValue) == 0x000010, "Member 'WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon::CallFunc_GetCookingRecipeCueStateForIngredient_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon, CallFunc_IsIngredientFullyAdded_ReturnValue) == 0x000012, "Member 'WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon::CallFunc_IsIngredientFullyAdded_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon, CallFunc_IsIngredientExpired_ReturnValue) == 0x000013, "Member 'WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon::CallFunc_IsIngredientExpired_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon, CallFunc_IsIngredientActive_ReturnValue) == 0x000014, "Member 'WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon::CallFunc_IsIngredientActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon, CallFunc_BooleanAND_ReturnValue) == 0x000015, "Member 'WBP_CrafterRecipeStep_Ingredient_C_Update_Contributed_Icon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function WBP_CrafterRecipeStep_Ingredient.WBP_CrafterRecipeStep_Ingredient_C.UpdateIngredient
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_CrafterRecipeStep_Ingredient_C_UpdateIngredient final
{
public:
	struct FCrafterIngredient                     Ingredient;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Param_Index;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetTagName_ReturnValue;                   // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61B6[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIngredientTagConfig                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x0048(0x0040)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61B7[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetIngredientRequestText_ReturnValue;     // 0x0090(0x0018)()
};
static_assert(alignof(WBP_CrafterRecipeStep_Ingredient_C_UpdateIngredient) == 0x000008, "Wrong alignment on WBP_CrafterRecipeStep_Ingredient_C_UpdateIngredient");
static_assert(sizeof(WBP_CrafterRecipeStep_Ingredient_C_UpdateIngredient) == 0x0000A8, "Wrong size on WBP_CrafterRecipeStep_Ingredient_C_UpdateIngredient");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_UpdateIngredient, Ingredient) == 0x000000, "Member 'WBP_CrafterRecipeStep_Ingredient_C_UpdateIngredient::Ingredient' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_UpdateIngredient, Param_Index) == 0x000038, "Member 'WBP_CrafterRecipeStep_Ingredient_C_UpdateIngredient::Param_Index' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_UpdateIngredient, CallFunc_GetTagName_ReturnValue) == 0x00003C, "Member 'WBP_CrafterRecipeStep_Ingredient_C_UpdateIngredient::CallFunc_GetTagName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_UpdateIngredient, CallFunc_GetDataTableRowFromName_OutRow) == 0x000048, "Member 'WBP_CrafterRecipeStep_Ingredient_C_UpdateIngredient::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_UpdateIngredient, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000088, "Member 'WBP_CrafterRecipeStep_Ingredient_C_UpdateIngredient::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_UpdateIngredient, CallFunc_IsValid_ReturnValue) == 0x000089, "Member 'WBP_CrafterRecipeStep_Ingredient_C_UpdateIngredient::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrafterRecipeStep_Ingredient_C_UpdateIngredient, CallFunc_GetIngredientRequestText_ReturnValue) == 0x000090, "Member 'WBP_CrafterRecipeStep_Ingredient_C_UpdateIngredient::CallFunc_GetIngredientRequestText_ReturnValue' has a wrong offset!");

}
