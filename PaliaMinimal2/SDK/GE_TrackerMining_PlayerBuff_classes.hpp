#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_TrackerMining_PlayerBuff

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_TrackerMining_PlayerBuff.GE_TrackerMining_PlayerBuff_C
// 0x0000 (0x0A70 - 0x0A70)
class UGE_TrackerMining_PlayerBuff_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_TrackerMining_PlayerBuff_C">();
	}
	static class UGE_TrackerMining_PlayerBuff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_TrackerMining_PlayerBuff_C>();
	}
};
static_assert(alignof(UGE_TrackerMining_PlayerBuff_C) == 0x000008, "Wrong alignment on UGE_TrackerMining_PlayerBuff_C");
static_assert(sizeof(UGE_TrackerMining_PlayerBuff_C) == 0x000A70, "Wrong size on UGE_TrackerMining_PlayerBuff_C");

}
