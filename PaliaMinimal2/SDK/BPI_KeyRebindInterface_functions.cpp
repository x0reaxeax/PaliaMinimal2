#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_KeyRebindInterface

#include "Basic.hpp"

#include "BPI_KeyRebindInterface_classes.hpp"
#include "BPI_KeyRebindInterface_parameters.hpp"


namespace SDK
{

// Function BPI_KeyRebindInterface.BPI_KeyRebindInterface_C.ExecutePrePopupAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_CloseKeyRebindMenuType                PrePopupAction                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_KeyRebindInterface_C::ExecutePrePopupAction(E_CloseKeyRebindMenuType PrePopupAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_KeyRebindInterface_C", "ExecutePrePopupAction");

	Params::BPI_KeyRebindInterface_C_ExecutePrePopupAction Parms{};

	Parms.PrePopupAction = PrePopupAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_KeyRebindInterface.BPI_KeyRebindInterface_C.RefreshKeyRebindTips
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyRebind_DisplayResult         KeyRebindResultInfo                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void IBPI_KeyRebindInterface_C::RefreshKeyRebindTips(const struct FKeyRebind_DisplayResult& KeyRebindResultInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_KeyRebindInterface_C", "RefreshKeyRebindTips");

	Params::BPI_KeyRebindInterface_C_RefreshKeyRebindTips Parms{};

	Parms.KeyRebindResultInfo = std::move(KeyRebindResultInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_KeyRebindInterface.BPI_KeyRebindInterface_C.ToggleButtonCheckPopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_KeyRebindInterface_C>OwnerWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_CloseKeyRebindMenuType                PrePopupAction                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_KeyRebindInterface_C::ToggleButtonCheckPopup(TScriptInterface<class IBPI_KeyRebindInterface_C> OwnerWidget, E_CloseKeyRebindMenuType PrePopupAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_KeyRebindInterface_C", "ToggleButtonCheckPopup");

	Params::BPI_KeyRebindInterface_C_ToggleButtonCheckPopup Parms{};

	Parms.OwnerWidget = OwnerWidget;
	Parms.PrePopupAction = PrePopupAction;

	UObject::ProcessEvent(Func, &Parms);
}

}

