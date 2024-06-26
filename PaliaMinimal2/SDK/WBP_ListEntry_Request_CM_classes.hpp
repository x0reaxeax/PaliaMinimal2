#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ListEntry_Request_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ListEntry_Request_CM.WBP_ListEntry_Request_CM_C
// 0x0068 (0x0328 - 0x02C0)
class UWBP_ListEntry_Request_CM_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_Border_Styled*                   Backer_Default;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   Backer_Highlight;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Backer_Switcher;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Secondary_01_CM_C* GiftButton;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RequestStatusIndicator_C*          RequestStatusIndicator;                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_ItemName;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_Requester;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ListEntry_RequestableItemType_CM_C* WBP_ListEntry_RequestableItemType_CM;              // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListItem_Request_C*                    Request;                                           // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsPendingOperaton;                                // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5787[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_RequestsPanel_CM_C*                Request_Panel;                                     // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_RequestsPanel_Console_C*           Request_Panel_Console;                             // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_ListEntry_Request_CM_WBP_Template_Button_Secondary_01_CM_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void CanFulfillRequestNow(bool* Return, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FDateTime& CallFunc_UtcNow_ReturnValue, int32 CallFunc_GetItemAmountInX_ByType_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Greater_DateTimeDateTime_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ExecuteUbergraph_WBP_ListEntry_Request_CM(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, class UListItem_Request_C* K2Node_DynamicCast_AsList_Item_Request, bool K2Node_DynamicCast_bSuccess, TDelegate<void(const struct FDateTime& NewTime)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(const struct FDateTime& NewTime)> K2Node_CreateDelegate_OutputDelegate_1, const struct FGuid& Temp_struct_Variable, TDelegate<void(struct FGuid& AccountId)> K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_CanFulfillRequestNow_Return, TArray<struct FOSSVAL_CharacterNameAndId>& Temp_struct_Variable_1, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FGuid& CallFunc_GetAccountId_ReturnValue, class UOSSVAL_GetCharacterNamesByAccountIdProxy* CallFunc_GetCharacterNamesByAccountId_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FValeriaItem& K2Node_MakeStruct_ValeriaItem, class UWBP_ItemRequest_FulfillConfirmationModal_C* CallFunc_Create_ReturnValue, class UWBP_ItemRequest_FulfillConfirmationModal_Console_C* CallFunc_Create_ReturnValue_1, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, struct FGuid& K2Node_CustomEvent_AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& K2Node_CustomEvent_Names, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_4, TDelegate<void(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names)> K2Node_CreateDelegate_OutputDelegate_5, class UWBP_RequestsPanel_CM_C* K2Node_Event_RequestPanel_1, class UWBP_RequestsPanel_Console_C* K2Node_Event_RequestPanel, TDelegate<void(const struct FDateTime& NewTime)> K2Node_CreateDelegate_OutputDelegate_6, struct FGuid& K2Node_CustomEvent_AccountId_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_7, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_IsDesktop_ReturnValue, bool CallFunc_IsConsole_ReturnValue);
	void HandleFulfillModalCancelled();
	void HandleFulfillModalConfirmed(class UInventoryRequestManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UWBP_ExpandableArea_CM_C*>& CallFunc_GetVisibleCategories_VisibleCategoryDropdowns, TArray<class UVALUI_ListView_Styled*>& CallFunc_GetVisibleCategories_VisibleCategoryLists, class UWBP_ExpandableArea_CM_C* CallFunc_Array_Get_Item, TDelegate<void(const class FString& ErrorMessage)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_FulfillRequest_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void HandleFulfillRequestFailed(const class FString& ErrorMessage);
	void HandleFulfillRequestSucceeded();
	void HandleOnUpdateTime(const struct FDateTime& NewTime);
	void OnFailure_429674864E3B061D4A1078A7334FE5DC(struct FGuid& AccountId);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnSuccess_429674864E3B061D4A1078A7334FE5DC(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names);
	void SetupBinds(class UWBP_RequestsPanel_CM_C* RequestPanel);
	void SetupBinds_Console(class UWBP_RequestsPanel_Console_C* RequestPanel);
	void UpdateForOperationStatus(bool bIsPendingOperation, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateFromRequest();
	void UpdateRemainingTime(const struct FDateTime& CurrentTime, bool CallFunc_CanFulfillRequestNow_Return, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ListEntry_Request_CM_C">();
	}
	static class UWBP_ListEntry_Request_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ListEntry_Request_CM_C>();
	}
};
static_assert(alignof(UWBP_ListEntry_Request_CM_C) == 0x000008, "Wrong alignment on UWBP_ListEntry_Request_CM_C");
static_assert(sizeof(UWBP_ListEntry_Request_CM_C) == 0x000328, "Wrong size on UWBP_ListEntry_Request_CM_C");
static_assert(offsetof(UWBP_ListEntry_Request_CM_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_ListEntry_Request_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_Request_CM_C, Backer_Default) == 0x0002C8, "Member 'UWBP_ListEntry_Request_CM_C::Backer_Default' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_Request_CM_C, Backer_Highlight) == 0x0002D0, "Member 'UWBP_ListEntry_Request_CM_C::Backer_Highlight' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_Request_CM_C, Backer_Switcher) == 0x0002D8, "Member 'UWBP_ListEntry_Request_CM_C::Backer_Switcher' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_Request_CM_C, GiftButton) == 0x0002E0, "Member 'UWBP_ListEntry_Request_CM_C::GiftButton' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_Request_CM_C, RequestStatusIndicator) == 0x0002E8, "Member 'UWBP_ListEntry_Request_CM_C::RequestStatusIndicator' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_Request_CM_C, TextBlock_ItemName) == 0x0002F0, "Member 'UWBP_ListEntry_Request_CM_C::TextBlock_ItemName' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_Request_CM_C, TextBlock_Requester) == 0x0002F8, "Member 'UWBP_ListEntry_Request_CM_C::TextBlock_Requester' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_Request_CM_C, WBP_ListEntry_RequestableItemType_CM) == 0x000300, "Member 'UWBP_ListEntry_Request_CM_C::WBP_ListEntry_RequestableItemType_CM' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_Request_CM_C, Request) == 0x000308, "Member 'UWBP_ListEntry_Request_CM_C::Request' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_Request_CM_C, bIsPendingOperaton) == 0x000310, "Member 'UWBP_ListEntry_Request_CM_C::bIsPendingOperaton' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_Request_CM_C, Request_Panel) == 0x000318, "Member 'UWBP_ListEntry_Request_CM_C::Request_Panel' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_Request_CM_C, Request_Panel_Console) == 0x000320, "Member 'UWBP_ListEntry_Request_CM_C::Request_Panel_Console' has a wrong offset!");

}

