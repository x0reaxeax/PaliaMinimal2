#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Cooking_RecipeCueStatus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Cooking_RecipeCueStatus.WBP_Cooking_RecipeCueStatus_C
// 0x0040 (0x0300 - 0x02C0)
class UWBP_Cooking_RecipeCueStatus_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Widget_Status_Browsing;                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Widget_Status_Complete;                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Widget_Status_Failure;                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Widget_Status_Hold;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Widget_Status_InProgress;                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Widget_Status_Needs;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Status;                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_Cooking_RecipeCueStatus(int32 EntryPoint);
	void SetNeededText(class FText Text);
	void SetState(EComplexRecipeCueState State, EComplexRecipeCueState Temp_byte_Variable, class UWidget* Temp_object_Variable, class UWidget* K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Cooking_RecipeCueStatus_C">();
	}
	static class UWBP_Cooking_RecipeCueStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Cooking_RecipeCueStatus_C>();
	}
};
static_assert(alignof(UWBP_Cooking_RecipeCueStatus_C) == 0x000008, "Wrong alignment on UWBP_Cooking_RecipeCueStatus_C");
static_assert(sizeof(UWBP_Cooking_RecipeCueStatus_C) == 0x000300, "Wrong size on UWBP_Cooking_RecipeCueStatus_C");
static_assert(offsetof(UWBP_Cooking_RecipeCueStatus_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_Cooking_RecipeCueStatus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_RecipeCueStatus_C, Widget_Status_Browsing) == 0x0002C8, "Member 'UWBP_Cooking_RecipeCueStatus_C::Widget_Status_Browsing' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_RecipeCueStatus_C, Widget_Status_Complete) == 0x0002D0, "Member 'UWBP_Cooking_RecipeCueStatus_C::Widget_Status_Complete' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_RecipeCueStatus_C, Widget_Status_Failure) == 0x0002D8, "Member 'UWBP_Cooking_RecipeCueStatus_C::Widget_Status_Failure' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_RecipeCueStatus_C, Widget_Status_Hold) == 0x0002E0, "Member 'UWBP_Cooking_RecipeCueStatus_C::Widget_Status_Hold' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_RecipeCueStatus_C, Widget_Status_InProgress) == 0x0002E8, "Member 'UWBP_Cooking_RecipeCueStatus_C::Widget_Status_InProgress' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_RecipeCueStatus_C, Widget_Status_Needs) == 0x0002F0, "Member 'UWBP_Cooking_RecipeCueStatus_C::Widget_Status_Needs' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_RecipeCueStatus_C, WidgetSwitcher_Status) == 0x0002F8, "Member 'UWBP_Cooking_RecipeCueStatus_C::WidgetSwitcher_Status' has a wrong offset!");

}
