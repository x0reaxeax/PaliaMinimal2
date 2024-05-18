#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TileEntry_EyeColor_CM

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function WBP_TileEntry_EyeColor_CM.WBP_TileEntry_EyeColor_CM_C.BndEvt__WBP_TileEntry_EyeColor_CM_WBP_Button_ColorPicker_CM_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_TileEntry_EyeColor_CM_C_BndEvt__WBP_TileEntry_EyeColor_CM_WBP_Button_ColorPicker_CM_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature final
{
public:
	class UWBP_Template_Button_ColorPicker_01_CM_C* Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TileEntry_EyeColor_CM_C_BndEvt__WBP_TileEntry_EyeColor_CM_WBP_Button_ColorPicker_CM_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_TileEntry_EyeColor_CM_C_BndEvt__WBP_TileEntry_EyeColor_CM_WBP_Button_ColorPicker_CM_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
static_assert(sizeof(WBP_TileEntry_EyeColor_CM_C_BndEvt__WBP_TileEntry_EyeColor_CM_WBP_Button_ColorPicker_CM_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_TileEntry_EyeColor_CM_C_BndEvt__WBP_TileEntry_EyeColor_CM_WBP_Button_ColorPicker_CM_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_BndEvt__WBP_TileEntry_EyeColor_CM_WBP_Button_ColorPicker_CM_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_TileEntry_EyeColor_CM_C_BndEvt__WBP_TileEntry_EyeColor_CM_WBP_Button_ColorPicker_CM_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_TileEntry_EyeColor_CM.WBP_TileEntry_EyeColor_CM_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_TileEntry_EyeColor_CM_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TileEntry_EyeColor_CM_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on WBP_TileEntry_EyeColor_CM_C_BP_OnItemExpansionChanged");
static_assert(sizeof(WBP_TileEntry_EyeColor_CM_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on WBP_TileEntry_EyeColor_CM_C_BP_OnItemExpansionChanged");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'WBP_TileEntry_EyeColor_CM_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function WBP_TileEntry_EyeColor_CM.WBP_TileEntry_EyeColor_CM_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_TileEntry_EyeColor_CM_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TileEntry_EyeColor_CM_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on WBP_TileEntry_EyeColor_CM_C_BP_OnItemSelectionChanged");
static_assert(sizeof(WBP_TileEntry_EyeColor_CM_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on WBP_TileEntry_EyeColor_CM_C_BP_OnItemSelectionChanged");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'WBP_TileEntry_EyeColor_CM_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function WBP_TileEntry_EyeColor_CM.WBP_TileEntry_EyeColor_CM_C.ExecuteUbergraph_WBP_TileEntry_EyeColor_CM
// 0x0138 (0x0138 - 0x0000)
struct WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12D5[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12D6[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTileItem_CharacterCustomizationItem_C* K2Node_DynamicCast_AsTile_Item_Character_Customization_Item; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12D7[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAL_CharacterCustomizationItem_Eyes*   K2Node_DynamicCast_AsVAL_Character_Customization_Item_Eyes; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12D8[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVAL_CharacterCustomizationItem_Eyes_PerBodyTypeConfig CallFunc_TryGetBodyTypeSpecificConfig_Eyes_OutBodyTypeSpecificConfig; // 0x0040(0x00A8)()
	bool                                          CallFunc_TryGetBodyTypeSpecificConfig_Eyes_ReturnValue; // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12D9[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UListViewBase*                          CallFunc_GetOwningListView_ReturnValue;            // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UListView*                              K2Node_DynamicCast_AsList_View;                    // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12DA[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetListItemObject_ReturnValue;            // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0118(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Template_Button_ColorPicker_01_CM_C* K2Node_ComponentBoundEvent_Button;                 // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x0130(0x0008)(NoDestructor)
};
static_assert(alignof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM) == 0x000008, "Wrong alignment on WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM");
static_assert(sizeof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM) == 0x000138, "Wrong size on WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM, EntryPoint) == 0x000000, "Member 'WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM, K2Node_Event_bIsExpanded) == 0x000004, "Member 'WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM, K2Node_Event_ListItemObject) == 0x000008, "Member 'WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM, K2Node_Event_bIsSelected) == 0x000010, "Member 'WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM, K2Node_DynamicCast_AsTile_Item_Character_Customization_Item) == 0x000018, "Member 'WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM::K2Node_DynamicCast_AsTile_Item_Character_Customization_Item' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM, Temp_object_Variable) == 0x000028, "Member 'WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM, K2Node_DynamicCast_AsVAL_Character_Customization_Item_Eyes) == 0x000030, "Member 'WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM::K2Node_DynamicCast_AsVAL_Character_Customization_Item_Eyes' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM, CallFunc_TryGetBodyTypeSpecificConfig_Eyes_OutBodyTypeSpecificConfig) == 0x000040, "Member 'WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM::CallFunc_TryGetBodyTypeSpecificConfig_Eyes_OutBodyTypeSpecificConfig' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM, CallFunc_TryGetBodyTypeSpecificConfig_Eyes_ReturnValue) == 0x0000E8, "Member 'WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM::CallFunc_TryGetBodyTypeSpecificConfig_Eyes_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM, K2Node_CustomEvent_Loaded) == 0x0000F0, "Member 'WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM, CallFunc_GetOwningListView_ReturnValue) == 0x0000F8, "Member 'WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM::CallFunc_GetOwningListView_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM, K2Node_DynamicCast_AsList_View) == 0x000100, "Member 'WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM::K2Node_DynamicCast_AsList_View' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM, K2Node_DynamicCast_bSuccess_2) == 0x000108, "Member 'WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM, CallFunc_GetListItemObject_ReturnValue) == 0x000110, "Member 'WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM::CallFunc_GetListItemObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM, K2Node_CreateDelegate_OutputDelegate) == 0x000118, "Member 'WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM, K2Node_ComponentBoundEvent_Button) == 0x000128, "Member 'WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM, K2Node_Event_InFocusEvent) == 0x000130, "Member 'WBP_TileEntry_EyeColor_CM_C_ExecuteUbergraph_WBP_TileEntry_EyeColor_CM::K2Node_Event_InFocusEvent' has a wrong offset!");

// Function WBP_TileEntry_EyeColor_CM.WBP_TileEntry_EyeColor_CM_C.OnFocusLost
// 0x0008 (0x0008 - 0x0000)
struct WBP_TileEntry_EyeColor_CM_C_OnFocusLost final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_TileEntry_EyeColor_CM_C_OnFocusLost) == 0x000004, "Wrong alignment on WBP_TileEntry_EyeColor_CM_C_OnFocusLost");
static_assert(sizeof(WBP_TileEntry_EyeColor_CM_C_OnFocusLost) == 0x000008, "Wrong size on WBP_TileEntry_EyeColor_CM_C_OnFocusLost");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_OnFocusLost, InFocusEvent) == 0x000000, "Member 'WBP_TileEntry_EyeColor_CM_C_OnFocusLost::InFocusEvent' has a wrong offset!");

