#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GenericInputData

#include "Basic.hpp"

#include "GenericInputData_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GenericInputData.BP_GenericInputData_C
// 0x0000 (0x0058 - 0x0058)
class UBP_GenericInputData_C final : public UGenericInputData_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GenericInputData_C">();
	}
	static class UBP_GenericInputData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GenericInputData_C>();
	}
};
static_assert(alignof(UBP_GenericInputData_C) == 0x000008, "Wrong alignment on UBP_GenericInputData_C");
static_assert(sizeof(UBP_GenericInputData_C) == 0x000058, "Wrong size on UBP_GenericInputData_C");

}

