#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Garden_FullPlot

#include "Basic.hpp"

#include "BP_Garden_FullPlot_classes.hpp"
#include "BP_Garden_FullPlot_parameters.hpp"


namespace SDK
{

// Function BP_Garden_FullPlot.BP_Garden_FullPlot_C.ExecuteUbergraph_BP_Garden_FullPlot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetPlayerController_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVAL_TutorialFlagsManager*        CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class AGardenTile* GardenTile)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UVAL_ItemTypeDefinitionAsset* PlantItemType, bool OutRepeatHarvest)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGardenTile*                      K2Node_CustomEvent_gardenTile_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetGardenPatchOwner_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Garden3x3_C*                  K2Node_DynamicCast_AsBP_Garden_3x_3                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_Client_GetFirstPlayerController_OutResult     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaPlayerController*         CallFunc_Client_GetFirstPlayerController_ReturnValue   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGardenPlantingComponent*         CallFunc_GetGardenPlanting_ReturnValue                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AGardenTile*                      K2Node_CustomEvent_gardenTile_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsDedicatedServer_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetGardenPatchOwner_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Garden3x3_C*                  K2Node_DynamicCast_AsBP_Garden_3x_3_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGardenTile*                      K2Node_CustomEvent_gardenTile                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class AGardenTile* GardenTile)>K2Node_CreateDelegate_OutputDelegate_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetGardenPatchOwner_ReturnValue_2             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Garden3x3_C*                  K2Node_DynamicCast_AsBP_Garden_3x_3_2                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsWatered_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_ItemTypeDefinitionAsset*     K2Node_CustomEvent_PlantItemType                       (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_CustomEvent_outRepeatHarvest                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetPlayerController_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetPlayerController_ReturnValue_2             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVAL_TutorialFlagsManager*        CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVAL_TutorialFlagsManager*        CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_2(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_CanStartTutorialForFlag_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_CanStartTutorialForFlag_ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetPlayerController_ReturnValue_3             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVAL_TutorialFlagsManager*        CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_3(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class AGardenTile* GardenTile)>K2Node_CreateDelegate_OutputDelegate_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Garden_FullPlot_C::ExecuteUbergraph_BP_Garden_FullPlot(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, TDelegate<void(class AGardenTile* GardenTile)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class UVAL_ItemTypeDefinitionAsset* PlantItemType, bool OutRepeatHarvest)> K2Node_CreateDelegate_OutputDelegate_1, class AGardenTile* K2Node_CustomEvent_gardenTile_2, class AActor* CallFunc_GetGardenPatchOwner_ReturnValue, class ABP_Garden3x3_C* K2Node_DynamicCast_AsBP_Garden_3x_3, bool K2Node_DynamicCast_bSuccess, EValeriaFuncResult CallFunc_Client_GetFirstPlayerController_OutResult, class AValeriaPlayerController* CallFunc_Client_GetFirstPlayerController_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UGardenPlantingComponent* CallFunc_GetGardenPlanting_ReturnValue, class AGardenTile* K2Node_CustomEvent_gardenTile_1, bool CallFunc_IsDedicatedServer_ReturnValue, class AActor* CallFunc_GetGardenPatchOwner_ReturnValue_1, class ABP_Garden3x3_C* K2Node_DynamicCast_AsBP_Garden_3x_3_1, bool K2Node_DynamicCast_bSuccess_1, class AGardenTile* K2Node_CustomEvent_gardenTile, TDelegate<void(class AGardenTile* GardenTile)> K2Node_CreateDelegate_OutputDelegate_2, class AActor* CallFunc_GetGardenPatchOwner_ReturnValue_2, class ABP_Garden3x3_C* K2Node_DynamicCast_AsBP_Garden_3x_3_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsWatered_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_CustomEvent_PlantItemType, bool K2Node_CustomEvent_outRepeatHarvest, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_2, bool CallFunc_CanStartTutorialForFlag_ReturnValue, bool CallFunc_CanStartTutorialForFlag_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_3, TDelegate<void(class AGardenTile* GardenTile)> K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Garden_FullPlot_C", "ExecuteUbergraph_BP_Garden_FullPlot");

