#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ReportPlayerModalDialog_PF

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S6PlatformServiceSubsystems_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Palia_structs.hpp"
#include "ValeriaUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ReportPlayerModalDialog_PF.WBP_ReportPlayerModalDialog_PF_C
// 0x0168 (0x06C0 - 0x0558)
class UWBP_ReportPlayerModalDialog_PF_C final : public UVALUI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_MultiLineEditableTextBox_Styled* CommentText;                                       // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Notification_Basic_Error_C* ErrorMessage;                                      // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_Error;                                   // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ComboBox_CM_C*                     WBP_ComboBox_CM;                                   // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonUIButtonPrompt_C*            WBP_CommonUIButtonPrompt;                          // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_PopupSecondary_02_CM_C*   WBP_Template_PopupSecondary_02_CM;                 // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       TargetPlayerNetId;                                 // 0x0590(0x0030)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	ES6PLAT_PlayerBehaviorReportSource            Report_Source;                                     // 0x05C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	ES6PLAT_PlayerBehaviorReportType              ReportType;                                        // 0x05C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_46AC[0x6];                                     // 0x05C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FS6PLAT_PlayerBehaviorReportCategoryInfo> CachedReportCategoryInfoMap;                       // 0x05C8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                           DisplayNames;                                      // 0x0618(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FValeriaChatMessage                    ReportedMessage;                                   // 0x0628(0x0068)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FGuid                                  Character_Id;                                      // 0x0690(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SurroundingMessageCount;                           // 0x06A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46AD[0x4];                                     // 0x06A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Button_Style_Override;                             // 0x06A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Parent_Widget;                                     // 0x06B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Parent_Focused_Widget;                             // 0x06B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	bool BP_OnHandleBackAction(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TScriptInterface<class IBPI_UIFocusable_C> CallFunc_HandleAccept_self_CastInput, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_Get_Menu_Anchor_Is_Open_ReturnValue);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_ReportPlayerModalDialog_PF(int32 EntryPoint, struct FGuid& K2Node_CustomEvent_AccountId_1, TDelegate<void(struct FGuid& AccountId)> K2Node_CreateDelegate_OutputDelegate, struct FGuid& K2Node_CustomEvent_AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& K2Node_CustomEvent_Names, TDelegate<void(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names)> K2Node_CreateDelegate_OutputDelegate_1, TArray<struct FOSSVAL_CharacterNameAndId>& Temp_struct_Variable, const struct FGuid& Temp_struct_Variable_1, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class UInputAction* Temp_object_Variable, double Temp_real_Variable, double Temp_real_Variable_0, double Temp_real_Variable_1, bool Temp_bool_Variable, double Temp_real_Variable_1_0, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_FocusedParentWidget, bool K2Node_Event_NewWidgetCreated, ES6PLAT_PlayerBehaviorReportType Temp_byte_Variable, const struct FS6PLAT_PlayerBehaviorReportForm& CallFunc_MakeReportFormFromCurrentState_S6PLAT_PlayerBehaviorReportForm, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, ESlateVisibility Temp_byte_Variable_1, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, ESlateVisibility Temp_byte_Variable_2, const struct FVALUI_ErrorDisplayPayload& K2Node_MakeStruct_VALUI_ErrorDisplayPayload, bool Temp_bool_Variable_1, struct FVALUI_ErrorDisplayPayload& K2Node_Event_ErrorDisplayPayload, const struct FGuid& CallFunc_GetAccountId_ReturnValue, class UOSSVAL_GetCharacterNamesByAccountIdProxy* CallFunc_GetCharacterNamesByAccountId_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class FText K2Node_Select_Default_1, TArray<struct FS6PLAT_PlayerBehaviorReportCategoryInfo>& CallFunc_Map_Values_Values, const struct FS6PLAT_PlayerBehaviorReportCategoryInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class US6PLAT_PlayerBehaviorSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool K2Node_Event_IsDesignTime, class UWidget* K2Node_Event_ParentWidget, class UWidget* K2Node_Event_ParentFocusedWidget, TScriptInterface<class IBPI_SubWidgetFocusable_C> K2Node_DynamicCast_AsBPI_Sub_Widget_Focusable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class US6PLAT_PlayerBehaviorSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, const TMap<class FName, struct FS6PLAT_PlayerBehaviorReportCategoryInfo>& CallFunc_GetValidReportCategoriesByType_ReturnValue, class US6PLAT_PlayerBehaviorSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_ValidateReportForm_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_TryRaiseErrorForDisplay_ReturnValue);
	void HandleErrorDisplay(struct FVALUI_ErrorDisplayPayload& ErrorDisplayPayload);
	void InpActEvt_IA_UI_ReportPlayer_SubmitReport_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void MakeReportFormFromCurrentState(struct FS6PLAT_PlayerBehaviorReportForm* S6PLAT_PlayerBehaviorReportForm, class FName CategorySystemName, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const TSet<EChatMessageType>& K2Node_MakeSet_Set, const struct FVALUI_ChatMessageFetchFilter& K2Node_MakeStruct_VALUI_ChatMessageFetchFilter, class FText CallFunc_GetCurrentSelectedItem_Selected_Text, TArray<struct FValeriaChatMessage>& CallFunc_FetchChatMessages_ReturnValue, TArray<struct FS6PLAT_ChatMessage>& CallFunc_ConvertValeriaChatMessagesArrayToPlatformChatMessagesArray_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FS6PLAT_ChatMessage& CallFunc_ConvertValeriaChatMessageToPlatformChatMessage_ReturnValue, const struct FGuid& CallFunc_GetCharacterId_ReturnValue, const struct FGuid& CallFunc_GetAccountId_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item, const struct FGuid& CallFunc_GetAccountId_ReturnValue_1, const struct FS6PLAT_PlayerBehaviorReportForm& K2Node_MakeStruct_S6PLAT_PlayerBehaviorReportForm, const struct FS6PLAT_PlayerBehaviorReportCategoryInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnFailure_FB70231344DAA3295EECB59C1318C450(struct FGuid& AccountId);
	void OnSubWidgetClosed(bool FocusedParentWidget, bool NewWidgetCreated);
	void OnSuccess_FB70231344DAA3295EECB59C1318C450(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names);
	void OnWidgetCreated(class UWidget* ParentWidget, class UWidget* ParentFocusedWidget);
	void PreConstruct(bool IsDesignTime);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ReportPlayerModalDialog_PF_C">();
	}
	static class UWBP_ReportPlayerModalDialog_PF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ReportPlayerModalDialog_PF_C>();
	}
};
static_assert(alignof(UWBP_ReportPlayerModalDialog_PF_C) == 0x000008, "Wrong alignment on UWBP_ReportPlayerModalDialog_PF_C");
static_assert(sizeof(UWBP_ReportPlayerModalDialog_PF_C) == 0x0006C0, "Wrong size on UWBP_ReportPlayerModalDialog_PF_C");
static_assert(offsetof(UWBP_ReportPlayerModalDialog_PF_C, UberGraphFrame) == 0x000558, "Member 'UWBP_ReportPlayerModalDialog_PF_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ReportPlayerModalDialog_PF_C, CommentText) == 0x000560, "Member 'UWBP_ReportPlayerModalDialog_PF_C::CommentText' has a wrong offset!");
static_assert(offsetof(UWBP_ReportPlayerModalDialog_PF_C, ErrorMessage) == 0x000568, "Member 'UWBP_ReportPlayerModalDialog_PF_C::ErrorMessage' has a wrong offset!");
static_assert(offsetof(UWBP_ReportPlayerModalDialog_PF_C, TextBlock_Error) == 0x000570, "Member 'UWBP_ReportPlayerModalDialog_PF_C::TextBlock_Error' has a wrong offset!");
static_assert(offsetof(UWBP_ReportPlayerModalDialog_PF_C, WBP_ComboBox_CM) == 0x000578, "Member 'UWBP_ReportPlayerModalDialog_PF_C::WBP_ComboBox_CM' has a wrong offset!");
static_assert(offsetof(UWBP_ReportPlayerModalDialog_PF_C, WBP_CommonUIButtonPrompt) == 0x000580, "Member 'UWBP_ReportPlayerModalDialog_PF_C::WBP_CommonUIButtonPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_ReportPlayerModalDialog_PF_C, WBP_Template_PopupSecondary_02_CM) == 0x000588, "Member 'UWBP_ReportPlayerModalDialog_PF_C::WBP_Template_PopupSecondary_02_CM' has a wrong offset!");
static_assert(offsetof(UWBP_ReportPlayerModalDialog_PF_C, TargetPlayerNetId) == 0x000590, "Member 'UWBP_ReportPlayerModalDialog_PF_C::TargetPlayerNetId' has a wrong offset!");
static_assert(offsetof(UWBP_ReportPlayerModalDialog_PF_C, Report_Source) == 0x0005C0, "Member 'UWBP_ReportPlayerModalDialog_PF_C::Report_Source' has a wrong offset!");
static_assert(offsetof(UWBP_ReportPlayerModalDialog_PF_C, ReportType) == 0x0005C1, "Member 'UWBP_ReportPlayerModalDialog_PF_C::ReportType' has a wrong offset!");
static_assert(offsetof(UWBP_ReportPlayerModalDialog_PF_C, CachedReportCategoryInfoMap) == 0x0005C8, "Member 'UWBP_ReportPlayerModalDialog_PF_C::CachedReportCategoryInfoMap' has a wrong offset!");
static_assert(offsetof(UWBP_ReportPlayerModalDialog_PF_C, DisplayNames) == 0x000618, "Member 'UWBP_ReportPlayerModalDialog_PF_C::DisplayNames' has a wrong offset!");
static_assert(offsetof(UWBP_ReportPlayerModalDialog_PF_C, ReportedMessage) == 0x000628, "Member 'UWBP_ReportPlayerModalDialog_PF_C::ReportedMessage' has a wrong offset!");
static_assert(offsetof(UWBP_ReportPlayerModalDialog_PF_C, Character_Id) == 0x000690, "Member 'UWBP_ReportPlayerModalDialog_PF_C::Character_Id' has a wrong offset!");
static_assert(offsetof(UWBP_ReportPlayerModalDialog_PF_C, SurroundingMessageCount) == 0x0006A0, "Member 'UWBP_ReportPlayerModalDialog_PF_C::SurroundingMessageCount' has a wrong offset!");
static_assert(offsetof(UWBP_ReportPlayerModalDialog_PF_C, Button_Style_Override) == 0x0006A8, "Member 'UWBP_ReportPlayerModalDialog_PF_C::Button_Style_Override' has a wrong offset!");
static_assert(offsetof(UWBP_ReportPlayerModalDialog_PF_C, Parent_Widget) == 0x0006B0, "Member 'UWBP_ReportPlayerModalDialog_PF_C::Parent_Widget' has a wrong offset!");
static_assert(offsetof(UWBP_ReportPlayerModalDialog_PF_C, Parent_Focused_Widget) == 0x0006B8, "Member 'UWBP_ReportPlayerModalDialog_PF_C::Parent_Focused_Widget' has a wrong offset!");

}

