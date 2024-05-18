#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Cooking_Cue_Station

#include "Basic.hpp"

#include "WBP_Cooking_Cue_Station_classes.hpp"
#include "WBP_Cooking_Cue_Station_parameters.hpp"


namespace SDK
{

// Function WBP_Cooking_Cue_Station.WBP_Cooking_Cue_Station_C.ConsiderHidingSelf
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   VisibleCount                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>                  CallFunc_GetAllChildren_ReturnValue                    (ReferenceParm, ContainsInstancedReference)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          CallFunc_Array_Get_Item                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsVisible_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Cue_Station_C::ConsiderHidingSelf(int32 VisibleCount, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Cue_Station_C", "ConsiderHidingSelf");

	Params::WBP_Cooking_Cue_Station_C_ConsiderHidingSelf Parms{};

	Parms.VisibleCount = VisibleCount;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = std::move(CallFunc_GetAllChildren_ReturnValue);
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetAllChildren_ReturnValue = std::move(Parms.CallFunc_GetAllChildren_ReturnValue);
}


// Function WBP_Cooking_Cue_Station.WBP_Cooking_Cue_Station_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Cooking_Cue_Station_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Cue_Station_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Cooking_Cue_Station.WBP_Cooking_Cue_Station_C.ExecuteUbergraph_WBP_Cooking_Cue_Station
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCookingSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(struct FComplexRecipeRecord& ComplexState, struct FComplexRecipeCrafter& CrafterState, int32 RecipeIndex)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>                  CallFunc_GetAllChildren_ReturnValue                    (ReferenceParm, ContainsInstancedReference)
// class UWidget*                          CallFunc_Array_Get_Item                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Cooking_Hud_Recipe_C*        K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(struct FComplexRecipeRecord& ComplexState, struct FComplexRecipeCrafter& CrafterState, int32 RecipeIndex)>K2Node_CreateDelegate_OutputDelegate_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FComplexRecipeRecord             K2Node_CustomEvent_complexState                        (ConstParm, ContainsInstancedReference)
// struct FComplexRecipeCrafter            K2Node_CustomEvent_CrafterState                        (ConstParm, ContainsInstancedReference)
// int32                                   K2Node_CustomEvent_recipeIndex                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Cue_Station_C::ExecuteUbergraph_WBP_Cooking_Cue_Station(int32 EntryPoint, class UCookingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Array_Index_Variable, TDelegate<void(struct FComplexRecipeRecord& ComplexState, struct FComplexRecipeCrafter& CrafterState, int32 RecipeIndex)> K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_Cooking_Hud_Recipe_C* K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe, bool K2Node_DynamicCast_bSuccess, TDelegate<void(struct FComplexRecipeRecord& ComplexState, struct FComplexRecipeCrafter& CrafterState, int32 RecipeIndex)> K2Node_CreateDelegate_OutputDelegate_2, struct FComplexRecipeRecord& K2Node_CustomEvent_complexState, struct FComplexRecipeCrafter& K2Node_CustomEvent_CrafterState, int32 K2Node_CustomEvent_recipeIndex, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Cue_Station_C", "ExecuteUbergraph_WBP_Cooking_Cue_Station");

	Params::WBP_Cooking_Cue_Station_C_ExecuteUbergraph_WBP_Cooking_Cue_Station Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = std::move(CallFunc_GetAllChildren_ReturnValue);
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe = K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_complexState = std::move(K2Node_CustomEvent_complexState);
	Parms.K2Node_CustomEvent_CrafterState = std::move(K2Node_CustomEvent_CrafterState);
	Parms.K2Node_CustomEvent_recipeIndex = K2Node_CustomEvent_recipeIndex;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetAllChildren_ReturnValue = std::move(Parms.CallFunc_GetAllChildren_ReturnValue);
}


