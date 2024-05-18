#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WorldPersistGatherable_Base

#include "Basic.hpp"

#include "BP_WorldPersistGatherable_Base_classes.hpp"
#include "BP_WorldPersistGatherable_Base_parameters.hpp"


namespace SDK
{

// Function BP_WorldPersistGatherable_Base.BP_WorldPersistGatherable_Base_C.BPIE_GatherableDisabled
// (Event, Protected, BlueprintEvent)

void ABP_WorldPersistGatherable_Base_C::BPIE_GatherableDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WorldPersistGatherable_Base_C", "BPIE_GatherableDisabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WorldPersistGatherable_Base.BP_WorldPersistGatherable_Base_C.BPIE_GatherableEnabled
// (Event, Protected, BlueprintEvent)

void ABP_WorldPersistGatherable_Base_C::BPIE_GatherableEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WorldPersistGatherable_Base_C", "BPIE_GatherableEnabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WorldPersistGatherable_Base.BP_WorldPersistGatherable_Base_C.BPIE_GatherableGathered
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AValeriaCharacter*                GatheringCharacter                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_WorldPersistGatherable_Base_C::BPIE_GatherableGathered(class AValeriaCharacter* GatheringCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WorldPersistGatherable_Base_C", "BPIE_GatherableGathered");

	Params::BP_WorldPersistGatherable_Base_C_BPIE_GatherableGathered Parms{};

	Parms.GatheringCharacter = GatheringCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WorldPersistGatherable_Base.BP_WorldPersistGatherable_Base_C.ExecuteUbergraph_BP_WorldPersistGatherable_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                K2Node_Event_GatheringCharacter                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                     CallFunc_AkEventLocation_AkComponent                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventLocation_Playing_ID                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WorldPersistGatherable_Base_C::ExecuteUbergraph_BP_WorldPersistGatherable_Base(int32 EntryPoint, class AValeriaCharacter* K2Node_Event_GatheringCharacter, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAkComponent* CallFunc_AkEventLocation_AkComponent, int32 CallFunc_AkEventLocation_Playing_ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WorldPersistGatherable_Base_C", "ExecuteUbergraph_BP_WorldPersistGatherable_Base");

	Params::BP_WorldPersistGatherable_Base_C_ExecuteUbergraph_BP_WorldPersistGatherable_Base Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_GatheringCharacter = K2Node_Event_GatheringCharacter;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = std::move(CallFunc_K2_GetActorLocation_ReturnValue);
	Parms.CallFunc_AkEventLocation_AkComponent = CallFunc_AkEventLocation_AkComponent;
	Parms.CallFunc_AkEventLocation_Playing_ID = CallFunc_AkEventLocation_Playing_ID;

	UObject::ProcessEvent(Func, &Parms);
}

}
