#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NameValidator_TooShort_Preferred

#include "Basic.hpp"

#include "ValeriaUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NameValidator_TooShort_Preferred.BP_NameValidator_TooShort_Preferred_C
// 0x0008 (0x0098 - 0x0090)
class UBP_NameValidator_TooShort_Preferred_C final : public UVALUI_NameValidator
{
public:
	int32                                         Length;                                            // 0x0090(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool IsNameValid(const class FString& InCharacterName, int32 CallFunc_Len_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NameValidator_TooShort_Preferred_C">();
	}
	static class UBP_NameValidator_TooShort_Preferred_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NameValidator_TooShort_Preferred_C>();
	}
};
static_assert(alignof(UBP_NameValidator_TooShort_Preferred_C) == 0x000008, "Wrong alignment on UBP_NameValidator_TooShort_Preferred_C");
static_assert(sizeof(UBP_NameValidator_TooShort_Preferred_C) == 0x000098, "Wrong size on UBP_NameValidator_TooShort_Preferred_C");
static_assert(offsetof(UBP_NameValidator_TooShort_Preferred_C, Length) == 0x000090, "Member 'UBP_NameValidator_TooShort_Preferred_C::Length' has a wrong offset!");

}

