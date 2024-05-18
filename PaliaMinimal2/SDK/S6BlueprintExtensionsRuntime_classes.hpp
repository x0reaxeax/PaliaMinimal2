#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S6BlueprintExtensionsRuntime

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class S6BlueprintExtensionsRuntime.S6BPFunctorObjectBase
// 0x0000 (0x0028 - 0x0028)
class US6BPFunctorObjectBase : public UObject
{
public:
	void SelfDestruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S6BPFunctorObjectBase">();
	}
	static class US6BPFunctorObjectBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<US6BPFunctorObjectBase>();
	}
};
static_assert(alignof(US6BPFunctorObjectBase) == 0x000008, "Wrong alignment on US6BPFunctorObjectBase");
static_assert(sizeof(US6BPFunctorObjectBase) == 0x000028, "Wrong size on US6BPFunctorObjectBase");

}

