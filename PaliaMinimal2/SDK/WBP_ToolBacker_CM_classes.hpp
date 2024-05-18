#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ToolBacker_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ToolBacker_CM.WBP_ToolBacker_CM_C
// 0x0088 (0x0348 - 0x02C0)
class UWBP_ToolBacker_CM_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_MeterBacker;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_StartLine;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_TanBacker;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_WaterBacker;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_WaterFill;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressBar;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         BagSlotIndex;                                      // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5322[0x4];                                     // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSecondaryClicked;                                // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bAllowDrag;                                        // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5323[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnToolClicked;                                     // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMaterialInstanceDynamic*               DurabilityDynamicMaterial;                         // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               WaterDynamicMaterial;                              // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_ToolItem_CM_C*                     ToolItem;                                          // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsItemVisible;                                     // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldDisplayBacker;                               // 0x0341(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Destruct();
	void ExecuteUbergraph_WBP_ToolBacker_CM(int32 EntryPoint, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TDelegate<void(const struct FValeriaItem& Item)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(double WaterPercent, bool ShouldDisplayWater)> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2);
	void HandleDurabilityUpdated(const struct FValeriaItem& Item, const struct FLinearColor& BadColor, const struct FLinearColor& MidColor, const struct FLinearColor& GoodColor, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_MakeColor_R_ImplicitCast, float CallFunc_MakeColor_G_ImplicitCast);
	void HandleItemVisiblityUpdated(bool Param_IsVisible, bool CallFunc_BooleanAND_ReturnValue);
	void HandleToolItemChanged();
	void HandleWaterLevelUpdated(double WaterPercent, bool ShouldDisplayWater, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void Initialize(class UWBP_ToolItem_CM_C* Param_ToolItem, bool CallFunc_UpdateTool_AnythingVisible, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(const struct FValeriaItem& Item)> K2Node_CreateDelegate_OutputDelegate_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, TDelegate<void(double WaterPercent, bool ShouldDisplayWater)> K2Node_CreateDelegate_OutputDelegate_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
	void OnSecondaryClicked__DelegateSignature(const struct FGeometry& My_Geometry, const struct FValeriaItem& Valeria_Item, const struct FBagSlotLocation& Bag_Slot_Location);
	void OnToolClicked__DelegateSignature(const struct FValeriaItem& Item);
	void UpdateBackerVisibility(bool Param_ShouldDisplayBacker, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
	void UpdateWaterVisibility(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UVALUI_ItemStyle* CallFunc_GetStyle_Style, ESlateVisibility Temp_byte_Variable, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanAND_ReturnValue_1, ESlateVisibility K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ToolBacker_CM_C">();
	}
	static class UWBP_ToolBacker_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ToolBacker_CM_C>();
	}
};
static_assert(alignof(UWBP_ToolBacker_CM_C) == 0x000008, "Wrong alignment on UWBP_ToolBacker_CM_C");
static_assert(sizeof(UWBP_ToolBacker_CM_C) == 0x000348, "Wrong size on UWBP_ToolBacker_CM_C");
static_assert(offsetof(UWBP_ToolBacker_CM_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_ToolBacker_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ToolBacker_CM_C, Image_MeterBacker) == 0x0002C8, "Member 'UWBP_ToolBacker_CM_C::Image_MeterBacker' has a wrong offset!");
static_assert(offsetof(UWBP_ToolBacker_CM_C, Image_StartLine) == 0x0002D0, "Member 'UWBP_ToolBacker_CM_C::Image_StartLine' has a wrong offset!");
static_assert(offsetof(UWBP_ToolBacker_CM_C, Image_TanBacker) == 0x0002D8, "Member 'UWBP_ToolBacker_CM_C::Image_TanBacker' has a wrong offset!");
static_assert(offsetof(UWBP_ToolBacker_CM_C, Image_WaterBacker) == 0x0002E0, "Member 'UWBP_ToolBacker_CM_C::Image_WaterBacker' has a wrong offset!");
static_assert(offsetof(UWBP_ToolBacker_CM_C, Image_WaterFill) == 0x0002E8, "Member 'UWBP_ToolBacker_CM_C::Image_WaterFill' has a wrong offset!");
static_assert(offsetof(UWBP_ToolBacker_CM_C, ProgressBar) == 0x0002F0, "Member 'UWBP_ToolBacker_CM_C::ProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_ToolBacker_CM_C, BagSlotIndex) == 0x0002F8, "Member 'UWBP_ToolBacker_CM_C::BagSlotIndex' has a wrong offset!");
static_assert(offsetof(UWBP_ToolBacker_CM_C, OnSecondaryClicked) == 0x000300, "Member 'UWBP_ToolBacker_CM_C::OnSecondaryClicked' has a wrong offset!");
static_assert(offsetof(UWBP_ToolBacker_CM_C, bAllowDrag) == 0x000310, "Member 'UWBP_ToolBacker_CM_C::bAllowDrag' has a wrong offset!");
static_assert(offsetof(UWBP_ToolBacker_CM_C, OnToolClicked) == 0x000318, "Member 'UWBP_ToolBacker_CM_C::OnToolClicked' has a wrong offset!");
static_assert(offsetof(UWBP_ToolBacker_CM_C, DurabilityDynamicMaterial) == 0x000328, "Member 'UWBP_ToolBacker_CM_C::DurabilityDynamicMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_ToolBacker_CM_C, WaterDynamicMaterial) == 0x000330, "Member 'UWBP_ToolBacker_CM_C::WaterDynamicMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_ToolBacker_CM_C, ToolItem) == 0x000338, "Member 'UWBP_ToolBacker_CM_C::ToolItem' has a wrong offset!");
static_assert(offsetof(UWBP_ToolBacker_CM_C, IsItemVisible) == 0x000340, "Member 'UWBP_ToolBacker_CM_C::IsItemVisible' has a wrong offset!");
static_assert(offsetof(UWBP_ToolBacker_CM_C, ShouldDisplayBacker) == 0x000341, "Member 'UWBP_ToolBacker_CM_C::ShouldDisplayBacker' has a wrong offset!");

}

