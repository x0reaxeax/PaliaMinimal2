#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NameValidator_AllowList_1Alphabetical_PreferredName

#include "Basic.hpp"

#include "ValeriaUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NameValidator_AllowList_1Alphabetical_PreferredName.BP_NameValidator_AllowList_1Alphabetical_PreferredName_C
// 0x0000 (0x0090 - 0x0090)
class UBP_NameValidator_AllowList_1Alphabetical_PreferredName_C final : public UVALUI_NameValidator
{
public:
	bool IsNameValid(const class FString& InCharacterName, const class FString& AllowedCharacters, bool Valid, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Contains_ReturnValue, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NameValidator_AllowList_1Alphabetical_PreferredName_C">();
	}
	static class UBP_NameValidator_AllowList_1Alphabetical_PreferredName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NameValidator_AllowList_1Alphabetical_PreferredName_C>();
	}
};
static_assert(alignof(UBP_NameValidator_AllowList_1Alphabetical_PreferredName_C) == 0x000008, "Wrong alignment on UBP_NameValidator_AllowList_1Alphabetical_PreferredName_C");
static_assert(sizeof(UBP_NameValidator_AllowList_1Alphabetical_PreferredName_C) == 0x000090, "Wrong size on UBP_NameValidator_AllowList_1Alphabetical_PreferredName_C");

}

