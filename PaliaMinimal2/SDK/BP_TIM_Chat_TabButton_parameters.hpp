#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TIM_Chat_TabButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_TIM_Chat_TabButton.BP_TIM_Chat_TabButton_C.ExecuteUbergraph_BP_TIM_Chat_TabButton
// 0x0030 (0x0030 - 0x0000)
struct BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsActive;                            // 0x0006(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DCF[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UVALUI_TextBlock_Styled*                CallFunc_SpawnObject_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_SetContent_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DD0[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVALUI_ButtonStyle*                     K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVALUI_TextBlockStyle*                  K2Node_Select_Default_1;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton) == 0x000008, "Wrong alignment on BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton");
static_assert(sizeof(BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton) == 0x000030, "Wrong size on BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton");
static_assert(offsetof(BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton, EntryPoint) == 0x000000, "Member 'BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton, Temp_bool_Variable) == 0x000004, "Member 'BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton, K2Node_Event_IsDesignTime) == 0x000005, "Member 'BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton, K2Node_Event_bIsActive) == 0x000006, "Member 'BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton::K2Node_Event_bIsActive' has a wrong offset!");
static_assert(offsetof(BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton, CallFunc_SpawnObject_ReturnValue) == 0x000008, "Member 'BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton, CallFunc_SetContent_ReturnValue) == 0x000010, "Member 'BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton::CallFunc_SetContent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton, Temp_bool_Variable_1) == 0x000018, "Member 'BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton, K2Node_Select_Default) == 0x000020, "Member 'BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton, K2Node_Select_Default_1) == 0x000028, "Member 'BP_TIM_Chat_TabButton_C_ExecuteUbergraph_BP_TIM_Chat_TabButton::K2Node_Select_Default_1' has a wrong offset!");

// Function BP_TIM_Chat_TabButton.BP_TIM_Chat_TabButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_TIM_Chat_TabButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TIM_Chat_TabButton_C_PreConstruct) == 0x000001, "Wrong alignment on BP_TIM_Chat_TabButton_C_PreConstruct");
static_assert(sizeof(BP_TIM_Chat_TabButton_C_PreConstruct) == 0x000001, "Wrong size on BP_TIM_Chat_TabButton_C_PreConstruct");
static_assert(offsetof(BP_TIM_Chat_TabButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_TIM_Chat_TabButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function BP_TIM_Chat_TabButton.BP_TIM_Chat_TabButton_C.SetIsActiveTabButton
// 0x0001 (0x0001 - 0x0000)
struct BP_TIM_Chat_TabButton_C_SetIsActiveTabButton final
{
public:
	bool                                          bIsActive;                                         // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TIM_Chat_TabButton_C_SetIsActiveTabButton) == 0x000001, "Wrong alignment on BP_TIM_Chat_TabButton_C_SetIsActiveTabButton");
static_assert(sizeof(BP_TIM_Chat_TabButton_C_SetIsActiveTabButton) == 0x000001, "Wrong size on BP_TIM_Chat_TabButton_C_SetIsActiveTabButton");
static_assert(offsetof(BP_TIM_Chat_TabButton_C_SetIsActiveTabButton, bIsActive) == 0x000000, "Member 'BP_TIM_Chat_TabButton_C_SetIsActiveTabButton::bIsActive' has a wrong offset!");

}

