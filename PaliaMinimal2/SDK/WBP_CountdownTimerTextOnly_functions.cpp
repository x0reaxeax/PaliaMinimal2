#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CountdownTimerTextOnly

#include "Basic.hpp"

#include "WBP_CountdownTimerTextOnly_classes.hpp"
#include "WBP_CountdownTimerTextOnly_parameters.hpp"


namespace SDK
{

// Function WBP_CountdownTimerTextOnly.WBP_CountdownTimerTextOnly_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CountdownTimerTextOnly_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CountdownTimerTextOnly_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CountdownTimerTextOnly.WBP_CountdownTimerTextOnly_C.ExecuteUbergraph_WBP_CountdownTimerTextOnly
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                        K2Node_Event_MyGeometry                                (IsPlainOldData, NoDestructor)
// float                                   K2Node_Event_InDeltaTime                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInt64Split                      K2Node_CustomEvent_EndValeriaTimeMs                    (NoDestructor)
// bool                                    K2Node_CustomEvent_DisplayAsFreshness                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                        K2Node_CustomEvent_EndDateTime                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CountdownTimerTextOnly_C::ExecuteUbergraph_WBP_CountdownTimerTextOnly(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FInt64Split& K2Node_CustomEvent_EndValeriaTimeMs, bool K2Node_CustomEvent_DisplayAsFreshness, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue, const struct FDateTime& K2Node_CustomEvent_EndDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CountdownTimerTextOnly_C", "ExecuteUbergraph_WBP_CountdownTimerTextOnly");

