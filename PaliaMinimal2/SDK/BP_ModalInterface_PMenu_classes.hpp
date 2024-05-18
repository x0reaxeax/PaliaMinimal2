#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ModalInterface_PMenu

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ModalInterface_PMenu.BP_ModalInterface_PMenu_C
// 0x0000 (0x0028 - 0x0028)
class IBP_ModalInterface_PMenu_C final : public IInterface
{
public:
	void SetMode(EVAL_GameplayMenuMode Mode);
	void ToggleMode(EVAL_GameplayMenuMode Mode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ModalInterface_PMenu_C">();
	}
	static class IBP_ModalInterface_PMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBP_ModalInterface_PMenu_C>();
	}
};
static_assert(alignof(IBP_ModalInterface_PMenu_C) == 0x000008, "Wrong alignment on IBP_ModalInterface_PMenu_C");
static_assert(sizeof(IBP_ModalInterface_PMenu_C) == 0x000028, "Wrong size on IBP_ModalInterface_PMenu_C");

}

