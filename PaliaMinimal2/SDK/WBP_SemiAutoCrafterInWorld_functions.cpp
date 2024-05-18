#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SemiAutoCrafterInWorld

#include "Basic.hpp"

#include "WBP_SemiAutoCrafterInWorld_classes.hpp"
#include "WBP_SemiAutoCrafterInWorld_parameters.hpp"


namespace SDK
{

// Function WBP_SemiAutoCrafterInWorld.WBP_SemiAutoCrafterInWorld_C.BP_OnCrafterChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCrafterComponent*                Crafter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SemiAutoCrafterInWorld_C::BP_OnCrafterChanged(class UCrafterComponent* Crafter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SemiAutoCrafterInWorld_C", "BP_OnCrafterChanged");

	Params::WBP_SemiAutoCrafterInWorld_C_BP_OnCrafterChanged Parms{};

	Parms.Crafter = Crafter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SemiAutoCrafterInWorld.WBP_SemiAutoCrafterInWorld_C.ExecuteUbergraph_WBP_SemiAutoCrafterInWorld
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECrafterState                           Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCrafterComponent*                K2Node_CustomEvent_Crafter                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECrafterState                           CallFunc_GetCrafterState_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCrafterConfig                   CallFunc_GetCrafterConfig_ReturnValue                  (ConstParm, HasGetValueTypeHash)
// class UCrafterComponent*                K2Node_Event_Crafter                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCrafterComponent*                CallFunc_SetCurrentCrafter_OutCrafter                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SemiAutoCrafterInWorld_C::ExecuteUbergraph_WBP_SemiAutoCrafterInWorld(int32 EntryPoint, ECrafterState Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, class UCrafterComponent* K2Node_CustomEvent_Crafter, bool CallFunc_IsValid_ReturnValue, ECrafterState CallFunc_GetCrafterState_ReturnValue, ESlateVisibility K2Node_Select_Default, struct FCrafterConfig& CallFunc_GetCrafterConfig_ReturnValue, class UCrafterComponent* K2Node_Event_Crafter, class UCrafterComponent* CallFunc_SetCurrentCrafter_OutCrafter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SemiAutoCrafterInWorld_C", "ExecuteUbergraph_WBP_SemiAutoCrafterInWorld");

	Params::WBP_SemiAutoCrafterInWorld_C_ExecuteUbergraph_WBP_SemiAutoCrafterInWorld Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_CustomEvent_Crafter = K2Node_CustomEvent_Crafter;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCrafterState_ReturnValue = CallFunc_GetCrafterState_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCrafterConfig_ReturnValue = std::move(CallFunc_GetCrafterConfig_ReturnValue);
	Parms.K2Node_Event_Crafter = K2Node_Event_Crafter;
	Parms.CallFunc_SetCurrentCrafter_OutCrafter = CallFunc_SetCurrentCrafter_OutCrafter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SemiAutoCrafterInWorld.WBP_SemiAutoCrafterInWorld_C.GetCurrentCrafter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCrafterComponent*                OutCrafter                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SemiAutoCrafterInWorld_C::GetCurrentCrafter(class UCrafterComponent** OutCrafter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SemiAutoCrafterInWorld_C", "GetCurrentCrafter");

	Params::WBP_SemiAutoCrafterInWorld_C_GetCurrentCrafter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutCrafter != nullptr)
		*OutCrafter = Parms.OutCrafter;
}


// Function WBP_SemiAutoCrafterInWorld.WBP_SemiAutoCrafterInWorld_C.LinkOrUnlinkCrafter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCrafterComponent*                Crafter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SemiAutoCrafterInWorld_C::LinkOrUnlinkCrafter(class UCrafterComponent* Crafter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SemiAutoCrafterInWorld_C", "LinkOrUnlinkCrafter");

	Params::WBP_SemiAutoCrafterInWorld_C_LinkOrUnlinkCrafter Parms{};

	Parms.Crafter = Crafter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SemiAutoCrafterInWorld.WBP_SemiAutoCrafterInWorld_C.SetCurrentCrafter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCrafterComponent*                NewCrafter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCrafterComponent*                OutCrafter                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UCrafterComponent* Crafter)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UCrafterComponent* Crafter)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SemiAutoCrafterInWorld_C::SetCurrentCrafter(class UCrafterComponent* NewCrafter, class UCrafterComponent** OutCrafter, bool CallFunc_IsValid_ReturnValue, TDelegate<void(class UCrafterComponent* Crafter)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class UCrafterComponent* Crafter)> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SemiAutoCrafterInWorld_C", "SetCurrentCrafter");

	Params::WBP_SemiAutoCrafterInWorld_C_SetCurrentCrafter Parms{};

	Parms.NewCrafter = NewCrafter;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutCrafter != nullptr)
		*OutCrafter = Parms.OutCrafter;
}


