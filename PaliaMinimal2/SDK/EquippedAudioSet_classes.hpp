#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EquippedAudioSet

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "E_EquippedEvents_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass EquippedAudioSet.EquippedAudioSet_C
// 0x0050 (0x0080 - 0x0030)
class UEquippedAudioSet_C final : public UPrimaryDataAsset
{
public:
	TMap<E_EquippedEvents, class UAkAudioEvent*>  EquippedAudioEvents;                               // 0x0030(0x0050)(Edit, BlueprintVisible)

public:
	void Get_Audio_Event(E_EquippedEvents Event, class UAkAudioEvent** AudioEvent, bool* Found, class UAkAudioEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EquippedAudioSet_C">();
	}
	static class UEquippedAudioSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEquippedAudioSet_C>();
	}
};
static_assert(alignof(UEquippedAudioSet_C) == 0x000008, "Wrong alignment on UEquippedAudioSet_C");
static_assert(sizeof(UEquippedAudioSet_C) == 0x000080, "Wrong size on UEquippedAudioSet_C");
static_assert(offsetof(UEquippedAudioSet_C, EquippedAudioEvents) == 0x000030, "Member 'UEquippedAudioSet_C::EquippedAudioEvents' has a wrong offset!");

}
