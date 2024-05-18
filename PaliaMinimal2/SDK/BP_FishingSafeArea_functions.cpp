#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FishingSafeArea

#include "Basic.hpp"

#include "BP_FishingSafeArea_classes.hpp"
#include "BP_FishingSafeArea_parameters.hpp"


namespace SDK
{

// Function BP_FishingSafeArea.BP_FishingSafeArea_C.ExecuteUbergraph_BP_FishingSafeArea
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_Event_DeltaSeconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Ak_Object_Velocity_Set_Previous_Location      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Ak_Object_Velocity_VectorLength               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Ak_Object_Velocity_VectorLengthClamped        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventComponent_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetComponentScale_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_VLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Ak_Object_Velocity_Delta_Time_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FishingSafeArea_C::ExecuteUbergraph_BP_FishingSafeArea(int32 EntryPoint, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_Ak_Object_Velocity_Set_Previous_Location, double CallFunc_Ak_Object_Velocity_VectorLength, double CallFunc_Ak_Object_Velocity_VectorLengthClamped, int32 CallFunc_AkEventComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, double CallFunc_Ak_Object_Velocity_Delta_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FishingSafeArea_C", "ExecuteUbergraph_BP_FishingSafeArea");

	Params::BP_FishingSafeArea_C_ExecuteUbergraph_BP_FishingSafeArea Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Ak_Object_Velocity_Set_Previous_Location = std::move(CallFunc_Ak_Object_Velocity_Set_Previous_Location);
	Parms.CallFunc_Ak_Object_Velocity_VectorLength = CallFunc_Ak_Object_Velocity_VectorLength;
	Parms.CallFunc_Ak_Object_Velocity_VectorLengthClamped = CallFunc_Ak_Object_Velocity_VectorLengthClamped;
	Parms.CallFunc_AkEventComponent_ReturnValue = CallFunc_AkEventComponent_ReturnValue;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = std::move(CallFunc_K2_GetComponentScale_ReturnValue);
	Parms.CallFunc_VLerp_ReturnValue = std::move(CallFunc_VLerp_ReturnValue);
	Parms.CallFunc_Ak_Object_Velocity_Delta_Time_ImplicitCast = CallFunc_Ak_Object_Velocity_Delta_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FishingSafeArea.BP_FishingSafeArea_C.FishLost
// (BlueprintCallable, BlueprintEvent)

void ABP_FishingSafeArea_C::FishLost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FishingSafeArea_C", "FishLost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FishingSafeArea.BP_FishingSafeArea_C.HandleFishLost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFishingViewComponent*            FishingView                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetSafeZoneLength_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Multiply_DoubleDouble_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Conv_DoubleToVector_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Multiply_DoubleDouble_A_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FishingSafeArea_C::HandleFishLost(class UFishingViewComponent* FishingView, float CallFunc_GetSafeZoneLength_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FishingSafeArea_C", "HandleFishLost");

	Params::BP_FishingSafeArea_C_HandleFishLost Parms{};

	Parms.FishingView = FishingView;
	Parms.CallFunc_GetSafeZoneLength_ReturnValue = CallFunc_GetSafeZoneLength_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = std::move(CallFunc_Conv_DoubleToVector_ReturnValue);
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FishingSafeArea.BP_FishingSafeArea_C.InitSafeZoneColorParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     CallFunc_GetVectorParameterValue_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_GetVectorParameterValue_ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_GetVectorParameterValue_ReturnValue_2         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_GetVectorParameterValue_ReturnValue_3         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_GetVectorParameterValue_ReturnValue_4         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FishingSafeArea_C::InitSafeZoneColorParams(const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_2, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_3, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FishingSafeArea_C", "InitSafeZoneColorParams");

	Params::BP_FishingSafeArea_C_InitSafeZoneColorParams Parms{};

	Parms.CallFunc_GetVectorParameterValue_ReturnValue = std::move(CallFunc_GetVectorParameterValue_ReturnValue);
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_1 = std::move(CallFunc_GetVectorParameterValue_ReturnValue_1);
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_2 = std::move(CallFunc_GetVectorParameterValue_ReturnValue_2);
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_3 = std::move(CallFunc_GetVectorParameterValue_ReturnValue_3);
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_4 = std::move(CallFunc_GetVectorParameterValue_ReturnValue_4);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FishingSafeArea.BP_FishingSafeArea_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FishingSafeArea_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FishingSafeArea_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FishingSafeArea.BP_FishingSafeArea_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_FishingSafeArea_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FishingSafeArea_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FishingSafeArea.BP_FishingSafeArea_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FishingSafeArea_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FishingSafeArea_C", "ReceiveTick");

	Params::BP_FishingSafeArea_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FishingSafeArea.BP_FishingSafeArea_C.Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_FishingSafeArea_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FishingSafeArea_C", "Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FishingSafeArea.BP_FishingSafeArea_C.Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_FishingSafeArea_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FishingSafeArea_C", "Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FishingSafeArea.BP_FishingSafeArea_C.UpdateFishingSafeZone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFishingMiniGameViewState        ViewState                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFishingComponent*                Fishing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFishingViewComponent*            FishingView                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EFishingSafeTier                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventComponent_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFishingSafeTier                        CallFunc_GetCurrentSafetyTier_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetComponentLocation_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsVisible_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetPlayerController_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetPlayerController_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsLocalController_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsLocalController_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventComponent_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                      K2Node_MakeStruct_SlateColor                           ()
// struct FSlateColor                      K2Node_MakeStruct_SlateColor_1                         ()
// float                                   CallFunc_GetSafeZoneLength_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFishingMiniGameViewState        CallFunc_GetViewState_ReturnValue                      ()
// double                                  CallFunc_Multiply_DoubleDouble_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Conv_DoubleToVector_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_BreakTransform_Location                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         CallFunc_BreakTransform_Rotation                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_BreakTransform_Scale                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_GetSafeZoneCenter_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Add_VectorVector_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       CallFunc_K2_SetActorLocationAndRotation_SweepHitResult (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    CallFunc_K2_SetActorLocationAndRotation_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Conv_LinearColorToVector_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Vector_Distance_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_Multiply_DoubleDouble_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_FClamp_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_LinearColorLerp_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                      K2Node_MakeStruct_SlateColor_2                         ()
// struct FSlateColor                      K2Node_Select_Default                                  (ConstParm)
// double                                  CallFunc_Multiply_DoubleDouble_A_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_LinearColorLerp_Alpha_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FishingSafeArea_C::UpdateFishingSafeZone(const struct FFishingMiniGameViewState& ViewState, class UFishingComponent* Fishing, class UFishingViewComponent* FishingView, EFishingSafeTier Temp_byte_Variable, int32 CallFunc_AkEventComponent_ReturnValue, EFishingSafeTier CallFunc_GetCurrentSafetyTier_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_IsLocalController_ReturnValue, bool CallFunc_IsLocalController_ReturnValue_1, int32 CallFunc_AkEventComponent_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, float CallFunc_GetSafeZoneLength_ReturnValue, const struct FFishingMiniGameViewState& CallFunc_GetViewState_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetSafeZoneCenter_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, struct FSlateColor& K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_LinearColorLerp_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FishingSafeArea_C", "UpdateFishingSafeZone");

	Params::BP_FishingSafeArea_C_UpdateFishingSafeZone Parms{};

	Parms.ViewState = std::move(ViewState);
	Parms.Fishing = Fishing;
	Parms.FishingView = FishingView;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_AkEventComponent_ReturnValue = CallFunc_AkEventComponent_ReturnValue;
	Parms.CallFunc_GetCurrentSafetyTier_ReturnValue = CallFunc_GetCurrentSafetyTier_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = std::move(CallFunc_K2_GetComponentLocation_ReturnValue);
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;
	Parms.CallFunc_IsLocalController_ReturnValue_1 = CallFunc_IsLocalController_ReturnValue_1;
	Parms.CallFunc_AkEventComponent_ReturnValue_1 = CallFunc_AkEventComponent_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateColor = std::move(K2Node_MakeStruct_SlateColor);
	Parms.K2Node_MakeStruct_SlateColor_1 = std::move(K2Node_MakeStruct_SlateColor_1);
	Parms.CallFunc_GetSafeZoneLength_ReturnValue = CallFunc_GetSafeZoneLength_ReturnValue;
	Parms.CallFunc_GetViewState_ReturnValue = std::move(CallFunc_GetViewState_ReturnValue);
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = std::move(CallFunc_Conv_DoubleToVector_ReturnValue);
	Parms.CallFunc_BreakTransform_Location = std::move(CallFunc_BreakTransform_Location);
	Parms.CallFunc_BreakTransform_Rotation = std::move(CallFunc_BreakTransform_Rotation);
	Parms.CallFunc_BreakTransform_Scale = std::move(CallFunc_BreakTransform_Scale);
	Parms.CallFunc_GetSafeZoneCenter_ReturnValue = std::move(CallFunc_GetSafeZoneCenter_ReturnValue);
	Parms.CallFunc_Add_VectorVector_ReturnValue = std::move(CallFunc_Add_VectorVector_ReturnValue);
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = std::move(CallFunc_K2_SetActorLocationAndRotation_SweepHitResult);
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = std::move(CallFunc_Conv_LinearColorToVector_ReturnValue);
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = std::move(CallFunc_LinearColorLerp_ReturnValue);
	Parms.K2Node_MakeStruct_SlateColor_2 = std::move(K2Node_MakeStruct_SlateColor_2);
	Parms.K2Node_Select_Default = std::move(K2Node_Select_Default);
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_LinearColorLerp_Alpha_ImplicitCast = CallFunc_LinearColorLerp_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);
}

}

