#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_StoreItemToolip_RecipeIngredient

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_StoreItemToolip_RecipeIngredient.WBP_StoreItemToolip_RecipeIngredient_C
// 0x0038 (0x02F8 - 0x02C0)
class UWBP_StoreItemToolip_RecipeIngredient_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Icon;                                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_Ingredient;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             Texture;                                           // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   DisplayText;                                       // 0x02E0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_WBP_StoreItemToolip_RecipeIngredient(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StoreItemToolip_RecipeIngredient_C">();
	}
	static class UWBP_StoreItemToolip_RecipeIngredient_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StoreItemToolip_RecipeIngredient_C>();
	}
};
static_assert(alignof(UWBP_StoreItemToolip_RecipeIngredient_C) == 0x000008, "Wrong alignment on UWBP_StoreItemToolip_RecipeIngredient_C");
static_assert(sizeof(UWBP_StoreItemToolip_RecipeIngredient_C) == 0x0002F8, "Wrong size on UWBP_StoreItemToolip_RecipeIngredient_C");
static_assert(offsetof(UWBP_StoreItemToolip_RecipeIngredient_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_StoreItemToolip_RecipeIngredient_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_StoreItemToolip_RecipeIngredient_C, Icon) == 0x0002C8, "Member 'UWBP_StoreItemToolip_RecipeIngredient_C::Icon' has a wrong offset!");
static_assert(offsetof(UWBP_StoreItemToolip_RecipeIngredient_C, TextBlock_Ingredient) == 0x0002D0, "Member 'UWBP_StoreItemToolip_RecipeIngredient_C::TextBlock_Ingredient' has a wrong offset!");
static_assert(offsetof(UWBP_StoreItemToolip_RecipeIngredient_C, Texture) == 0x0002D8, "Member 'UWBP_StoreItemToolip_RecipeIngredient_C::Texture' has a wrong offset!");
static_assert(offsetof(UWBP_StoreItemToolip_RecipeIngredient_C, DisplayText) == 0x0002E0, "Member 'UWBP_StoreItemToolip_RecipeIngredient_C::DisplayText' has a wrong offset!");

}
