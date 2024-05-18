#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CrafterInWorldPlateWidgetComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function BP_CrafterInWorldPlateWidgetComponent.BP_CrafterInWorldPlateWidgetComponent_C.ShouldPlateBeVisible
// 0x0040 (0x0040 - 0x0000)
struct BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60F0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerControllerFromID_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaPlayerController*               K2Node_DynamicCast_AsValeria_Player_Controller;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60F1[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacter_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCrafterComponent*                      CallFunc_GetComponentByClass_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlateVisible_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible) == 0x000008, "Wrong alignment on BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible");
static_assert(sizeof(BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible) == 0x000040, "Wrong size on BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible, ReturnValue) == 0x000000, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible, CallFunc_GetPlayerControllerFromID_ReturnValue) == 0x000008, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible::CallFunc_GetPlayerControllerFromID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible, K2Node_DynamicCast_AsValeria_Player_Controller) == 0x000010, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible::K2Node_DynamicCast_AsValeria_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible, CallFunc_GetValeriaCharacter_ReturnValue) == 0x000020, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible::CallFunc_GetValeriaCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible, CallFunc_GetOwner_ReturnValue) == 0x000028, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible, CallFunc_IsPlateVisible_ReturnValue) == 0x000038, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible::CallFunc_IsPlateVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ShouldPlateBeVisible::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_CrafterInWorldPlateWidgetComponent.BP_CrafterInWorldPlateWidgetComponent_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_CrafterInWorldPlateWidgetComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CrafterInWorldPlateWidgetComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_CrafterInWorldPlateWidgetComponent_C_ReceiveEndPlay");
static_assert(sizeof(BP_CrafterInWorldPlateWidgetComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_CrafterInWorldPlateWidgetComponent_C_ReceiveEndPlay");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_CrafterInWorldPlateWidgetComponent.BP_CrafterInWorldPlateWidgetComponent_C.HandleOnHighlightToggled
// 0x0018 (0x0018 - 0x0000)
struct BP_CrafterInWorldPlateWidgetComponent_C_HandleOnHighlightToggled final
{
public:
	class UInteractableComponent*                 Interactable;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHighlighted;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60F2[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaPlayerController*               Player;                                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CrafterInWorldPlateWidgetComponent_C_HandleOnHighlightToggled) == 0x000008, "Wrong alignment on BP_CrafterInWorldPlateWidgetComponent_C_HandleOnHighlightToggled");
static_assert(sizeof(BP_CrafterInWorldPlateWidgetComponent_C_HandleOnHighlightToggled) == 0x000018, "Wrong size on BP_CrafterInWorldPlateWidgetComponent_C_HandleOnHighlightToggled");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_HandleOnHighlightToggled, Interactable) == 0x000000, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_HandleOnHighlightToggled::Interactable' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_HandleOnHighlightToggled, IsHighlighted) == 0x000008, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_HandleOnHighlightToggled::IsHighlighted' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_HandleOnHighlightToggled, Player) == 0x000010, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_HandleOnHighlightToggled::Player' has a wrong offset!");

// Function BP_CrafterInWorldPlateWidgetComponent.BP_CrafterInWorldPlateWidgetComponent_C.ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent
// 0x00E0 (0x00E0 - 0x0000)
struct BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_GetValeriaCharacter_OutResult;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60F3[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacter_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60F4[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60F5[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCrafterComponent*                      CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60F6[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CrafterPlate_C>   K2Node_DynamicCast_AsBPI_Crafter_Plate;            // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60F7[0x5];                                     // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                 CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                 K2Node_CustomEvent_Interactable;                   // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsHighlighted;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60F8[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaPlayerController*               K2Node_CustomEvent_player;                         // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class USphereComponent*                 CallFunc_K2_FindClosestInteractableLocation_ReturnValue; // 0x0080(0x0008)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetInteractable_ReturnValue;              // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCrafterComponent*                      K2Node_DynamicCast_AsCrafter_Component;            // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60F9[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UInteractableComponent* InteractableComponent, bool IsHighlighted, class AValeriaPlayerController* Player)> K2Node_CreateDelegate_OutputDelegate;              // 0x009C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UInteractableComponent* InteractableComponent, bool IsHighlighted, class AValeriaPlayerController* Player)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00AC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60FA[0x2];                                     // 0x00BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue_1;        // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_CrafterPlate_C>   K2Node_DynamicCast_AsBPI_Crafter_Plate_1;          // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue_1;     // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent) == 0x000008, "Wrong alignment on BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent");
static_assert(sizeof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent) == 0x0000E0, "Wrong size on BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, EntryPoint) == 0x000000, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, CallFunc_GetValeriaCharacter_OutResult) == 0x000004, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::CallFunc_GetValeriaCharacter_OutResult' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, CallFunc_GetValeriaCharacter_ReturnValue) == 0x000008, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::CallFunc_GetValeriaCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, K2Node_Event_EndPlayReason) == 0x000020, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000030, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, CallFunc_IsDedicatedServer_ReturnValue) == 0x000038, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, K2Node_DynamicCast_AsBPI_Crafter_Plate) == 0x000040, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::K2Node_DynamicCast_AsBPI_Crafter_Plate' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, CallFunc_Not_PreBool_ReturnValue) == 0x000051, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, CallFunc_DoesImplementInterface_ReturnValue) == 0x000052, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, CallFunc_GetOwner_ReturnValue_1) == 0x000058, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000060, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, K2Node_CustomEvent_Interactable) == 0x000068, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::K2Node_CustomEvent_Interactable' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, K2Node_CustomEvent_IsHighlighted) == 0x000070, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::K2Node_CustomEvent_IsHighlighted' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, K2Node_CustomEvent_player) == 0x000078, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::K2Node_CustomEvent_player' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, CallFunc_K2_FindClosestInteractableLocation_ReturnValue) == 0x000080, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::CallFunc_K2_FindClosestInteractableLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, CallFunc_GetInteractable_ReturnValue) == 0x000088, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::CallFunc_GetInteractable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, K2Node_DynamicCast_AsCrafter_Component) == 0x000090, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::K2Node_DynamicCast_AsCrafter_Component' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, K2Node_DynamicCast_bSuccess_1) == 0x000098, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, K2Node_CreateDelegate_OutputDelegate) == 0x00009C, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000AC, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, CallFunc_IsValid_ReturnValue) == 0x0000BC, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, CallFunc_IsValid_ReturnValue_1) == 0x0000BD, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, CallFunc_GetUserWidgetObject_ReturnValue_1) == 0x0000C0, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::CallFunc_GetUserWidgetObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, K2Node_DynamicCast_AsBPI_Crafter_Plate_1) == 0x0000C8, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::K2Node_DynamicCast_AsBPI_Crafter_Plate_1' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, K2Node_DynamicCast_bSuccess_2) == 0x0000D8, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, CallFunc_IsValid_ReturnValue_2) == 0x0000D9, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent, CallFunc_DoesImplementInterface_ReturnValue_1) == 0x0000DA, "Member 'BP_CrafterInWorldPlateWidgetComponent_C_ExecuteUbergraph_BP_CrafterInWorldPlateWidgetComponent::CallFunc_DoesImplementInterface_ReturnValue_1' has a wrong offset!");

}
