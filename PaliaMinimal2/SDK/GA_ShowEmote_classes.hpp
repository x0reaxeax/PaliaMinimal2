#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ShowEmote

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ShowEmote.GA_ShowEmote_C
// 0x0038 (0x0470 - 0x0438)
class UGA_ShowEmote_C final : public UValeriaGASGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0438(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UValeriaGASComponent*                   ValeriaGASComponent;                               // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UValeriaEmoteComponent*                 EmoteComponent;                                    // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UEmoteDataAsset*                        CurEmoteData;                                      // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasBlockedMovement;                               // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasEnforcedPosition;                              // 0x0459(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4176[0x6];                                     // 0x045A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 EmoteTarget;                                       // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsWatchingForMovement;                            // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_ShowEmote(int32 EntryPoint, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class USkeletalMeshComponent* Temp_object_Variable, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class USkeletalMeshComponent* Temp_object_Variable_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, TDelegate<void(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity)> K2Node_CreateDelegate_OutputDelegate_5, float CallFunc_GetEmoteDuration_ReturnValue, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimMontage* CallFunc_GetEmoteMontage_ReturnValue, bool CallFunc_DoesEmoteHave3D_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_K2_CommitAbility_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2, class UValeriaEmoteComponent* CallFunc_GetEmoteComponent_ReturnValue, class UValeriaGASComponent* CallFunc_GetGAS_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_6, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_7, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement_1, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement_2, bool CallFunc_IsExceedingMaxSpeed_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3, float K2Node_CustomEvent_DeltaSeconds, const struct FVector& K2Node_CustomEvent_OldLocation, const struct FVector& K2Node_CustomEvent_OldVelocity, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4, TDelegate<void(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity)> K2Node_CreateDelegate_OutputDelegate_8, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_9, struct FGameplayEventData& K2Node_Event_EventData, bool K2Node_Event_bWasCancelled, class UEmoteDataAsset* K2Node_DynamicCast_AsEmote_Data_Asset, bool K2Node_DynamicCast_bSuccess, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement_3, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_5, TScriptInterface<class IVAL_CustomizableCharacterInterface> K2Node_DynamicCast_AsVAL_Customizable_Character_Interface, bool K2Node_DynamicCast_bSuccess_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_6, class USkeletalMeshComponent* CallFunc_GetHeadMeshComponent_ReturnValue, TScriptInterface<class IVAL_CustomizableCharacterInterface> K2Node_DynamicCast_AsVAL_Customizable_Character_Interface_1, bool K2Node_DynamicCast_bSuccess_2, class USkeletalMeshComponent* CallFunc_GetHeadMeshComponent_ReturnValue_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_10, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_7, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_11, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_8, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_9, class UValeriaEmoteComponent* CallFunc_GetEmoteComponent_ReturnValue_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_10, class UValeriaEmoteComponent* CallFunc_GetEmoteComponent_ReturnValue_2);
	void GetMovement(class UValeriaCharacterMoveComponent** Movement, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UValeriaCharacterMoveComponent* CallFunc_GetValeriaCharacterMovementComponent_ReturnValue);
	void HandleMovement(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnBlendOut_59A6B96C433AC83C58B90AAE9ED05BB8();
	void OnBlendOut_FA732F674D534A664E9F799589F10E40(class FName NotifyName);
	void OnCancelled_59A6B96C433AC83C58B90AAE9ED05BB8();
	void OnCompleted_59A6B96C433AC83C58B90AAE9ED05BB8();
	void OnCompleted_FA732F674D534A664E9F799589F10E40(class FName NotifyName);
	void OnFinish_65FEFC3B45CEC7EA54A45A8FC48AA20C();
	void OnInterrupted_59A6B96C433AC83C58B90AAE9ED05BB8();
	void OnInterrupted_FA732F674D534A664E9F799589F10E40(class FName NotifyName);
	void OnNotifyBegin_FA732F674D534A664E9F799589F10E40(class FName NotifyName);
	void OnNotifyEnd_FA732F674D534A664E9F799589F10E40(class FName NotifyName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ShowEmote_C">();
	}
	static class UGA_ShowEmote_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ShowEmote_C>();
	}
};
static_assert(alignof(UGA_ShowEmote_C) == 0x000008, "Wrong alignment on UGA_ShowEmote_C");
static_assert(sizeof(UGA_ShowEmote_C) == 0x000470, "Wrong size on UGA_ShowEmote_C");
static_assert(offsetof(UGA_ShowEmote_C, UberGraphFrame) == 0x000438, "Member 'UGA_ShowEmote_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_ShowEmote_C, ValeriaGASComponent) == 0x000440, "Member 'UGA_ShowEmote_C::ValeriaGASComponent' has a wrong offset!");
static_assert(offsetof(UGA_ShowEmote_C, EmoteComponent) == 0x000448, "Member 'UGA_ShowEmote_C::EmoteComponent' has a wrong offset!");
static_assert(offsetof(UGA_ShowEmote_C, CurEmoteData) == 0x000450, "Member 'UGA_ShowEmote_C::CurEmoteData' has a wrong offset!");
static_assert(offsetof(UGA_ShowEmote_C, bHasBlockedMovement) == 0x000458, "Member 'UGA_ShowEmote_C::bHasBlockedMovement' has a wrong offset!");
static_assert(offsetof(UGA_ShowEmote_C, bHasEnforcedPosition) == 0x000459, "Member 'UGA_ShowEmote_C::bHasEnforcedPosition' has a wrong offset!");
static_assert(offsetof(UGA_ShowEmote_C, EmoteTarget) == 0x000460, "Member 'UGA_ShowEmote_C::EmoteTarget' has a wrong offset!");
static_assert(offsetof(UGA_ShowEmote_C, bIsWatchingForMovement) == 0x000468, "Member 'UGA_ShowEmote_C::bIsWatchingForMovement' has a wrong offset!");

}

