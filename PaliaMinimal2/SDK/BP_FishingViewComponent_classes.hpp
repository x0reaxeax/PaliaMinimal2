#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FishingViewComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "Palia_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FishingViewComponent.BP_FishingViewComponent_C
// 0x0030 (0x0330 - 0x0300)
class UBP_FishingViewComponent_C final : public UFishingViewComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         AkIdForFishCastingSfx;                             // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ACF[0x4];                                     // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             ReelingChanged;                                    // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_Bobber_C*                           CachedBobber;                                      // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPhysmatEffect_C*                       PhysmatEffectData;                                 // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Is_Bobber_in_Water_(bool* IsInWater, EFishingMiniGameState Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, const struct FFishingMiniGameViewState& CallFunc_GetViewState_ReturnValue, bool K2Node_Select_Default);
	void OnFishingBobbleBeforeDestroyed(class AActor* bobble);
	void OnNibbled_Event_0(class UFishingViewComponent* FishingView, class UFishingComponent* Source, int32 FishNumber);
	void ReceiveBeginPlay();
	void OnFishingBobberWasCreated_Event_0(class UFishingViewComponent* FishingView, class AActor* bobble);
	void OnFishIsBitingChanged_Event(class UFishingViewComponent* FishingView, bool IsBiting);
	void OnViewWasUpdatedEvent(const struct FFishingMiniGameViewState& ViewState, class UFishingComponent* Source);
	void OnMiniGameStateChanged(EFishingMiniGameState PreviousState, EFishingMiniGameState NewState, class UFishingComponent* Source);
	void OnBobberHitSomething(EFishingBobberHitSomethingResult Result, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& ImpactPoint, class UPhysicalMaterial* PhysMat);
	void OnReceivedFishingEncouragement(class UFishingComponent* Source, class AValeriaCharacter* FromVc);
	void ReelingChanged__DelegateSignature(bool IsReeling);
	void ExecuteUbergraph_BP_FishingViewComponent(int32 EntryPoint, class AActor* CallFunc_GetActorBobber_ReturnValue, TDelegate<void(class UFishingViewComponent* FishingView, class AActor* bobble)> K2Node_CreateDelegate_OutputDelegate, class UFishingViewComponent* K2Node_CustomEvent_FishingView_2, class UFishingComponent* K2Node_CustomEvent_Source_1, int32 K2Node_CustomEvent_fishNumber, class AActor* CallFunc_GetActorBobber_ReturnValue_1, class ABP_Bobber_C* K2Node_DynamicCast_AsBP_Bobber, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetActorBobber_ReturnValue_2, class ABP_Bobber_C* K2Node_DynamicCast_AsBP_Bobber_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetActorBobber_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, class ABP_Bobber_C* K2Node_DynamicCast_AsBP_Bobber_2, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetActorBobber_ReturnValue_4, class AActor* CallFunc_GetActorFish_ReturnValue, class ABP_Bobber_C* K2Node_DynamicCast_AsBP_Bobber_3, bool K2Node_DynamicCast_bSuccess_3, class AActor* CallFunc_GetActorBobber_ReturnValue_5, class ABP_Bobber_C* K2Node_DynamicCast_AsBP_Bobber_4, bool K2Node_DynamicCast_bSuccess_4, class UFishingViewComponent* K2Node_CustomEvent_FishingView_1, class AActor* K2Node_CustomEvent_bobble, class UFishingViewComponent* K2Node_CustomEvent_FishingView, bool K2Node_CustomEvent_isBiting, class AActor* CallFunc_GetActorBobber_ReturnValue_6, class ABP_Bobber_C* K2Node_DynamicCast_AsBP_Bobber_5, bool K2Node_DynamicCast_bSuccess_5, const struct FFishingMiniGameViewState& K2Node_Event_viewState, class UFishingComponent* K2Node_Event_source_1, EFishingMiniGameState K2Node_Event_PreviousState, EFishingMiniGameState K2Node_Event_NewState, class UFishingComponent* K2Node_Event_source, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, class AActor* K2Node_Event_bobble, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_AkEventActor_ReturnValue, class AActor* CallFunc_GetActorRod_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_Rod_EquipView_C* K2Node_DynamicCast_AsBP_Rod_Equip_View, bool K2Node_DynamicCast_bSuccess_6, class AActor* CallFunc_GetOwner_ReturnValue_2, class AActor* CallFunc_GetActorRod_ReturnValue_1, int32 CallFunc_AkEventActor_ReturnValue_1, class ABP_Rod_EquipView_C* K2Node_DynamicCast_AsBP_Rod_Equip_View_1, bool K2Node_DynamicCast_bSuccess_7, class AActor* CallFunc_GetActorBobber_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_1, EFishingBobberHitSomethingResult K2Node_Event_Result, class AActor* K2Node_Event_OtherActor, class UPrimitiveComponent* K2Node_Event_OtherComp, const struct FVector& K2Node_Event_ImpactPoint, class UPhysicalMaterial* K2Node_Event_PhysMat, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UAkComponent* CallFunc_AkEventLocation_AkComponent, int32 CallFunc_AkEventLocation_Playing_ID, class UValeriaWaterBodyComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetActorBobber_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_2, class UFishingComponent* K2Node_CustomEvent_Source, class AValeriaCharacter* K2Node_CustomEvent_fromVc, TDelegate<void(class UFishingComponent* Source, class AValeriaCharacter* FromVc)> K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IVAL_CustomizableCharacterInterface> CallFunc_GetHeadMeshComponent_self_CastInput, class USkeletalMeshComponent* CallFunc_GetHeadMeshComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class ABP_ValeriaCharacter_C* K2Node_DynamicCast_AsBP_Valeria_Character, bool K2Node_DynamicCast_bSuccess_8, class UFishingComponent* CallFunc_GetFishing_ReturnValue, TDelegate<void(class UFishingViewComponent* FishingView, class UFishingComponent* Source, int32 FishNumber)> K2Node_CreateDelegate_OutputDelegate_2, class AActor* CallFunc_GetActorBobber_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_3, class ABP_Bobber_C* K2Node_DynamicCast_AsBP_Bobber_6, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_IsValid_ReturnValue_4, TDelegate<void(class UFishingViewComponent* FishingView, bool IsBiting)> K2Node_CreateDelegate_OutputDelegate_3, const struct FStruct_Physmat& CallFunc_GetSurfaceEffect_Value, bool CallFunc_GetSurfaceEffect_ReturnValue, class UAkComponent* CallFunc_AkEventLocation_AkComponent_1, int32 CallFunc_AkEventLocation_Playing_ID_1, double CallFunc_AkSetRTPC_Value_ImplicitCast);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FishingViewComponent_C">();
	}
	static class UBP_FishingViewComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FishingViewComponent_C>();
	}
};
static_assert(alignof(UBP_FishingViewComponent_C) == 0x000010, "Wrong alignment on UBP_FishingViewComponent_C");
static_assert(sizeof(UBP_FishingViewComponent_C) == 0x000330, "Wrong size on UBP_FishingViewComponent_C");
static_assert(offsetof(UBP_FishingViewComponent_C, UberGraphFrame) == 0x000300, "Member 'UBP_FishingViewComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FishingViewComponent_C, AkIdForFishCastingSfx) == 0x000308, "Member 'UBP_FishingViewComponent_C::AkIdForFishCastingSfx' has a wrong offset!");
static_assert(offsetof(UBP_FishingViewComponent_C, ReelingChanged) == 0x000310, "Member 'UBP_FishingViewComponent_C::ReelingChanged' has a wrong offset!");
static_assert(offsetof(UBP_FishingViewComponent_C, CachedBobber) == 0x000320, "Member 'UBP_FishingViewComponent_C::CachedBobber' has a wrong offset!");
static_assert(offsetof(UBP_FishingViewComponent_C, PhysmatEffectData) == 0x000328, "Member 'UBP_FishingViewComponent_C::PhysmatEffectData' has a wrong offset!");

}
