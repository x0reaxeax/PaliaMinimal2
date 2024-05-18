#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_VillagerPlate

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_VillagerPlate.WBP_VillagerPlate_C
// 0x0020 (0x02E0 - 0x02C0)
class UWBP_VillagerPlate_C final : public UUserWidget
{
public:
	class UVALUI_TextBlock_Styled*                ActionNameText;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   TextToUpdate;                                      // 0x02C8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void SetCurrentActionForPlate(const struct FVillagerActionInfo& ActionInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_VillagerPlate_C">();
	}
	static class UWBP_VillagerPlate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_VillagerPlate_C>();
	}
};
static_assert(alignof(UWBP_VillagerPlate_C) == 0x000008, "Wrong alignment on UWBP_VillagerPlate_C");
static_assert(sizeof(UWBP_VillagerPlate_C) == 0x0002E0, "Wrong size on UWBP_VillagerPlate_C");
static_assert(offsetof(UWBP_VillagerPlate_C, ActionNameText) == 0x0002C0, "Member 'UWBP_VillagerPlate_C::ActionNameText' has a wrong offset!");
static_assert(offsetof(UWBP_VillagerPlate_C, TextToUpdate) == 0x0002C8, "Member 'UWBP_VillagerPlate_C::TextToUpdate' has a wrong offset!");

}

