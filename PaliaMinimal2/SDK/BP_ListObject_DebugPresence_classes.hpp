#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ListObject_DebugPresence

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ListObject_DebugPresence.BP_ListObject_DebugPresence_C
// 0x00B0 (0x00D8 - 0x0028)
class UBP_ListObject_DebugPresence_C final : public UObject
{
public:
	struct FPresence                              Presence;                                          // 0x0028(0x00B0)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ListObject_DebugPresence_C">();
	}
	static class UBP_ListObject_DebugPresence_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ListObject_DebugPresence_C>();
	}
};
static_assert(alignof(UBP_ListObject_DebugPresence_C) == 0x000008, "Wrong alignment on UBP_ListObject_DebugPresence_C");
static_assert(sizeof(UBP_ListObject_DebugPresence_C) == 0x0000D8, "Wrong size on UBP_ListObject_DebugPresence_C");
static_assert(offsetof(UBP_ListObject_DebugPresence_C, Presence) == 0x000028, "Member 'UBP_ListObject_DebugPresence_C::Presence' has a wrong offset!");

}

