#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GraphicsSettings_ConfirmationWindow_CM

#include "Basic.hpp"

#include "S6UICore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_GraphicsSettings_ConfirmationWindow_CM.WBP_GraphicsSettings_ConfirmationWindow_CM_C.CanClose
// 0x0003 (0x0003 - 0x0000)
struct WBP_GraphicsSettings_ConfirmationWindow_CM_C_CanClose final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ES6UI_ModalWidgetState                        CallFunc_GetModalWidgetState_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_CanClose) == 0x000001, "Wrong alignment on WBP_GraphicsSettings_ConfirmationWindow_CM_C_CanClose");
static_assert(sizeof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_CanClose) == 0x000003, "Wrong size on WBP_GraphicsSettings_ConfirmationWindow_CM_C_CanClose");
static_assert(offsetof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_CanClose, ReturnValue) == 0x000000, "Member 'WBP_GraphicsSettings_ConfirmationWindow_CM_C_CanClose::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_CanClose, CallFunc_GetModalWidgetState_ReturnValue) == 0x000001, "Member 'WBP_GraphicsSettings_ConfirmationWindow_CM_C_CanClose::CallFunc_GetModalWidgetState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_CanClose, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'WBP_GraphicsSettings_ConfirmationWindow_CM_C_CanClose::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WBP_GraphicsSettings_ConfirmationWindow_CM.WBP_GraphicsSettings_ConfirmationWindow_CM_C.ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0088(0x0018)()
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM) == 0x000008, "Wrong alignment on WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM");
static_assert(sizeof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM) == 0x0000A8, "Wrong size on WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM");
static_assert(offsetof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM, EntryPoint) == 0x000000, "Member 'WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM, Temp_int_Variable) == 0x000004, "Member 'WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000018, "Member 'WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM, K2Node_MakeArray_Array) == 0x000078, "Member 'WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM, CallFunc_Format_ReturnValue) == 0x000088, "Member 'WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000A0, "Member 'WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000A4, "Member 'WBP_GraphicsSettings_ConfirmationWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_ConfirmationWindow_CM::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_GraphicsSettings_ConfirmationWindow_CM.WBP_GraphicsSettings_ConfirmationWindow_CM_C.HandleStartClosing_BP
// 0x0002 (0x0002 - 0x0000)
struct WBP_GraphicsSettings_ConfirmationWindow_CM_C_HandleStartClosing_BP final
{
public:
	bool                                          bPermitLatentClosing;                              // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOutHasLatentClosingLogic;                         // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_HandleStartClosing_BP) == 0x000001, "Wrong alignment on WBP_GraphicsSettings_ConfirmationWindow_CM_C_HandleStartClosing_BP");
static_assert(sizeof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_HandleStartClosing_BP) == 0x000002, "Wrong size on WBP_GraphicsSettings_ConfirmationWindow_CM_C_HandleStartClosing_BP");
static_assert(offsetof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_HandleStartClosing_BP, bPermitLatentClosing) == 0x000000, "Member 'WBP_GraphicsSettings_ConfirmationWindow_CM_C_HandleStartClosing_BP::bPermitLatentClosing' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_HandleStartClosing_BP, bOutHasLatentClosingLogic) == 0x000001, "Member 'WBP_GraphicsSettings_ConfirmationWindow_CM_C_HandleStartClosing_BP::bOutHasLatentClosingLogic' has a wrong offset!");

// Function WBP_GraphicsSettings_ConfirmationWindow_CM.WBP_GraphicsSettings_ConfirmationWindow_CM_C.HandleStartOpening_BP
// 0x0001 (0x0001 - 0x0000)
struct WBP_GraphicsSettings_ConfirmationWindow_CM_C_HandleStartOpening_BP final
{
public:
	bool                                          bOutHasLatentOpeningLogic;                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_HandleStartOpening_BP) == 0x000001, "Wrong alignment on WBP_GraphicsSettings_ConfirmationWindow_CM_C_HandleStartOpening_BP");
static_assert(sizeof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_HandleStartOpening_BP) == 0x000001, "Wrong size on WBP_GraphicsSettings_ConfirmationWindow_CM_C_HandleStartOpening_BP");
static_assert(offsetof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_HandleStartOpening_BP, bOutHasLatentOpeningLogic) == 0x000000, "Member 'WBP_GraphicsSettings_ConfirmationWindow_CM_C_HandleStartOpening_BP::bOutHasLatentOpeningLogic' has a wrong offset!");

// Function WBP_GraphicsSettings_ConfirmationWindow_CM.WBP_GraphicsSettings_ConfirmationWindow_CM_C.OnWidgetClose
// 0x0010 (0x0010 - 0x0000)
struct WBP_GraphicsSettings_ConfirmationWindow_CM_C_OnWidgetClose final
{
public:
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class US6UI_UIManagerWidgetBase*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_OnWidgetClose) == 0x000008, "Wrong alignment on WBP_GraphicsSettings_ConfirmationWindow_CM_C_OnWidgetClose");
static_assert(sizeof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_OnWidgetClose) == 0x000010, "Wrong size on WBP_GraphicsSettings_ConfirmationWindow_CM_C_OnWidgetClose");
static_assert(offsetof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_OnWidgetClose, CallFunc_GetOwningPlayer_ReturnValue) == 0x000000, "Member 'WBP_GraphicsSettings_ConfirmationWindow_CM_C_OnWidgetClose::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_ConfirmationWindow_CM_C_OnWidgetClose, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000008, "Member 'WBP_GraphicsSettings_ConfirmationWindow_CM_C_OnWidgetClose::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");

}

