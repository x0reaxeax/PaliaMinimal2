#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharacterRespecConfirmation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "EnhancedInput_structs.hpp"


namespace SDK::Params
{

// Function WBP_CharacterRespecConfirmation.WBP_CharacterRespecConfirmation_C.CloseSelf
// 0x0010 (0x0010 - 0x0000)
struct WBP_CharacterRespecConfirmation_C_CloseSelf final
{
public:
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class US6UI_UIManagerWidgetBase*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterRespecConfirmation_C_CloseSelf) == 0x000008, "Wrong alignment on WBP_CharacterRespecConfirmation_C_CloseSelf");
static_assert(sizeof(WBP_CharacterRespecConfirmation_C_CloseSelf) == 0x000010, "Wrong size on WBP_CharacterRespecConfirmation_C_CloseSelf");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_CloseSelf, CallFunc_GetOwningPlayer_ReturnValue) == 0x000000, "Member 'WBP_CharacterRespecConfirmation_C_CloseSelf::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_CloseSelf, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000008, "Member 'WBP_CharacterRespecConfirmation_C_CloseSelf::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");

// Function WBP_CharacterRespecConfirmation.WBP_CharacterRespecConfirmation_C.ExecuteUbergraph_WBP_CharacterRespecConfirmation
// 0x0088 (0x0088 - 0x0000)
struct WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50E9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputActionValue                      K2Node_EnhancedInputActionEvent_ActionValue;       // 0x0008(0x0020)(NoDestructor)
	float                                         K2Node_EnhancedInputActionEvent_ElapsedTime;       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_EnhancedInputActionEvent_TriggeredTime;     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UInputAction*                     K2Node_EnhancedInputActionEvent_SourceAction;      // 0x0030(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           Temp_object_Variable;                              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_InputActionValueToBool_ReturnValue;  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50EA[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Temp_real_Variable;                                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_1;                              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_0;                              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_1_0;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50EB[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetServerResetText_Result;                // 0x0070(0x0018)()
};
static_assert(alignof(WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation) == 0x000008, "Wrong alignment on WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation");
static_assert(sizeof(WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation) == 0x000088, "Wrong size on WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation, EntryPoint) == 0x000000, "Member 'WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation, K2Node_EnhancedInputActionEvent_ActionValue) == 0x000008, "Member 'WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation::K2Node_EnhancedInputActionEvent_ActionValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation, K2Node_EnhancedInputActionEvent_ElapsedTime) == 0x000028, "Member 'WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation::K2Node_EnhancedInputActionEvent_ElapsedTime' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation, K2Node_EnhancedInputActionEvent_TriggeredTime) == 0x00002C, "Member 'WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation::K2Node_EnhancedInputActionEvent_TriggeredTime' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation, K2Node_EnhancedInputActionEvent_SourceAction) == 0x000030, "Member 'WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation::K2Node_EnhancedInputActionEvent_SourceAction' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation, Temp_object_Variable) == 0x000038, "Member 'WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation, CallFunc_Conv_InputActionValueToBool_ReturnValue) == 0x000040, "Member 'WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation::CallFunc_Conv_InputActionValueToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation, Temp_real_Variable) == 0x000048, "Member 'WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation, Temp_real_Variable_1) == 0x000050, "Member 'WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation, Temp_real_Variable_0) == 0x000058, "Member 'WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation::Temp_real_Variable_0' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation, Temp_real_Variable_1_0) == 0x000060, "Member 'WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation::Temp_real_Variable_1_0' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation, Temp_bool_Variable) == 0x000068, "Member 'WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation, K2Node_Event_IsDesignTime) == 0x000069, "Member 'WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation, CallFunc_GetServerResetText_Result) == 0x000070, "Member 'WBP_CharacterRespecConfirmation_C_ExecuteUbergraph_WBP_CharacterRespecConfirmation::CallFunc_GetServerResetText_Result' has a wrong offset!");

