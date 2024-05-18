#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Garden_FullPlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Garden_FullPlot.BP_Garden_FullPlot_C
// 0x0078 (0x0320 - 0x02A8)
class ABP_Garden_FullPlot_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGardenManagementComponent*             GardenManagement;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPersistComponent*                      Persist;                                           // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGardenPlantingComponent*               GardenPlanting;                                    // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UVAL_TutorialFlagDefinition> WateringCanFlag;                                   // 0x02D0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UVAL_TutorialFlagDefinition> HarvestingFlag;                                    // 0x02F8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Garden_FullPlot(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, TDelegate<void(class AGardenTile* GardenTile)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class UVAL_ItemTypeDefinitionAsset* PlantItemType, bool OutRepeatHarvest)> K2Node_CreateDelegate_OutputDelegate_1, class AGardenTile* K2Node_CustomEvent_gardenTile_2, class AActor* CallFunc_GetGardenPatchOwner_ReturnValue, class ABP_Garden3x3_C* K2Node_DynamicCast_AsBP_Garden_3x_3, bool K2Node_DynamicCast_bSuccess, EValeriaFuncResult CallFunc_Client_GetFirstPlayerController_OutResult, class AValeriaPlayerController* CallFunc_Client_GetFirstPlayerController_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UGardenPlantingComponent* CallFunc_GetGardenPlanting_ReturnValue, class AGardenTile* K2Node_CustomEvent_gardenTile_1, bool CallFunc_IsDedicatedServer_ReturnValue, class AActor* CallFunc_GetGardenPatchOwner_ReturnValue_1, class ABP_Garden3x3_C* K2Node_DynamicCast_AsBP_Garden_3x_3_1, bool K2Node_DynamicCast_bSuccess_1, class AGardenTile* K2Node_CustomEvent_gardenTile, TDelegate<void(class AGardenTile* GardenTile)> K2Node_CreateDelegate_OutputDelegate_2, class AActor* CallFunc_GetGardenPatchOwner_ReturnValue_2, class ABP_Garden3x3_C* K2Node_DynamicCast_AsBP_Garden_3x_3_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsWatered_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_CustomEvent_PlantItemType, bool K2Node_CustomEvent_outRepeatHarvest, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_2, bool CallFunc_CanStartTutorialForFlag_ReturnValue, bool CallFunc_CanStartTutorialForFlag_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_3, TDelegate<void(class AGardenTile* GardenTile)> K2Node_CreateDelegate_OutputDelegate_3);
	void On_Harvested(class UVAL_ItemTypeDefinitionAsset* PlantItemType, bool OutRepeatHarvest);
	void OnHasHarvestablePlant(class AGardenTile* GardenTile);
	void OnHasUnwateredPlant(class AGardenTile* GardenTile);
	void OnWaterChanged(class AGardenTile* GardenTile);
	void ReceiveBeginPlay();
	void Unbind_OnHasHarvestablePlant();
	void Unbind_OnHasUnwateredPlant();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Garden_FullPlot_C">();
	}
	static class ABP_Garden_FullPlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Garden_FullPlot_C>();
	}
};
static_assert(alignof(ABP_Garden_FullPlot_C) == 0x000008, "Wrong alignment on ABP_Garden_FullPlot_C");
static_assert(sizeof(ABP_Garden_FullPlot_C) == 0x000320, "Wrong size on ABP_Garden_FullPlot_C");
static_assert(offsetof(ABP_Garden_FullPlot_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_Garden_FullPlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Garden_FullPlot_C, GardenManagement) == 0x0002B0, "Member 'ABP_Garden_FullPlot_C::GardenManagement' has a wrong offset!");
static_assert(offsetof(ABP_Garden_FullPlot_C, Persist) == 0x0002B8, "Member 'ABP_Garden_FullPlot_C::Persist' has a wrong offset!");
static_assert(offsetof(ABP_Garden_FullPlot_C, DefaultSceneRoot) == 0x0002C0, "Member 'ABP_Garden_FullPlot_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Garden_FullPlot_C, GardenPlanting) == 0x0002C8, "Member 'ABP_Garden_FullPlot_C::GardenPlanting' has a wrong offset!");
static_assert(offsetof(ABP_Garden_FullPlot_C, WateringCanFlag) == 0x0002D0, "Member 'ABP_Garden_FullPlot_C::WateringCanFlag' has a wrong offset!");
static_assert(offsetof(ABP_Garden_FullPlot_C, HarvestingFlag) == 0x0002F8, "Member 'ABP_Garden_FullPlot_C::HarvestingFlag' has a wrong offset!");

}