// Function WBP_Cooking_Cue_Station.WBP_Cooking_Cue_Station_C.HandleOnCrafterChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCrafterComponent*                Crafter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   RecipeIdCrafting                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   CallFunc_TryGetBurnTimes_startTime                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   CallFunc_TryGetBurnTimes_endTime                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_TryGetBurnTimes_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_SetCountdownTimer_SetTimer                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetCraftPhaseTimes_startTime                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetCraftPhaseTimes_endTime                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetCraftPhaseTimes_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECrafterState                           CallFunc_GetCrafterState_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Cue_Station_C::HandleOnCrafterChanged(class UCrafterComponent* Crafter, int32 RecipeIdCrafting, int64 CallFunc_TryGetBurnTimes_startTime, int64 CallFunc_TryGetBurnTimes_endTime, bool CallFunc_TryGetBurnTimes_ReturnValue, bool CallFunc_SetCountdownTimer_SetTimer, int32 CallFunc_GetCraftPhaseTimes_startTime, int32 CallFunc_GetCraftPhaseTimes_endTime, bool CallFunc_GetCraftPhaseTimes_ReturnValue, ECrafterState CallFunc_GetCrafterState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Cue_Station_C", "HandleOnCrafterChanged");

	Params::WBP_Cooking_Cue_Station_C_HandleOnCrafterChanged Parms{};

	Parms.Crafter = Crafter;
	Parms.RecipeIdCrafting = RecipeIdCrafting;
	Parms.CallFunc_TryGetBurnTimes_startTime = CallFunc_TryGetBurnTimes_startTime;
	Parms.CallFunc_TryGetBurnTimes_endTime = CallFunc_TryGetBurnTimes_endTime;
	Parms.CallFunc_TryGetBurnTimes_ReturnValue = CallFunc_TryGetBurnTimes_ReturnValue;
	Parms.CallFunc_SetCountdownTimer_SetTimer = CallFunc_SetCountdownTimer_SetTimer;
	Parms.CallFunc_GetCraftPhaseTimes_startTime = CallFunc_GetCraftPhaseTimes_startTime;
	Parms.CallFunc_GetCraftPhaseTimes_endTime = CallFunc_GetCraftPhaseTimes_endTime;
	Parms.CallFunc_GetCraftPhaseTimes_ReturnValue = CallFunc_GetCraftPhaseTimes_ReturnValue;
	Parms.CallFunc_GetCrafterState_ReturnValue = CallFunc_GetCrafterState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Cooking_Cue_Station.WBP_Cooking_Cue_Station_C.HandleSubRecipeChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FComplexRecipeRecord             ComplexState                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FComplexRecipeCrafter            CrafterState                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                                   RecipeIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          CallFunc_GetChildAt_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Cooking_Hud_Recipe_C*        K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Cue_Station_C::HandleSubRecipeChanged(struct FComplexRecipeRecord& ComplexState, struct FComplexRecipeCrafter& CrafterState, int32 RecipeIndex, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_Cooking_Hud_Recipe_C* K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Cue_Station_C", "HandleSubRecipeChanged");

	Params::WBP_Cooking_Cue_Station_C_HandleSubRecipeChanged Parms{};

	Parms.ComplexState = std::move(ComplexState);
	Parms.CrafterState = std::move(CrafterState);
	Parms.RecipeIndex = RecipeIndex;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe = K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Cooking_Cue_Station.WBP_Cooking_Cue_Station_C.OnRecipeBrowsed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FComplexRecipeRecord             ComplexState                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FComplexRecipeCrafter            CrafterState                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                                   RecipeIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Cue_Station_C::OnRecipeBrowsed(struct FComplexRecipeRecord& ComplexState, struct FComplexRecipeCrafter& CrafterState, int32 RecipeIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Cue_Station_C", "OnRecipeBrowsed");

	Params::WBP_Cooking_Cue_Station_C_OnRecipeBrowsed Parms{};

	Parms.ComplexState = std::move(ComplexState);
	Parms.CrafterState = std::move(CrafterState);
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Cooking_Cue_Station.WBP_Cooking_Cue_Station_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Cue_Station_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Cue_Station_C", "PreConstruct");

	Params::WBP_Cooking_Cue_Station_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Cooking_Cue_Station.WBP_Cooking_Cue_Station_C.SetFromCrafterState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FComplexRecipeCrafter            CrafterRecipeInfo                                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class UCrafterComponent*                CrafterComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UCrafterComponent* Crafter)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UCrafterComponent* Crafter)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>                  CallFunc_GetAllChildren_ReturnValue                    (ReferenceParm, ContainsInstancedReference)
// class UWidget*                          CallFunc_Array_Get_Item                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Cooking_Hud_Recipe_C*        K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_AddUnique_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize                  K2Node_MakeStruct_SlateChildSize                       (NoDestructor)
// struct FAdditionalEnsureWidgetsOptions  K2Node_MakeStruct_AdditionalEnsureWidgetsOptions       (NoDestructor)

void UWBP_Cooking_Cue_Station_C::SetFromCrafterState(const struct FComplexRecipeCrafter& CrafterRecipeInfo, class UCrafterComponent* CrafterComponent, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TDelegate<void(class UCrafterComponent* Crafter)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TDelegate<void(class UCrafterComponent* Crafter)> K2Node_CreateDelegate_OutputDelegate_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWBP_Cooking_Hud_Recipe_C* K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, const struct FAdditionalEnsureWidgetsOptions& K2Node_MakeStruct_AdditionalEnsureWidgetsOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Cue_Station_C", "SetFromCrafterState");

	Params::WBP_Cooking_Cue_Station_C_SetFromCrafterState Parms{};

	Parms.CrafterRecipeInfo = std::move(CrafterRecipeInfo);
	Parms.CrafterComponent = CrafterComponent;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = std::move(CallFunc_GetAllChildren_ReturnValue);
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe = K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = std::move(K2Node_MakeStruct_SlateChildSize);
	Parms.K2Node_MakeStruct_AdditionalEnsureWidgetsOptions = std::move(K2Node_MakeStruct_AdditionalEnsureWidgetsOptions);

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetAllChildren_ReturnValue = std::move(Parms.CallFunc_GetAllChildren_ReturnValue);
}


