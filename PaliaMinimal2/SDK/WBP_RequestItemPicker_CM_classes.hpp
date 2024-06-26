#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RequestItemPicker_CM

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonWidgetInputExtended_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_RequestItemPicker_CM.WBP_RequestItemPicker_CM_C
// 0x00B8 (0x05C8 - 0x0510)
class UWBP_RequestItemPicker_CM_C final : public UCommonActivatableWidgetInputExtended
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_PaperTabHost_C*                    BasicHorizontalTabButtonHost_ItemCategories;       // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Primary_01_CM_C*   Button_RequestItem;                                // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTileView*                              TileView_ItemTypes;                                // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RadioSlider_Template_02_CM_C*      WBP_RadioSlider_CategoryFilters_1;                 // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RequestAmmo_C*                     WBP_RequestAmmo;                                   // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCommit;                                          // 0x0540(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UVAL_ItemTypeDefinitionAsset*           PreSelectedItem;                                   // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnTileViewPopulated;                               // 0x0558(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UVAL_EncyclopediaManagerComponent*      EncylopediaManagerComp;                            // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<EItemStorageCategory>                  AllRequestableCategories;                          // 0x0570(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftObjectPtr<class UVAL_TutorialFlagDefinition> Requests_Flag;                                     // 0x0580(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnBack;                                            // 0x05A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        Scroll_Speed;                                      // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentSelectedIndex;                              // 0x05C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_RequestItemPicker_CM_Button_RequestItem_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
	void BndEvt__WBP_RequestItemPicker_CM_Button_RequestItem_K2Node_ComponentBoundEvent_2_ButtonHovered__DelegateSignature();
	void BndEvt__WBP_RequestItemPicker_CM_Button_RequestItem_K2Node_ComponentBoundEvent_3_ButtonUnhovered__DelegateSignature();
	void BndEvt__WBP_RequestItemPicker_CM_WBP_RadioSlider_CategoryFilters_1_K2Node_ComponentBoundEvent_6_OnSliderMoved__DelegateSignature(class UUserWidget* ElementWidget, const struct FBP_RadioSliderPregisteredElement& ElementData);
	void BndEvt__WBP_RequestItemPicker_TileView_ItemTypes_K2Node_ComponentBoundEvent_4_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void Construct();
	void ExecuteUbergraph_WBP_RequestItemPicker_CM(int32 EntryPoint, bool CallFunc_IsWindowsPlatform_ReturnValue, double Temp_real_Variable, bool Temp_bool_Variable, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_4, float K2Node_EnhancedInputActionEvent_ElapsedTime_4, float K2Node_EnhancedInputActionEvent_TriggeredTime_4, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_4, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_1_0, double Temp_real_Variable_2_0, bool Temp_bool_Variable_1, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_3, float K2Node_EnhancedInputActionEvent_ElapsedTime_3, float K2Node_EnhancedInputActionEvent_TriggeredTime_3, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_3, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, class UInputAction* Temp_object_Variable_1, double Temp_real_Variable_3, double Temp_real_Variable_3_0, double Temp_real_Variable_4, bool Temp_bool_Variable_2, double Temp_real_Variable_4_0, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_2, float K2Node_EnhancedInputActionEvent_ElapsedTime_2, float K2Node_EnhancedInputActionEvent_TriggeredTime_2, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_2, class UInputAction* Temp_object_Variable_2, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_2, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_5_0, double Temp_real_Variable_6_0, bool Temp_bool_Variable_3, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_3, class UInputAction* Temp_object_Variable_3, double Temp_real_Variable_7, double Temp_real_Variable_7_0, double Temp_real_Variable_8, bool Temp_bool_Variable_4, double Temp_real_Variable_8_0, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, class UInputAction* Temp_object_Variable_4, double CallFunc_Conv_InputActionValueToAxis1D_ReturnValue, double Temp_real_Variable_9, double Temp_real_Variable_10, double Temp_real_Variable_9_0, double Temp_real_Variable_10_0, double Temp_real_Variable_11, double Temp_real_Variable_12, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UInputAction* Temp_object_Variable_5, class UListItem_RequestableItemType_C* K2Node_DynamicCast_AsList_Item_Requestable_Item_Type, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_AkEventGlobal_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_2, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Is_Item_Selected_Item_Selected, class UObject* Temp_object_Variable_6, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue_1, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition_1, bool K2Node_DynamicCast_bSuccess_2, class UListItem_RequestableItemType_C* K2Node_DynamicCast_AsList_Item_Requestable_Item_Type_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Is_Item_Allowed_For_Request_Item_Allowed, bool CallFunc_BooleanAND_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, class UVAL_EncyclopediaManagerComponent* CallFunc_GetEncyclopediaManagerComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UObject* K2Node_CustomEvent_Loaded, class UUserWidget* K2Node_ComponentBoundEvent_ElementWidget, const struct FBP_RadioSliderPregisteredElement& K2Node_ComponentBoundEvent_ElementData, TDelegate<void(class UObject* Loaded)> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsVisible_ReturnValue, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_5, float K2Node_EnhancedInputActionEvent_ElapsedTime_5, float K2Node_EnhancedInputActionEvent_TriggeredTime_5, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_5, double Temp_real_Variable_12_0, double Temp_real_Variable_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_4, bool CallFunc_IsVisible_ReturnValue_1, float CallFunc_GetScrollOffset_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult_1, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_CanStartTutorialForFlag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_GetIndexForItem_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetScrollOffset_InScrollOffset_ImplicitCast);
	void Get_Item_Category_by_Name(EItemStorageCategory* EnumValue, EItemStorageCategory NewLocalVar_1, const struct FBP_RadioSliderPregisteredElement& CallFunc_GetSelectedElement_Selected);
	TArray<class UVAL_ItemTypeDefinitionAsset*> Get_Requestable_Items(EItemStorageCategory CallFunc_Get_Item_Category_by_Name_EnumValue, TArray<class UVAL_ItemTypeDefinitionAsset*>& CallFunc_GetSortedItemTypesFromCategories_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class UVAL_ItemTypeDefinitionAsset*>& CallFunc_GetSortedItemTypesFromCategory_ReturnValue);
	void Goto_Preselected_Item(bool IsFindPreselectedItem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UListItem_RequestableItemType_C* K2Node_DynamicCast_AsList_Item_Requestable_Item_Type, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HandleOpenRequestsTutorialModal(class UUserWidget* ModalWidget, TArray<class UUserWidget*>& TutorialWidgets, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TScriptInterface<class IBP_ModalInterface_Tutorial_C> K2Node_DynamicCast_AsBP_Modal_Interface_Tutorial, bool K2Node_DynamicCast_bSuccess, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue);
	void InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_4(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_Confirm_Select_K2Node_EnhancedInputActionEvent_5(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_MoveCursor_Y_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_SecondaryTab_Switch_L_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_SecondaryTab_Switch_R_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UIBack_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void Is_Item_Allowed_For_Request(class UVAL_ItemTypeDefinitionAsset* Item_Type, bool* Item_Allowed, TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanItemBeRequested__IsRequestable_, bool CallFunc_HasSeenItem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Is_Item_Selected(bool* Item_Selected, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnBack__DelegateSignature();
	void OnCommit__DelegateSignature(TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> ItemType, int32 Quantity);
	void OnInitialized();
	void OnLoaded_16824B36494E8780A520D7B036AC17C9(class UObject* Loaded);
	void OnSwitchToRequestPicker();
	void OnTileViewPopulated__DelegateSignature();
	void Populate_Tile_View(const TArray<class UListItem_RequestableItemType_C*>& UnrequestableTileItems, const TArray<class UVAL_ItemTypeDefinitionAsset*>& UnrequestableItemTypes, const TArray<class UListItem_RequestableItemType_C*>& TileItems, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UVAL_ItemTypeDefinitionAsset*>& CallFunc_Get_Requestable_Items_ReturnValue, class UVAL_ItemTypeDefinitionAsset* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Is_Item_Allowed_For_Request_Item_Allowed, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UListItem_RequestableItemType_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void PreSelectItem(class UVAL_ItemTypeDefinitionAsset* ItemType);
	void TryShowRequestsFTUE(EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IBPI_GameplayUIManagerTutorial_CM_C> K2Node_DynamicCast_AsBPI_Gameplay_UIManager_Tutorial_CM, bool K2Node_DynamicCast_bSuccess, TDelegate<void(class UUserWidget* ModalWidget, TArray<class UUserWidget*>& TutorialWidgets)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_RedirectTutorialModalType_bSuccess);
	void Update_Request_Ammo(class UInventoryRequestManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, int32 CallFunc_TryGetNumActiveRequests_ReturnValue);
	void Update_Request_Button();

	class UWidget* BP_GetDesiredFocusTarget(bool CallFunc_IsWindowsPlatform_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasUserFocusedDescendants_ReturnValue) const;
	void Has_Focus_Item_in_Request_Button(bool* HasFocus, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_HasUserFocusedDescendants_ReturnValue, bool CallFunc_BooleanOR_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RequestItemPicker_CM_C">();
	}
	static class UWBP_RequestItemPicker_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RequestItemPicker_CM_C>();
	}
};
static_assert(alignof(UWBP_RequestItemPicker_CM_C) == 0x000008, "Wrong alignment on UWBP_RequestItemPicker_CM_C");
static_assert(sizeof(UWBP_RequestItemPicker_CM_C) == 0x0005C8, "Wrong size on UWBP_RequestItemPicker_CM_C");
static_assert(offsetof(UWBP_RequestItemPicker_CM_C, UberGraphFrame) == 0x000510, "Member 'UWBP_RequestItemPicker_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RequestItemPicker_CM_C, BasicHorizontalTabButtonHost_ItemCategories) == 0x000518, "Member 'UWBP_RequestItemPicker_CM_C::BasicHorizontalTabButtonHost_ItemCategories' has a wrong offset!");
static_assert(offsetof(UWBP_RequestItemPicker_CM_C, Button_RequestItem) == 0x000520, "Member 'UWBP_RequestItemPicker_CM_C::Button_RequestItem' has a wrong offset!");
static_assert(offsetof(UWBP_RequestItemPicker_CM_C, TileView_ItemTypes) == 0x000528, "Member 'UWBP_RequestItemPicker_CM_C::TileView_ItemTypes' has a wrong offset!");
static_assert(offsetof(UWBP_RequestItemPicker_CM_C, WBP_RadioSlider_CategoryFilters_1) == 0x000530, "Member 'UWBP_RequestItemPicker_CM_C::WBP_RadioSlider_CategoryFilters_1' has a wrong offset!");
static_assert(offsetof(UWBP_RequestItemPicker_CM_C, WBP_RequestAmmo) == 0x000538, "Member 'UWBP_RequestItemPicker_CM_C::WBP_RequestAmmo' has a wrong offset!");
static_assert(offsetof(UWBP_RequestItemPicker_CM_C, OnCommit) == 0x000540, "Member 'UWBP_RequestItemPicker_CM_C::OnCommit' has a wrong offset!");
static_assert(offsetof(UWBP_RequestItemPicker_CM_C, PreSelectedItem) == 0x000550, "Member 'UWBP_RequestItemPicker_CM_C::PreSelectedItem' has a wrong offset!");
static_assert(offsetof(UWBP_RequestItemPicker_CM_C, OnTileViewPopulated) == 0x000558, "Member 'UWBP_RequestItemPicker_CM_C::OnTileViewPopulated' has a wrong offset!");
static_assert(offsetof(UWBP_RequestItemPicker_CM_C, EncylopediaManagerComp) == 0x000568, "Member 'UWBP_RequestItemPicker_CM_C::EncylopediaManagerComp' has a wrong offset!");
static_assert(offsetof(UWBP_RequestItemPicker_CM_C, AllRequestableCategories) == 0x000570, "Member 'UWBP_RequestItemPicker_CM_C::AllRequestableCategories' has a wrong offset!");
static_assert(offsetof(UWBP_RequestItemPicker_CM_C, Requests_Flag) == 0x000580, "Member 'UWBP_RequestItemPicker_CM_C::Requests_Flag' has a wrong offset!");
static_assert(offsetof(UWBP_RequestItemPicker_CM_C, OnBack) == 0x0005A8, "Member 'UWBP_RequestItemPicker_CM_C::OnBack' has a wrong offset!");
static_assert(offsetof(UWBP_RequestItemPicker_CM_C, Scroll_Speed) == 0x0005B8, "Member 'UWBP_RequestItemPicker_CM_C::Scroll_Speed' has a wrong offset!");
static_assert(offsetof(UWBP_RequestItemPicker_CM_C, CurrentSelectedIndex) == 0x0005C0, "Member 'UWBP_RequestItemPicker_CM_C::CurrentSelectedIndex' has a wrong offset!");

}

