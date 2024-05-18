#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_HousingLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPFL_HousingLibrary.BPFL_HousingLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBPFL_HousingLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	TArray<class FText> Get_Permission_Options(EHousingPermissionLevel UserPermission, EHousingPermissionLevel ThisEntryPermission, bool IncludeVisitorOption, class UObject* __WorldContext, int32* Selection, int32 Temp_int_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, EHousingPermissionLevel Temp_byte_Variable, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, int32 Temp_int_Variable_8, int32 Temp_int_Variable_9, int32 Temp_int_Variable_10, int32 Temp_int_Variable_11, int32 Temp_int_Variable_12, int32 Temp_int_Variable_13, int32 Temp_int_Variable_14, int32 Temp_int_Variable_15, EHousingPermissionLevel Temp_byte_Variable_1, int32 K2Node_Select_Default, int32 Temp_int_Variable_16, int32 Temp_int_Variable_17, int32 Temp_int_Variable_18, int32 Temp_int_Variable_19, int32 Temp_int_Variable_20, int32 Temp_int_Variable_21, int32 Temp_int_Variable_22, int32 Temp_int_Variable_23, int32 Temp_int_Variable_24, int32 Temp_int_Variable_25, int32 Temp_int_Variable_26, int32 K2Node_Select_Default_1, TArray<class FText>& K2Node_MakeArray_Array, TArray<class FText>& K2Node_MakeArray_Array_1, int32 Temp_int_Variable_27, int32 Temp_int_Variable_28, TArray<class FText>& K2Node_MakeArray_Array_2, int32 Temp_int_Variable_29, EHousingPermissionLevel Temp_byte_Variable_2, int32 K2Node_Select_Default_2);
	void Permission_Enum_To_Text(EHousingPermissionLevel& Permission, class UObject* __WorldContext, class FText* Text, EHousingPermissionLevel Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText K2Node_Select_Default);
	void Permission_Text_Option_to_Enum(class FText& Text, class UObject* __WorldContext, EHousingPermissionLevel* Permission, EHousingPermissionLevel Temp_byte_Variable, bool Temp_bool_Variable, EHousingPermissionLevel Temp_byte_Variable_1, bool Temp_bool_Variable_1, EHousingPermissionLevel Temp_byte_Variable_2, bool Temp_bool_Variable_2, EHousingPermissionLevel Temp_byte_Variable_3, bool Temp_bool_Variable_3, EHousingPermissionLevel Temp_byte_Variable_4, EHousingPermissionLevel Temp_byte_Variable_5, bool Temp_bool_Variable_4, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1, EHousingPermissionLevel K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue_2, EHousingPermissionLevel K2Node_Select_Default_1, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_3, EHousingPermissionLevel K2Node_Select_Default_2, class FText CallFunc_MakeLiteralText_ReturnValue_4, EHousingPermissionLevel K2Node_Select_Default_3, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_4, EHousingPermissionLevel K2Node_Select_Default_4);
	class FText PIEGetPlayerNameFromCharacterGuid(struct FGuid& Character_Id, class UObject* __WorldContext, class UQueryManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, class AValeriaCharacter* CallFunc_FindValeriaCharacterByPlayerGuid_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPFL_HousingLibrary_C">();
	}
	static class UBPFL_HousingLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPFL_HousingLibrary_C>();
	}
};
static_assert(alignof(UBPFL_HousingLibrary_C) == 0x000008, "Wrong alignment on UBPFL_HousingLibrary_C");
static_assert(sizeof(UBPFL_HousingLibrary_C) == 0x000028, "Wrong size on UBPFL_HousingLibrary_C");

}