// Function WBP_TileEntry_EyeColor_CM.WBP_TileEntry_EyeColor_CM_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct WBP_TileEntry_EyeColor_CM_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
static_assert(alignof(WBP_TileEntry_EyeColor_CM_C_OnFocusReceived) == 0x000008, "Wrong alignment on WBP_TileEntry_EyeColor_CM_C_OnFocusReceived");
static_assert(sizeof(WBP_TileEntry_EyeColor_CM_C_OnFocusReceived) == 0x0001B0, "Wrong size on WBP_TileEntry_EyeColor_CM_C_OnFocusReceived");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'WBP_TileEntry_EyeColor_CM_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'WBP_TileEntry_EyeColor_CM_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'WBP_TileEntry_EyeColor_CM_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x0000F8, "Member 'WBP_TileEntry_EyeColor_CM_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_TileEntry_EyeColor_CM.WBP_TileEntry_EyeColor_CM_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct WBP_TileEntry_EyeColor_CM_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TileEntry_EyeColor_CM_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on WBP_TileEntry_EyeColor_CM_C_OnListItemObjectSet");
static_assert(sizeof(WBP_TileEntry_EyeColor_CM_C_OnListItemObjectSet) == 0x000008, "Wrong size on WBP_TileEntry_EyeColor_CM_C_OnListItemObjectSet");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'WBP_TileEntry_EyeColor_CM_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function WBP_TileEntry_EyeColor_CM.WBP_TileEntry_EyeColor_CM_C.OnLoaded_402A95024F05F1E96B67E5907B77F61D
// 0x0008 (0x0008 - 0x0000)
struct WBP_TileEntry_EyeColor_CM_C_OnLoaded_402A95024F05F1E96B67E5907B77F61D final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TileEntry_EyeColor_CM_C_OnLoaded_402A95024F05F1E96B67E5907B77F61D) == 0x000008, "Wrong alignment on WBP_TileEntry_EyeColor_CM_C_OnLoaded_402A95024F05F1E96B67E5907B77F61D");
static_assert(sizeof(WBP_TileEntry_EyeColor_CM_C_OnLoaded_402A95024F05F1E96B67E5907B77F61D) == 0x000008, "Wrong size on WBP_TileEntry_EyeColor_CM_C_OnLoaded_402A95024F05F1E96B67E5907B77F61D");
static_assert(offsetof(WBP_TileEntry_EyeColor_CM_C_OnLoaded_402A95024F05F1E96B67E5907B77F61D, Loaded) == 0x000000, "Member 'WBP_TileEntry_EyeColor_CM_C_OnLoaded_402A95024F05F1E96B67E5907B77F61D::Loaded' has a wrong offset!");

}
