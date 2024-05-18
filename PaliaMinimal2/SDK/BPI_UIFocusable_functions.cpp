#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_UIFocusable

#include "Basic.hpp"

#include "BPI_UIFocusable_classes.hpp"
#include "BPI_UIFocusable_parameters.hpp"


namespace SDK
{

// Function BPI_UIFocusable.BPI_UIFocusable_C.HandleAccept
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_UIFocusable_C::HandleAccept()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_UIFocusable_C", "HandleAccept");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_UIFocusable.BPI_UIFocusable_C.ShowFocusTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsShow                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_UIFocusable_C::ShowFocusTip(bool bIsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_UIFocusable_C", "ShowFocusTip");

	Params::BPI_UIFocusable_C_ShowFocusTip Parms{};

	Parms.bIsShow = bIsShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_UIFocusable.BPI_UIFocusable_C.IsEmpty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    bIsEmpty                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_UIFocusable_C::IsEmpty(bool* bIsEmpty) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_UIFocusable_C", "IsEmpty");

	Params::BPI_UIFocusable_C_IsEmpty Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsEmpty != nullptr)
		*bIsEmpty = Parms.bIsEmpty;
}

}
