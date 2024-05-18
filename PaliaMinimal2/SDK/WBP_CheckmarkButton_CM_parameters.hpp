#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CheckmarkButton_CM

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_CheckmarkButton_CM.WBP_CheckmarkButton_CM_C.BndEvt__WBP_CheckmarkButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_CheckmarkButton_CM_C_BndEvt__WBP_CheckmarkButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CheckmarkButton_CM_C_BndEvt__WBP_CheckmarkButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_CheckmarkButton_CM_C_BndEvt__WBP_CheckmarkButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_CheckmarkButton_CM_C_BndEvt__WBP_CheckmarkButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_CheckmarkButton_CM_C_BndEvt__WBP_CheckmarkButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_BndEvt__WBP_CheckmarkButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_CheckmarkButton_CM_C_BndEvt__WBP_CheckmarkButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_CheckmarkButton_CM.WBP_CheckmarkButton_CM_C.ExecuteUbergraph_WBP_CheckmarkButton_CM
// 0x0048 (0x0048 - 0x0000)
struct WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_510E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x0010(0x0008)(NoDestructor)
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_510F[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM) == 0x000008, "Wrong alignment on WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM");
static_assert(sizeof(WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM) == 0x000048, "Wrong size on WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM, EntryPoint) == 0x000000, "Member 'WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM, K2Node_Event_InFocusEvent) == 0x000010, "Member 'WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM, K2Node_CustomEvent_bNewInputType) == 0x000018, "Member 'WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM, K2Node_Event_IsDesignTime) == 0x000019, "Member 'WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000020, "Member 'WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x000038, "Member 'WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM, CallFunc_GetCurrentInputType_ReturnValue) == 0x000040, "Member 'WBP_CheckmarkButton_CM_C_ExecuteUbergraph_WBP_CheckmarkButton_CM::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");

// Function WBP_CheckmarkButton_CM.WBP_CheckmarkButton_CM_C.HandleOnInputMethodChanged_Event
// 0x0001 (0x0001 - 0x0000)
struct WBP_CheckmarkButton_CM_C_HandleOnInputMethodChanged_Event final
{
public:
	ECommonInputType                              bNewInputType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CheckmarkButton_CM_C_HandleOnInputMethodChanged_Event) == 0x000001, "Wrong alignment on WBP_CheckmarkButton_CM_C_HandleOnInputMethodChanged_Event");
static_assert(sizeof(WBP_CheckmarkButton_CM_C_HandleOnInputMethodChanged_Event) == 0x000001, "Wrong size on WBP_CheckmarkButton_CM_C_HandleOnInputMethodChanged_Event");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_HandleOnInputMethodChanged_Event, bNewInputType) == 0x000000, "Member 'WBP_CheckmarkButton_CM_C_HandleOnInputMethodChanged_Event::bNewInputType' has a wrong offset!");

// Function WBP_CheckmarkButton_CM.WBP_CheckmarkButton_CM_C.OnCheckedStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_CheckmarkButton_CM_C_OnCheckedStateChanged__DelegateSignature final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CheckmarkButton_CM_C_OnCheckedStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on WBP_CheckmarkButton_CM_C_OnCheckedStateChanged__DelegateSignature");
static_assert(sizeof(WBP_CheckmarkButton_CM_C_OnCheckedStateChanged__DelegateSignature) == 0x000001, "Wrong size on WBP_CheckmarkButton_CM_C_OnCheckedStateChanged__DelegateSignature");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_OnCheckedStateChanged__DelegateSignature, IsSelected) == 0x000000, "Member 'WBP_CheckmarkButton_CM_C_OnCheckedStateChanged__DelegateSignature::IsSelected' has a wrong offset!");

// Function WBP_CheckmarkButton_CM.WBP_CheckmarkButton_CM_C.OnFocusLost
// 0x0008 (0x0008 - 0x0000)
struct WBP_CheckmarkButton_CM_C_OnFocusLost final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_CheckmarkButton_CM_C_OnFocusLost) == 0x000004, "Wrong alignment on WBP_CheckmarkButton_CM_C_OnFocusLost");
static_assert(sizeof(WBP_CheckmarkButton_CM_C_OnFocusLost) == 0x000008, "Wrong size on WBP_CheckmarkButton_CM_C_OnFocusLost");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_OnFocusLost, InFocusEvent) == 0x000000, "Member 'WBP_CheckmarkButton_CM_C_OnFocusLost::InFocusEvent' has a wrong offset!");

