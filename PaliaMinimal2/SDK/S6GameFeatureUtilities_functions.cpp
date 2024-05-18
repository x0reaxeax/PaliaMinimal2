#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S6GameFeatureUtilities

#include "Basic.hpp"

#include "S6GameFeatureUtilities_classes.hpp"
#include "S6GameFeatureUtilities_parameters.hpp"


namespace SDK
{

// DelegateFunction S6GameFeatureUtilities.S6GenericAssetRegistryInstance.OnAssetsRegistered__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class US6GenericAssetRegistryInstance*  RegistryInstance                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSet<TSoftObjectPtr<class UObject>>     Assets                                                 (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)

void US6GenericAssetRegistryInstance::OnAssetsRegistered__DelegateSignature(class US6GenericAssetRegistryInstance* RegistryInstance, TSet<TSoftObjectPtr<class UObject>>& Assets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S6GenericAssetRegistryInstance", "OnAssetsRegistered__DelegateSignature");

	Params::S6GenericAssetRegistryInstance_OnAssetsRegistered__DelegateSignature Parms{};

	Parms.RegistryInstance = RegistryInstance;
	Parms.Assets = std::move(Assets);

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction S6GameFeatureUtilities.S6GenericAssetRegistryInstance.OnAssetsUnregistered__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class US6GenericAssetRegistryInstance*  RegistryInstance                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSet<TSoftObjectPtr<class UObject>>     Assets                                                 (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)

void US6GenericAssetRegistryInstance::OnAssetsUnregistered__DelegateSignature(class US6GenericAssetRegistryInstance* RegistryInstance, TSet<TSoftObjectPtr<class UObject>>& Assets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S6GenericAssetRegistryInstance", "OnAssetsUnregistered__DelegateSignature");

	Params::S6GenericAssetRegistryInstance_OnAssetsUnregistered__DelegateSignature Parms{};

	Parms.RegistryInstance = RegistryInstance;
	Parms.Assets = std::move(Assets);

	UObject::ProcessEvent(Func, &Parms);
}


// Function S6GameFeatureUtilities.S6GenericAssetRegistryInstance.RegisterAssets
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<TSoftObjectPtr<class UObject>>     Assets                                                 (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)

void US6GenericAssetRegistryInstance::RegisterAssets(TSet<TSoftObjectPtr<class UObject>>& Assets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S6GenericAssetRegistryInstance", "RegisterAssets");

	Params::S6GenericAssetRegistryInstance_RegisterAssets Parms{};

	Parms.Assets = std::move(Assets);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function S6GameFeatureUtilities.S6GenericAssetRegistryInstance.UnregisterAssets
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<TSoftObjectPtr<class UObject>>     Assets                                                 (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)

void US6GenericAssetRegistryInstance::UnregisterAssets(TSet<TSoftObjectPtr<class UObject>>& Assets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S6GenericAssetRegistryInstance", "UnregisterAssets");

	Params::S6GenericAssetRegistryInstance_UnregisterAssets Parms{};

	Parms.Assets = std::move(Assets);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function S6GameFeatureUtilities.S6GenericAssetRegistrySubsystem.GetRegistryInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class US6GenericAssetRegistryDefinition*Registry                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class US6GenericAssetRegistryInstance*  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class US6GenericAssetRegistryInstance* US6GenericAssetRegistrySubsystem::GetRegistryInstance(class US6GenericAssetRegistryDefinition* Registry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("S6GenericAssetRegistrySubsystem", "GetRegistryInstance");

	Params::S6GenericAssetRegistrySubsystem_GetRegistryInstance Parms{};

	Parms.Registry = Registry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