	Params::WBP_CountdownTimerTextOnly_C_ExecuteUbergraph_WBP_CountdownTimerTextOnly Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = std::move(K2Node_Event_MyGeometry);
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_EndValeriaTimeMs = std::move(K2Node_CustomEvent_EndValeriaTimeMs);
	Parms.K2Node_CustomEvent_DisplayAsFreshness = K2Node_CustomEvent_DisplayAsFreshness;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_EndDateTime = std::move(K2Node_CustomEvent_EndDateTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CountdownTimerTextOnly.WBP_CountdownTimerTextOnly_C.FormatTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   TimeSeconds                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           FormattedTime                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Hours                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Minutes                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Seconds                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           FormattedString                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Temp_string_Variable                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                           Temp_string_Variable_1                                 (ZeroConstructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Temp_string_Variable_2                                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                           Temp_string_Variable_3                                 (ZeroConstructor, HasGetValueTypeHash)
// int32                                   CallFunc_Percent_IntInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Percent_IntInt_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Divide_IntInt_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Divide_IntInt_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GreaterEqual_IntInt_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_Conv_IntToString_ReturnValue                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                           K2Node_Select_Default                                  (ZeroConstructor, HasGetValueTypeHash)
// bool                                    CallFunc_GreaterEqual_IntInt_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_Conv_IntToString_ReturnValue_1                (ZeroConstructor, HasGetValueTypeHash)
// class FString                           K2Node_Select_Default_1                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Conv_IntToString_ReturnValue_2                (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_FormatDuration_ReturnValue                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue_1                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue_2                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue_3                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue_4                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue_5                   (ZeroConstructor, HasGetValueTypeHash)

void UWBP_CountdownTimerTextOnly_C::FormatTime(int32 TimeSeconds, class FString* FormattedTime, int32 Hours, int32 Minutes, int32 Seconds, const class FString& FormattedString, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& K2Node_Select_Default, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& K2Node_Select_Default_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_FormatDuration_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CountdownTimerTextOnly_C", "FormatTime");

	Params::WBP_CountdownTimerTextOnly_C_FormatTime Parms{};

	Parms.TimeSeconds = TimeSeconds;
	Parms.Hours = Hours;
	Parms.Minutes = Minutes;
	Parms.Seconds = Seconds;
	Parms.FormattedString = std::move(FormattedString);
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = std::move(Temp_string_Variable);
	Parms.Temp_string_Variable_1 = std::move(Temp_string_Variable_1);
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_string_Variable_2 = std::move(Temp_string_Variable_2);
	Parms.Temp_string_Variable_3 = std::move(Temp_string_Variable_3);
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue_1 = CallFunc_Percent_IntInt_ReturnValue_1;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = std::move(CallFunc_Conv_IntToString_ReturnValue);
	Parms.K2Node_Select_Default = std::move(K2Node_Select_Default);
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = std::move(CallFunc_Conv_IntToString_ReturnValue_1);
	Parms.K2Node_Select_Default_1 = std::move(K2Node_Select_Default_1);
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = std::move(CallFunc_Conv_IntToString_ReturnValue_2);
	Parms.CallFunc_Concat_StrStr_ReturnValue = std::move(CallFunc_Concat_StrStr_ReturnValue);
	Parms.CallFunc_FormatDuration_ReturnValue = std::move(CallFunc_FormatDuration_ReturnValue);
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = std::move(CallFunc_Concat_StrStr_ReturnValue_1);
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = std::move(CallFunc_Concat_StrStr_ReturnValue_2);
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = std::move(CallFunc_Concat_StrStr_ReturnValue_3);
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = std::move(CallFunc_Concat_StrStr_ReturnValue_4);
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = std::move(CallFunc_Concat_StrStr_ReturnValue_5);

	UObject::ProcessEvent(Func, &Parms);

	if (FormattedTime != nullptr)
		*FormattedTime = std::move(Parms.FormattedTime);
}


// Function WBP_CountdownTimerTextOnly.WBP_CountdownTimerTextOnly_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CountdownTimerTextOnly_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CountdownTimerTextOnly_C", "PreConstruct");

	Params::WBP_CountdownTimerTextOnly_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CountdownTimerTextOnly.WBP_CountdownTimerTextOnly_C.SetCountdownTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInt64Split                      Param_EndValeriaTimeMs                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    DisplayAsFreshness                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CountdownTimerTextOnly_C::SetCountdownTimer(const struct FInt64Split& Param_EndValeriaTimeMs, bool DisplayAsFreshness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CountdownTimerTextOnly_C", "SetCountdownTimer");

	Params::WBP_CountdownTimerTextOnly_C_SetCountdownTimer Parms{};

	Parms.Param_EndValeriaTimeMs = std::move(Param_EndValeriaTimeMs);
	Parms.DisplayAsFreshness = DisplayAsFreshness;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CountdownTimerTextOnly.WBP_CountdownTimerTextOnly_C.SetCountdownTimerInDateTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        Param_EndDateTime                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CountdownTimerTextOnly_C::SetCountdownTimerInDateTime(const struct FDateTime& Param_EndDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CountdownTimerTextOnly_C", "SetCountdownTimerInDateTime");

	Params::WBP_CountdownTimerTextOnly_C_SetCountdownTimerInDateTime Parms{};

	Parms.Param_EndDateTime = std::move(Param_EndDateTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CountdownTimerTextOnly.WBP_CountdownTimerTextOnly_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CountdownTimerTextOnly_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CountdownTimerTextOnly_C", "Tick");

	Params::WBP_CountdownTimerTextOnly_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CountdownTimerTextOnly.WBP_CountdownTimerTextOnly_C.UpdateUI
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TimeRemainSecs_Curr                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_FormatTime_FormattedTime                      (ZeroConstructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInt64Split                      CallFunc_CastInt32ToInt64_ReturnValue                  (NoDestructor)
// int32                                   CallFunc_CompareInt64_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_IntInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInt64Split                      CallFunc_GetValeriaTimestampMs_ReturnValue             (NoDestructor)
// bool                                    CallFunc_NotEqual_IntInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInt64Split                      CallFunc_SubtractInt64_ReturnValue                     (NoDestructor)
// int32                                   CallFunc_ConvertToSecs_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Max_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CountdownTimerTextOnly_C::UpdateUI(int32 TimeRemainSecs_Curr, const class FString& CallFunc_FormatTime_FormattedTime, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FInt64Split& CallFunc_CastInt32ToInt64_ReturnValue, int32 CallFunc_CompareInt64_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FInt64Split& CallFunc_GetValeriaTimestampMs_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FInt64Split& CallFunc_SubtractInt64_ReturnValue, int32 CallFunc_ConvertToSecs_ReturnValue, int32 CallFunc_Max_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CountdownTimerTextOnly_C", "UpdateUI");

	Params::WBP_CountdownTimerTextOnly_C_UpdateUI Parms{};

	Parms.TimeRemainSecs_Curr = TimeRemainSecs_Curr;
	Parms.CallFunc_FormatTime_FormattedTime = std::move(CallFunc_FormatTime_FormattedTime);
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_CastInt32ToInt64_ReturnValue = std::move(CallFunc_CastInt32ToInt64_ReturnValue);
	Parms.CallFunc_CompareInt64_ReturnValue = CallFunc_CompareInt64_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetValeriaTimestampMs_ReturnValue = std::move(CallFunc_GetValeriaTimestampMs_ReturnValue);
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_SubtractInt64_ReturnValue = std::move(CallFunc_SubtractInt64_ReturnValue);
	Parms.CallFunc_ConvertToSecs_ReturnValue = CallFunc_ConvertToSecs_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CountdownTimerTextOnly.WBP_CountdownTimerTextOnly_C.UpdateUIWithDateTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           FormattedString                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Temp_string_Variable                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Temp_string_Variable_1                                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                           Temp_string_Variable_2                                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                           Temp_string_Variable_3                                 (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                        CallFunc_TimespanZeroValue_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                        CallFunc_GetValeriaTimestampDateTime_ReturnValue       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                        CallFunc_GetDateDifferenceInTimespan_OutTimespan       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_TimespanTimespan_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetTotalSeconds_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_FTrunc_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_BreakTimespan2_Days                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_BreakTimespan2_Hours                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_BreakTimespan2_Minutes                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_BreakTimespan2_Seconds                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_BreakTimespan2_FractionNano                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_FormatDuration_ReturnValue                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Conv_IntToString_ReturnValue                  (ZeroConstructor, HasGetValueTypeHash)
// bool                                    CallFunc_GreaterEqual_IntInt_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_Conv_IntToString_ReturnValue_1                (ZeroConstructor, HasGetValueTypeHash)
// bool                                    CallFunc_GreaterEqual_IntInt_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           K2Node_Select_Default                                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Conv_IntToString_ReturnValue_2                (ZeroConstructor, HasGetValueTypeHash)
// class FString                           K2Node_Select_Default_1                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue_1                   (ZeroConstructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()
// class FString                           CallFunc_Concat_StrStr_ReturnValue_2                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue_3                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue_4                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue_5                   (ZeroConstructor, HasGetValueTypeHash)
// double                                  CallFunc_FTrunc_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CountdownTimerTextOnly_C::UpdateUIWithDateTime(const class FString& FormattedString, const class FString& Temp_string_Variable, bool Temp_bool_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const struct FTimespan& CallFunc_TimespanZeroValue_ReturnValue, const struct FDateTime& CallFunc_GetValeriaTimestampDateTime_ReturnValue, bool Temp_bool_Variable_1, const struct FTimespan& CallFunc_GetDateDifferenceInTimespan_OutTimespan, bool CallFunc_Greater_TimespanTimespan_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_BreakTimespan2_Days, int32 CallFunc_BreakTimespan2_Hours, int32 CallFunc_BreakTimespan2_Minutes, int32 CallFunc_BreakTimespan2_Seconds, int32 CallFunc_BreakTimespan2_FractionNano, const class FString& CallFunc_FormatDuration_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, const class FString& K2Node_Select_Default, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& K2Node_Select_Default_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, double CallFunc_FTrunc_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CountdownTimerTextOnly_C", "UpdateUIWithDateTime");

	Params::WBP_CountdownTimerTextOnly_C_UpdateUIWithDateTime Parms{};

	Parms.FormattedString = std::move(FormattedString);
	Parms.Temp_string_Variable = std::move(Temp_string_Variable);
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable_1 = std::move(Temp_string_Variable_1);
	Parms.Temp_string_Variable_2 = std::move(Temp_string_Variable_2);
	Parms.Temp_string_Variable_3 = std::move(Temp_string_Variable_3);
	Parms.CallFunc_TimespanZeroValue_ReturnValue = std::move(CallFunc_TimespanZeroValue_ReturnValue);
	Parms.CallFunc_GetValeriaTimestampDateTime_ReturnValue = std::move(CallFunc_GetValeriaTimestampDateTime_ReturnValue);
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetDateDifferenceInTimespan_OutTimespan = std::move(CallFunc_GetDateDifferenceInTimespan_OutTimespan);
	Parms.CallFunc_Greater_TimespanTimespan_ReturnValue = CallFunc_Greater_TimespanTimespan_ReturnValue;
	Parms.CallFunc_GetTotalSeconds_ReturnValue = CallFunc_GetTotalSeconds_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_BreakTimespan2_Days = CallFunc_BreakTimespan2_Days;
	Parms.CallFunc_BreakTimespan2_Hours = CallFunc_BreakTimespan2_Hours;
	Parms.CallFunc_BreakTimespan2_Minutes = CallFunc_BreakTimespan2_Minutes;
	Parms.CallFunc_BreakTimespan2_Seconds = CallFunc_BreakTimespan2_Seconds;
	Parms.CallFunc_BreakTimespan2_FractionNano = CallFunc_BreakTimespan2_FractionNano;
	Parms.CallFunc_FormatDuration_ReturnValue = std::move(CallFunc_FormatDuration_ReturnValue);
	Parms.CallFunc_Conv_IntToString_ReturnValue = std::move(CallFunc_Conv_IntToString_ReturnValue);
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = std::move(CallFunc_Conv_IntToString_ReturnValue_1);
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default = std::move(K2Node_Select_Default);
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = std::move(CallFunc_Conv_IntToString_ReturnValue_2);
	Parms.K2Node_Select_Default_1 = std::move(K2Node_Select_Default_1);
	Parms.CallFunc_Concat_StrStr_ReturnValue = std::move(CallFunc_Concat_StrStr_ReturnValue);
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = std::move(CallFunc_Concat_StrStr_ReturnValue_1);
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = std::move(CallFunc_Concat_StrStr_ReturnValue_2);
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = std::move(CallFunc_Concat_StrStr_ReturnValue_3);
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = std::move(CallFunc_Concat_StrStr_ReturnValue_4);
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = std::move(CallFunc_Concat_StrStr_ReturnValue_5);
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);
}

}

