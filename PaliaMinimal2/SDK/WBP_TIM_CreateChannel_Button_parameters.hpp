#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TIM_CreateChannel_Button

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_TIM_CreateChannel_Button.WBP_TIM_CreateChannel_Button_C.BndEvt__WBP_TIM_CreateChannel_Button_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_TIM_CreateChannel_Button_C_BndEvt__WBP_TIM_CreateChannel_Button_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TIM_CreateChannel_Button_C_BndEvt__WBP_TIM_CreateChannel_Button_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_TIM_CreateChannel_Button_C_BndEvt__WBP_TIM_CreateChannel_Button_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_TIM_CreateChannel_Button_C_BndEvt__WBP_TIM_CreateChannel_Button_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_TIM_CreateChannel_Button_C_BndEvt__WBP_TIM_CreateChannel_Button_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_TIM_CreateChannel_Button_C_BndEvt__WBP_TIM_CreateChannel_Button_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_TIM_CreateChannel_Button_C_BndEvt__WBP_TIM_CreateChannel_Button_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_TIM_CreateChannel_Button.WBP_TIM_CreateChannel_Button_C.ExecuteUbergraph_WBP_TIM_CreateChannel_Button
// 0x0038 (0x0038 - 0x0000)
struct WBP_TIM_CreateChannel_Button_C_ExecuteUbergraph_WBP_TIM_CreateChannel_Button final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5728[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_TIM_CreateChannel_ModalDialog_C*   CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class US6UI_UIManagerWidgetBase*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TIM_CreateChannel_Button_C_ExecuteUbergraph_WBP_TIM_CreateChannel_Button) == 0x000008, "Wrong alignment on WBP_TIM_CreateChannel_Button_C_ExecuteUbergraph_WBP_TIM_CreateChannel_Button");
static_assert(sizeof(WBP_TIM_CreateChannel_Button_C_ExecuteUbergraph_WBP_TIM_CreateChannel_Button) == 0x000038, "Wrong size on WBP_TIM_CreateChannel_Button_C_ExecuteUbergraph_WBP_TIM_CreateChannel_Button");
static_assert(offsetof(WBP_TIM_CreateChannel_Button_C_ExecuteUbergraph_WBP_TIM_CreateChannel_Button, EntryPoint) == 0x000000, "Member 'WBP_TIM_CreateChannel_Button_C_ExecuteUbergraph_WBP_TIM_CreateChannel_Button::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TIM_CreateChannel_Button_C_ExecuteUbergraph_WBP_TIM_CreateChannel_Button, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'WBP_TIM_CreateChannel_Button_C_ExecuteUbergraph_WBP_TIM_CreateChannel_Button::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_TIM_CreateChannel_Button_C_ExecuteUbergraph_WBP_TIM_CreateChannel_Button, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'WBP_TIM_CreateChannel_Button_C_ExecuteUbergraph_WBP_TIM_CreateChannel_Button::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_CreateChannel_Button_C_ExecuteUbergraph_WBP_TIM_CreateChannel_Button, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000018, "Member 'WBP_TIM_CreateChannel_Button_C_ExecuteUbergraph_WBP_TIM_CreateChannel_Button::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TIM_CreateChannel_Button_C_ExecuteUbergraph_WBP_TIM_CreateChannel_Button, CallFunc_Create_ReturnValue) == 0x000020, "Member 'WBP_TIM_CreateChannel_Button_C_ExecuteUbergraph_WBP_TIM_CreateChannel_Button::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_CreateChannel_Button_C_ExecuteUbergraph_WBP_TIM_CreateChannel_Button, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000028, "Member 'WBP_TIM_CreateChannel_Button_C_ExecuteUbergraph_WBP_TIM_CreateChannel_Button::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TIM_CreateChannel_Button_C_ExecuteUbergraph_WBP_TIM_CreateChannel_Button, CallFunc_AkEventGlobal_ReturnValue) == 0x000030, "Member 'WBP_TIM_CreateChannel_Button_C_ExecuteUbergraph_WBP_TIM_CreateChannel_Button::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");

}

