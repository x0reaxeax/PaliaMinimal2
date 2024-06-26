#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ListEntry_CharacterCustomization_FilteringDropdownMenu

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ListEntry_CharacterCustomization_FilteringDropdownMenu.ListEntry_CharacterCustomization_FilteringDropdownMenu_C
// 0x0048 (0x0070 - 0x0028)
class UListEntry_CharacterCustomization_FilteringDropdownMenu_C final : public UObject
{
public:
	class FText                                   HeaderText;                                        // 0x0028(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FVAL_CharacterCustomization_CosmeticTagFilterStruct> TextOptions;                                       // 0x0040(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnSelectionChanged;                                // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FVAL_CharacterCustomization_CosmeticTagFilterStruct> SelectedOptions;                                   // 0x0060(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void HasTagOptions(bool* HasOptions, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void OnSelectionChanged__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ListEntry_CharacterCustomization_FilteringDropdownMenu_C">();
	}
	static class UListEntry_CharacterCustomization_FilteringDropdownMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UListEntry_CharacterCustomization_FilteringDropdownMenu_C>();
	}
};
static_assert(alignof(UListEntry_CharacterCustomization_FilteringDropdownMenu_C) == 0x000008, "Wrong alignment on UListEntry_CharacterCustomization_FilteringDropdownMenu_C");
static_assert(sizeof(UListEntry_CharacterCustomization_FilteringDropdownMenu_C) == 0x000070, "Wrong size on UListEntry_CharacterCustomization_FilteringDropdownMenu_C");
static_assert(offsetof(UListEntry_CharacterCustomization_FilteringDropdownMenu_C, HeaderText) == 0x000028, "Member 'UListEntry_CharacterCustomization_FilteringDropdownMenu_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UListEntry_CharacterCustomization_FilteringDropdownMenu_C, TextOptions) == 0x000040, "Member 'UListEntry_CharacterCustomization_FilteringDropdownMenu_C::TextOptions' has a wrong offset!");
static_assert(offsetof(UListEntry_CharacterCustomization_FilteringDropdownMenu_C, OnSelectionChanged) == 0x000050, "Member 'UListEntry_CharacterCustomization_FilteringDropdownMenu_C::OnSelectionChanged' has a wrong offset!");
static_assert(offsetof(UListEntry_CharacterCustomization_FilteringDropdownMenu_C, SelectedOptions) == 0x000060, "Member 'UListEntry_CharacterCustomization_FilteringDropdownMenu_C::SelectedOptions' has a wrong offset!");

}

