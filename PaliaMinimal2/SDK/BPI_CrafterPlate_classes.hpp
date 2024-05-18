#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CrafterPlate

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_CrafterPlate.BPI_CrafterPlate_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_CrafterPlate_C final : public IInterface
{
public:
	void LinkOrUnlinkCrafter(class UCrafterComponent* Crafter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_CrafterPlate_C">();
	}
	static class IBPI_CrafterPlate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_CrafterPlate_C>();
	}
};
static_assert(alignof(IBPI_CrafterPlate_C) == 0x000008, "Wrong alignment on IBPI_CrafterPlate_C");
static_assert(sizeof(IBPI_CrafterPlate_C) == 0x000028, "Wrong size on IBPI_CrafterPlate_C");

}
