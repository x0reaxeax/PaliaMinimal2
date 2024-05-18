#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SequencerScripting

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum SequencerScripting.ESequenceTimeUnit
// NumValues: 0x0003
enum class ESequenceTimeUnit : uint8
{
	DisplayRate                              = 0,
	TickResolution                           = 1,
	ESequenceTimeUnit_MAX                    = 2,
};

// ScriptStruct SequencerScripting.SequencerScriptingRange
// 0x0014 (0x0014 - 0x0000)
struct FSequencerScriptingRange final
{
public:
	uint8                                         bHasStart : 1;                                     // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHasEnd : 1;                                       // 0x0000(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2F0A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InclusiveStart;                                    // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ExclusiveEnd;                                      // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                             InternalRate;                                      // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSequencerScriptingRange) == 0x000004, "Wrong alignment on FSequencerScriptingRange");
static_assert(sizeof(FSequencerScriptingRange) == 0x000014, "Wrong size on FSequencerScriptingRange");
static_assert(offsetof(FSequencerScriptingRange, InclusiveStart) == 0x000004, "Member 'FSequencerScriptingRange::InclusiveStart' has a wrong offset!");
static_assert(offsetof(FSequencerScriptingRange, ExclusiveEnd) == 0x000008, "Member 'FSequencerScriptingRange::ExclusiveEnd' has a wrong offset!");
static_assert(offsetof(FSequencerScriptingRange, InternalRate) == 0x00000C, "Member 'FSequencerScriptingRange::InternalRate' has a wrong offset!");

}

