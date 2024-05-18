#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ValeriaGatherable

#include "Basic.hpp"

#include "BP_ValeriaGatherable_classes.hpp"
#include "BP_ValeriaGatherable_parameters.hpp"


namespace SDK
{

// Function BP_ValeriaGatherable.BP_ValeriaGatherable_C.BndEvt__BP_ValeriaGatherable_Gatherable_K2Node_ComponentBoundEvent_0_GatherableDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGatherableComponent*             GatherableComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ValeriaGatherable_C::BndEvt__BP_ValeriaGatherable_Gatherable_K2Node_ComponentBoundEvent_0_GatherableDelegate__DelegateSignature(class UGatherableComponent* GatherableComponent, class AValeriaCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ValeriaGatherable_C", "BndEvt__BP_ValeriaGatherable_Gatherable_K2Node_ComponentBoundEvent_0_GatherableDelegate__DelegateSignature");

	Params::BP_ValeriaGatherable_C_BndEvt__BP_ValeriaGatherable_Gatherable_K2Node_ComponentBoundEvent_0_GatherableDelegate__DelegateSignature Parms{};

	Parms.GatherableComponent = GatherableComponent;
	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ValeriaGatherable.BP_ValeriaGatherable_C.BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_1_InteractableClientInteractDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractableComponent*           InteractableComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ValeriaGatherable_C::BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_1_InteractableClientInteractDelegate__DelegateSignature(class UInteractableComponent* InteractableComponent, class AValeriaCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ValeriaGatherable_C", "BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_1_InteractableClientInteractDelegate__DelegateSignature");

	Params::BP_ValeriaGatherable_C_BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_1_InteractableClientInteractDelegate__DelegateSignature Parms{};

	Parms.InteractableComponent = InteractableComponent;
	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ValeriaGatherable.BP_ValeriaGatherable_C.BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_2_InteractableClientInteractDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractableComponent*           InteractableComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ValeriaGatherable_C::BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_2_InteractableClientInteractDelegate__DelegateSignature(class UInteractableComponent* InteractableComponent, class AValeriaCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ValeriaGatherable_C", "BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_2_InteractableClientInteractDelegate__DelegateSignature");

	Params::BP_ValeriaGatherable_C_BndEvt__BP_ValeriaGatherable_Interactable_K2Node_ComponentBoundEvent_2_InteractableClientInteractDelegate__DelegateSignature Parms{};

	Parms.InteractableComponent = InteractableComponent;
	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ValeriaGatherable.BP_ValeriaGatherable_C.ExecuteUbergraph_BP_ValeriaGatherable
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*           K2Node_ComponentBoundEvent_InteractableComponent       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                K2Node_ComponentBoundEvent_character                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsDedicatedServer_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                K2Node_CustomEvent_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsLocallyControlled_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                     CallFunc_AkEventLocation_AkComponent                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventLocation_Playing_ID                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsDedicatedServer_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsDedicatedServer_ReturnValue_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*           K2Node_ComponentBoundEvent_InteractableComponent_1     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                K2Node_ComponentBoundEvent_character_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGatherableComponent*             K2Node_ComponentBoundEvent_gatherableComponent         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                K2Node_ComponentBoundEvent_character_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ValeriaGatherable_C::ExecuteUbergraph_BP_ValeriaGatherable(int32 EntryPoint, class UInteractableComponent* K2Node_ComponentBoundEvent_InteractableComponent, class AValeriaCharacter* K2Node_ComponentBoundEvent_character, bool CallFunc_IsDedicatedServer_ReturnValue, class AValeriaCharacter* K2Node_CustomEvent_Character, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAkComponent* CallFunc_AkEventLocation_AkComponent, int32 CallFunc_AkEventLocation_Playing_ID, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_2, class UInteractableComponent* K2Node_ComponentBoundEvent_InteractableComponent_1, class AValeriaCharacter* K2Node_ComponentBoundEvent_character_1, class UGatherableComponent* K2Node_ComponentBoundEvent_gatherableComponent, class AValeriaCharacter* K2Node_ComponentBoundEvent_character_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ValeriaGatherable_C", "ExecuteUbergraph_BP_ValeriaGatherable");

	Params::BP_ValeriaGatherable_C_ExecuteUbergraph_BP_ValeriaGatherable Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_InteractableComponent = K2Node_ComponentBoundEvent_InteractableComponent;
	Parms.K2Node_ComponentBoundEvent_character = K2Node_ComponentBoundEvent_character;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = std::move(CallFunc_K2_GetActorLocation_ReturnValue);
	Parms.CallFunc_AkEventLocation_AkComponent = CallFunc_AkEventLocation_AkComponent;
	Parms.CallFunc_AkEventLocation_Playing_ID = CallFunc_AkEventLocation_Playing_ID;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_2 = CallFunc_IsDedicatedServer_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_InteractableComponent_1 = K2Node_ComponentBoundEvent_InteractableComponent_1;
	Parms.K2Node_ComponentBoundEvent_character_1 = K2Node_ComponentBoundEvent_character_1;
	Parms.K2Node_ComponentBoundEvent_gatherableComponent = K2Node_ComponentBoundEvent_gatherableComponent;
	Parms.K2Node_ComponentBoundEvent_character_2 = K2Node_ComponentBoundEvent_character_2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ValeriaGatherable.BP_ValeriaGatherable_C.Gathered FX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValeriaCharacter*                Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ValeriaGatherable_C::Gathered_FX(class AValeriaCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ValeriaGatherable_C", "Gathered FX");

	Params::BP_ValeriaGatherable_C_Gathered_FX Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ValeriaGatherable.BP_ValeriaGatherable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ValeriaGatherable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ValeriaGatherable_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ValeriaGatherable.BP_ValeriaGatherable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValeriaGatherable_C::UserConstructionScript(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ValeriaGatherable_C", "UserConstructionScript");

	Params::BP_ValeriaGatherable_C_UserConstructionScript Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ValeriaGatherable.BP_ValeriaGatherable_C.vfx_IGotGathered
// (BlueprintCallable, BlueprintEvent)

void ABP_ValeriaGatherable_C::Vfx_IGotGathered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ValeriaGatherable_C", "vfx_IGotGathered");

	UObject::ProcessEvent(Func, nullptr);
}

}

