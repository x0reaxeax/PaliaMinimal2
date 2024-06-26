#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ValeriaCrafter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ValeriaCrafter_Base_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ValeriaCrafter.BP_ValeriaCrafter_C
// 0x0030 (0x0390 - 0x0360)
class ABP_ValeriaCrafter_C : public ABP_ValeriaCrafter_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ValeriaCrafter_C;                // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_gatherableA;                                    // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCrafterComponent*                      CrafterComponent;                                  // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Stuff_Ready_4U;                                    // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug_me;                                          // 0x0379(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_61F2[0x6];                                     // 0x037A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 String_hack;                                       // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void Event_beginPlay();
	void Event_crafterStateChanged(class UCrafterComponent* Crafter);
	void Event_Crafty_crafting();
	void Event_Crafty_selectIngredient();
	void Event_Crafty_stuffReady();
	void Event_whatAmIDoing(ECrafterState CrafterState);
	void ExecuteUbergraph_BP_ValeriaCrafter(int32 EntryPoint, ECrafterState CallFunc_GetCrafterState_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UCrafterComponent* K2Node_CustomEvent_Crafter, ECrafterState CallFunc_GetCrafterState_ReturnValue_1, bool CallFunc_DoesBroadcastApply_ReturnValue, ECrafterState K2Node_CustomEvent_CrafterState, bool K2Node_SwitchEnum_CmpSuccess, ECrafterState CallFunc_GetCrafterState_ReturnValue_2, TDelegate<void(class UCrafterComponent* Crafter)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_GetCraftPhaseTimes_startTime, int32 CallFunc_GetCraftPhaseTimes_endTime, bool CallFunc_GetCraftPhaseTimes_ReturnValue, ECrafterState CallFunc_GetCrafterState_ReturnValue_3, int32 CallFunc_GetCraftPhaseTimes_startTime_1, int32 CallFunc_GetCraftPhaseTimes_endTime_1, bool CallFunc_GetCraftPhaseTimes_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ValeriaCrafter_C">();
	}
	static class ABP_ValeriaCrafter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ValeriaCrafter_C>();
	}
};
static_assert(alignof(ABP_ValeriaCrafter_C) == 0x000008, "Wrong alignment on ABP_ValeriaCrafter_C");
static_assert(sizeof(ABP_ValeriaCrafter_C) == 0x000390, "Wrong size on ABP_ValeriaCrafter_C");
static_assert(offsetof(ABP_ValeriaCrafter_C, UberGraphFrame_BP_ValeriaCrafter_C) == 0x000360, "Member 'ABP_ValeriaCrafter_C::UberGraphFrame_BP_ValeriaCrafter_C' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaCrafter_C, NS_gatherableA) == 0x000368, "Member 'ABP_ValeriaCrafter_C::NS_gatherableA' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaCrafter_C, CrafterComponent) == 0x000370, "Member 'ABP_ValeriaCrafter_C::CrafterComponent' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaCrafter_C, Stuff_Ready_4U) == 0x000378, "Member 'ABP_ValeriaCrafter_C::Stuff_Ready_4U' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaCrafter_C, Debug_me) == 0x000379, "Member 'ABP_ValeriaCrafter_C::Debug_me' has a wrong offset!");
static_assert(offsetof(ABP_ValeriaCrafter_C, String_hack) == 0x000380, "Member 'ABP_ValeriaCrafter_C::String_hack' has a wrong offset!");

}

