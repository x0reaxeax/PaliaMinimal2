#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ToolAkComponent

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "AkAudio_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ToolAkComponent.ToolAkComponent_C
// 0x0010 (0x04A0 - 0x0490)
class UToolAkComponent_C final : public UAkComponent
{
public:
	uint8                                         Pad_4BAA[0x8];                                     // 0x0488(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PlayingID;                                         // 0x0490(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PlayToolAudioAttached(class UAkAudioEvent* AkEvent, int32 CallFunc_AkEventComponent_ReturnValue);
	void StopToolAudioAttached(int32 TransitionDurationMs, EAkCurveInterpolation FadeCurve);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ToolAkComponent_C">();
	}
	static class UToolAkComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToolAkComponent_C>();
	}
};
static_assert(alignof(UToolAkComponent_C) == 0x000010, "Wrong alignment on UToolAkComponent_C");
static_assert(sizeof(UToolAkComponent_C) == 0x0004A0, "Wrong size on UToolAkComponent_C");
static_assert(offsetof(UToolAkComponent_C, PlayingID) == 0x000490, "Member 'UToolAkComponent_C::PlayingID' has a wrong offset!");

}
