#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GliderScript_Basic

#include "Basic.hpp"

#include "BP_GliderScript_Basic_classes.hpp"
#include "BP_GliderScript_Basic_parameters.hpp"


namespace SDK
{

// Function BP_GliderScript_Basic.BP_GliderScript_Basic_C.ExecuteUbergraph_BP_GliderScript_Basic
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_CharacterCustomizationComponent*K2Node_Event_component_1                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVAL_CharacterCustomizationItemBase*K2Node_Event_Item                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, struct FGuid>         K2Node_Event_VariantSelections                         (ConstParm)
// class UPawnMovementComponent*           CallFunc_GetMovementComponent_ReturnValue              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVAL_CharacterCustomizationComponent*K2Node_Event_component                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                     CallFunc_K2_InvalidateTimerHandle_ReturnValue          (NoDestructor, HasGetValueTypeHash)
// class UVAL_CharacterCustomizationComponent*CallFunc_GetCharacterCustomizationComponent_ReturnValue(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_CharacterCustomizationComponent*CallFunc_GetCharacterCustomizationComponent_ReturnValue_1(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVAL_GliderBase*                  K2Node_CustomEvent_Glider_1                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVAL_CharacterCustomizationComponent*CallFunc_GetCharacterCustomizationComponent_ReturnValue_2(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AVAL_GliderBase*                  K2Node_CustomEvent_Glider                              (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                     CallFunc_K2_SetTimerDelegate_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// class UVAL_CharacterCustomizationComponent*CallFunc_GetCharacterCustomizationComponent_ReturnValue_3(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class AVAL_GliderBase* Glider)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class AVAL_GliderBase* Glider)>K2Node_CreateDelegate_OutputDelegate_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_K2_IsValidTimerHandle_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_K2_IsValidTimerHandle_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_CharacterCustomizationComponent*CallFunc_GetCharacterCustomizationComponent_ReturnValue_4(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVAL_CharacterCustomizationComponent*CallFunc_GetCharacterCustomizationComponent_ReturnValue_5(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class AVAL_GliderBase* Glider)>K2Node_CreateDelegate_OutputDelegate_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class AVAL_GliderBase* Glider)>K2Node_CreateDelegate_OutputDelegate_4                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsServer_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GliderScript_Basic_C::ExecuteUbergraph_BP_GliderScript_Basic(int32 EntryPoint, class UVAL_CharacterCustomizationComponent* K2Node_Event_component_1, class UVAL_CharacterCustomizationItemBase* K2Node_Event_Item, TMap<class FName, struct FGuid>& K2Node_Event_VariantSelections, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UVAL_CharacterCustomizationComponent* K2Node_Event_component, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue, class UVAL_CharacterCustomizationComponent* CallFunc_GetCharacterCustomizationComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UVAL_CharacterCustomizationComponent* CallFunc_GetCharacterCustomizationComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AVAL_GliderBase* K2Node_CustomEvent_Glider_1, class UVAL_CharacterCustomizationComponent* CallFunc_GetCharacterCustomizationComponent_ReturnValue_2, class AVAL_GliderBase* K2Node_CustomEvent_Glider, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UVAL_CharacterCustomizationComponent* CallFunc_GetCharacterCustomizationComponent_ReturnValue_3, TDelegate<void(class AVAL_GliderBase* Glider)> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(class AVAL_GliderBase* Glider)> K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, class UVAL_CharacterCustomizationComponent* CallFunc_GetCharacterCustomizationComponent_ReturnValue_4, class UVAL_CharacterCustomizationComponent* CallFunc_GetCharacterCustomizationComponent_ReturnValue_5, TDelegate<void(class AVAL_GliderBase* Glider)> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void(class AVAL_GliderBase* Glider)> K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderScript_Basic_C", "ExecuteUbergraph_BP_GliderScript_Basic");

