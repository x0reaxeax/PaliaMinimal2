#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_Gather

#include "Basic.hpp"

#include "AN_EventTag_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AN_Gather.AN_Gather_C
// 0x0000 (0x0040 - 0x0040)
class UAN_Gather_C final : public UAN_EventTag_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AN_Gather_C">();
	}
	static class UAN_Gather_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAN_Gather_C>();
	}
};
static_assert(alignof(UAN_Gather_C) == 0x000008, "Wrong alignment on UAN_Gather_C");
static_assert(sizeof(UAN_Gather_C) == 0x000040, "Wrong size on UAN_Gather_C");

}

