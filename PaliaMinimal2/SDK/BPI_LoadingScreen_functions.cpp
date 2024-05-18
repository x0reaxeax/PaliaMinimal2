#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_LoadingScreen

#include "Basic.hpp"

#include "BPI_LoadingScreen_classes.hpp"
#include "BPI_LoadingScreen_parameters.hpp"


namespace SDK
{

// Function BPI_LoadingScreen.BPI_LoadingScreen_C.AddLoadingExtension
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_LoadingScreen_C::AddLoadingExtension(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_LoadingScreen_C", "AddLoadingExtension");

	Params::BPI_LoadingScreen_C_AddLoadingExtension Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_LoadingScreen.BPI_LoadingScreen_C.DisplayLoadingExtension
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Display                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_LoadingScreen_C::DisplayLoadingExtension(bool Display)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_LoadingScreen_C", "DisplayLoadingExtension");

	Params::BPI_LoadingScreen_C_DisplayLoadingExtension Parms{};

	Parms.Display = Display;

	UObject::ProcessEvent(Func, &Parms);
}

}