// Function WBP_CheckmarkButton_CM.WBP_CheckmarkButton_CM_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct WBP_CheckmarkButton_CM_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
static_assert(alignof(WBP_CheckmarkButton_CM_C_OnFocusReceived) == 0x000008, "Wrong alignment on WBP_CheckmarkButton_CM_C_OnFocusReceived");
static_assert(sizeof(WBP_CheckmarkButton_CM_C_OnFocusReceived) == 0x0001B0, "Wrong size on WBP_CheckmarkButton_CM_C_OnFocusReceived");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'WBP_CheckmarkButton_CM_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'WBP_CheckmarkButton_CM_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'WBP_CheckmarkButton_CM_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x0000F8, "Member 'WBP_CheckmarkButton_CM_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_CheckmarkButton_CM.WBP_CheckmarkButton_CM_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_CheckmarkButton_CM_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CheckmarkButton_CM_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_CheckmarkButton_CM_C_PreConstruct");
static_assert(sizeof(WBP_CheckmarkButton_CM_C_PreConstruct) == 0x000001, "Wrong size on WBP_CheckmarkButton_CM_C_PreConstruct");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_CheckmarkButton_CM_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_CheckmarkButton_CM.WBP_CheckmarkButton_CM_C.SetButtonPadding
// 0x0020 (0x0020 - 0x0000)
struct WBP_CheckmarkButton_CM_C_SetButtonPadding final
{
public:
	ECommonInputType                              CurrentInputType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5110[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_Select_Default;                             // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5111[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CheckmarkButton_CM_C_SetButtonPadding) == 0x000008, "Wrong alignment on WBP_CheckmarkButton_CM_C_SetButtonPadding");
static_assert(sizeof(WBP_CheckmarkButton_CM_C_SetButtonPadding) == 0x000020, "Wrong size on WBP_CheckmarkButton_CM_C_SetButtonPadding");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_SetButtonPadding, CurrentInputType) == 0x000000, "Member 'WBP_CheckmarkButton_CM_C_SetButtonPadding::CurrentInputType' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_SetButtonPadding, Temp_bool_Variable) == 0x000001, "Member 'WBP_CheckmarkButton_CM_C_SetButtonPadding::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_SetButtonPadding, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'WBP_CheckmarkButton_CM_C_SetButtonPadding::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_SetButtonPadding, K2Node_Select_Default) == 0x000004, "Member 'WBP_CheckmarkButton_CM_C_SetButtonPadding::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_SetButtonPadding, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000018, "Member 'WBP_CheckmarkButton_CM_C_SetButtonPadding::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");

