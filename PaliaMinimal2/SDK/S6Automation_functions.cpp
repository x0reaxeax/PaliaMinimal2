#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S6Automation

#include "Basic.hpp"

#include "S6Automation_classes.hpp"
#include "S6Automation_parameters.hpp"


namespace SDK
{

// Function S6Automation.S6Auto_SuiteSubsystem.RunSuites
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class US6Auto_Suite*>            Suites                                                 (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void US6Auto_SuiteSubsystem::RunSuites(TArray<class US6Auto_Suite*>& Suites)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S6Auto_SuiteSubsystem", "RunSuites");

	Params::S6Auto_SuiteSubsystem_RunSuites Parms{};

	Parms.Suites = std::move(Suites);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function S6Automation.S6Auto_SuiteStepScript.MarkStepCompleted
// (Final, Native, Protected, BlueprintCallable)

void US6Auto_SuiteStepScript::MarkStepCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S6Auto_SuiteStepScript", "MarkStepCompleted");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function S6Automation.S6Auto_SuiteStepScript.MarkStepFailed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           ErrorMessage                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6Auto_SuiteStepScript::MarkStepFailed(const class FString& ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S6Auto_SuiteStepScript", "MarkStepFailed");

	Params::S6Auto_SuiteStepScript_MarkStepFailed Parms{};

	Parms.ErrorMessage = std::move(ErrorMessage);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function S6Automation.S6Auto_SuiteStepScript.StartStep
// (Event, Public, BlueprintEvent)

void US6Auto_SuiteStepScript::StartStep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S6Auto_SuiteStepScript", "StartStep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function S6Automation.S6Auto_SuiteStepScript.GetScriptDisplayName
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class US6Auto_SuiteStepPayload*         ScriptPayload                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString US6Auto_SuiteStepScript::GetScriptDisplayName(class US6Auto_SuiteStepPayload* ScriptPayload) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S6Auto_SuiteStepScript", "GetScriptDisplayName");

	Params::S6Auto_SuiteStepScript_GetScriptDisplayName Parms{};

	Parms.ScriptPayload = ScriptPayload;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function S6Automation.S6AutoStatics.GetAllSuites
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<TSoftObjectPtr<class US6Auto_Suite>>ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TSoftObjectPtr<class US6Auto_Suite>> US6AutoStatics::GetAllSuites()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("S6AutoStatics", "GetAllSuites");

	Params::S6AutoStatics_GetAllSuites Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function S6Automation.S6AutoStatics.GetSuitesFromAssetName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                             SuiteAssetName                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TSoftObjectPtr<class US6Auto_Suite>>ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TSoftObjectPtr<class US6Auto_Suite>> US6AutoStatics::GetSuitesFromAssetName(class FName& SuiteAssetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("S6AutoStatics", "GetSuitesFromAssetName");

	Params::S6AutoStatics_GetSuitesFromAssetName Parms{};

	Parms.SuiteAssetName = SuiteAssetName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function S6Automation.S6AutoStatics.GetSuitesFromId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           SuiteId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TSoftObjectPtr<class US6Auto_Suite>>ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TSoftObjectPtr<class US6Auto_Suite>> US6AutoStatics::GetSuitesFromId(const class FString& SuiteId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("S6AutoStatics", "GetSuitesFromId");

	Params::S6AutoStatics_GetSuitesFromId Parms{};

	Parms.SuiteId = std::move(SuiteId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

