#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_AkEventActor_Looping

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_AkEventActor_Looping.GC_AkEventActor_Looping_C
// 0x0018 (0x0330 - 0x0318)
class AGC_AkEventActor_Looping_C : public AGameplayCueNotify_Actor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Sound;                                             // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         SoundInstance;                                     // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FadeOutTime;                                       // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnRemove_ReturnValue);
	void PlayAudio(class AActor* Param_Instigator, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_AkEventActor_ReturnValue);
	void StopAudio(bool CallFunc_NotEqual_IntInt_ReturnValue);
	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct FGameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct FVector& CallFunc_BreakGameplayCueParameters_Location, const struct FVector& CallFunc_BreakGameplayCueParameters_Normal, class AActor* CallFunc_BreakGameplayCueParameters_Instigator, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, bool CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy, class AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_AkEventActor_Looping_C">();
	}
	static class AGC_AkEventActor_Looping_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_AkEventActor_Looping_C>();
	}
};
static_assert(alignof(AGC_AkEventActor_Looping_C) == 0x000008, "Wrong alignment on AGC_AkEventActor_Looping_C");
static_assert(sizeof(AGC_AkEventActor_Looping_C) == 0x000330, "Wrong size on AGC_AkEventActor_Looping_C");
static_assert(offsetof(AGC_AkEventActor_Looping_C, DefaultSceneRoot) == 0x000318, "Member 'AGC_AkEventActor_Looping_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AGC_AkEventActor_Looping_C, Sound) == 0x000320, "Member 'AGC_AkEventActor_Looping_C::Sound' has a wrong offset!");
static_assert(offsetof(AGC_AkEventActor_Looping_C, SoundInstance) == 0x000328, "Member 'AGC_AkEventActor_Looping_C::SoundInstance' has a wrong offset!");
static_assert(offsetof(AGC_AkEventActor_Looping_C, FadeOutTime) == 0x00032C, "Member 'AGC_AkEventActor_Looping_C::FadeOutTime' has a wrong offset!");

}

