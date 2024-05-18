#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FishingHud

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FishingHud.WBP_FishingHud_C
// 0x0168 (0x0428 - 0x02C0)
class UWBP_FishingHud_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowFirstTimeCatch;                                // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowPerfectCatch;                                  // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeOutEncouragementText;                          // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FlashHealth;                                       // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Encouragement;                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CastingPanel;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonInputActionWidget_C*         CommonInputActionWidget_RealImage;                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DEBUG_Anchor;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DebugInfoTextA;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DebugInfoTextB;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DebugInfoTextC;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DebugInfoTextD;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           DmgMeter;                                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           HpMeter;                                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IconBacker;                                  // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor_Popin_C*                    MenuAnchor_Popin_Nibbles;                          // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor_Popin_C*                    MenuAnchor_Popin_Reel;                             // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MiniGameAnchor;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_FirstTimeCatch;                            // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_PerfectCatch;                              // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_Encouragement;                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BasicHighlightDecorator_C*         WBP_BasicHighlightDecorator;                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BasicHighlightDecorator_C*         WBP_BasicHighlightDecorator_171;                   // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           WindupMeter;                                       // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           SavedColor;                                        // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShowingDebugInfo;                                // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C34[0x7];                                     // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PopinCalloutWidget_C*              MenuContent;                                       // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFishingComponent*                      Fishing_Component;                                 // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EFishingMiniGameState                         PrevFishingMiniGameState;                          // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C35[0x7];                                     // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           NibbleFtueCloseTimer;                              // 0x03C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        PreviousDmgPercent;                                // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFishingState_OLD                             PrevOldFishingMiniGameState;                       // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C36[0x7];                                     // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Waiting_Button_Prompt;                             // 0x03E0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Hook_Fish_Button_Prompt;                           // 0x03F8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Reeling_Mode_Button_Prompt;                        // 0x0410(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AnimateDmg();
	void Construct();
	void ExecuteUbergraph_WBP_FishingHud(int32 EntryPoint, class UWBP_FishingEncouragementEmoji_C* CallFunc_Create_ReturnValue, class UFishingComponent* K2Node_CustomEvent_Source_2, class AValeriaCharacter* K2Node_CustomEvent_fromVc, class UFishingComponent* K2Node_CustomEvent_FishingComponent, class UFishingViewComponent* K2Node_CustomEvent_FIshingViewComponent, TDelegate<void(class UFishingComponent* Source, const struct FFishCaughtResult& Result)> K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class UFishingViewComponent* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UFishingComponent* K2Node_CustomEvent_Source_1, const struct FFishCaughtResult& K2Node_CustomEvent_Result, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UFishingViewComponent* K2Node_CustomEvent_FishingView_1, class AActor* K2Node_CustomEvent_bobble, class UFishingViewComponent* K2Node_CustomEvent_FishingView, const struct FFishingMiniGameViewState& K2Node_CustomEvent_ViewState, class UFishingComponent* K2Node_CustomEvent_Source, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, bool CallFunc_CanStartTutorialForFlag_ReturnValue, TDelegate<void(class UFishingViewComponent* FishingView, const struct FFishingMiniGameViewState& ViewState, class UFishingComponent* Source)> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(class UUserWidget* ModalWidget, TArray<class UUserWidget*>& TutorialWidgets)> K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TDelegate<void(class UFishingViewComponent* FishingView, class AActor* bobble)> K2Node_CreateDelegate_OutputDelegate_3, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, TScriptInterface<class IBPI_GameplayUIManagerTutorial_CM_C> K2Node_DynamicCast_AsBPI_Gameplay_UIManager_Tutorial_CM, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_RedirectTutorialModalType_bSuccess);
	void HandleAimingCastState(class UFishingViewComponent* FishingView, const struct FFishingMiniGameViewState& CallFunc_GetViewState_ReturnValue);
	void HandleFishingViewUpdated(class UFishingViewComponent* FishingView, const struct FFishingMiniGameViewState& ViewState, class UFishingComponent* Source);
	void HandleOpenFishingTutorial(class UUserWidget* ModalWidget, TArray<class UUserWidget*>& TutorialWidgets, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TScriptInterface<class IBP_ModalInterface_Tutorial_C> K2Node_DynamicCast_AsBP_Modal_Interface_Tutorial, bool K2Node_DynamicCast_bSuccess, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue);
	void HandleReelingState(class UFishingViewComponent* FishingView, class UTexture2D* BackerRed, class UTexture2D* BackerTan, double DangerDmgAmount, const struct FFishingMiniGameViewState& CallFunc_GetViewState_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetPercent_InPercent_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast_1);
	void HideDebuggingUI();
	void LinkToFishingComponent(class UFishingComponent* FishingComponent, class UFishingViewComponent* FishingViewComponent);
	class UUserWidget* On_MenuAnchor_Popin_Bites_GetUserMenuContent_0(class UWBP_PopinCalloutWidget_C* LocalPopin, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, TScriptInterface<class IBPI_GameplayUIManagerTutorial_CM_C> K2Node_DynamicCast_AsBPI_Gameplay_UIManager_Tutorial_CM, bool K2Node_DynamicCast_bSuccess, class UWBP_FTUEPopin_CM_C* CallFunc_Redirect_FTUEPopin_Type_FTUEPopin, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_PopinCalloutWidget_C* CallFunc_Create_ReturnValue);
	class UUserWidget* On_MenuAnchor_Popin_Nibbles_GetUserMenuContent_0(class UWBP_PopinCalloutWidget_C* LocalPopin, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, TScriptInterface<class IBPI_GameplayUIManagerTutorial_CM_C> K2Node_DynamicCast_AsBPI_Gameplay_UIManager_Tutorial_CM, bool K2Node_DynamicCast_bSuccess, class UWBP_FTUEPopin_CM_C* CallFunc_Redirect_FTUEPopin_Type_FTUEPopin, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_PopinCalloutWidget_C* CallFunc_Create_ReturnValue);
	void OnBobberCreated(class UFishingViewComponent* FishingView, class AActor* bobble);
	void OnFishCaught(class UFishingComponent* Source, const struct FFishCaughtResult& Result);
	void OnReceivedFishingEncouragement(class UFishingComponent* Source, class AValeriaCharacter* FromVc);
	void ShowDebuggingUI();
	void TriggerEncouragementEmoji();
	void TryShowUpdatedFishingFTUE();
	void UpdateDebugUI(class UFishingComponent* FishingComp, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsDebuggingOn__IsDebuggingOn, EFishingState_NEW CallFunc_GetDebugInfo_CurrentFishingState, EFFishingLevelSegmentActionType CallFunc_GetDebugInfo_FishActionType, int32 CallFunc_GetDebugInfo_CurrentSegmentNextIndex, int32 CallFunc_GetDebugInfo_TotalSegments, float CallFunc_GetDebugInfo_CurrentActionLerpPctg, float CallFunc_GetDebugInfo_TimePassed, float CallFunc_GetDebugInfo_ActionStated, float CallFunc_GetDebugInfo_ActionTargetLocation, float CallFunc_GetDebugInfo_CurrentBobberSpeed, float CallFunc_GetDebugInfo_CurrentBobberPosition, float CallFunc_GetDebugInfo_TotalTaskTime, float CallFunc_GetDebugInfo_RawTaskTimeWithoutPause, float CallFunc_GetDebugInfo_TimeInCurrentTask, const class FString& CallFunc_GetDebugInfo_FishName, float CallFunc_GetDebugInfo_SafeZonePosition, bool CallFunc_NotEqual_ByteByte_ReturnValue, EFishingState_NEW CallFunc_GetDebugInfo_CurrentFishingState_1, EFFishingLevelSegmentActionType CallFunc_GetDebugInfo_FishActionType_1, int32 CallFunc_GetDebugInfo_CurrentSegmentNextIndex_1, int32 CallFunc_GetDebugInfo_TotalSegments_1, float CallFunc_GetDebugInfo_CurrentActionLerpPctg_1, float CallFunc_GetDebugInfo_TimePassed_1, float CallFunc_GetDebugInfo_ActionStated_1, float CallFunc_GetDebugInfo_ActionTargetLocation_1, float CallFunc_GetDebugInfo_CurrentBobberSpeed_1, float CallFunc_GetDebugInfo_CurrentBobberPosition_1, float CallFunc_GetDebugInfo_TotalTaskTime_1, float CallFunc_GetDebugInfo_RawTaskTimeWithoutPause_1, float CallFunc_GetDebugInfo_TimeInCurrentTask_1, const class FString& CallFunc_GetDebugInfo_FishName_1, float CallFunc_GetDebugInfo_SafeZonePosition_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_UTIL_FloatToStringWithPrecision_OutString, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_UTIL_FloatToStringWithPrecision_OutString_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_UTIL_FloatToStringWithPrecision_OutString_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_UTIL_FloatToStringWithPrecision_OutString_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_UTIL_FloatToStringWithPrecision_OutString_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_UTIL_FloatToStringWithPrecision_OutString_5, const class FString& CallFunc_UTIL_FloatToStringWithPrecision_OutString_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_UTIL_FloatToStringWithPrecision_OutString_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_UTIL_FloatToStringWithPrecision_OutString_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_UTIL_FloatToStringWithPrecision_OutString_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, const class FString& CallFunc_Concat_StrStr_ReturnValue_18, const class FString& CallFunc_Concat_StrStr_ReturnValue_19, const class FString& CallFunc_Concat_StrStr_ReturnValue_20, class FText CallFunc_Conv_StringToText_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_21, const class FString& CallFunc_Concat_StrStr_ReturnValue_22, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_23, const class FString& CallFunc_Concat_StrStr_ReturnValue_24, class FText CallFunc_Conv_StringToText_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_25, class FText CallFunc_Conv_StringToText_ReturnValue_5, double CallFunc_UTIL_FloatToStringWithPrecision_InFloat_ImplicitCast, double CallFunc_UTIL_FloatToStringWithPrecision_InFloat_ImplicitCast_1, double CallFunc_UTIL_FloatToStringWithPrecision_InFloat_ImplicitCast_2, double CallFunc_UTIL_FloatToStringWithPrecision_InFloat_ImplicitCast_3, double CallFunc_UTIL_FloatToStringWithPrecision_InFloat_ImplicitCast_4, double CallFunc_UTIL_FloatToStringWithPrecision_InFloat_ImplicitCast_5, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_UTIL_FloatToStringWithPrecision_InFloat_ImplicitCast_6, double CallFunc_UTIL_FloatToStringWithPrecision_InFloat_ImplicitCast_7, double CallFunc_UTIL_FloatToStringWithPrecision_InFloat_ImplicitCast_8);
	void UpdateFishing(class UFishingViewComponent* Fishing_View, class UFishingComponent* Fishing, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, const struct FFishingMiniGameViewState& CallFunc_GetViewState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, ESlateVisibility Temp_byte_Variable_6, EFishingState_OLD Temp_byte_Variable_7, EFishingState_OLD CallFunc_GetFishingState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FFishingMiniGameViewState& CallFunc_GetViewState_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, EFishingState_OLD CallFunc_GetFishingState_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, ESlateVisibility K2Node_Select_Default_1);
	void UTIL_FloatToStringWithPrecision(double InFloat, int32 DecimalPrecision, class FString* OutString, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, const class FString& CallFunc_Left_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_FishingHud_C">();
	}
	static class UWBP_FishingHud_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FishingHud_C>();
	}
};
static_assert(alignof(UWBP_FishingHud_C) == 0x000008, "Wrong alignment on UWBP_FishingHud_C");
static_assert(sizeof(UWBP_FishingHud_C) == 0x000428, "Wrong size on UWBP_FishingHud_C");
static_assert(offsetof(UWBP_FishingHud_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_FishingHud_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, ShowFirstTimeCatch) == 0x0002C8, "Member 'UWBP_FishingHud_C::ShowFirstTimeCatch' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, ShowPerfectCatch) == 0x0002D0, "Member 'UWBP_FishingHud_C::ShowPerfectCatch' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, FadeOutEncouragementText) == 0x0002D8, "Member 'UWBP_FishingHud_C::FadeOutEncouragementText' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, FlashHealth) == 0x0002E0, "Member 'UWBP_FishingHud_C::FlashHealth' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, CanvasPanel_Encouragement) == 0x0002E8, "Member 'UWBP_FishingHud_C::CanvasPanel_Encouragement' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, CastingPanel) == 0x0002F0, "Member 'UWBP_FishingHud_C::CastingPanel' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, CommonInputActionWidget_RealImage) == 0x0002F8, "Member 'UWBP_FishingHud_C::CommonInputActionWidget_RealImage' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, DEBUG_Anchor) == 0x000300, "Member 'UWBP_FishingHud_C::DEBUG_Anchor' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, DebugInfoTextA) == 0x000308, "Member 'UWBP_FishingHud_C::DebugInfoTextA' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, DebugInfoTextB) == 0x000310, "Member 'UWBP_FishingHud_C::DebugInfoTextB' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, DebugInfoTextC) == 0x000318, "Member 'UWBP_FishingHud_C::DebugInfoTextC' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, DebugInfoTextD) == 0x000320, "Member 'UWBP_FishingHud_C::DebugInfoTextD' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, DmgMeter) == 0x000328, "Member 'UWBP_FishingHud_C::DmgMeter' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, HpMeter) == 0x000330, "Member 'UWBP_FishingHud_C::HpMeter' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, Image_0) == 0x000338, "Member 'UWBP_FishingHud_C::Image_0' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, Image_1) == 0x000340, "Member 'UWBP_FishingHud_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, Image_IconBacker) == 0x000348, "Member 'UWBP_FishingHud_C::Image_IconBacker' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, MenuAnchor_Popin_Nibbles) == 0x000350, "Member 'UWBP_FishingHud_C::MenuAnchor_Popin_Nibbles' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, MenuAnchor_Popin_Reel) == 0x000358, "Member 'UWBP_FishingHud_C::MenuAnchor_Popin_Reel' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, MiniGameAnchor) == 0x000360, "Member 'UWBP_FishingHud_C::MiniGameAnchor' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, SizeBox_FirstTimeCatch) == 0x000368, "Member 'UWBP_FishingHud_C::SizeBox_FirstTimeCatch' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, SizeBox_PerfectCatch) == 0x000370, "Member 'UWBP_FishingHud_C::SizeBox_PerfectCatch' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, TextBlock_Encouragement) == 0x000378, "Member 'UWBP_FishingHud_C::TextBlock_Encouragement' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, WBP_BasicHighlightDecorator) == 0x000380, "Member 'UWBP_FishingHud_C::WBP_BasicHighlightDecorator' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, WBP_BasicHighlightDecorator_171) == 0x000388, "Member 'UWBP_FishingHud_C::WBP_BasicHighlightDecorator_171' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, WindupMeter) == 0x000390, "Member 'UWBP_FishingHud_C::WindupMeter' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, SavedColor) == 0x000398, "Member 'UWBP_FishingHud_C::SavedColor' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, IsShowingDebugInfo) == 0x0003A8, "Member 'UWBP_FishingHud_C::IsShowingDebugInfo' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, MenuContent) == 0x0003B0, "Member 'UWBP_FishingHud_C::MenuContent' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, Fishing_Component) == 0x0003B8, "Member 'UWBP_FishingHud_C::Fishing_Component' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, PrevFishingMiniGameState) == 0x0003C0, "Member 'UWBP_FishingHud_C::PrevFishingMiniGameState' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, NibbleFtueCloseTimer) == 0x0003C8, "Member 'UWBP_FishingHud_C::NibbleFtueCloseTimer' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, PreviousDmgPercent) == 0x0003D0, "Member 'UWBP_FishingHud_C::PreviousDmgPercent' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, PrevOldFishingMiniGameState) == 0x0003D8, "Member 'UWBP_FishingHud_C::PrevOldFishingMiniGameState' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, Waiting_Button_Prompt) == 0x0003E0, "Member 'UWBP_FishingHud_C::Waiting_Button_Prompt' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, Hook_Fish_Button_Prompt) == 0x0003F8, "Member 'UWBP_FishingHud_C::Hook_Fish_Button_Prompt' has a wrong offset!");
static_assert(offsetof(UWBP_FishingHud_C, Reeling_Mode_Button_Prompt) == 0x000410, "Member 'UWBP_FishingHud_C::Reeling_Mode_Button_Prompt' has a wrong offset!");

}