// Function WBP_SemiAutoCrafterInWorld.WBP_SemiAutoCrafterInWorld_C.UpdateCraftTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCrafterComponent*                Crafter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// ECrafterState                           LocalState                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   EndTime                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   StartTime                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECrafterState                           CallFunc_GetCrafterState_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_IntInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetRecipeIdCrafting_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetCraftLimitTimes_startTime                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetCraftLimitTimes_endTime                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetCraftLimitTimes_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_5             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetCraftPhaseTimes_startTime                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetCraftPhaseTimes_endTime                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetCraftPhaseTimes_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_FindRecipeConfigById_OutResult                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRecipeConfig                    CallFunc_FindRecipeConfigById_ReturnValue              ()
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECrafterMode                            Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCrafterConfig                   CallFunc_GetCrafterConfig_ReturnValue                  (ConstParm, HasGetValueTypeHash)
// bool                                    K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SemiAutoCrafterInWorld_C::UpdateCraftTimer(class UCrafterComponent* Crafter, ECrafterState LocalState, int32 EndTime, int32 StartTime, bool Temp_bool_Variable, ECrafterState CallFunc_GetCrafterState_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool Temp_bool_Variable_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool Temp_bool_Variable_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetRecipeIdCrafting_ReturnValue, int32 CallFunc_GetCraftLimitTimes_startTime, int32 CallFunc_GetCraftLimitTimes_endTime, bool CallFunc_GetCraftLimitTimes_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_2, int32 CallFunc_GetCraftPhaseTimes_startTime, int32 CallFunc_GetCraftPhaseTimes_endTime, bool CallFunc_GetCraftPhaseTimes_ReturnValue, EValeriaFuncResult CallFunc_FindRecipeConfigById_OutResult, const struct FRecipeConfig& CallFunc_FindRecipeConfigById_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, ECrafterMode Temp_byte_Variable, struct FCrafterConfig& CallFunc_GetCrafterConfig_ReturnValue, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SemiAutoCrafterInWorld_C", "UpdateCraftTimer");

	Params::WBP_SemiAutoCrafterInWorld_C_UpdateCraftTimer Parms{};

	Parms.Crafter = Crafter;
	Parms.LocalState = LocalState;
	Parms.EndTime = EndTime;
	Parms.StartTime = StartTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCrafterState_ReturnValue = CallFunc_GetCrafterState_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetRecipeIdCrafting_ReturnValue = CallFunc_GetRecipeIdCrafting_ReturnValue;
	Parms.CallFunc_GetCraftLimitTimes_startTime = CallFunc_GetCraftLimitTimes_startTime;
	Parms.CallFunc_GetCraftLimitTimes_endTime = CallFunc_GetCraftLimitTimes_endTime;
	Parms.CallFunc_GetCraftLimitTimes_ReturnValue = CallFunc_GetCraftLimitTimes_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_GetCraftPhaseTimes_startTime = CallFunc_GetCraftPhaseTimes_startTime;
	Parms.CallFunc_GetCraftPhaseTimes_endTime = CallFunc_GetCraftPhaseTimes_endTime;
	Parms.CallFunc_GetCraftPhaseTimes_ReturnValue = CallFunc_GetCraftPhaseTimes_ReturnValue;
	Parms.CallFunc_FindRecipeConfigById_OutResult = CallFunc_FindRecipeConfigById_OutResult;
	Parms.CallFunc_FindRecipeConfigById_ReturnValue = std::move(CallFunc_FindRecipeConfigById_ReturnValue);
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetCrafterConfig_ReturnValue = std::move(CallFunc_GetCrafterConfig_ReturnValue);
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