	Params::BP_GliderScript_Basic_C_ExecuteUbergraph_BP_GliderScript_Basic Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_component_1 = K2Node_Event_component_1;
	Parms.K2Node_Event_Item = K2Node_Event_Item;
	Parms.K2Node_Event_VariantSelections = std::move(K2Node_Event_VariantSelections);
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.K2Node_Event_component = K2Node_Event_component;
	Parms.CallFunc_K2_InvalidateTimerHandle_ReturnValue = std::move(CallFunc_K2_InvalidateTimerHandle_ReturnValue);
	Parms.CallFunc_GetCharacterCustomizationComponent_ReturnValue = CallFunc_GetCharacterCustomizationComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCharacterCustomizationComponent_ReturnValue_1 = CallFunc_GetCharacterCustomizationComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Glider_1 = K2Node_CustomEvent_Glider_1;
	Parms.CallFunc_GetCharacterCustomizationComponent_ReturnValue_2 = CallFunc_GetCharacterCustomizationComponent_ReturnValue_2;
	Parms.K2Node_CustomEvent_Glider = K2Node_CustomEvent_Glider;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = std::move(CallFunc_K2_SetTimerDelegate_ReturnValue);
	Parms.CallFunc_GetCharacterCustomizationComponent_ReturnValue_3 = CallFunc_GetCharacterCustomizationComponent_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue_1 = CallFunc_K2_IsValidTimerHandle_ReturnValue_1;
	Parms.CallFunc_GetCharacterCustomizationComponent_ReturnValue_4 = CallFunc_GetCharacterCustomizationComponent_ReturnValue_4;
	Parms.CallFunc_GetCharacterCustomizationComponent_ReturnValue_5 = CallFunc_GetCharacterCustomizationComponent_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GliderScript_Basic.BP_GliderScript_Basic_C.GliderRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVAL_GliderBase*                  Glider                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_GliderScript_Basic_C::GliderRemoved(class AVAL_GliderBase* Glider)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderScript_Basic_C", "GliderRemoved");

	Params::BP_GliderScript_Basic_C_GliderRemoved Parms{};

	Parms.Glider = Glider;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GliderScript_Basic.BP_GliderScript_Basic_C.GliderSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVAL_GliderBase*                  Glider                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_GliderScript_Basic_C::GliderSpawned(class AVAL_GliderBase* Glider)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderScript_Basic_C", "GliderSpawned");

	Params::BP_GliderScript_Basic_C_GliderSpawned Parms{};

	Parms.Glider = Glider;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GliderScript_Basic.BP_GliderScript_Basic_C.OnApply
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UVAL_CharacterCustomizationComponent*Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVAL_CharacterCustomizationItemBase*Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, struct FGuid>         VariantSelections                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_GliderScript_Basic_C::OnApply(class UVAL_CharacterCustomizationComponent* Component, class UVAL_CharacterCustomizationItemBase* Item, TMap<class FName, struct FGuid>& VariantSelections)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderScript_Basic_C", "OnApply");

	Params::BP_GliderScript_Basic_C_OnApply Parms{};

	Parms.Component = Component;
	Parms.Item = Item;
	Parms.VariantSelections = std::move(VariantSelections);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GliderScript_Basic.BP_GliderScript_Basic_C.OnUninitialize
// (Event, Public, BlueprintEvent)
// Parameters:
// class UVAL_CharacterCustomizationComponent*Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_GliderScript_Basic_C::OnUninitialize(class UVAL_CharacterCustomizationComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderScript_Basic_C", "OnUninitialize");

	Params::BP_GliderScript_Basic_C_OnUninitialize Parms{};

	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GliderScript_Basic.BP_GliderScript_Basic_C.UpdateGliderVelocityVisuals
// (BlueprintCallable, BlueprintEvent)

void UBP_GliderScript_Basic_C::UpdateGliderVelocityVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GliderScript_Basic_C", "UpdateGliderVelocityVisuals");

	UObject::ProcessEvent(Func, nullptr);
}

}
