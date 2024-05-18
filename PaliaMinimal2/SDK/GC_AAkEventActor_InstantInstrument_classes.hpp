#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_AAkEventActor_InstantInstrument

#include "Basic.hpp"

#include "GC_AkEventActor_Instant_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_AAkEventActor_InstantInstrument.GC_AAkEventActor_InstantInstrument_C
// 0x0000 (0x0048 - 0x0048)
class UGC_AAkEventActor_InstantInstrument_C final : public UGC_AkEventActor_Instant_C
{
public:
	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct FGameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct FVector& CallFunc_BreakGameplayCueParameters_Location, const struct FVector& CallFunc_BreakGameplayCueParameters_Normal, class AActor* CallFunc_BreakGameplayCueParameters_Instigator, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, bool CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event, bool K2Node_DynamicCast_bSuccess) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_AAkEventActor_InstantInstrument_C">();
	}
	static class UGC_AAkEventActor_InstantInstrument_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_AAkEventActor_InstantInstrument_C>();
	}
};
static_assert(alignof(UGC_AAkEventActor_InstantInstrument_C) == 0x000008, "Wrong alignment on UGC_AAkEventActor_InstantInstrument_C");
static_assert(sizeof(UGC_AAkEventActor_InstantInstrument_C) == 0x000048, "Wrong size on UGC_AAkEventActor_InstantInstrument_C");

}

