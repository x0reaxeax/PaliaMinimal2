#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_MainWidgetCharacterActionHandle_CM

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_MainWidgetCharacterActionHandle_CM.BPI_MainWidgetCharacterActionHandle_CM_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_MainWidgetCharacterActionHandle_CM_C final : public IInterface
{
public:
	void HandleEmoteWheelReleased();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_MainWidgetCharacterActionHandle_CM_C">();
	}
	static class IBPI_MainWidgetCharacterActionHandle_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_MainWidgetCharacterActionHandle_CM_C>();
	}
};
static_assert(alignof(IBPI_MainWidgetCharacterActionHandle_CM_C) == 0x000008, "Wrong alignment on IBPI_MainWidgetCharacterActionHandle_CM_C");
static_assert(sizeof(IBPI_MainWidgetCharacterActionHandle_CM_C) == 0x000028, "Wrong size on IBPI_MainWidgetCharacterActionHandle_CM_C");

}
