#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ValeriaSpectatorPawn

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ValeriaSpectatorPawn.BP_ValeriaSpectatorPawn_C
// 0x0000 (0x0358 - 0x0358)
class ABP_ValeriaSpectatorPawn_C final : public ASpectatorPawn
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ValeriaSpectatorPawn_C">();
	}
	static class ABP_ValeriaSpectatorPawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ValeriaSpectatorPawn_C>();
	}
};
static_assert(alignof(ABP_ValeriaSpectatorPawn_C) == 0x000008, "Wrong alignment on ABP_ValeriaSpectatorPawn_C");
static_assert(sizeof(ABP_ValeriaSpectatorPawn_C) == 0x000358, "Wrong size on ABP_ValeriaSpectatorPawn_C");

}

