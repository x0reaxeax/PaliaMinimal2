#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractablePlateWidgetComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PlateWidgetComponent_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InteractablePlateWidgetComponent.BP_InteractablePlateWidgetComponent_C
// 0x0030 (0x09D0 - 0x09A0)
class UBP_InteractablePlateWidgetComponent_C final : public UBP_PlateWidgetComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_InteractablePlateWidgetComponent_C; // 0x0998(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UInteractableComponent*                 InteractableComp;                                  // 0x09A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHighlighted;                                     // 0x09A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldAutomaticallyPosition;                       // 0x09A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F9E[0x6];                                     // 0x09AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MeshBoundsScaleMultiplier;                         // 0x09B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SetPivotBasedonDirection;                          // 0x09B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInteractablePlatePayload              PlatePayload;                                      // 0x09B9(0x0002)(Edit, BlueprintVisible, NoDestructor)
	bool                                          bRefillWaterCan;                                   // 0x09BB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F9F[0x4];                                     // 0x09BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputMappingContext*                   ActiveRefillWaterCanIMC;                           // 0x09C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void RemoveRefillWaterCanIMC(const struct FModifyContextOptions& K2Node_MakeStruct_ModifyContextOptions, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, class UEnhancedInputLocalPlayerSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_RemoveMappingContext_self_CastInput, bool K2Node_SwitchEnum_CmpSuccess);
	void AddRefillWaterCanIMC(class UInputMappingContext* AddIMC, bool CallFunc_IsValid_ReturnValue, const struct FModifyContextOptions& K2Node_MakeStruct_ModifyContextOptions, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UEnhancedInputLocalPlayerSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_AddMappingContext_self_CastInput);
	void Refill_Water_Can_Tick(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class ABP_ValeriaPlayerController_C* K2Node_DynamicCast_AsBP_Valeria_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UWBP_InteractPlate_Prompt_C* K2Node_DynamicCast_AsWBP_Interact_Plate_Prompt, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetInteractState_bInteractState, ECharacterState CallFunc_GetInteractState_State, bool K2Node_SwitchEnum_CmpSuccess, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FValeriaItem& CallFunc_GetEquippedItem_ReturnValue, class ABP_ValeriaCharacter_C* K2Node_DynamicCast_AsBP_Valeria_Character, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Find_Water_For_Refill_Was_Found, class AActor* CallFunc_Find_Water_For_Refill_Water_Actor, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_HasTag_ReturnValue);
	void TryUpdateAlignment(const struct FBoxSphereBounds& MeshBounds, EInteractablePlateVerticalOffsetDirection Temp_byte_Variable, const struct FVector2D& CallFunc_GetPivot_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, struct FVector2D& K2Node_Select_Default);
	void AutomaticallyPosition(const struct FBoxSphereBounds& MeshBounds, EInteractablePlateVerticalOffsetDirection Temp_byte_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, const struct FBox& CallFunc_GetActorBounds_OutBounds, const struct FVector& K2Node_Select_Default, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void HandleHighlightToggled(class UInteractableComponent* Interactable, bool Param_IsHighlighted, class AValeriaPlayerController* Player);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void On_Widget_Created();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UpdateRefillWaterCanIMC(bool bPlateVisibile);
	void ExecuteUbergraph_BP_InteractablePlateWidgetComponent(int32 EntryPoint, EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UInteractableComponent* CallFunc_GetComponentByClass_ReturnValue, float K2Node_Event_DeltaSeconds, class UInteractableComponent* K2Node_CustomEvent_Interactable, bool K2Node_CustomEvent_IsHighlighted, class AValeriaPlayerController* K2Node_CustomEvent_player, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TDelegate<void(class UInteractableComponent* InteractableComponent, bool IsHighlighted, class AValeriaPlayerController* Player)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class UInteractableComponent* InteractableComponent, bool IsHighlighted, class AValeriaPlayerController* Player)> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_3, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue_1, class UInteractableComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UVAL_InputGlobalConfig* CallFunc_GetInputGlobalConfig_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, TScriptInterface<class IInteractablePlate> K2Node_DynamicCast_AsInteractable_Plate, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_5, EInteractEventIndex Temp_byte_Variable, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, TScriptInterface<class IInteractablePlate> K2Node_DynamicCast_AsInteractable_Plate_1, bool K2Node_DynamicCast_bSuccess_1, const struct FInputMappingPriorityData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsDesktop_ReturnValue, bool K2Node_CustomEvent_bPlateVisibile, bool CallFunc_NotEqual_ObjectObject_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InteractablePlateWidgetComponent_C">();
	}
	static class UBP_InteractablePlateWidgetComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_InteractablePlateWidgetComponent_C>();
	}
};
static_assert(alignof(UBP_InteractablePlateWidgetComponent_C) == 0x000010, "Wrong alignment on UBP_InteractablePlateWidgetComponent_C");
static_assert(sizeof(UBP_InteractablePlateWidgetComponent_C) == 0x0009D0, "Wrong size on UBP_InteractablePlateWidgetComponent_C");
static_assert(offsetof(UBP_InteractablePlateWidgetComponent_C, UberGraphFrame_BP_InteractablePlateWidgetComponent_C) == 0x000998, "Member 'UBP_InteractablePlateWidgetComponent_C::UberGraphFrame_BP_InteractablePlateWidgetComponent_C' has a wrong offset!");
static_assert(offsetof(UBP_InteractablePlateWidgetComponent_C, InteractableComp) == 0x0009A0, "Member 'UBP_InteractablePlateWidgetComponent_C::InteractableComp' has a wrong offset!");
static_assert(offsetof(UBP_InteractablePlateWidgetComponent_C, IsHighlighted) == 0x0009A8, "Member 'UBP_InteractablePlateWidgetComponent_C::IsHighlighted' has a wrong offset!");
static_assert(offsetof(UBP_InteractablePlateWidgetComponent_C, ShouldAutomaticallyPosition) == 0x0009A9, "Member 'UBP_InteractablePlateWidgetComponent_C::ShouldAutomaticallyPosition' has a wrong offset!");
static_assert(offsetof(UBP_InteractablePlateWidgetComponent_C, MeshBoundsScaleMultiplier) == 0x0009B0, "Member 'UBP_InteractablePlateWidgetComponent_C::MeshBoundsScaleMultiplier' has a wrong offset!");
static_assert(offsetof(UBP_InteractablePlateWidgetComponent_C, SetPivotBasedonDirection) == 0x0009B8, "Member 'UBP_InteractablePlateWidgetComponent_C::SetPivotBasedonDirection' has a wrong offset!");
static_assert(offsetof(UBP_InteractablePlateWidgetComponent_C, PlatePayload) == 0x0009B9, "Member 'UBP_InteractablePlateWidgetComponent_C::PlatePayload' has a wrong offset!");
static_assert(offsetof(UBP_InteractablePlateWidgetComponent_C, bRefillWaterCan) == 0x0009BB, "Member 'UBP_InteractablePlateWidgetComponent_C::bRefillWaterCan' has a wrong offset!");
static_assert(offsetof(UBP_InteractablePlateWidgetComponent_C, ActiveRefillWaterCanIMC) == 0x0009C0, "Member 'UBP_InteractablePlateWidgetComponent_C::ActiveRefillWaterCanIMC' has a wrong offset!");

}

