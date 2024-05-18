#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Cooking_Minigames

#include "Basic.hpp"

#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function WBP_Cooking_Minigames.WBP_Cooking_Minigames_C.ExecuteUbergraph_WBP_Cooking_Minigames
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConsoleVariableBoolValue_ReturnValue;  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DC6[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UMinigameComponentBase*                 K2Node_CustomEvent_Comp;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EMinigameState                                K2Node_CustomEvent_PrevState;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMinigameState                                K2Node_CustomEvent_NewState;                       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DC7[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaPlayerController*               K2Node_DynamicCast_AsValeria_Player_Controller;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DC8[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacter_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_WasSuccess;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanXOR_ReturnValue;                   // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DC9[0x5];                                     // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DCA[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_2;         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DCB[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_MinigameQTE_Base_C*                K2Node_DynamicCast_AsWBP_Minigame_QTE_Base;        // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DCC[0x1];                                     // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x006C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DCD[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Select_Default;                             // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValeriaGameUserSettings*               CallFunc_GetValeriaGameUserSettings_ReturnValue;   // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetShowCookingCamera_ReturnValue;         // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames) == 0x000008, "Wrong alignment on WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames");
static_assert(sizeof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames) == 0x0000A8, "Wrong size on WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, EntryPoint) == 0x000000, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_GetConsoleVariableBoolValue_ReturnValue) == 0x000004, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_GetConsoleVariableBoolValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_IsServer_ReturnValue) == 0x000005, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_Not_PreBool_ReturnValue) == 0x000006, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, K2Node_CustomEvent_Comp) == 0x000008, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::K2Node_CustomEvent_Comp' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, K2Node_CustomEvent_PrevState) == 0x000010, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::K2Node_CustomEvent_PrevState' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, K2Node_CustomEvent_NewState) == 0x000011, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::K2Node_CustomEvent_NewState' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000012, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000013, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_Not_PreBool_ReturnValue_1) == 0x000014, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, K2Node_SwitchEnum_CmpSuccess) == 0x000015, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_IsPlaying_ReturnValue) == 0x000016, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, K2Node_DynamicCast_AsValeria_Player_Controller) == 0x000020, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::K2Node_DynamicCast_AsValeria_Player_Controller' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_GetValeriaCharacter_ReturnValue) == 0x000030, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_GetValeriaCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, K2Node_CustomEvent_WasSuccess) == 0x000038, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::K2Node_CustomEvent_WasSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_Not_PreBool_ReturnValue_2) == 0x000039, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_BooleanXOR_ReturnValue) == 0x00003A, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_BooleanXOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_PlayAnimationForward_ReturnValue) == 0x000040, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000048, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_Not_PreBool_ReturnValue_3) == 0x000049, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_BooleanAND_ReturnValue) == 0x00004A, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_BooleanAND_ReturnValue_1) == 0x00004B, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_GetActiveWidget_ReturnValue) == 0x000050, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_IsAnimationPlaying_ReturnValue_2) == 0x000058, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_IsAnimationPlaying_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, K2Node_DynamicCast_AsWBP_Minigame_QTE_Base) == 0x000060, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::K2Node_DynamicCast_AsWBP_Minigame_QTE_Base' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_Not_PreBool_ReturnValue_4) == 0x000069, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_Not_PreBool_ReturnValue_5) == 0x00006A, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, K2Node_CreateDelegate_OutputDelegate) == 0x00006C, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, Temp_bool_Variable) == 0x00007C, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, K2Node_Select_Default) == 0x000080, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000088, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000090, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_GetValeriaGameUserSettings_ReturnValue) == 0x000098, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_GetValeriaGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_GetShowCookingCamera_ReturnValue) == 0x0000A0, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_GetShowCookingCamera_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_IsValid_ReturnValue) == 0x0000A1, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames, CallFunc_BooleanAND_ReturnValue_2) == 0x0000A2, "Member 'WBP_Cooking_Minigames_C_ExecuteUbergraph_WBP_Cooking_Minigames::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

// Function WBP_Cooking_Minigames.WBP_Cooking_Minigames_C.HideMinigameAndUnlinkActive
// 0x0001 (0x0001 - 0x0000)
struct WBP_Cooking_Minigames_C_HideMinigameAndUnlinkActive final
{
public:
	bool                                          WasSuccess;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Cooking_Minigames_C_HideMinigameAndUnlinkActive) == 0x000001, "Wrong alignment on WBP_Cooking_Minigames_C_HideMinigameAndUnlinkActive");
static_assert(sizeof(WBP_Cooking_Minigames_C_HideMinigameAndUnlinkActive) == 0x000001, "Wrong size on WBP_Cooking_Minigames_C_HideMinigameAndUnlinkActive");
static_assert(offsetof(WBP_Cooking_Minigames_C_HideMinigameAndUnlinkActive, WasSuccess) == 0x000000, "Member 'WBP_Cooking_Minigames_C_HideMinigameAndUnlinkActive::WasSuccess' has a wrong offset!");

// Function WBP_Cooking_Minigames.WBP_Cooking_Minigames_C.LinkToMinigameComponent
// 0x0030 (0x0030 - 0x0000)
struct WBP_Cooking_Minigames_C_LinkToMinigameComponent final
{
public:
	class UMinigameComponentMasterQTE*            NewMinigame;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             DefaultAfterImageTexture;                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCrafterComponent*                      Crafter;                                           // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DCE[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UMinigameComponentBase* Comp, EMinigameState PrevState, EMinigameState NewState)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Cooking_Minigames_C_LinkToMinigameComponent) == 0x000008, "Wrong alignment on WBP_Cooking_Minigames_C_LinkToMinigameComponent");
static_assert(sizeof(WBP_Cooking_Minigames_C_LinkToMinigameComponent) == 0x000030, "Wrong size on WBP_Cooking_Minigames_C_LinkToMinigameComponent");
static_assert(offsetof(WBP_Cooking_Minigames_C_LinkToMinigameComponent, NewMinigame) == 0x000000, "Member 'WBP_Cooking_Minigames_C_LinkToMinigameComponent::NewMinigame' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_LinkToMinigameComponent, DefaultAfterImageTexture) == 0x000008, "Member 'WBP_Cooking_Minigames_C_LinkToMinigameComponent::DefaultAfterImageTexture' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_LinkToMinigameComponent, Crafter) == 0x000010, "Member 'WBP_Cooking_Minigames_C_LinkToMinigameComponent::Crafter' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_LinkToMinigameComponent, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_Cooking_Minigames_C_LinkToMinigameComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_LinkToMinigameComponent, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'WBP_Cooking_Minigames_C_LinkToMinigameComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_LinkToMinigameComponent, CallFunc_IsPlaying_ReturnValue) == 0x00002C, "Member 'WBP_Cooking_Minigames_C_LinkToMinigameComponent::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_LinkToMinigameComponent, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00002D, "Member 'WBP_Cooking_Minigames_C_LinkToMinigameComponent::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function WBP_Cooking_Minigames.WBP_Cooking_Minigames_C.OnMiniGameStateChanged
// 0x0010 (0x0010 - 0x0000)
struct WBP_Cooking_Minigames_C_OnMiniGameStateChanged final
{
public:
	class UMinigameComponentBase*                 Comp;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EMinigameState                                PrevState;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMinigameState                                NewState;                                          // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Cooking_Minigames_C_OnMiniGameStateChanged) == 0x000008, "Wrong alignment on WBP_Cooking_Minigames_C_OnMiniGameStateChanged");
static_assert(sizeof(WBP_Cooking_Minigames_C_OnMiniGameStateChanged) == 0x000010, "Wrong size on WBP_Cooking_Minigames_C_OnMiniGameStateChanged");
static_assert(offsetof(WBP_Cooking_Minigames_C_OnMiniGameStateChanged, Comp) == 0x000000, "Member 'WBP_Cooking_Minigames_C_OnMiniGameStateChanged::Comp' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_OnMiniGameStateChanged, PrevState) == 0x000008, "Member 'WBP_Cooking_Minigames_C_OnMiniGameStateChanged::PrevState' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_OnMiniGameStateChanged, NewState) == 0x000009, "Member 'WBP_Cooking_Minigames_C_OnMiniGameStateChanged::NewState' has a wrong offset!");

// Function WBP_Cooking_Minigames.WBP_Cooking_Minigames_C.SelectMinigameOnPlayingAndShow
// 0x0001 (0x0001 - 0x0000)
struct WBP_Cooking_Minigames_C_SelectMinigameOnPlayingAndShow final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Cooking_Minigames_C_SelectMinigameOnPlayingAndShow) == 0x000001, "Wrong alignment on WBP_Cooking_Minigames_C_SelectMinigameOnPlayingAndShow");
static_assert(sizeof(WBP_Cooking_Minigames_C_SelectMinigameOnPlayingAndShow) == 0x000001, "Wrong size on WBP_Cooking_Minigames_C_SelectMinigameOnPlayingAndShow");
static_assert(offsetof(WBP_Cooking_Minigames_C_SelectMinigameOnPlayingAndShow, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'WBP_Cooking_Minigames_C_SelectMinigameOnPlayingAndShow::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_Cooking_Minigames.WBP_Cooking_Minigames_C.SelectWidget
// 0x0020 (0x0020 - 0x0000)
struct WBP_Cooking_Minigames_C_SelectWidget final
{
public:
	class UWBP_MinigameQTE_Base_C*                NewWidget;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_MinigameQTE_Base_C*                K2Node_DynamicCast_AsWBP_Minigame_QTE_Base;        // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Cooking_Minigames_C_SelectWidget) == 0x000008, "Wrong alignment on WBP_Cooking_Minigames_C_SelectWidget");
static_assert(sizeof(WBP_Cooking_Minigames_C_SelectWidget) == 0x000020, "Wrong size on WBP_Cooking_Minigames_C_SelectWidget");
static_assert(offsetof(WBP_Cooking_Minigames_C_SelectWidget, NewWidget) == 0x000000, "Member 'WBP_Cooking_Minigames_C_SelectWidget::NewWidget' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_SelectWidget, CallFunc_GetActiveWidget_ReturnValue) == 0x000008, "Member 'WBP_Cooking_Minigames_C_SelectWidget::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_SelectWidget, K2Node_DynamicCast_AsWBP_Minigame_QTE_Base) == 0x000010, "Member 'WBP_Cooking_Minigames_C_SelectWidget::K2Node_DynamicCast_AsWBP_Minigame_QTE_Base' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_SelectWidget, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_Cooking_Minigames_C_SelectWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_Cooking_Minigames.WBP_Cooking_Minigames_C.UnlinkFromMinigameComponent
// 0x0014 (0x0014 - 0x0000)
struct WBP_Cooking_Minigames_C_UnlinkFromMinigameComponent final
{
public:
	TDelegate<void(class UMinigameComponentBase* Comp, EMinigameState PrevState, EMinigameState NewState)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Cooking_Minigames_C_UnlinkFromMinigameComponent) == 0x000004, "Wrong alignment on WBP_Cooking_Minigames_C_UnlinkFromMinigameComponent");
static_assert(sizeof(WBP_Cooking_Minigames_C_UnlinkFromMinigameComponent) == 0x000014, "Wrong size on WBP_Cooking_Minigames_C_UnlinkFromMinigameComponent");
static_assert(offsetof(WBP_Cooking_Minigames_C_UnlinkFromMinigameComponent, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_Cooking_Minigames_C_UnlinkFromMinigameComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Cooking_Minigames_C_UnlinkFromMinigameComponent, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_Cooking_Minigames_C_UnlinkFromMinigameComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
