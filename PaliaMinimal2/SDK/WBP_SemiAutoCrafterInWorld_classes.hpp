#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SemiAutoCrafterInWorld

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SemiAutoCrafterInWorld.WBP_SemiAutoCrafterInWorld_C
// 0x0048 (0x0308 - 0x02C0)
class UWBP_SemiAutoCrafterInWorld_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           CurrentlyCraftingPanl;                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_CurrentItem;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CountdownTimer_C*                  WBP_CountdownTimer;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CrafterInWorld_Item_C*             WBP_CrafterInWorld_Item;                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   Widget_CrafterStatusPlate;                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCrafterComponent*                      CurrentCrafter;                                    // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ECrafterState                                 CurrentCrafterState;                               // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61B9[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ValeriaCrafter_Base_C*              ParentCrafterActor;                                // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnCrafterChanged(class UCrafterComponent* Crafter);
	void ExecuteUbergraph_WBP_SemiAutoCrafterInWorld(int32 EntryPoint, ECrafterState Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, class UCrafterComponent* K2Node_CustomEvent_Crafter, bool CallFunc_IsValid_ReturnValue, ECrafterState CallFunc_GetCrafterState_ReturnValue, ESlateVisibility K2Node_Select_Default, struct FCrafterConfig& CallFunc_GetCrafterConfig_ReturnValue, class UCrafterComponent* K2Node_Event_Crafter, class UCrafterComponent* CallFunc_SetCurrentCrafter_OutCrafter);
	void GetCurrentCrafter(class UCrafterComponent** OutCrafter);
	void LinkOrUnlinkCrafter(class UCrafterComponent* Crafter);
	void SetCurrentCrafter(class UCrafterComponent* NewCrafter, class UCrafterComponent** OutCrafter, bool CallFunc_IsValid_ReturnValue, TDelegate<void(class UCrafterComponent* Crafter)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class UCrafterComponent* Crafter)> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1);
	void UpdateCraftTimer(class UCrafterComponent* Crafter, ECrafterState LocalState, int32 EndTime, int32 StartTime, bool Temp_bool_Variable, ECrafterState CallFunc_GetCrafterState_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool Temp_bool_Variable_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool Temp_bool_Variable_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetRecipeIdCrafting_ReturnValue, int32 CallFunc_GetCraftLimitTimes_startTime, int32 CallFunc_GetCraftLimitTimes_endTime, bool CallFunc_GetCraftLimitTimes_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_2, int32 CallFunc_GetCraftPhaseTimes_startTime, int32 CallFunc_GetCraftPhaseTimes_endTime, bool CallFunc_GetCraftPhaseTimes_ReturnValue, EValeriaFuncResult CallFunc_FindRecipeConfigById_OutResult, const struct FRecipeConfig& CallFunc_FindRecipeConfigById_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, ECrafterMode Temp_byte_Variable, struct FCrafterConfig& CallFunc_GetCrafterConfig_ReturnValue, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SemiAutoCrafterInWorld_C">();
	}
	static class UWBP_SemiAutoCrafterInWorld_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SemiAutoCrafterInWorld_C>();
	}
};
static_assert(alignof(UWBP_SemiAutoCrafterInWorld_C) == 0x000008, "Wrong alignment on UWBP_SemiAutoCrafterInWorld_C");
static_assert(sizeof(UWBP_SemiAutoCrafterInWorld_C) == 0x000308, "Wrong size on UWBP_SemiAutoCrafterInWorld_C");
static_assert(offsetof(UWBP_SemiAutoCrafterInWorld_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_SemiAutoCrafterInWorld_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SemiAutoCrafterInWorld_C, CurrentlyCraftingPanl) == 0x0002C8, "Member 'UWBP_SemiAutoCrafterInWorld_C::CurrentlyCraftingPanl' has a wrong offset!");
static_assert(offsetof(UWBP_SemiAutoCrafterInWorld_C, SizeBox_CurrentItem) == 0x0002D0, "Member 'UWBP_SemiAutoCrafterInWorld_C::SizeBox_CurrentItem' has a wrong offset!");
static_assert(offsetof(UWBP_SemiAutoCrafterInWorld_C, WBP_CountdownTimer) == 0x0002D8, "Member 'UWBP_SemiAutoCrafterInWorld_C::WBP_CountdownTimer' has a wrong offset!");
static_assert(offsetof(UWBP_SemiAutoCrafterInWorld_C, WBP_CrafterInWorld_Item) == 0x0002E0, "Member 'UWBP_SemiAutoCrafterInWorld_C::WBP_CrafterInWorld_Item' has a wrong offset!");
static_assert(offsetof(UWBP_SemiAutoCrafterInWorld_C, Widget_CrafterStatusPlate) == 0x0002E8, "Member 'UWBP_SemiAutoCrafterInWorld_C::Widget_CrafterStatusPlate' has a wrong offset!");
static_assert(offsetof(UWBP_SemiAutoCrafterInWorld_C, CurrentCrafter) == 0x0002F0, "Member 'UWBP_SemiAutoCrafterInWorld_C::CurrentCrafter' has a wrong offset!");
static_assert(offsetof(UWBP_SemiAutoCrafterInWorld_C, CurrentCrafterState) == 0x0002F8, "Member 'UWBP_SemiAutoCrafterInWorld_C::CurrentCrafterState' has a wrong offset!");
static_assert(offsetof(UWBP_SemiAutoCrafterInWorld_C, ParentCrafterActor) == 0x000300, "Member 'UWBP_SemiAutoCrafterInWorld_C::ParentCrafterActor' has a wrong offset!");

}

