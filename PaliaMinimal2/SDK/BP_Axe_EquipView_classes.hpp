#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Axe_EquipView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_vfx_toolQuality_structs.hpp"
#include "BP_EquipViewActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Axe_EquipView.BP_Axe_EquipView_C
// 0x0028 (0x02E0 - 0x02B8)
class ABP_Axe_EquipView_C final : public ABP_EquipViewActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Socket_head;                                       // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Axe;                                             // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	Enum_vfx_toolQuality                          Tool_quality;                                      // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_60E6[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Tool_hitPower;                                     // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Axe_EquipView(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Axe_EquipView_C">();
	}
	static class ABP_Axe_EquipView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Axe_EquipView_C>();
	}
};
static_assert(alignof(ABP_Axe_EquipView_C) == 0x000008, "Wrong alignment on ABP_Axe_EquipView_C");
static_assert(sizeof(ABP_Axe_EquipView_C) == 0x0002E0, "Wrong size on ABP_Axe_EquipView_C");
static_assert(offsetof(ABP_Axe_EquipView_C, UberGraphFrame) == 0x0002B8, "Member 'ABP_Axe_EquipView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Axe_EquipView_C, Socket_head) == 0x0002C0, "Member 'ABP_Axe_EquipView_C::Socket_head' has a wrong offset!");
static_assert(offsetof(ABP_Axe_EquipView_C, S_Axe) == 0x0002C8, "Member 'ABP_Axe_EquipView_C::S_Axe' has a wrong offset!");
static_assert(offsetof(ABP_Axe_EquipView_C, Tool_quality) == 0x0002D0, "Member 'ABP_Axe_EquipView_C::Tool_quality' has a wrong offset!");
static_assert(offsetof(ABP_Axe_EquipView_C, Tool_hitPower) == 0x0002D8, "Member 'ABP_Axe_EquipView_C::Tool_hitPower' has a wrong offset!");

}

