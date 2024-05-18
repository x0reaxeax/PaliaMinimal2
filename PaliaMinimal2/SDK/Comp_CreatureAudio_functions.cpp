#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Comp_CreatureAudio

#include "Basic.hpp"

#include "Comp_CreatureAudio_classes.hpp"
#include "Comp_CreatureAudio_parameters.hpp"


namespace SDK
{

// Function Comp_CreatureAudio.Comp_CreatureAudio_C.FindInCreatureSurfaceMap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             Key                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysmatEffect_C*                 Value                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Found                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysmatEffect_C*                 CallFunc_Map_Find_Value                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Map_Find_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_CreatureAudio_C::FindInCreatureSurfaceMap(class FName& Key, class UPhysmatEffect_C** Value, bool* Found, class UPhysmatEffect_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Comp_CreatureAudio_C", "FindInCreatureSurfaceMap");

	Params::Comp_CreatureAudio_C_FindInCreatureSurfaceMap Parms{};

	Parms.Key = Key;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

	if (Found != nullptr)
		*Found = Parms.Found;
}


// Function Comp_CreatureAudio.Comp_CreatureAudio_C.GetCreatureAudioEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_CreatureAudioEvents                   Event                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*                    AkEvent                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Found                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*                    CallFunc_Get_Creature_Audio_Event_AkEvent              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Get_Creature_Audio_Event_Found                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_CreatureAudio_C::GetCreatureAudioEvent(E_CreatureAudioEvents Event, class UAkAudioEvent** AkEvent, bool* Found, class UAkAudioEvent* CallFunc_Get_Creature_Audio_Event_AkEvent, bool CallFunc_Get_Creature_Audio_Event_Found)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Comp_CreatureAudio_C", "GetCreatureAudioEvent");

	Params::Comp_CreatureAudio_C_GetCreatureAudioEvent Parms{};

	Parms.Event = Event;
	Parms.CallFunc_Get_Creature_Audio_Event_AkEvent = CallFunc_Get_Creature_Audio_Event_AkEvent;
	Parms.CallFunc_Get_Creature_Audio_Event_Found = CallFunc_Get_Creature_Audio_Event_Found;

	UObject::ProcessEvent(Func, &Parms);

	if (AkEvent != nullptr)
		*AkEvent = Parms.AkEvent;

	if (Found != nullptr)
		*Found = Parms.Found;
}

}
