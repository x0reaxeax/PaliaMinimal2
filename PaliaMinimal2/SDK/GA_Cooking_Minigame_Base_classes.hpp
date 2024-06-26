#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Cooking_Minigame_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Cooking_OneOff_Base_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C
// 0x0010 (0x04F8 - 0x04E8)
class UGA_Cooking_Minigame_Base_C : public UGA_Cooking_OneOff_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Cooking_Minigame_Base_C;         // 0x04E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsDoingOutro;                                      // 0x04F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutroQueued;                                       // 0x04F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          QueueOutroAfterActionAnimation;                    // 0x04F2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Callback_SuccessfulInputReceived(class UMinigameComponentMasterQTE* Comp, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CanPlayMontage(bool* Param_CanPlayMontage, bool CallFunc_IsShuttingDown_NewParam, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void CanPlayMontageDuringMinigame(bool* CanPlayPenaltyMontage, bool CallFunc_CanPlayMontage_CanPlayMontage, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void CanUnlockCharacterDuringAnimation(bool* CanUnlock, bool CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock, bool CallFunc_BooleanAND_ReturnValue);
	void DoOutro();
	void ExecuteUbergraph_GA_Cooking_Minigame_Base(int32 EntryPoint, bool CallFunc_IsShuttingDown_NewParam, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, class FName CallFunc_GetMontageCurrentSectionName_ReturnValue, bool CallFunc_IsShuttingDown_NewParam_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void HandleEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HandleMovementBlockChanged(bool Param_MovementBlocked, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool CallFunc_IsServer_ReturnValue, struct FRecipeConfig& CallFunc_GetRecipeConfig_ReturnValue, bool CallFunc_Server_Collect_ReturnValue, ECrafterState CallFunc_GetCrafterState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void Minigame_OnStateChanged(class UMinigameComponentBase* Comp, EMinigameState PrevState, EMinigameState NewState, bool CallFunc_CanPlayMontage_CanPlayMontage, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_CanPlayMontageDuringMinigame_CanPlayPenaltyMontage);
	void OnAbilityEnd(TDelegate<void(class UMinigameComponentMasterQTE* Comp)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class UMinigameComponentBase* Comp, EMinigameState PrevState, EMinigameState NewState)> K2Node_CreateDelegate_OutputDelegate_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue);
	void OnAbilityStart(TDelegate<void(bool MovementBlocked)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class UMinigameComponentMasterQTE* Comp)> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(class UMinigameComponentBase* Comp, EMinigameState PrevState, EMinigameState NewState)> K2Node_CreateDelegate_OutputDelegate_2, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue);
	void OnOutroStarted();
	void PlayMontage(class FName Montage, class FName Param_MontageSection, bool EndAbilityWhenFinished, bool Force__Used_by_child_outro_, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Queue_Outro();
	void SetMovementBlock(bool bLock, bool* Changed, bool CallFunc_SetMovementBlock_Changed, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Cooking_Minigame_Base_C">();
	}
	static class UGA_Cooking_Minigame_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Cooking_Minigame_Base_C>();
	}
};
static_assert(alignof(UGA_Cooking_Minigame_Base_C) == 0x000008, "Wrong alignment on UGA_Cooking_Minigame_Base_C");
static_assert(sizeof(UGA_Cooking_Minigame_Base_C) == 0x0004F8, "Wrong size on UGA_Cooking_Minigame_Base_C");
static_assert(offsetof(UGA_Cooking_Minigame_Base_C, UberGraphFrame_GA_Cooking_Minigame_Base_C) == 0x0004E8, "Member 'UGA_Cooking_Minigame_Base_C::UberGraphFrame_GA_Cooking_Minigame_Base_C' has a wrong offset!");
static_assert(offsetof(UGA_Cooking_Minigame_Base_C, IsDoingOutro) == 0x0004F0, "Member 'UGA_Cooking_Minigame_Base_C::IsDoingOutro' has a wrong offset!");
static_assert(offsetof(UGA_Cooking_Minigame_Base_C, OutroQueued) == 0x0004F1, "Member 'UGA_Cooking_Minigame_Base_C::OutroQueued' has a wrong offset!");
static_assert(offsetof(UGA_Cooking_Minigame_Base_C, QueueOutroAfterActionAnimation) == 0x0004F2, "Member 'UGA_Cooking_Minigame_Base_C::QueueOutroAfterActionAnimation' has a wrong offset!");

}