// Function WBP_Cooking_Cue_Station.WBP_Cooking_Cue_Station_C.SetRecipeItemUsed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RecipeIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FoundRecipeIndex                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GreaterEqual_IntInt_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          CallFunc_GetChildAt_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Cooking_Hud_Recipe_C*        K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_SetIngredientUsed_FullyUsed                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Cue_Station_C::SetRecipeItemUsed(int32 RecipeIndex, int32 FoundRecipeIndex, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_Cooking_Hud_Recipe_C* K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetIngredientUsed_FullyUsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Cue_Station_C", "SetRecipeItemUsed");

	Params::WBP_Cooking_Cue_Station_C_SetRecipeItemUsed Parms{};

	Parms.RecipeIndex = RecipeIndex;
	Parms.FoundRecipeIndex = FoundRecipeIndex;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe = K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetIngredientUsed_FullyUsed = CallFunc_SetIngredientUsed_FullyUsed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Cooking_Cue_Station.WBP_Cooking_Cue_Station_C.UpdateIsMakingOnThisCrafter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InProgress                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCarrying                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RecipeIdCrafting                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCookingSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>                  CallFunc_GetAllChildren_ReturnValue                    (ReferenceParm, ContainsInstancedReference)
// struct FRecipeConfig                    CallFunc_GetRecipeConfigById_ReturnValue               ()
// class UWidget*                          CallFunc_Array_Get_Item                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Cooking_Hud_Recipe_C*        K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue  (UObjectWrapper, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsRecipeRequireItemItemTypeAMatch_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EComplexRecipeCueState                  CallFunc_GetCookingRecipeCueStateForCrafter_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_IntInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetRecipeIdCrafting_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Cue_Station_C::UpdateIsMakingOnThisCrafter(bool InProgress, bool IsCarrying, int32 RecipeIdCrafting, int32 Temp_int_Array_Index_Variable, class UCookingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, const struct FRecipeConfig& CallFunc_GetRecipeConfigById_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWBP_Cooking_Hud_Recipe_C* K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsRecipeRequireItemItemTypeAMatch_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, EComplexRecipeCueState CallFunc_GetCookingRecipeCueStateForCrafter_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetRecipeIdCrafting_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Cue_Station_C", "UpdateIsMakingOnThisCrafter");

	Params::WBP_Cooking_Cue_Station_C_UpdateIsMakingOnThisCrafter Parms{};

	Parms.InProgress = InProgress;
	Parms.IsCarrying = IsCarrying;
	Parms.RecipeIdCrafting = RecipeIdCrafting;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = std::move(CallFunc_GetAllChildren_ReturnValue);
	Parms.CallFunc_GetRecipeConfigById_ReturnValue = std::move(CallFunc_GetRecipeConfigById_ReturnValue);
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe = K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsRecipeRequireItemItemTypeAMatch_ReturnValue = CallFunc_IsRecipeRequireItemItemTypeAMatch_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCookingRecipeCueStateForCrafter_ReturnValue = CallFunc_GetCookingRecipeCueStateForCrafter_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetRecipeIdCrafting_ReturnValue = CallFunc_GetRecipeIdCrafting_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetAllChildren_ReturnValue = std::move(Parms.CallFunc_GetAllChildren_ReturnValue);
}


// Function WBP_Cooking_Cue_Station.WBP_Cooking_Cue_Station_C.UpdateVisualStates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>                  CallFunc_GetAllChildren_ReturnValue                    (ReferenceParm, ContainsInstancedReference)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          CallFunc_Array_Get_Item                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Cooking_Hud_Recipe_C*        K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Cue_Station_C::UpdateVisualStates(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_Cooking_Hud_Recipe_C* K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Cue_Station_C", "UpdateVisualStates");

	Params::WBP_Cooking_Cue_Station_C_UpdateVisualStates Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = std::move(CallFunc_GetAllChildren_ReturnValue);
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe = K2Node_DynamicCast_AsWBP_Cooking_Hud_Recipe;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetAllChildren_ReturnValue = std::move(Parms.CallFunc_GetAllChildren_ReturnValue);
}

}