// Function WBP_CharacterRespecConfirmation.WBP_CharacterRespecConfirmation_C.GetServerResetText
// 0x00C8 (0x00C8 - 0x0000)
struct WBP_CharacterRespecConfirmation_C_GetServerResetText final
{
public:
	class FText                                   Result;                                            // 0x0000(0x0018)(Parm, OutParm)
	struct FDateTime                              CallFunc_GetS6WeeklyResetTime_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_AsTimeZoneDate_DateTime_ReturnValue;      // 0x0020(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0038(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0050(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B0(0x0018)()
};
static_assert(alignof(WBP_CharacterRespecConfirmation_C_GetServerResetText) == 0x000008, "Wrong alignment on WBP_CharacterRespecConfirmation_C_GetServerResetText");
static_assert(sizeof(WBP_CharacterRespecConfirmation_C_GetServerResetText) == 0x0000C8, "Wrong size on WBP_CharacterRespecConfirmation_C_GetServerResetText");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_GetServerResetText, Result) == 0x000000, "Member 'WBP_CharacterRespecConfirmation_C_GetServerResetText::Result' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_GetServerResetText, CallFunc_GetS6WeeklyResetTime_ReturnValue) == 0x000018, "Member 'WBP_CharacterRespecConfirmation_C_GetServerResetText::CallFunc_GetS6WeeklyResetTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_GetServerResetText, CallFunc_AsTimeZoneDate_DateTime_ReturnValue) == 0x000020, "Member 'WBP_CharacterRespecConfirmation_C_GetServerResetText::CallFunc_AsTimeZoneDate_DateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_GetServerResetText, CallFunc_GetText_ReturnValue) == 0x000038, "Member 'WBP_CharacterRespecConfirmation_C_GetServerResetText::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_GetServerResetText, K2Node_MakeStruct_FormatArgumentData) == 0x000050, "Member 'WBP_CharacterRespecConfirmation_C_GetServerResetText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_GetServerResetText, K2Node_MakeArray_Array) == 0x0000A0, "Member 'WBP_CharacterRespecConfirmation_C_GetServerResetText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_GetServerResetText, CallFunc_Format_ReturnValue) == 0x0000B0, "Member 'WBP_CharacterRespecConfirmation_C_GetServerResetText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_CharacterRespecConfirmation.WBP_CharacterRespecConfirmation_C.InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0
// 0x0030 (0x0030 - 0x0000)
struct WBP_CharacterRespecConfirmation_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0 final
{
public:
	struct FInputActionValue                      ActionValue;                                       // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         ElapsedTime;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TriggeredTime;                                     // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UInputAction*                     SourceAction;                                      // 0x0028(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterRespecConfirmation_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0) == 0x000008, "Wrong alignment on WBP_CharacterRespecConfirmation_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0");
static_assert(sizeof(WBP_CharacterRespecConfirmation_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0) == 0x000030, "Wrong size on WBP_CharacterRespecConfirmation_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0, ActionValue) == 0x000000, "Member 'WBP_CharacterRespecConfirmation_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0::ActionValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0, ElapsedTime) == 0x000020, "Member 'WBP_CharacterRespecConfirmation_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0::ElapsedTime' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0, TriggeredTime) == 0x000024, "Member 'WBP_CharacterRespecConfirmation_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0::TriggeredTime' has a wrong offset!");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0, SourceAction) == 0x000028, "Member 'WBP_CharacterRespecConfirmation_C_InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0::SourceAction' has a wrong offset!");

// Function WBP_CharacterRespecConfirmation.WBP_CharacterRespecConfirmation_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_CharacterRespecConfirmation_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterRespecConfirmation_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_CharacterRespecConfirmation_C_PreConstruct");
static_assert(sizeof(WBP_CharacterRespecConfirmation_C_PreConstruct) == 0x000001, "Wrong size on WBP_CharacterRespecConfirmation_C_PreConstruct");
static_assert(offsetof(WBP_CharacterRespecConfirmation_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_CharacterRespecConfirmation_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

