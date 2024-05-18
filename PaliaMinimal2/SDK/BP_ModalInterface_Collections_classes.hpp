#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ModalInterface_Collections

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ModalInterface_Collections.BP_ModalInterface_Collections_C
// 0x0000 (0x0028 - 0x0028)
class IBP_ModalInterface_Collections_C final : public IInterface
{
public:
	void InitCharacterRenderStudio(class AVAL_CharacterRenderStudio* CharacterRenderStudio);
	void InitPostOpenModalWidget(EVAL_CollectionsTabState Starting_Tab, class UVAL_CharacterCustomizationComponent* TargetCharacterCustomizationComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ModalInterface_Collections_C">();
	}
	static class IBP_ModalInterface_Collections_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBP_ModalInterface_Collections_C>();
	}
};
static_assert(alignof(IBP_ModalInterface_Collections_C) == 0x000008, "Wrong alignment on IBP_ModalInterface_Collections_C");
static_assert(sizeof(IBP_ModalInterface_Collections_C) == 0x000028, "Wrong size on IBP_ModalInterface_Collections_C");

}

