#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JsonUtilities

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct JsonUtilities.JsonObjectWrapper
// 0x0020 (0x0020 - 0x0000)
struct FJsonObjectWrapper final
{
public:
	class FString                                 JsonString;                                        // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12BC[0x10];                                    // 0x0010(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FJsonObjectWrapper) == 0x000008, "Wrong alignment on FJsonObjectWrapper");
static_assert(sizeof(FJsonObjectWrapper) == 0x000020, "Wrong size on FJsonObjectWrapper");
static_assert(offsetof(FJsonObjectWrapper, JsonString) == 0x000000, "Member 'FJsonObjectWrapper::JsonString' has a wrong offset!");

}

