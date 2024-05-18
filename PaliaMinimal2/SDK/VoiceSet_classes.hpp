#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VoiceSet

#include "Basic.hpp"

#include "E_VoiceEffortEvent_structs.hpp"
#include "Palia_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass VoiceSet.VoiceSet_C
// 0x0050 (0x0080 - 0x0030)
class UVoiceSet_C final : public UVAL_VoiceSet
{
public:
	TMap<E_VoiceEffortEvent, class UAkAudioEvent*> VoiceEvents;                                       // 0x0030(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void GetRandomVoiceEvent(class UAkAudioEvent** Value, const TArray<class UAkAudioEvent*>& NonNullAudioEvents, int32 Temp_int_Array_Index_Variable, class UAkAudioEvent* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UAkAudioEvent*>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, class UAkAudioEvent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetVoiceEvent(E_VoiceEffortEvent Effort, class UAkAudioEvent** Value, class UAkAudioEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VoiceSet_C">();
	}
	static class UVoiceSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoiceSet_C>();
	}
};
static_assert(alignof(UVoiceSet_C) == 0x000008, "Wrong alignment on UVoiceSet_C");
static_assert(sizeof(UVoiceSet_C) == 0x000080, "Wrong size on UVoiceSet_C");
static_assert(offsetof(UVoiceSet_C, VoiceEvents) == 0x000030, "Member 'UVoiceSet_C::VoiceEvents' has a wrong offset!");

}
