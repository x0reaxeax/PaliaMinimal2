#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TIM_ChatErrorNotification_CM

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_TIM_ChatErrorNotification_CM.WBP_TIM_ChatErrorNotification_CM_C.ExecuteUbergraph_WBP_TIM_ChatErrorNotification_CM
// 0x0020 (0x0020 - 0x0000)
struct WBP_TIM_ChatErrorNotification_CM_C_ExecuteUbergraph_WBP_TIM_ChatErrorNotification_CM final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5097[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TIM_ChatErrorNotification_CM_C_ExecuteUbergraph_WBP_TIM_ChatErrorNotification_CM) == 0x000008, "Wrong alignment on WBP_TIM_ChatErrorNotification_CM_C_ExecuteUbergraph_WBP_TIM_ChatErrorNotification_CM");
static_assert(sizeof(WBP_TIM_ChatErrorNotification_CM_C_ExecuteUbergraph_WBP_TIM_ChatErrorNotification_CM) == 0x000020, "Wrong size on WBP_TIM_ChatErrorNotification_CM_C_ExecuteUbergraph_WBP_TIM_ChatErrorNotification_CM");
static_assert(offsetof(WBP_TIM_ChatErrorNotification_CM_C_ExecuteUbergraph_WBP_TIM_ChatErrorNotification_CM, EntryPoint) == 0x000000, "Member 'WBP_TIM_ChatErrorNotification_CM_C_ExecuteUbergraph_WBP_TIM_ChatErrorNotification_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TIM_ChatErrorNotification_CM_C_ExecuteUbergraph_WBP_TIM_ChatErrorNotification_CM, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_TIM_ChatErrorNotification_CM_C_ExecuteUbergraph_WBP_TIM_ChatErrorNotification_CM::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_TIM_ChatErrorNotification_CM_C_ExecuteUbergraph_WBP_TIM_ChatErrorNotification_CM, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'WBP_TIM_ChatErrorNotification_CM_C_ExecuteUbergraph_WBP_TIM_ChatErrorNotification_CM::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
