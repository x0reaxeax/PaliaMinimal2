#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_UIFocusable

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_UIFocusable.BPI_UIFocusable_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_UIFocusable_C final : public IInterface
{
public:
	void HandleAccept();
	void ShowFocusTip(bool bIsShow);

	void IsEmpty(bool* bIsEmpty) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_UIFocusable_C">();
	}
	static class IBPI_UIFocusable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_UIFocusable_C>();
	}
};
static_assert(alignof(IBPI_UIFocusable_C) == 0x000008, "Wrong alignment on IBPI_UIFocusable_C");
static_assert(sizeof(IBPI_UIFocusable_C) == 0x000028, "Wrong size on IBPI_UIFocusable_C");

}
