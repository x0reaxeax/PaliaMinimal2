#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_RequestEntry_CM

#include "Basic.hpp"

#include "BPI_RequestEntry_CM_classes.hpp"
#include "BPI_RequestEntry_CM_parameters.hpp"


namespace SDK
{

// Function BPI_RequestEntry_CM.BPI_RequestEntry_CM_C.SetupBinds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_RequestsPanel_CM_C*          RequestPanel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_RequestEntry_CM_C::SetupBinds(class UWBP_RequestsPanel_CM_C* RequestPanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_RequestEntry_CM_C", "SetupBinds");

	Params::BPI_RequestEntry_CM_C_SetupBinds Parms{};

	Parms.RequestPanel = RequestPanel;

	UObject::ProcessEvent(Func, &Parms);
}

}