	Params::BP_Garden_FullPlot_C_ExecuteUbergraph_BP_Garden_FullPlot Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_gardenTile_2 = K2Node_CustomEvent_gardenTile_2;
	Parms.CallFunc_GetGardenPatchOwner_ReturnValue = CallFunc_GetGardenPatchOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Garden_3x_3 = K2Node_DynamicCast_AsBP_Garden_3x_3;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Client_GetFirstPlayerController_OutResult = CallFunc_Client_GetFirstPlayerController_OutResult;
	Parms.CallFunc_Client_GetFirstPlayerController_ReturnValue = CallFunc_Client_GetFirstPlayerController_ReturnValue;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue = CallFunc_GetValeriaCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGardenPlanting_ReturnValue = CallFunc_GetGardenPlanting_ReturnValue;
	Parms.K2Node_CustomEvent_gardenTile_1 = K2Node_CustomEvent_gardenTile_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetGardenPatchOwner_ReturnValue_1 = CallFunc_GetGardenPatchOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Garden_3x_3_1 = K2Node_DynamicCast_AsBP_Garden_3x_3_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_gardenTile = K2Node_CustomEvent_gardenTile;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetGardenPatchOwner_ReturnValue_2 = CallFunc_GetGardenPatchOwner_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Garden_3x_3_2 = K2Node_DynamicCast_AsBP_Garden_3x_3_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsWatered_ReturnValue = CallFunc_IsWatered_ReturnValue;
	Parms.K2Node_CustomEvent_PlantItemType = K2Node_CustomEvent_PlantItemType;
	Parms.K2Node_CustomEvent_outRepeatHarvest = K2Node_CustomEvent_outRepeatHarvest;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1 = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_2 = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_2;
	Parms.CallFunc_CanStartTutorialForFlag_ReturnValue = CallFunc_CanStartTutorialForFlag_ReturnValue;
	Parms.CallFunc_CanStartTutorialForFlag_ReturnValue_1 = CallFunc_CanStartTutorialForFlag_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_3 = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Garden_FullPlot.BP_Garden_FullPlot_C.On Harvested
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVAL_ItemTypeDefinitionAsset*     PlantItemType                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    OutRepeatHarvest                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Garden_FullPlot_C::On_Harvested(class UVAL_ItemTypeDefinitionAsset* PlantItemType, bool OutRepeatHarvest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Garden_FullPlot_C", "On Harvested");

	Params::BP_Garden_FullPlot_C_On_Harvested Parms{};

	Parms.PlantItemType = PlantItemType;
	Parms.OutRepeatHarvest = OutRepeatHarvest;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Garden_FullPlot.BP_Garden_FullPlot_C.OnHasHarvestablePlant
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGardenTile*                      GardenTile                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Garden_FullPlot_C::OnHasHarvestablePlant(class AGardenTile* GardenTile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Garden_FullPlot_C", "OnHasHarvestablePlant");

	Params::BP_Garden_FullPlot_C_OnHasHarvestablePlant Parms{};

	Parms.GardenTile = GardenTile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Garden_FullPlot.BP_Garden_FullPlot_C.OnHasUnwateredPlant
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGardenTile*                      GardenTile                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Garden_FullPlot_C::OnHasUnwateredPlant(class AGardenTile* GardenTile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Garden_FullPlot_C", "OnHasUnwateredPlant");

	Params::BP_Garden_FullPlot_C_OnHasUnwateredPlant Parms{};

	Parms.GardenTile = GardenTile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Garden_FullPlot.BP_Garden_FullPlot_C.OnWaterChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGardenTile*                      GardenTile                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Garden_FullPlot_C::OnWaterChanged(class AGardenTile* GardenTile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Garden_FullPlot_C", "OnWaterChanged");

	Params::BP_Garden_FullPlot_C_OnWaterChanged Parms{};

	Parms.GardenTile = GardenTile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Garden_FullPlot.BP_Garden_FullPlot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Garden_FullPlot_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Garden_FullPlot_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Garden_FullPlot.BP_Garden_FullPlot_C.Unbind OnHasHarvestablePlant
// (BlueprintCallable, BlueprintEvent)

void ABP_Garden_FullPlot_C::Unbind_OnHasHarvestablePlant()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Garden_FullPlot_C", "Unbind OnHasHarvestablePlant");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Garden_FullPlot.BP_Garden_FullPlot_C.Unbind OnHasUnwateredPlant
// (BlueprintCallable, BlueprintEvent)

void ABP_Garden_FullPlot_C::Unbind_OnHasUnwateredPlant()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Garden_FullPlot_C", "Unbind OnHasUnwateredPlant");

	UObject::ProcessEvent(Func, nullptr);
}

}

