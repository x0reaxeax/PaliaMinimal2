#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharacterCustomization_VariantChannel_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "S6UICommonWidgets_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharacterCustomization_VariantChannel_CM.WBP_CharacterCustomization_VariantChannel_CM_C
// 0x0070 (0x15E0 - 0x1570)
class UWBP_CharacterCustomization_VariantChannel_CM_C final : public US6UI_CommonButton_Styled
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1570(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Select;                                            // 0x1578(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x1580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVAL_CharacterCustomizationItemBase*    Item;                                              // 0x1588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EVAL_CharacterBodyType                        BodyType;                                          // 0x1590(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4E4C[0x3];                                     // 0x1591(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ChannelName;                                       // 0x1594(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Selected;                                          // 0x159C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E4D[0x3];                                     // 0x159D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ChannelLocalizedName;                              // 0x15A0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UListEntry_CharacterCustomization_VariantOption_C*> VariantOptions;                                    // 0x15B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x15C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   LoadoutSlotName;                                   // 0x15D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BP_OnClicked();
	void BP_OnHovered();
	void ExecuteUbergraph_WBP_CharacterCustomization_VariantChannel_CM(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const TMap<class FName, struct FVAL_VariantChannelSettings>& Temp_name_Variable, int32 CallFunc_AkEventGlobal_ReturnValue, const struct FVAL_VariantChannelSettings& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void GenerateVariantOptions(const struct FGuid& SelectedVariantId, TArray<class UListEntry_CharacterCustomization_VariantOption_C*>* Options, int32* SelectId, int32 SelectedId, bool NewLocalVar, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UListEntry_CharacterCustomization_VariantOption_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const TSet<struct FGuid>& CallFunc_TryGetAllVariantOptionIds_OutVariantOptionIds, bool CallFunc_TryGetAllVariantOptionIds_ReturnValue, TArray<struct FGuid>& CallFunc_Set_ToArray_Result, const struct FGuid& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVAL_CharacterCustomizationVariantOptionBase& CallFunc_TryGetVariantOptionById_OutVariantOption, bool CallFunc_TryGetVariantOptionById_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue);
	void OnButtonClicked__DelegateSignature(class UWBP_CharacterCustomization_VariantChannel_CM_C* VariantChannelWidget);
	void PreConstruct(bool IsDesignTime);
	void SelectChannel(bool IsSelected, bool ShouldAnimate, float CallFunc_GetEndTime_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_GetEndTime_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 CallFunc_AkEventGlobal_ReturnValue, double CallFunc_SelectFloat_B_ImplicitCast, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast_1, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharacterCustomization_VariantChannel_CM_C">();
	}
	static class UWBP_CharacterCustomization_VariantChannel_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharacterCustomization_VariantChannel_CM_C>();
	}
};
static_assert(alignof(UWBP_CharacterCustomization_VariantChannel_CM_C) == 0x000010, "Wrong alignment on UWBP_CharacterCustomization_VariantChannel_CM_C");
static_assert(sizeof(UWBP_CharacterCustomization_VariantChannel_CM_C) == 0x0015E0, "Wrong size on UWBP_CharacterCustomization_VariantChannel_CM_C");
static_assert(offsetof(UWBP_CharacterCustomization_VariantChannel_CM_C, UberGraphFrame) == 0x001570, "Member 'UWBP_CharacterCustomization_VariantChannel_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantChannel_CM_C, Select) == 0x001578, "Member 'UWBP_CharacterCustomization_VariantChannel_CM_C::Select' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantChannel_CM_C, Image_Icon) == 0x001580, "Member 'UWBP_CharacterCustomization_VariantChannel_CM_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantChannel_CM_C, Item) == 0x001588, "Member 'UWBP_CharacterCustomization_VariantChannel_CM_C::Item' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantChannel_CM_C, BodyType) == 0x001590, "Member 'UWBP_CharacterCustomization_VariantChannel_CM_C::BodyType' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantChannel_CM_C, ChannelName) == 0x001594, "Member 'UWBP_CharacterCustomization_VariantChannel_CM_C::ChannelName' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantChannel_CM_C, Selected) == 0x00159C, "Member 'UWBP_CharacterCustomization_VariantChannel_CM_C::Selected' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantChannel_CM_C, ChannelLocalizedName) == 0x0015A0, "Member 'UWBP_CharacterCustomization_VariantChannel_CM_C::ChannelLocalizedName' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantChannel_CM_C, VariantOptions) == 0x0015B8, "Member 'UWBP_CharacterCustomization_VariantChannel_CM_C::VariantOptions' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantChannel_CM_C, OnButtonClicked) == 0x0015C8, "Member 'UWBP_CharacterCustomization_VariantChannel_CM_C::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantChannel_CM_C, LoadoutSlotName) == 0x0015D8, "Member 'UWBP_CharacterCustomization_VariantChannel_CM_C::LoadoutSlotName' has a wrong offset!");

}

