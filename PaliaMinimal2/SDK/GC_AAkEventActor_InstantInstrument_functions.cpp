#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_AAkEventActor_InstantInstrument

#include "Basic.hpp"

#include "GC_AAkEventActor_InstantInstrument_classes.hpp"
#include "GC_AAkEventActor_InstantInstrument_parameters.hpp"


namespace SDK
{

// Function GC_AAkEventActor_InstantInstrument.GC_AAkEventActor_InstantInstrument_C.OnExecute
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakGameplayCueParameters_NormalizedMagnitude(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakGameplayCueParameters_RawMagnitude       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     CallFunc_BreakGameplayCueParameters_EffectContext      ()
// struct FGameplayTag                     CallFunc_BreakGameplayCueParameters_MatchedTagName     (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     CallFunc_BreakGameplayCueParameters_OriginalTag        (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            CallFunc_BreakGameplayCueParameters_AggregatedSourceTags()
// struct FGameplayTagContainer            CallFunc_BreakGameplayCueParameters_AggregatedTargetTags()
// struct FVector                          CallFunc_BreakGameplayCueParameters_Location           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_BreakGameplayCueParameters_Normal             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_BreakGameplayCueParameters_Instigator         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_BreakGameplayCueParameters_EffectCauser       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          CallFunc_BreakGameplayCueParameters_SourceObject       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*                CallFunc_BreakGameplayCueParameters_PhysicalMaterial   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_BreakGameplayCueParameters_GameplayEffectLevel(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_BreakGameplayCueParameters_AbilityLevel       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*                  CallFunc_BreakGameplayCueParameters_TargetAttachComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*                    K2Node_DynamicCast_AsAk_Audio_Event                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGC_AAkEventActor_InstantInstrument_C::OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct FGameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct FVector& CallFunc_BreakGameplayCueParameters_Location, const struct FVector& CallFunc_BreakGameplayCueParameters_Normal, class AActor* CallFunc_BreakGameplayCueParameters_Instigator, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, bool CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event, bool K2Node_DynamicCast_bSuccess) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_AAkEventActor_InstantInstrument_C", "OnExecute");

	Params::GC_AAkEventActor_InstantInstrument_C_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.CallFunc_BreakGameplayCueParameters_NormalizedMagnitude = CallFunc_BreakGameplayCueParameters_NormalizedMagnitude;
	Parms.CallFunc_BreakGameplayCueParameters_RawMagnitude = CallFunc_BreakGameplayCueParameters_RawMagnitude;
	Parms.CallFunc_BreakGameplayCueParameters_EffectContext = std::move(CallFunc_BreakGameplayCueParameters_EffectContext);
	Parms.CallFunc_BreakGameplayCueParameters_MatchedTagName = std::move(CallFunc_BreakGameplayCueParameters_MatchedTagName);
	Parms.CallFunc_BreakGameplayCueParameters_OriginalTag = std::move(CallFunc_BreakGameplayCueParameters_OriginalTag);
	Parms.CallFunc_BreakGameplayCueParameters_AggregatedSourceTags = std::move(CallFunc_BreakGameplayCueParameters_AggregatedSourceTags);
	Parms.CallFunc_BreakGameplayCueParameters_AggregatedTargetTags = std::move(CallFunc_BreakGameplayCueParameters_AggregatedTargetTags);
	Parms.CallFunc_BreakGameplayCueParameters_Location = std::move(CallFunc_BreakGameplayCueParameters_Location);
	Parms.CallFunc_BreakGameplayCueParameters_Normal = std::move(CallFunc_BreakGameplayCueParameters_Normal);
	Parms.CallFunc_BreakGameplayCueParameters_Instigator = CallFunc_BreakGameplayCueParameters_Instigator;
	Parms.CallFunc_BreakGameplayCueParameters_EffectCauser = CallFunc_BreakGameplayCueParameters_EffectCauser;
	Parms.CallFunc_BreakGameplayCueParameters_SourceObject = CallFunc_BreakGameplayCueParameters_SourceObject;
	Parms.CallFunc_BreakGameplayCueParameters_PhysicalMaterial = CallFunc_BreakGameplayCueParameters_PhysicalMaterial;
	Parms.CallFunc_BreakGameplayCueParameters_GameplayEffectLevel = CallFunc_BreakGameplayCueParameters_GameplayEffectLevel;
	Parms.CallFunc_BreakGameplayCueParameters_AbilityLevel = CallFunc_BreakGameplayCueParameters_AbilityLevel;
	Parms.CallFunc_BreakGameplayCueParameters_TargetAttachComponent = CallFunc_BreakGameplayCueParameters_TargetAttachComponent;
	Parms.CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy = CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy;
	Parms.K2Node_DynamicCast_AsAk_Audio_Event = K2Node_DynamicCast_AsAk_Audio_Event;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

