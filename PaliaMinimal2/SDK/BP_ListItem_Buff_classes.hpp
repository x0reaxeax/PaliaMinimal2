#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ListItem_Buff

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ListItem_Buff.BP_ListItem_Buff_C
// 0x0048 (0x0070 - 0x0028)
class UBP_ListItem_Buff_C final : public UObject
{
public:
	struct FBuffActivation                        Buff_Activation;                                   // 0x0028(0x0048)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ListItem_Buff_C">();
	}
	static class UBP_ListItem_Buff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ListItem_Buff_C>();
	}
};
static_assert(alignof(UBP_ListItem_Buff_C) == 0x000008, "Wrong alignment on UBP_ListItem_Buff_C");
static_assert(sizeof(UBP_ListItem_Buff_C) == 0x000070, "Wrong size on UBP_ListItem_Buff_C");
static_assert(offsetof(UBP_ListItem_Buff_C, Buff_Activation) == 0x000028, "Member 'UBP_ListItem_Buff_C::Buff_Activation' has a wrong offset!");

}