// Function WBP_CheckmarkButton_CM.WBP_CheckmarkButton_CM_C.SetFocusTipVisibility
// 0x0020 (0x0020 - 0x0000)
struct WBP_CheckmarkButton_CM_C_SetFocusTipVisibility final
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5112[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyUserFocus_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasFocusedDescendants_ReturnValue;        // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CheckmarkButton_CM_C_SetFocusTipVisibility) == 0x000008, "Wrong alignment on WBP_CheckmarkButton_CM_C_SetFocusTipVisibility");
static_assert(sizeof(WBP_CheckmarkButton_CM_C_SetFocusTipVisibility) == 0x000020, "Wrong size on WBP_CheckmarkButton_CM_C_SetFocusTipVisibility");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_SetFocusTipVisibility, Temp_byte_Variable) == 0x000000, "Member 'WBP_CheckmarkButton_CM_C_SetFocusTipVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_SetFocusTipVisibility, Temp_byte_Variable_1) == 0x000001, "Member 'WBP_CheckmarkButton_CM_C_SetFocusTipVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_SetFocusTipVisibility, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'WBP_CheckmarkButton_CM_C_SetFocusTipVisibility::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_SetFocusTipVisibility, CallFunc_HasAnyUserFocus_ReturnValue) == 0x000010, "Member 'WBP_CheckmarkButton_CM_C_SetFocusTipVisibility::CallFunc_HasAnyUserFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_SetFocusTipVisibility, CallFunc_GetCurrentInputType_ReturnValue) == 0x000011, "Member 'WBP_CheckmarkButton_CM_C_SetFocusTipVisibility::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_SetFocusTipVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000012, "Member 'WBP_CheckmarkButton_CM_C_SetFocusTipVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_SetFocusTipVisibility, CallFunc_HasFocusedDescendants_ReturnValue) == 0x000013, "Member 'WBP_CheckmarkButton_CM_C_SetFocusTipVisibility::CallFunc_HasFocusedDescendants_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_SetFocusTipVisibility, CallFunc_Not_PreBool_ReturnValue) == 0x000014, "Member 'WBP_CheckmarkButton_CM_C_SetFocusTipVisibility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_SetFocusTipVisibility, CallFunc_BooleanOR_ReturnValue) == 0x000015, "Member 'WBP_CheckmarkButton_CM_C_SetFocusTipVisibility::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_SetFocusTipVisibility, Temp_bool_Variable) == 0x000016, "Member 'WBP_CheckmarkButton_CM_C_SetFocusTipVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_SetFocusTipVisibility, CallFunc_BooleanAND_ReturnValue) == 0x000017, "Member 'WBP_CheckmarkButton_CM_C_SetFocusTipVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_SetFocusTipVisibility, K2Node_Select_Default) == 0x000018, "Member 'WBP_CheckmarkButton_CM_C_SetFocusTipVisibility::K2Node_Select_Default' has a wrong offset!");

// Function WBP_CheckmarkButton_CM.WBP_CheckmarkButton_CM_C.SetSelected
// 0x0001 (0x0001 - 0x0000)
struct WBP_CheckmarkButton_CM_C_SetSelected final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CheckmarkButton_CM_C_SetSelected) == 0x000001, "Wrong alignment on WBP_CheckmarkButton_CM_C_SetSelected");
static_assert(sizeof(WBP_CheckmarkButton_CM_C_SetSelected) == 0x000001, "Wrong size on WBP_CheckmarkButton_CM_C_SetSelected");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_SetSelected, IsSelected) == 0x000000, "Member 'WBP_CheckmarkButton_CM_C_SetSelected::IsSelected' has a wrong offset!");

// Function WBP_CheckmarkButton_CM.WBP_CheckmarkButton_CM_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct WBP_CheckmarkButton_CM_C_SetText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CheckmarkButton_CM_C_SetText) == 0x000008, "Wrong alignment on WBP_CheckmarkButton_CM_C_SetText");
static_assert(sizeof(WBP_CheckmarkButton_CM_C_SetText) == 0x000018, "Wrong size on WBP_CheckmarkButton_CM_C_SetText");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_SetText, Text) == 0x000000, "Member 'WBP_CheckmarkButton_CM_C_SetText::Text' has a wrong offset!");

// Function WBP_CheckmarkButton_CM.WBP_CheckmarkButton_CM_C.ToggleCheckbox
// 0x0018 (0x0018 - 0x0000)
struct WBP_CheckmarkButton_CM_C_ToggleCheckbox final
{
public:
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5113[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CheckmarkButton_CM_C_ToggleCheckbox) == 0x000008, "Wrong alignment on WBP_CheckmarkButton_CM_C_ToggleCheckbox");
static_assert(sizeof(WBP_CheckmarkButton_CM_C_ToggleCheckbox) == 0x000018, "Wrong size on WBP_CheckmarkButton_CM_C_ToggleCheckbox");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_ToggleCheckbox, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000000, "Member 'WBP_CheckmarkButton_CM_C_ToggleCheckbox::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_ToggleCheckbox, CallFunc_GetCurrentInputType_ReturnValue) == 0x000008, "Member 'WBP_CheckmarkButton_CM_C_ToggleCheckbox::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_ToggleCheckbox, CallFunc_AkEventGlobal_ReturnValue) == 0x00000C, "Member 'WBP_CheckmarkButton_CM_C_ToggleCheckbox::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CheckmarkButton_CM_C_ToggleCheckbox, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'WBP_CheckmarkButton_CM_C_ToggleCheckbox::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}
