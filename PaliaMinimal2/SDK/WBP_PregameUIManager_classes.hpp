#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PregameUIManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "ValeriaDTOs_structs.hpp"
#include "ValeriaUI_structs.hpp"
#include "ValeriaUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PregameUIManager.WBP_PregameUIManager_C
// 0x08B8 (0x1050 - 0x0798)
class UWBP_PregameUIManager_C final : public UVALUI_PregameUIManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0798(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FullscreenFadeAwayFromBlack;                       // 0x07A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FullscreenFadeToBlack;                             // 0x07A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_FullscreenFade;                              // 0x07B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_LoadingScreen;                                // 0x07B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BannerNotificationSlot_C*          WBP_BannerNotificationSlot;                        // 0x07C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NotificationStack_C*               WBP_NotificationStack_Major;                       // 0x07C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NotificationStack_C*               WBP_NotificationStack_Minor;                       // 0x07D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AVAL_CharacterPreviewer*                CharacterPreviewerObject;                          // 0x07D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      CurrentRenderCharacter;                            // 0x07E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CachedNiagaraSystem;                               // 0x07E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSet<class FName>                             PreloadLevelNames;                                 // 0x07F0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 SelectedServerType;                                // 0x0840(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_Cinematic_CharSelect_BodyRevealFX_C* CachedBodyTypeTransitionScript;                    // 0x0850(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UVALUI_AnnouncementsMessageModalDialog* AnnouncementModal;                                 // 0x0858(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          FinishedBodyTypeSelectionVFX;                      // 0x0860(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4415[0x7];                                     // 0x0861(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVALUI_StateUserWidget_PregameHUD*      PreGameHUD;                                        // 0x0868(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_NotificationFactory_PreGame_C*      NotificationFactory;                               // 0x0870(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVALDTOS_MetaCharacterFormat           Current_CharacterMetaData;                         // 0x0878(0x0778)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftClassPtr<class UClass>                   NewVar;                                            // 0x0FF0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	bool                                          bIsLoginSuccess;                                   // 0x1018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LobbyCharacterCustomizationsCompleted;             // 0x1019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4416[0x6];                                     // 0x101A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             ShowTermsOfService;                                // 0x1020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             FetchedServerStatus;                               // 0x1030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsMatchmaking;                                    // 0x1040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowGameLobbyOnLogin;                             // 0x1041(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4417[0x6];                                     // 0x1042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CrossplayPopupTimerHandle;                         // 0x1048(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void FetchedServerStatus__DelegateSignature();
	void ShowTermsOfService__DelegateSignature();
	void AddLoadingScreenWidget(class UUserWidget* Widget);
	void Center_Character_Creation_Subscene_on_Character(class AVAL_CharacterRenderStudio* Studio, EVAL_CharacterRenderStudioState State, class FName Temp_name_Variable, bool K2Node_SwitchEnum_CmpSuccess, struct FTransform& CallFunc_GetTransform_ReturnValue, class AValeriaCharacter* CallFunc_GetCharacter_ReturnValue, struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FTransform& CallFunc_MakeRelativeTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_CenterSubSceneOnTransform_ReturnValue);
	void Completed_D23176C44BF6E6A6702E21820AA61E66();
	void Construct();
	void Destruct();
	void DisplayLoadingScreen(bool Display, class AVAL_PlayerControllerBase* CallFunc_GetValeriaPlayerController_PC, class UTravelManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue);
	void DisplayMatchmakingErrorResult(const struct FOSSVAL_MatchmakingResult& Result);
	void DisplayTravelNetworkFailureModal();
	void ExecuteUbergraph_WBP_PregameUIManager(int32 EntryPoint, const class FString& CallFunc_GetServerStatusUrl_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, TDelegate<void(const struct FVAL_ValidateLoadoutErrorPayload& ErrorPayload)> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_4, class US6UI_ModalWidgetBase* K2Node_CustomEvent_ModalWidget_3, TDelegate<void(class US6UI_ModalWidgetBase* ModalWidget)> K2Node_CreateDelegate_OutputDelegate_5, class US6UI_ModalWidgetBase* Temp_object_Variable, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_6, TScriptInterface<class IBP_ModalInterface_GenericError_C> K2Node_DynamicCast_AsBP_Modal_Interface_Generic_Error, bool K2Node_DynamicCast_bSuccess, class US6UI_ModalWidgetBase* K2Node_CustomEvent_ModalWidget_2, TDelegate<void(class US6UI_ModalWidgetBase* ModalWidget)> K2Node_CreateDelegate_OutputDelegate_7, class US6UI_ModalWidgetBase* Temp_object_Variable_1, bool Temp_bool_Variable, TScriptInterface<class IBP_ModalInterface_GenericError_C> K2Node_DynamicCast_AsBP_Modal_Interface_Generic_Error_1, bool K2Node_DynamicCast_bSuccess_1, class FText Temp_text_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class UValeriaWeather* CallFunc_GetWorldSubsystem_ReturnValue, class AValEnvironmentManager* CallFunc_GetCurrentEnvManager_ReturnValue, class UValeriaWeather* CallFunc_GetWorldSubsystem_ReturnValue_1, class AValEnvironmentManager* CallFunc_GetCurrentEnvManager_ReturnValue_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_8, class US6UI_ModalWidgetBase* K2Node_CustomEvent_ModalWidget_1, TDelegate<void(class US6UI_ModalWidgetBase* ModalWidget)> K2Node_CreateDelegate_OutputDelegate_9, class US6UI_ModalWidgetBase* Temp_object_Variable_2, class UTravelManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, TScriptInterface<class IBP_ModalInterface_GenericError_C> K2Node_DynamicCast_AsBP_Modal_Interface_Generic_Error_2, bool K2Node_DynamicCast_bSuccess_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_10, class US6UI_ModalWidgetBase* K2Node_CustomEvent_ModalWidget, TDelegate<void(class US6UI_ModalWidgetBase* ModalWidget)> K2Node_CreateDelegate_OutputDelegate_11, class US6UI_ModalWidgetBase* Temp_object_Variable_3, class UTravelManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, TScriptInterface<class IBP_ModalInterface_GenericError_C> K2Node_DynamicCast_AsBP_Modal_Interface_Generic_Error_3, bool K2Node_DynamicCast_bSuccess_3, const struct FF_GenericErrorModalPayload& K2Node_MakeStruct_F_GenericErrorModalPayload, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_12, class AVAL_PlayerControllerBase* CallFunc_GetValeriaPlayerController_PC, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_13, TDelegate<void(struct FOSSVAL_MatchmakingResult& Result)> K2Node_CreateDelegate_OutputDelegate_14, struct FOSSVAL_MatchmakingResult& K2Node_CustomEvent_Result_1, class UOSSVAL_AsyncActionQueryUserPrivileges* CallFunc_QueryUserPrivileges_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, const struct FOSSVAL_MatchmakingTicketContext& K2Node_MakeStruct_OSSVAL_MatchmakingTicketContext, class UVAL_AsyncAction_JoinServer* CallFunc_JoinServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable_1, bool K2Node_CustomEvent_bQueryResult, TDelegate<void(bool bQueryResult)> K2Node_CreateDelegate_OutputDelegate_15, const class FString& K2Node_CustomEvent_ServerType, const struct FOSSVAL_MatchmakingRequestContext& K2Node_MakeStruct_OSSVAL_MatchmakingRequestContext, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_16, class UVAL_AsyncAction_Matchmaking* CallFunc_StartMatchmaking_ReturnValue, TDelegate<void(struct FOSSVAL_MatchmakingResult& Result)> K2Node_CreateDelegate_OutputDelegate_17, bool CallFunc_IsValid_ReturnValue_3, class AVAL_PlayerControllerBase* CallFunc_GetValeriaPlayerController_PC_1, EVALUI_PregameState CallFunc_GetCurrentPregameStateId_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_18, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_19, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_20, TDelegate<void(int32 Number)> K2Node_CreateDelegate_OutputDelegate_21, class US6UI_ModalWidgetBase* Temp_object_Variable_4, TDelegate<void(struct FOSSVAL_MatchmakingResult& Result)> K2Node_CreateDelegate_OutputDelegate_22, class UWBP_CrossplayNotification_Console_C* K2Node_DynamicCast_AsWBP_Crossplay_Notification_Console, bool K2Node_DynamicCast_bSuccess_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FF_GenericErrorModalPayload& K2Node_MakeStruct_F_GenericErrorModalPayload_1, const class FString& K2Node_CustomEvent_ErrorMsg_1, const class FString& K2Node_CustomEvent_ErrorMsg, TSoftClassPtr<class UClass> CallFunc_RedirectModalType_ReturnValue, class US6UI_AsyncAction_OpenModal* CallFunc_OpenModal_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, EVALUI_CharacterCreationState K2Node_Event_NewState_3, bool K2Node_SwitchEnum_CmpSuccess, class AValeriaCharacter* CallFunc_GetCharacter_ReturnValue, class US6UI_ModalWidgetBase* K2Node_CustomEvent_ModalWidget_4, const struct FVALDTOS_MetaCharacterFormat& CallFunc_GetCachedCharacterAtIndex_Checked_OutCharacter, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TDelegate<void(class AVAL_CharacterRenderStudio* Studio, EVAL_CharacterRenderStudioState State)> K2Node_CreateDelegate_OutputDelegate_23, TDelegate<void(class AVAL_CharacterRenderStudio* Studio, EVAL_CharacterRenderStudioState State)> K2Node_CreateDelegate_OutputDelegate_24, const struct FVALDTOS_MetaCharacterFormat& K2Node_CustomEvent_Commited_Character, TArray<struct FVALDTOS_MetaCharacterFormat>& K2Node_MakeArray_Array, bool K2Node_ComponentBoundEvent_FirstSelection, const struct FS6UI_InputMode& CallFunc_CreateInputMode_UIOnly_ReturnValue, class US6UI_StateViewModel* CallFunc_GetViewModel_ReturnValue, const struct FOSSVAL_MatchmakingTicket& Temp_struct_Variable, int32 CallFunc_AkEventGlobal_ReturnValue, TDelegate<void(class US6UI_ModalWidgetBase* ModalWidget)> K2Node_CreateDelegate_OutputDelegate_25, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_26, class UVALUI_CharacterCreationScreenBase* CallFunc_GetCharacterCreationScreen_ReturnValue, class US6UI_StateViewModel* CallFunc_GetViewModel_ReturnValue_1, const struct FS6UI_InputMode& CallFunc_CreateInputMode_UIOnly_ReturnValue_1, const struct FOSSVAL_MatchmakingResult& Temp_struct_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, bool CallFunc_IsXSXPlatform_ReturnValue, bool CallFunc_IsPS5Platform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool Temp_bool_IsClosed_Variable, class US6UI_AsyncAction_OpenModal* CallFunc_OpenModal_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, class FName Temp_name_Variable_2, class AActor* CallFunc_GetActorWithTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, class ANiagaraActor* K2Node_DynamicCast_AsNiagara_Actor, bool K2Node_DynamicCast_bSuccess_5, EVALUI_LobbyState K2Node_Event_NewState_2, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, struct FOSSVAL_MatchmakingTicket& K2Node_CustomEvent_Ticket, struct FOSSVAL_MatchmakingResult& K2Node_CustomEvent_Result_3, class AValeriaCharacter* CallFunc_GetCharacter_ReturnValue_1, const struct FVALDTOS_MetaCharacterFormat& K2Node_ComponentBoundEvent_CurrentCharacter, class UVAL_CharacterCustomizationComponent* CallFunc_GetCharacterCustomizationComponent_ReturnValue, class UVAL_CharacterCustomizationComponent* CallFunc_GetCharacterCustomizationComponent_ReturnValue_1, const struct FVAL_CharacterCustomizationLoadout& CallFunc_PersistenceDTOsToLoadout_ReturnValue, class UVAL_ApplyCustomizationsToActorProxy* CallFunc_ApplyCustomizationsToActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, class UVAL_CharacterCustomizationComponent* CallFunc_GetCharacterCustomizationComponent_ReturnValue_2, class UVAL_CharacterCustomizationComponent* CallFunc_GetCharacterCustomizationComponent_ReturnValue_3, const struct FVAL_ValidateLoadoutErrorPayload& K2Node_CustomEvent_ErrorPayload, const struct FF_GenericErrorModalPayload& K2Node_MakeStruct_F_GenericErrorModalPayload_2, bool CallFunc_Should_Show_Dialog_For_Error_Map_Should_Show_Dialog, TSoftClassPtr<class UClass> CallFunc_RedirectModalType_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, TDelegate<void(struct FOSSVAL_MatchmakingTicket& Ticket, struct FOSSVAL_MatchmakingResult& Result)> K2Node_CreateDelegate_OutputDelegate_27, class US6UI_AsyncAction_OpenModal* CallFunc_OpenModal_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_Not_PreBool_ReturnValue_2, const TSet<class USkeletalMeshComponent*>& CallFunc_GetAllMeshComponents_ReturnValue, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, TArray<class USkeletalMeshComponent*>& CallFunc_Set_ToArray_Result, EVALUI_LoginState K2Node_Event_NewState_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_2, int32 K2Node_Event_ErrorCode, int64 CallFunc_Conv_IntToInt64_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class US6UI_ModalWidgetBase* Temp_object_Variable_5, class FText CallFunc_Format_ReturnValue_1, TScriptInterface<class IBP_ModalInterface_GenericError_C> K2Node_DynamicCast_AsBP_Modal_Interface_Generic_Error_4, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsValid_ReturnValue_10, class UWBP_AnnouncementsModalDialog_CM_C* K2Node_DynamicCast_AsWBP_Announcements_Modal_Dialog_CM, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsConsole_ReturnValue, TSoftClassPtr<class UClass> CallFunc_RedirectModalType_ReturnValue_2, class US6UI_AsyncAction_OpenModal* CallFunc_OpenModal_ReturnValue_3, class FText K2Node_Select_Default, const struct FF_GenericErrorModalPayload& K2Node_MakeStruct_F_GenericErrorModalPayload_3, bool CallFunc_IsValid_ReturnValue_11, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& K2Node_CustomEvent_ErrorMessage, int32 K2Node_CustomEvent_ErrorCode, bool CallFunc_IsConsolePlatform_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, EVALUI_PregameState CallFunc_GetCurrentPregameStateId_ReturnValue_1, class US6UI_ModalWidgetBase* K2Node_CustomEvent_ModalWidget_5, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, EVALUI_PregameState K2Node_Event_NewState, bool K2Node_SwitchEnum_CmpSuccess_4, class AVAL_CharacterRenderStudio* CallFunc_GetCharacterRenderStudio_ReturnValue, bool CallFunc_RequestScene_ReturnValue, bool CallFunc_RequestScene_ReturnValue_1, TDelegate<void(class US6UI_ModalWidgetBase* ModalWidget)> K2Node_CreateDelegate_OutputDelegate_28, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_12, const struct FOSSVAL_MatchmakingResult& K2Node_CustomEvent_Result, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, const struct FF_GenericErrorModalPayload& CallFunc_CreateErrorPayloadForMatchmakingResult_Payload, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_29, class AVAL_PlayerControllerBase* CallFunc_GetValeriaPlayerController_PC_2, class UAuthManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsLoggedIn_ReturnValue, class UUserWidget* K2Node_Event_Widget_1, class UUserWidget* K2Node_Event_Widget, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UTravelManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_3, TDelegate<void(int32 Number)> K2Node_CreateDelegate_OutputDelegate_30, const struct FOSSVAL_MatchmakingRequestContext& Temp_struct_Variable_2, TDelegate<void(struct FOSSVAL_MatchmakingResult& Result)> K2Node_CreateDelegate_OutputDelegate_31, const struct FOSSVAL_MatchmakingResult& Temp_struct_Variable_3, TDelegate<void(const class FString& ErrorMsg)> K2Node_CreateDelegate_OutputDelegate_32, TDelegate<void(const class FString& ErrorMsg)> K2Node_CreateDelegate_OutputDelegate_33, bool Temp_bool_Has_Been_Initd_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, class AVAL_PlayerControllerBase* CallFunc_GetValeriaPlayerController_PC_3, struct FOSSVAL_MatchmakingRequestContext& K2Node_CustomEvent_RequestContext, struct FOSSVAL_MatchmakingResult& K2Node_CustomEvent_Result_2, class UTravelManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1, bool CallFunc_WasKicked_ReturnValue, class AVAL_PlayerControllerBase* CallFunc_GetValeriaPlayerController_PC_4, class UTravelManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_2, class AVAL_PlayerControllerBase* CallFunc_GetValeriaPlayerController_PC_5, class UTravelManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_3, TDelegate<void(struct FOSSVAL_MatchmakingRequestContext& RequestContext, struct FOSSVAL_MatchmakingResult& Result)> K2Node_CreateDelegate_OutputDelegate_34, bool CallFunc_HadTravelNetworkFailure_ReturnValue, const class FString& CallFunc_GetEnvironment_ReturnValue, TSoftClassPtr<class UClass> CallFunc_RedirectModalType_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, class US6UI_AsyncAction_OpenModal* CallFunc_OpenModal_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_14, TSoftClassPtr<class UClass> CallFunc_RedirectModalType_ReturnValue_4, class US6UI_AsyncAction_OpenModal* CallFunc_OpenModal_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_15);
	void Failed_D23176C44BF6E6A6702E21820AA61E66();
	void GetValeriaPlayerController(class AVAL_PlayerControllerBase** PC, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AVAL_PlayerControllerBase* K2Node_DynamicCast_AsVAL_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess);
	void GotoCharacterLobby(class AVAL_CharacterRenderStudio* CallFunc_GetCharacterRenderStudio_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AActor* CallFunc_GetDefaultCameraActor_ReturnValue);
	void HandleCrossplayNotificationComplete();
	void HandleCrossplayStillDisabled();
	void HandleDisplayMatchmakingErrorResult(const struct FOSSVAL_MatchmakingResult& Result, class FText CallFunc_GetAlreadyMatchmakingErrorText_Text, const struct FNotification& K2Node_MakeStruct_Notification, class AVAL_PlayerControllerBase* CallFunc_GetValeriaPlayerController_PC, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void HandleGoToPublishingState(bool Temp_bool_Variable, EVALUI_LoginState Temp_byte_Variable, EVALUI_LoginState Temp_byte_Variable_1, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_DateTimeDateTime_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, EVALUI_LoginState K2Node_Select_Default);
	void HandleOnBodyTypeSelectionChange(bool FirstSelection);
	void HandleOnBodyTypeSelectionConfirmed();
	void HandleOnCancelLoginQueueClicked();
	void HandleOnCharacterCreationStateChanged(EVALUI_CharacterCreationState NewState);
	void HandleOnCharacterRenderStudioSpawned(class AVAL_CharacterRenderStudio* Studio, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PreloadScenes_ReturnValue);
	void HandleOnCodeOfConductAgree();
	void HandleOnCommitCharacter(const struct FVALDTOS_MetaCharacterFormat& Commited_Character);
	void HandleOnFetchedServerStatus();
	void HandleOnLobbyStateChanged(EVALUI_LobbyState NewState);
	void HandleOnLogInFailure(const class FString& ErrorMessage, int32 ErrorCode);
	void HandleOnLoginStateChanged(EVALUI_LoginState NewState);
	void HandleOnLoginSuccessful();
	void HandleOnMatchmakingDeleteResultObtained(struct FOSSVAL_MatchmakingResult& Result, bool CallFunc_Not_PreBool_ReturnValue);
	void HandleOnMatchmakingQueueNumberUpdated(int32 Number);
	void HandleOnMatchmakingQueueResultObtained(struct FOSSVAL_MatchmakingResult& Result);
	void HandleOnMatchmakingQueueStarted();
	void HandleOnNetworkFailure(const class FString& ErrorMsg);
	void HandleOnPhotosensitivityWarningContinuedClicked();
	void HandleOnPregameStateChanged(EVALUI_PregameState NewState);
	void HandleOnRetrievingCharacterListFailed(int32 ErrorCode);
	void HandleOnTravelFailure(const class FString& ErrorMsg);
	void HandlePostLogin();
	void HandleUpdateCharacterDisplay(const struct FVALDTOS_MetaCharacterFormat& CurrentCharacter);
	void HandleValidateLoadoutError(const struct FVAL_ValidateLoadoutErrorPayload& ErrorPayload);
	void HidePetForCharacter(class AValeriaCharacter* Current_Character, class UVAL_CharacterCustomizationComponent* CallFunc_GetCharacterCustomizationComponent_ReturnValue, class UBP_CharacterCustomizationComponent_C* K2Node_DynamicCast_AsBP_Character_Customization_Component, bool K2Node_DynamicCast_bSuccess);
	void InitializeNotificationFactory(class UBP_NotificationFactory_PreGame_C* CallFunc_SpawnObject_ReturnValue);
	void InitializePreGameHUD(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UWBP_PreGameHUD_CM_C* K2Node_DynamicCast_AsWBP_Pre_Game_HUD_CM, bool K2Node_DynamicCast_bSuccess, TDelegate<void(const class FString& ErrorMessage, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_1, class UVALUI_CharacterCreationScreenBase* CallFunc_GetCharacterCreationScreen_ReturnValue, class UVALUI_LobbyScreenUserWidget* CallFunc_GetLobbyScreen_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void(const class FString& ServerType)> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void(bool bFirstSelection)> K2Node_CreateDelegate_OutputDelegate_4, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_5, TDelegate<void(const struct FVALDTOS_MetaCharacterFormat& CommitedCharacter)> K2Node_CreateDelegate_OutputDelegate_6, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, TDelegate<void(const struct FVALDTOS_MetaCharacterFormat& CurrentCharacter)> K2Node_CreateDelegate_OutputDelegate_7, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_8, class UVALUI_StateUserWidget_PregameHUD* K2Node_DynamicCast_AsVALUI_State_User_Widget_Pregame_HUD, bool K2Node_DynamicCast_bSuccess_1);
	void Interrupted_D23176C44BF6E6A6702E21820AA61E66();
	void OnBodyTypeSelectionVFXCompleted();
	void OnClosingCinematicEnded();
	void OnComplete_8EE4B04243F47E3B63C4209A28CB037A(bool bQueryResult);
	void OnFailed_31B4E9B24A060CF6D4FCA4B3E40F5B48();
	void OnFailed_407898134EFA2825230DFB9EB126FF5E();
	void OnFailed_93EE6E0F4D0A4D845131509F6385B0CF();
	void OnFailed_E180D05A49EEF64E853979B7586977E2();
	void OnFailed_EF71DB3D4C81C440220383B4338CE6D8();
	void OnFailed_FE68E32940D0970E0F443C94E73BD5AF();
	void OnInitialized();
	void OnOpened_31B4E9B24A060CF6D4FCA4B3E40F5B48(class US6UI_ModalWidgetBase* ModalWidget);
	void OnOpened_407898134EFA2825230DFB9EB126FF5E(class US6UI_ModalWidgetBase* ModalWidget);
	void OnOpened_93EE6E0F4D0A4D845131509F6385B0CF(class US6UI_ModalWidgetBase* ModalWidget);
	void OnOpened_E180D05A49EEF64E853979B7586977E2(class US6UI_ModalWidgetBase* ModalWidget);
	void OnOpened_EF71DB3D4C81C440220383B4338CE6D8(class US6UI_ModalWidgetBase* ModalWidget);
	void OnOpened_FE68E32940D0970E0F443C94E73BD5AF(class US6UI_ModalWidgetBase* ModalWidget);
	void OnOpeningCinematicEnded();
	void OnPublishingMessageConfirm();
	void OnResultObtained_E4EB9C5B460FCE934CDD88A469DB6D70(struct FOSSVAL_MatchmakingTicket& Ticket, struct FOSSVAL_MatchmakingResult& Result);
	void OnResultObtained_F51972D04E7FDCDEFA137D8C7030B74E(struct FOSSVAL_MatchmakingRequestContext& RequestContext, struct FOSSVAL_MatchmakingResult& Result);
	void PlayClosingCinematic(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class FName Temp_name_Variable, class AActor* CallFunc_GetCinematicActor_ReturnValue, class UCV_Cinematic_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void PlayOpeningCinematic(class AActor* CallFunc_GetDefaultCameraActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, class AActor* CallFunc_GetCinematicActor_ReturnValue, class UCV_Cinematic_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void RemoveLoadingScreenWidget(class UUserWidget* Widget);
	void ReopenCrossplayPopup();
	void ResetCrossplayPopupState();
	void Should_Show_Dialog_For_Error_Map(const TMap<EVAL_LoadoutErrorType, struct FVAL_ValidateLoadoutError_ErrorItems>& Error_Map, bool* Should_Show_Dialog, const TArray<EVAL_LoadoutErrorType>& Dialog_Error_Types, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<EVAL_LoadoutErrorType>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, EVAL_LoadoutErrorType CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FVAL_ValidateLoadoutError_ErrorItems& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Show_Code_Of_Conduct(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_CodeOfConduct_CM_C* CallFunc_Create_ReturnValue);
	void Show_Terms_Of_Service();
	void ShowLinkSuccess(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_PopupLinkSuccess_PF_C* CallFunc_Create_ReturnValue);
	void ShowPhotosensitivityWarning(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_PhotosensitivityWarning_CM_C* CallFunc_Create_ReturnValue);
	void ShowPublishingMessage(TSoftClassPtr<class UClass> NewLocalVar, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TSoftClassPtr<class UClass> CallFunc_RedirectModalType_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsS6UI_Modal_Widget_Base, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsWBP_Announcements_Modal_Dialog_CM, bool K2Node_ClassDynamicCast_bSuccess_1, class UWBP_AnnouncementsModalDialog_CM_C* CallFunc_Create_ReturnValue);
	void StartBodyTypeTransition(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UVALUI_CharacterCreationScreenBase* CallFunc_GetCharacterCreationScreen_ReturnValue, class ABP_Cinematic_CharSelect_BodyRevealFX_C* CallFunc_FinishSpawningActor_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, class AValeriaCharacter* CallFunc_GetCharacter_ReturnValue, class AActor* CallFunc_GetActorWithTag_ReturnValue, class ANiagaraActor* K2Node_DynamicCast_AsNiagara_Actor, bool K2Node_DynamicCast_bSuccess);
	void StartMatchmakingLoginQueue(const class FString& ServerType);
	void Stubbed_D23176C44BF6E6A6702E21820AA61E66();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TryFadeFromBlackInLobby(bool CallFunc_FlushTextureAsyncLoad_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void TryOpenCrossplayPopup();
	void TryStartMatchmaking();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PregameUIManager_C">();
	}
	static class UWBP_PregameUIManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PregameUIManager_C>();
	}
};
static_assert(alignof(UWBP_PregameUIManager_C) == 0x000008, "Wrong alignment on UWBP_PregameUIManager_C");
static_assert(sizeof(UWBP_PregameUIManager_C) == 0x001050, "Wrong size on UWBP_PregameUIManager_C");
static_assert(offsetof(UWBP_PregameUIManager_C, UberGraphFrame) == 0x000798, "Member 'UWBP_PregameUIManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, FullscreenFadeAwayFromBlack) == 0x0007A0, "Member 'UWBP_PregameUIManager_C::FullscreenFadeAwayFromBlack' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, FullscreenFadeToBlack) == 0x0007A8, "Member 'UWBP_PregameUIManager_C::FullscreenFadeToBlack' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, Image_FullscreenFade) == 0x0007B0, "Member 'UWBP_PregameUIManager_C::Image_FullscreenFade' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, Slot_LoadingScreen) == 0x0007B8, "Member 'UWBP_PregameUIManager_C::Slot_LoadingScreen' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, WBP_BannerNotificationSlot) == 0x0007C0, "Member 'UWBP_PregameUIManager_C::WBP_BannerNotificationSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, WBP_NotificationStack_Major) == 0x0007C8, "Member 'UWBP_PregameUIManager_C::WBP_NotificationStack_Major' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, WBP_NotificationStack_Minor) == 0x0007D0, "Member 'UWBP_PregameUIManager_C::WBP_NotificationStack_Minor' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, CharacterPreviewerObject) == 0x0007D8, "Member 'UWBP_PregameUIManager_C::CharacterPreviewerObject' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, CurrentRenderCharacter) == 0x0007E0, "Member 'UWBP_PregameUIManager_C::CurrentRenderCharacter' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, CachedNiagaraSystem) == 0x0007E8, "Member 'UWBP_PregameUIManager_C::CachedNiagaraSystem' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, PreloadLevelNames) == 0x0007F0, "Member 'UWBP_PregameUIManager_C::PreloadLevelNames' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, SelectedServerType) == 0x000840, "Member 'UWBP_PregameUIManager_C::SelectedServerType' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, CachedBodyTypeTransitionScript) == 0x000850, "Member 'UWBP_PregameUIManager_C::CachedBodyTypeTransitionScript' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, AnnouncementModal) == 0x000858, "Member 'UWBP_PregameUIManager_C::AnnouncementModal' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, FinishedBodyTypeSelectionVFX) == 0x000860, "Member 'UWBP_PregameUIManager_C::FinishedBodyTypeSelectionVFX' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, PreGameHUD) == 0x000868, "Member 'UWBP_PregameUIManager_C::PreGameHUD' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, NotificationFactory) == 0x000870, "Member 'UWBP_PregameUIManager_C::NotificationFactory' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, Current_CharacterMetaData) == 0x000878, "Member 'UWBP_PregameUIManager_C::Current_CharacterMetaData' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, NewVar) == 0x000FF0, "Member 'UWBP_PregameUIManager_C::NewVar' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, bIsLoginSuccess) == 0x001018, "Member 'UWBP_PregameUIManager_C::bIsLoginSuccess' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, LobbyCharacterCustomizationsCompleted) == 0x001019, "Member 'UWBP_PregameUIManager_C::LobbyCharacterCustomizationsCompleted' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, ShowTermsOfService) == 0x001020, "Member 'UWBP_PregameUIManager_C::ShowTermsOfService' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, FetchedServerStatus) == 0x001030, "Member 'UWBP_PregameUIManager_C::FetchedServerStatus' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, bIsMatchmaking) == 0x001040, "Member 'UWBP_PregameUIManager_C::bIsMatchmaking' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, bShowGameLobbyOnLogin) == 0x001041, "Member 'UWBP_PregameUIManager_C::bShowGameLobbyOnLogin' has a wrong offset!");
static_assert(offsetof(UWBP_PregameUIManager_C, CrossplayPopupTimerHandle) == 0x001048, "Member 'UWBP_PregameUIManager_C::CrossplayPopupTimerHandle' has a wrong offset!");

}

