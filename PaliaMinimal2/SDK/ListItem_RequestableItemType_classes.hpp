#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ListItem_RequestableItemType

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ListItem_RequestableItemType.ListItem_RequestableItemType_C
// 0x0038 (0x0060 - 0x0028)
class UListItem_RequestableItemType_C final : public UObject
{
public:
	int32                                         ItemId;                                            // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C25[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> ItemType;                                          // 0x0030(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsRequestable;                                     // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ListItem_RequestableItemType_C">();
	}
	static class UListItem_RequestableItemType_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UListItem_RequestableItemType_C>();
	}
};
static_assert(alignof(UListItem_RequestableItemType_C) == 0x000008, "Wrong alignment on UListItem_RequestableItemType_C");
static_assert(sizeof(UListItem_RequestableItemType_C) == 0x000060, "Wrong size on UListItem_RequestableItemType_C");
static_assert(offsetof(UListItem_RequestableItemType_C, ItemId) == 0x000028, "Member 'UListItem_RequestableItemType_C::ItemId' has a wrong offset!");
static_assert(offsetof(UListItem_RequestableItemType_C, ItemType) == 0x000030, "Member 'UListItem_RequestableItemType_C::ItemType' has a wrong offset!");
static_assert(offsetof(UListItem_RequestableItemType_C, IsRequestable) == 0x000058, "Member 'UListItem_RequestableItemType_C::IsRequestable' has a wrong offset!");

}
