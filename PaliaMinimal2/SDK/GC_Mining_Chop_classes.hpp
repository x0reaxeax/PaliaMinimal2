#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Mining_Chop

#include "Basic.hpp"

#include "GC_Chop_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Mining_Chop.GC_Mining_Chop_C
// 0x0000 (0x0070 - 0x0070)
class UGC_Mining_Chop_C final : public UGC_Chop_Base_C
{
public:
	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnExecute_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Mining_Chop_C">();
	}
	static class UGC_Mining_Chop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Mining_Chop_C>();
	}
};
static_assert(alignof(UGC_Mining_Chop_C) == 0x000008, "Wrong alignment on UGC_Mining_Chop_C");
static_assert(sizeof(UGC_Mining_Chop_C) == 0x000070, "Wrong size on UGC_Mining_Chop_C");

}

