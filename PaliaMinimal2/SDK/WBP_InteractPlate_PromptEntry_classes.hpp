#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InteractPlate_PromptEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "Palia_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InteractPlate_PromptEntry.WBP_InteractPlate_PromptEntry_C
// 0x00C8 (0x0388 - 0x02C0)
class UWBP_InteractPlate_PromptEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_TextBlock_Styled*                AmountText;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   Border_Cost;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    GamepadCommonActionWidget;                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_CostIcon;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IADescription_C*                   KeyboardIADescription;                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                NameText;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_Cost;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   VALUI_Border_Styled_Backing;                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_KeyIcon;                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EInteractEventIndex                           InteractIndex;                                     // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47ED[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FShopItemAdditionalCost>        EmptyAdditionalCost;                               // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FInteractablePlatePayload              PlatePayload;                                      // 0x0328(0x0002)(Edit, BlueprintVisible, NoDestructor)
	uint8                                         Pad_47EE[0x6];                                     // 0x032A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               DesaturatedImage;                                  // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        DesaturateAmount;                                  // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                KeyboardPromptPadding;                             // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                                GamepadPromptPadding;                              // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UObject*                                Interactable;                                      // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           InputAction;                                       // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UVALUI_TextBlockStyle*                  ConsolePrimaryTextStyle;                           // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UVALUI_TextBlockStyle*                  ConsoleSecondaryTextStyle;                         // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                 Interactable_Component;                            // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_InteractPlate_PromptEntry(int32 EntryPoint, class UInteractableComponent* K2Node_CustomEvent_InteractableComponent, class UObject* K2Node_CustomEvent_Interactable, EInteractEventIndex K2Node_CustomEvent_Index, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IInteractable> K2Node_DynamicCast_AsInteractable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, class UInventoryComponent* K2Node_DynamicCast_AsInventory_Component, bool K2Node_DynamicCast_bSuccess_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UEnhancedInputSubsystemWithKeyRebinding* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FGetTextParams& CallFunc_GetText_params, bool CallFunc_GetText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsConsole_ReturnValue, bool CallFunc_IsDesktop_ReturnValue, const struct FGetTextParams& Temp_struct_Variable, bool Temp_bool_Variable, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Get_and_Set_Input_Action(TSoftObjectPtr<class UInputAction> Temp_softobject_Variable, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UInputAction* K2Node_DynamicCast_AsInput_Action, bool K2Node_DynamicCast_bSuccess, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, class UInputAction* CallFunc_GetDefaultInputActionForEventIndex_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IInteractable> K2Node_DynamicCast_AsInteractable, bool K2Node_DynamicCast_bSuccess_1, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, TSoftObjectPtr<class UInputAction> CallFunc_GetInputActionForEventIndex_ReturnValue);
	void GetInteractableComponent(class UObject* Param_Interactable, class UInteractableComponent** InteractableComponent, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class UActorComponent* K2Node_DynamicCast_AsActor_Component, bool K2Node_DynamicCast_bSuccess_1, class UInteractableComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UInteractableComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UInteractableComponent* K2Node_DynamicCast_AsInteractable_Component, bool K2Node_DynamicCast_bSuccess_2);
	void HandleControlMappingsRebuilt();
	void OnInitialized();
	void OnlyUseIInteractableInputActions(bool* OnlyUseIInteractableActions, class UInteractableComponent* CallFunc_GetInteractableComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void SetAmountTextStyle(bool ShowDisabled, bool Temp_bool_Variable, class UVALUI_TextBlockStyle* Temp_object_Variable, class UVALUI_TextBlockStyle* Temp_object_Variable_1, bool CallFunc_IsValid_ReturnValue, class UVALUI_TextBlockStyle* K2Node_Select_Default);
	void SetBorderStyle(bool ShowDisabled, bool Temp_bool_Variable, class UVALUI_BorderStyle* Temp_object_Variable, class UVALUI_BorderStyle* Temp_object_Variable_1, bool CallFunc_IsValid_ReturnValue, class UVALUI_BorderStyle* K2Node_Select_Default);
	void SetDesaturatedAmount(bool ShowDisabled, bool CallFunc_IsValid_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void SetKeyboardIADescription(bool CallFunc_IsValid_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetNameTextStyle(bool ShowDisabled, bool Temp_bool_Variable, class UVALUI_TextBlockStyle* Temp_object_Variable, class UVALUI_TextBlockStyle* Temp_object_Variable_1, bool CallFunc_IsValid_ReturnValue, class UVALUI_TextBlockStyle* K2Node_Select_Default);
	void Update(class UInteractableComponent* InteractableComponent, class UObject* Param_Interactable, EInteractEventIndex Param_Index);
	void Update_Prompt(bool CallFunc_IsSwitchPlatform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, ESlateVisibility CallFunc_GetVisibility_ReturnValue);
	void UpdateCostUI(EVitalType VitalType, int32 VitalAmount, const struct FShopItemAdditionalCost& AdditionalItem, int32 NewParam, class UHorizontalBox* Box, class UVALUI_TextBlock_Styled* Text, class UImage* Icon, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void UpdateTextStylesPerPlatform(bool CallFunc_IsConsole_ReturnValue);
	void UpdateUI(class FText Param_Name, class UTexture2D* Icon, int32 Amount, bool ShowIcon, EVitalType VitalType, int32 VitalCost, EVitalType Vital2Type, int32 Vital2Cost, bool ShowKey, TArray<struct FShopItemAdditionalCost>& AdditionalCost, bool ShowDisabled, bool IsTextOverridden, ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, EValeriaFuncResult CallFunc_FindVitalConfigByType_OutResult, const struct FVitalConfig& CallFunc_FindVitalConfigByType_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, ESlateVisibility K2Node_Select_Default, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, ESlateVisibility K2Node_Select_Default_1, bool K2Node_SwitchEnum_CmpSuccess_1, ESlateVisibility K2Node_Select_Default_2, bool CallFunc_IsValid_ReturnValue_2);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InteractPlate_PromptEntry_C">();
	}
	static class UWBP_InteractPlate_PromptEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InteractPlate_PromptEntry_C>();
	}
};
static_assert(alignof(UWBP_InteractPlate_PromptEntry_C) == 0x000008, "Wrong alignment on UWBP_InteractPlate_PromptEntry_C");
static_assert(sizeof(UWBP_InteractPlate_PromptEntry_C) == 0x000388, "Wrong size on UWBP_InteractPlate_PromptEntry_C");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_InteractPlate_PromptEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, AmountText) == 0x0002C8, "Member 'UWBP_InteractPlate_PromptEntry_C::AmountText' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, Border_Cost) == 0x0002D0, "Member 'UWBP_InteractPlate_PromptEntry_C::Border_Cost' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, GamepadCommonActionWidget) == 0x0002D8, "Member 'UWBP_InteractPlate_PromptEntry_C::GamepadCommonActionWidget' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, Image_CostIcon) == 0x0002E0, "Member 'UWBP_InteractPlate_PromptEntry_C::Image_CostIcon' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, KeyboardIADescription) == 0x0002E8, "Member 'UWBP_InteractPlate_PromptEntry_C::KeyboardIADescription' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, NameText) == 0x0002F0, "Member 'UWBP_InteractPlate_PromptEntry_C::NameText' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, Text_Cost) == 0x0002F8, "Member 'UWBP_InteractPlate_PromptEntry_C::Text_Cost' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, VALUI_Border_Styled_Backing) == 0x000300, "Member 'UWBP_InteractPlate_PromptEntry_C::VALUI_Border_Styled_Backing' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, WidgetSwitcher_KeyIcon) == 0x000308, "Member 'UWBP_InteractPlate_PromptEntry_C::WidgetSwitcher_KeyIcon' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, InteractIndex) == 0x000310, "Member 'UWBP_InteractPlate_PromptEntry_C::InteractIndex' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, EmptyAdditionalCost) == 0x000318, "Member 'UWBP_InteractPlate_PromptEntry_C::EmptyAdditionalCost' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, PlatePayload) == 0x000328, "Member 'UWBP_InteractPlate_PromptEntry_C::PlatePayload' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, DesaturatedImage) == 0x000330, "Member 'UWBP_InteractPlate_PromptEntry_C::DesaturatedImage' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, DesaturateAmount) == 0x000338, "Member 'UWBP_InteractPlate_PromptEntry_C::DesaturateAmount' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, KeyboardPromptPadding) == 0x000340, "Member 'UWBP_InteractPlate_PromptEntry_C::KeyboardPromptPadding' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, GamepadPromptPadding) == 0x000350, "Member 'UWBP_InteractPlate_PromptEntry_C::GamepadPromptPadding' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, Interactable) == 0x000360, "Member 'UWBP_InteractPlate_PromptEntry_C::Interactable' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, InputAction) == 0x000368, "Member 'UWBP_InteractPlate_PromptEntry_C::InputAction' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, ConsolePrimaryTextStyle) == 0x000370, "Member 'UWBP_InteractPlate_PromptEntry_C::ConsolePrimaryTextStyle' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, ConsoleSecondaryTextStyle) == 0x000378, "Member 'UWBP_InteractPlate_PromptEntry_C::ConsoleSecondaryTextStyle' has a wrong offset!");
static_assert(offsetof(UWBP_InteractPlate_PromptEntry_C, Interactable_Component) == 0x000380, "Member 'UWBP_InteractPlate_PromptEntry_C::Interactable_Component' has a wrong offset!");

}

