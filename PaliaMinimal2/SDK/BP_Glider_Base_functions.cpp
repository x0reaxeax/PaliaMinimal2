#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Glider_Base

#include "Basic.hpp"

#include "BP_Glider_Base_classes.hpp"
#include "BP_Glider_Base_parameters.hpp"


namespace SDK
{

// Function BP_Glider_Base.BP_Glider_Base_C.ExecuteUbergraph_BP_Glider_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Glider_Base_C::ExecuteUbergraph_BP_Glider_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Glider_Base_C", "ExecuteUbergraph_BP_Glider_Base");

	Params::BP_Glider_Base_C_ExecuteUbergraph_BP_Glider_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Glider_Base.BP_Glider_Base_C.InitParticles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_IsServer_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Glider_Base_C::InitParticles(bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Glider_Base_C", "InitParticles");

	Params::BP_Glider_Base_C_InitParticles Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Glider_Base.BP_Glider_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Glider_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Glider_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Glider_Base.BP_Glider_Base_C.Set Show Glider Trail VFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShowGliderTrail                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Glider_Base_C::Set_Show_Glider_Trail_VFX(bool ShowGliderTrail)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Glider_Base_C", "Set Show Glider Trail VFX");

	Params::BP_Glider_Base_C_Set_Show_Glider_Trail_VFX Parms{};

	Parms.ShowGliderTrail = ShowGliderTrail;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Glider_Base.BP_Glider_Base_C.ShowDebugTrails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShowDebugTrails                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Glider_Base_C::ShowDebugTrails(bool bShowDebugTrails)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Glider_Base_C", "ShowDebugTrails");

	Params::BP_Glider_Base_C_ShowDebugTrails Parms{};

	Parms.bShowDebugTrails = bShowDebugTrails;

	UObject::ProcessEvent(Func, &Parms);
}

}
