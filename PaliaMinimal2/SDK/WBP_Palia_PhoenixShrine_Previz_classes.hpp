#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Palia_PhoenixShrine_Previz

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Palia_PhoenixShrine_Previz.WBP_Palia_PhoenixShrine_Previz_C
// 0x0038 (0x02F8 - 0x02C0)
class UWBP_Palia_PhoenixShrine_Previz_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CineSlate;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SkipButton;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_51;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMediaPlayer*                           MediaPlayer;                                       // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         ClickCounter;                                      // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WB_Palia_PhoenixShrine_Previz_SkipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WBP_Palia_PhoenixShrine_Previz(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_OpenSource_ReturnValue, TArray<class ABP_VillagerTheArchaeologist_Intro_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AValeriaVillagerCharacter* K2Node_DynamicCast_AsValeria_Villager_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsPlaying_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_1, float CallFunc_MakeColor_A_ImplicitCast);
	void ForceEngageWithVillager(class AValeriaVillagerCharacter* Villager, class UInteractableComponent* VillagerInteraction, bool CallFunc_IsValid_ReturnValue, TArray<class UInteractableComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UInteractableComponent* CallFunc_Array_Get_Item, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UInteractorComponent* CallFunc_GetInteractorComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UInteractorComponent* CallFunc_GetInteractorComponent_ReturnValue_1, const struct FInteractEventParams& K2Node_MakeStruct_InteractEventParams, const struct FUseEventResults& CallFunc_InteractWithHighlighted_ReturnValue);
	void OnEndReached_Movie();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Palia_PhoenixShrine_Previz_C">();
	}
	static class UWBP_Palia_PhoenixShrine_Previz_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Palia_PhoenixShrine_Previz_C>();
	}
};
static_assert(alignof(UWBP_Palia_PhoenixShrine_Previz_C) == 0x000008, "Wrong alignment on UWBP_Palia_PhoenixShrine_Previz_C");
static_assert(sizeof(UWBP_Palia_PhoenixShrine_Previz_C) == 0x0002F8, "Wrong size on UWBP_Palia_PhoenixShrine_Previz_C");
static_assert(offsetof(UWBP_Palia_PhoenixShrine_Previz_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_Palia_PhoenixShrine_Previz_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Palia_PhoenixShrine_Previz_C, CanvasPanel_0) == 0x0002C8, "Member 'UWBP_Palia_PhoenixShrine_Previz_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWBP_Palia_PhoenixShrine_Previz_C, CineSlate) == 0x0002D0, "Member 'UWBP_Palia_PhoenixShrine_Previz_C::CineSlate' has a wrong offset!");
static_assert(offsetof(UWBP_Palia_PhoenixShrine_Previz_C, SkipButton) == 0x0002D8, "Member 'UWBP_Palia_PhoenixShrine_Previz_C::SkipButton' has a wrong offset!");
static_assert(offsetof(UWBP_Palia_PhoenixShrine_Previz_C, TextBlock_51) == 0x0002E0, "Member 'UWBP_Palia_PhoenixShrine_Previz_C::TextBlock_51' has a wrong offset!");
static_assert(offsetof(UWBP_Palia_PhoenixShrine_Previz_C, MediaPlayer) == 0x0002E8, "Member 'UWBP_Palia_PhoenixShrine_Previz_C::MediaPlayer' has a wrong offset!");
static_assert(offsetof(UWBP_Palia_PhoenixShrine_Previz_C, ClickCounter) == 0x0002F0, "Member 'UWBP_Palia_PhoenixShrine_Previz_C::ClickCounter' has a wrong offset!");

}

