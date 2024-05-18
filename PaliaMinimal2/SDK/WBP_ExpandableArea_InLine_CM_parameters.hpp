#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ExpandableArea_InLine_CM

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_ExpandableArea_InLine_CM.WBP_ExpandableArea_InLine_CM_C.BndEvt__WBP_ExpandableArea_InLine_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_ExpandableArea_InLine_CM_C_BndEvt__WBP_ExpandableArea_InLine_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ExpandableArea_InLine_CM_C_BndEvt__WBP_ExpandableArea_InLine_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ExpandableArea_InLine_CM_C_BndEvt__WBP_ExpandableArea_InLine_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_ExpandableArea_InLine_CM_C_BndEvt__WBP_ExpandableArea_InLine_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_ExpandableArea_InLine_CM_C_BndEvt__WBP_ExpandableArea_InLine_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_BndEvt__WBP_ExpandableArea_InLine_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_ExpandableArea_InLine_CM_C_BndEvt__WBP_ExpandableArea_InLine_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_ExpandableArea_InLine_CM.WBP_ExpandableArea_InLine_CM_C.BndEvt__WBP_ExpandableArea_InLine_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_ExpandableArea_InLine_CM_C_BndEvt__WBP_ExpandableArea_InLine_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ExpandableArea_InLine_CM_C_BndEvt__WBP_ExpandableArea_InLine_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ExpandableArea_InLine_CM_C_BndEvt__WBP_ExpandableArea_InLine_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_ExpandableArea_InLine_CM_C_BndEvt__WBP_ExpandableArea_InLine_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_ExpandableArea_InLine_CM_C_BndEvt__WBP_ExpandableArea_InLine_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_BndEvt__WBP_ExpandableArea_InLine_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_ExpandableArea_InLine_CM_C_BndEvt__WBP_ExpandableArea_InLine_CM_Button_Expand_CM_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_ExpandableArea_InLine_CM.WBP_ExpandableArea_InLine_CM_C.DisplayExpandedContent
// 0x0048 (0x0048 - 0x0000)
struct WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent final
{
public:
	bool                                          Param_Expanded;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_PlayAnimation;                               // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57CA[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 HeaderButtonStyleCM;                               // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              BodyVisibility;                                    // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57CB[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57CC[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;       // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent) == 0x000008, "Wrong alignment on WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent");
static_assert(sizeof(WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent) == 0x000048, "Wrong size on WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent, Param_Expanded) == 0x000000, "Member 'WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent::Param_Expanded' has a wrong offset!");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent, Param_PlayAnimation) == 0x000001, "Member 'WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent::Param_PlayAnimation' has a wrong offset!");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent, HeaderButtonStyleCM) == 0x000008, "Member 'WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent::HeaderButtonStyleCM' has a wrong offset!");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent, BodyVisibility) == 0x000010, "Member 'WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent::BodyVisibility' has a wrong offset!");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent, CallFunc_PlayAnimationForward_ReturnValue) == 0x000028, "Member 'WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000030, "Member 'WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000038, "Member 'WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000040, "Member 'WBP_ExpandableArea_InLine_CM_C_DisplayExpandedContent::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");

// Function WBP_ExpandableArea_InLine_CM.WBP_ExpandableArea_InLine_CM_C.ExecuteUbergraph_WBP_ExpandableArea_InLine_CM
// 0x0050 (0x0050 - 0x0000)
struct WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57CD[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Temp_real_Variable;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_1;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57CE[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventGlobal_ReturnValue_1;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57CF[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventGlobal_ReturnValue_2;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57D0[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_1;               // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderTransformAngle_Angle_ImplicitCast; // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM) == 0x000008, "Wrong alignment on WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM");
static_assert(sizeof(WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM) == 0x000050, "Wrong size on WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM, EntryPoint) == 0x000000, "Member 'WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM, Temp_bool_Variable) == 0x000004, "Member 'WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM, Temp_real_Variable) == 0x000008, "Member 'WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM, Temp_real_Variable_1) == 0x000010, "Member 'WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM, K2Node_Event_IsDesignTime) == 0x000018, "Member 'WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM, CallFunc_AkEventGlobal_ReturnValue) == 0x00001C, "Member 'WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM, CallFunc_AkEventGlobal_ReturnValue_1) == 0x000020, "Member 'WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM::CallFunc_AkEventGlobal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM, K2Node_Select_Default) == 0x000028, "Member 'WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM, CallFunc_AkEventGlobal_ReturnValue_2) == 0x000030, "Member 'WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM::CallFunc_AkEventGlobal_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM, K2Node_ComponentBoundEvent_Button_1) == 0x000038, "Member 'WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM, K2Node_ComponentBoundEvent_Button) == 0x000040, "Member 'WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM, CallFunc_SetRenderTransformAngle_Angle_ImplicitCast) == 0x000048, "Member 'WBP_ExpandableArea_InLine_CM_C_ExecuteUbergraph_WBP_ExpandableArea_InLine_CM::CallFunc_SetRenderTransformAngle_Angle_ImplicitCast' has a wrong offset!");

// Function WBP_ExpandableArea_InLine_CM.WBP_ExpandableArea_InLine_CM_C.OnAreaExpanded__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_ExpandableArea_InLine_CM_C_OnAreaExpanded__DelegateSignature final
{
public:
	class UWBP_ExpandableArea_InLine_CM_C*        ExpandableAreaWidget;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_Expanded;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ExpandableArea_InLine_CM_C_OnAreaExpanded__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ExpandableArea_InLine_CM_C_OnAreaExpanded__DelegateSignature");
static_assert(sizeof(WBP_ExpandableArea_InLine_CM_C_OnAreaExpanded__DelegateSignature) == 0x000010, "Wrong size on WBP_ExpandableArea_InLine_CM_C_OnAreaExpanded__DelegateSignature");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_OnAreaExpanded__DelegateSignature, ExpandableAreaWidget) == 0x000000, "Member 'WBP_ExpandableArea_InLine_CM_C_OnAreaExpanded__DelegateSignature::ExpandableAreaWidget' has a wrong offset!");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_OnAreaExpanded__DelegateSignature, Param_Expanded) == 0x000008, "Member 'WBP_ExpandableArea_InLine_CM_C_OnAreaExpanded__DelegateSignature::Param_Expanded' has a wrong offset!");

// Function WBP_ExpandableArea_InLine_CM.WBP_ExpandableArea_InLine_CM_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_ExpandableArea_InLine_CM_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ExpandableArea_InLine_CM_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_ExpandableArea_InLine_CM_C_PreConstruct");
static_assert(sizeof(WBP_ExpandableArea_InLine_CM_C_PreConstruct) == 0x000001, "Wrong size on WBP_ExpandableArea_InLine_CM_C_PreConstruct");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_ExpandableArea_InLine_CM_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_ExpandableArea_InLine_CM.WBP_ExpandableArea_InLine_CM_C.ToggleExpand
// 0x0001 (0x0001 - 0x0000)
struct WBP_ExpandableArea_InLine_CM_C_ToggleExpand final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ExpandableArea_InLine_CM_C_ToggleExpand) == 0x000001, "Wrong alignment on WBP_ExpandableArea_InLine_CM_C_ToggleExpand");
static_assert(sizeof(WBP_ExpandableArea_InLine_CM_C_ToggleExpand) == 0x000001, "Wrong size on WBP_ExpandableArea_InLine_CM_C_ToggleExpand");
static_assert(offsetof(WBP_ExpandableArea_InLine_CM_C_ToggleExpand, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'WBP_ExpandableArea_InLine_CM_C_ToggleExpand::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

