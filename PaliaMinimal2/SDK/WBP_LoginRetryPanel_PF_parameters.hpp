#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoginRetryPanel_PF

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_LoginRetryPanel_PF.WBP_LoginRetryPanel_PF_C.ExecuteUbergraph_WBP_LoginRetryPanel_PF
// 0x0004 (0x0004 - 0x0000)
struct WBP_LoginRetryPanel_PF_C_ExecuteUbergraph_WBP_LoginRetryPanel_PF final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LoginRetryPanel_PF_C_ExecuteUbergraph_WBP_LoginRetryPanel_PF) == 0x000004, "Wrong alignment on WBP_LoginRetryPanel_PF_C_ExecuteUbergraph_WBP_LoginRetryPanel_PF");
static_assert(sizeof(WBP_LoginRetryPanel_PF_C_ExecuteUbergraph_WBP_LoginRetryPanel_PF) == 0x000004, "Wrong size on WBP_LoginRetryPanel_PF_C_ExecuteUbergraph_WBP_LoginRetryPanel_PF");
static_assert(offsetof(WBP_LoginRetryPanel_PF_C_ExecuteUbergraph_WBP_LoginRetryPanel_PF, EntryPoint) == 0x000000, "Member 'WBP_LoginRetryPanel_PF_C_ExecuteUbergraph_WBP_LoginRetryPanel_PF::EntryPoint' has a wrong offset!");

// Function WBP_LoginRetryPanel_PF.WBP_LoginRetryPanel_PF_C.UpdateContentText
// 0x0058 (0x0058 - 0x0000)
struct WBP_LoginRetryPanel_PF_C_UpdateContentText final
{
public:
	class FText                                   New_Text;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bUseDefaultText;                                   // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5095[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   DefaultText;                                       // 0x0020(0x0018)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5096[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0040(0x0018)()
};
static_assert(alignof(WBP_LoginRetryPanel_PF_C_UpdateContentText) == 0x000008, "Wrong alignment on WBP_LoginRetryPanel_PF_C_UpdateContentText");
static_assert(sizeof(WBP_LoginRetryPanel_PF_C_UpdateContentText) == 0x000058, "Wrong size on WBP_LoginRetryPanel_PF_C_UpdateContentText");
static_assert(offsetof(WBP_LoginRetryPanel_PF_C_UpdateContentText, New_Text) == 0x000000, "Member 'WBP_LoginRetryPanel_PF_C_UpdateContentText::New_Text' has a wrong offset!");
static_assert(offsetof(WBP_LoginRetryPanel_PF_C_UpdateContentText, bUseDefaultText) == 0x000018, "Member 'WBP_LoginRetryPanel_PF_C_UpdateContentText::bUseDefaultText' has a wrong offset!");
static_assert(offsetof(WBP_LoginRetryPanel_PF_C_UpdateContentText, DefaultText) == 0x000020, "Member 'WBP_LoginRetryPanel_PF_C_UpdateContentText::DefaultText' has a wrong offset!");
static_assert(offsetof(WBP_LoginRetryPanel_PF_C_UpdateContentText, Temp_bool_Variable) == 0x000038, "Member 'WBP_LoginRetryPanel_PF_C_UpdateContentText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LoginRetryPanel_PF_C_UpdateContentText, CallFunc_TextIsEmpty_ReturnValue) == 0x000039, "Member 'WBP_LoginRetryPanel_PF_C_UpdateContentText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoginRetryPanel_PF_C_UpdateContentText, K2Node_Select_Default) == 0x000040, "Member 'WBP_LoginRetryPanel_PF_C_UpdateContentText::K2Node_Select_Default' has a wrong offset!");

}

