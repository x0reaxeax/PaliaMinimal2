#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GateTeleporter_Parent

#include "Basic.hpp"

#include "BP_GateTeleporter_Parent_classes.hpp"
#include "BP_GateTeleporter_Parent_parameters.hpp"


namespace SDK
{

// Function BP_GateTeleporter_Parent.BP_GateTeleporter_Parent_C.Implementation_OnTeleportOverlapBegin_Server
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AValeriaCharacter*                TeleportedCharacter                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_GateTeleporter_Parent_C::Implementation_OnTeleportOverlapBegin_Server(class AValeriaCharacter* TeleportedCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GateTeleporter_Parent_C", "Implementation_OnTeleportOverlapBegin_Server");

	Params::BP_GateTeleporter_Parent_C_Implementation_OnTeleportOverlapBegin_Server Parms{};

	Parms.TeleportedCharacter = TeleportedCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GateTeleporter_Parent.BP_GateTeleporter_Parent_C.ExecuteUbergraph_BP_GateTeleporter_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                K2Node_Event_TeleportedCharacter                       (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_GateTeleporter_Parent_C::ExecuteUbergraph_BP_GateTeleporter_Parent(int32 EntryPoint, class AValeriaCharacter* K2Node_Event_TeleportedCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GateTeleporter_Parent_C", "ExecuteUbergraph_BP_GateTeleporter_Parent");

	Params::BP_GateTeleporter_Parent_C_ExecuteUbergraph_BP_GateTeleporter_Parent Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_TeleportedCharacter = K2Node_Event_TeleportedCharacter;

	UObject::ProcessEvent(Func, &Parms);
}

}

