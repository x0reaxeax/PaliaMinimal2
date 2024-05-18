#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PregameHUD_PF

#include "Basic.hpp"

#include "S6UICore_structs.hpp"
#include "ValeriaDTOs_structs.hpp"
#include "ValeriaUI_structs.hpp"


namespace SDK::Params
{

// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.DisplayMatchmakingQueueActive
// 0x0001 (0x0001 - 0x0000)
struct WBP_PregameHUD_PF_C_DisplayMatchmakingQueueActive final
{
public:
	bool                                          bActive;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PregameHUD_PF_C_DisplayMatchmakingQueueActive) == 0x000001, "Wrong alignment on WBP_PregameHUD_PF_C_DisplayMatchmakingQueueActive");
static_assert(sizeof(WBP_PregameHUD_PF_C_DisplayMatchmakingQueueActive) == 0x000001, "Wrong size on WBP_PregameHUD_PF_C_DisplayMatchmakingQueueActive");
static_assert(offsetof(WBP_PregameHUD_PF_C_DisplayMatchmakingQueueActive, bActive) == 0x000000, "Member 'WBP_PregameHUD_PF_C_DisplayMatchmakingQueueActive::bActive' has a wrong offset!");

// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.DisplayMatchmakingQueueNumber
// 0x0004 (0x0004 - 0x0000)
struct WBP_PregameHUD_PF_C_DisplayMatchmakingQueueNumber final
{
public:
	int32                                         Number;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PregameHUD_PF_C_DisplayMatchmakingQueueNumber) == 0x000004, "Wrong alignment on WBP_PregameHUD_PF_C_DisplayMatchmakingQueueNumber");
static_assert(sizeof(WBP_PregameHUD_PF_C_DisplayMatchmakingQueueNumber) == 0x000004, "Wrong size on WBP_PregameHUD_PF_C_DisplayMatchmakingQueueNumber");
static_assert(offsetof(WBP_PregameHUD_PF_C_DisplayMatchmakingQueueNumber, Number) == 0x000000, "Member 'WBP_PregameHUD_PF_C_DisplayMatchmakingQueueNumber::Number' has a wrong offset!");

// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.ExecuteUbergraph_WBP_PregameHUD_PF
// 0x0048 (0x0048 - 0x0000)
struct WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS6UI_InputMode                        CallFunc_CreateInputMode_UIOnly_ReturnValue;       // 0x0004(0x0010)(NoDestructor)
	EVALUI_LoginState                             K2Node_Event_NewState_2;                           // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DD2[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class US6UI_StateViewModel*                   CallFunc_GetViewModel_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bActive;                              // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVALUI_CharacterCreationState                 K2Node_Event_NewState_1;                           // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVALUI_LobbyState                             K2Node_Event_NewState;                             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DD3[0x1];                                     // 0x0027(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UVALUI_PregameUIManager*                K2Node_Event_Owner;                                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_Number;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DD4[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PregameUIManager_C*                K2Node_DynamicCast_AsWBP_Pregame_UIManager;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF) == 0x000008, "Wrong alignment on WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF");
static_assert(sizeof(WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF) == 0x000048, "Wrong size on WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF");
static_assert(offsetof(WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF, EntryPoint) == 0x000000, "Member 'WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF, CallFunc_CreateInputMode_UIOnly_ReturnValue) == 0x000004, "Member 'WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF::CallFunc_CreateInputMode_UIOnly_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF, K2Node_Event_NewState_2) == 0x000014, "Member 'WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF::K2Node_Event_NewState_2' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF, CallFunc_GetViewModel_ReturnValue) == 0x000018, "Member 'WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF::CallFunc_GetViewModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF, Temp_bool_IsClosed_Variable) == 0x000021, "Member 'WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF, K2Node_Event_bActive) == 0x000022, "Member 'WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF::K2Node_Event_bActive' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF, K2Node_Event_NewState_1) == 0x000023, "Member 'WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF::K2Node_Event_NewState_1' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF, K2Node_SwitchEnum_CmpSuccess_1) == 0x000024, "Member 'WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF, K2Node_Event_NewState) == 0x000025, "Member 'WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF::K2Node_Event_NewState' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF, Temp_bool_Has_Been_Initd_Variable) == 0x000026, "Member 'WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF, K2Node_Event_Owner) == 0x000028, "Member 'WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF::K2Node_Event_Owner' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF, K2Node_Event_Number) == 0x000030, "Member 'WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF::K2Node_Event_Number' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF, K2Node_DynamicCast_AsWBP_Pregame_UIManager) == 0x000038, "Member 'WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF::K2Node_DynamicCast_AsWBP_Pregame_UIManager' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.GetCharacterCreationScreen
// 0x0008 (0x0008 - 0x0000)
struct WBP_PregameHUD_PF_C_GetCharacterCreationScreen final
{
public:
	class UVALUI_CharacterCreationScreenBase*     ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PregameHUD_PF_C_GetCharacterCreationScreen) == 0x000008, "Wrong alignment on WBP_PregameHUD_PF_C_GetCharacterCreationScreen");
static_assert(sizeof(WBP_PregameHUD_PF_C_GetCharacterCreationScreen) == 0x000008, "Wrong size on WBP_PregameHUD_PF_C_GetCharacterCreationScreen");
static_assert(offsetof(WBP_PregameHUD_PF_C_GetCharacterCreationScreen, ReturnValue) == 0x000000, "Member 'WBP_PregameHUD_PF_C_GetCharacterCreationScreen::ReturnValue' has a wrong offset!");

// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.GetLobbyScreen
// 0x0008 (0x0008 - 0x0000)
struct WBP_PregameHUD_PF_C_GetLobbyScreen final
{
public:
	class UVALUI_LobbyScreenUserWidget*           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PregameHUD_PF_C_GetLobbyScreen) == 0x000008, "Wrong alignment on WBP_PregameHUD_PF_C_GetLobbyScreen");
static_assert(sizeof(WBP_PregameHUD_PF_C_GetLobbyScreen) == 0x000008, "Wrong size on WBP_PregameHUD_PF_C_GetLobbyScreen");
static_assert(offsetof(WBP_PregameHUD_PF_C_GetLobbyScreen, ReturnValue) == 0x000000, "Member 'WBP_PregameHUD_PF_C_GetLobbyScreen::ReturnValue' has a wrong offset!");

// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.Goto Character Creation Screen
// 0x0060 (0x0060 - 0x0000)
struct WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen final
{
public:
	class AValeriaCharacter*                      CallFunc_GetCharacter_ReturnValue;                 // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetDefaultCameraActor_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           K2Node_DynamicCast_AsCamera_Actor;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DD5[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x001C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0024(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DD6[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetCameraActorWithTag_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           K2Node_DynamicCast_AsCamera_Actor_1;               // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DD7[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetCameraActorWithTag_ReturnValue_1;      // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           K2Node_DynamicCast_AsCamera_Actor_2;               // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen) == 0x000008, "Wrong alignment on WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen");
static_assert(sizeof(WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen) == 0x000060, "Wrong size on WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen");
static_assert(offsetof(WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen, CallFunc_GetCharacter_ReturnValue) == 0x000000, "Member 'WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen, CallFunc_GetDefaultCameraActor_ReturnValue) == 0x000008, "Member 'WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen::CallFunc_GetDefaultCameraActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen, K2Node_DynamicCast_AsCamera_Actor) == 0x000010, "Member 'WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen::K2Node_DynamicCast_AsCamera_Actor' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen, Temp_name_Variable) == 0x00001C, "Member 'WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen, Temp_name_Variable_1) == 0x000024, "Member 'WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen, CallFunc_GetCameraActorWithTag_ReturnValue) == 0x000030, "Member 'WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen::CallFunc_GetCameraActorWithTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen, K2Node_DynamicCast_AsCamera_Actor_1) == 0x000038, "Member 'WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen::K2Node_DynamicCast_AsCamera_Actor_1' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen, CallFunc_GetCameraActorWithTag_ReturnValue_1) == 0x000048, "Member 'WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen::CallFunc_GetCameraActorWithTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen, K2Node_DynamicCast_AsCamera_Actor_2) == 0x000050, "Member 'WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen::K2Node_DynamicCast_AsCamera_Actor_2' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen, K2Node_DynamicCast_bSuccess_2) == 0x000058, "Member 'WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.GotoCharacterLobby
// 0x0788 (0x0788 - 0x0000)
struct WBP_PregameHUD_PF_C_GotoCharacterLobby final
{
public:
	struct FVALDTOS_MetaCharacterFormat           CallFunc_GetCachedCharacterAtIndex_Checked_OutCharacter; // 0x0000(0x0778)()
	TArray<struct FVALDTOS_MetaCharacterFormat>   K2Node_MakeArray_Array;                            // 0x0778(0x0010)(ConstParm, ReferenceParm)
};
static_assert(alignof(WBP_PregameHUD_PF_C_GotoCharacterLobby) == 0x000008, "Wrong alignment on WBP_PregameHUD_PF_C_GotoCharacterLobby");
static_assert(sizeof(WBP_PregameHUD_PF_C_GotoCharacterLobby) == 0x000788, "Wrong size on WBP_PregameHUD_PF_C_GotoCharacterLobby");
static_assert(offsetof(WBP_PregameHUD_PF_C_GotoCharacterLobby, CallFunc_GetCachedCharacterAtIndex_Checked_OutCharacter) == 0x000000, "Member 'WBP_PregameHUD_PF_C_GotoCharacterLobby::CallFunc_GetCachedCharacterAtIndex_Checked_OutCharacter' has a wrong offset!");
static_assert(offsetof(WBP_PregameHUD_PF_C_GotoCharacterLobby, K2Node_MakeArray_Array) == 0x000778, "Member 'WBP_PregameHUD_PF_C_GotoCharacterLobby::K2Node_MakeArray_Array' has a wrong offset!");

// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.HandleOnCharacterCreationStateChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_PregameHUD_PF_C_HandleOnCharacterCreationStateChanged final
{
public:
	EVALUI_CharacterCreationState                 NewState;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PregameHUD_PF_C_HandleOnCharacterCreationStateChanged) == 0x000001, "Wrong alignment on WBP_PregameHUD_PF_C_HandleOnCharacterCreationStateChanged");
static_assert(sizeof(WBP_PregameHUD_PF_C_HandleOnCharacterCreationStateChanged) == 0x000001, "Wrong size on WBP_PregameHUD_PF_C_HandleOnCharacterCreationStateChanged");
static_assert(offsetof(WBP_PregameHUD_PF_C_HandleOnCharacterCreationStateChanged, NewState) == 0x000000, "Member 'WBP_PregameHUD_PF_C_HandleOnCharacterCreationStateChanged::NewState' has a wrong offset!");

// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.HandleOnLobbyStateChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_PregameHUD_PF_C_HandleOnLobbyStateChanged final
{
public:
	EVALUI_LobbyState                             NewState;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PregameHUD_PF_C_HandleOnLobbyStateChanged) == 0x000001, "Wrong alignment on WBP_PregameHUD_PF_C_HandleOnLobbyStateChanged");
static_assert(sizeof(WBP_PregameHUD_PF_C_HandleOnLobbyStateChanged) == 0x000001, "Wrong size on WBP_PregameHUD_PF_C_HandleOnLobbyStateChanged");
static_assert(offsetof(WBP_PregameHUD_PF_C_HandleOnLobbyStateChanged, NewState) == 0x000000, "Member 'WBP_PregameHUD_PF_C_HandleOnLobbyStateChanged::NewState' has a wrong offset!");

// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.HandleOnLoginStateChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_PregameHUD_PF_C_HandleOnLoginStateChanged final
{
public:
	EVALUI_LoginState                             NewState;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PregameHUD_PF_C_HandleOnLoginStateChanged) == 0x000001, "Wrong alignment on WBP_PregameHUD_PF_C_HandleOnLoginStateChanged");
static_assert(sizeof(WBP_PregameHUD_PF_C_HandleOnLoginStateChanged) == 0x000001, "Wrong size on WBP_PregameHUD_PF_C_HandleOnLoginStateChanged");
static_assert(offsetof(WBP_PregameHUD_PF_C_HandleOnLoginStateChanged, NewState) == 0x000000, "Member 'WBP_PregameHUD_PF_C_HandleOnLoginStateChanged::NewState' has a wrong offset!");

// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.PlayFadeInAnimation
// 0x0008 (0x0008 - 0x0000)
struct WBP_PregameHUD_PF_C_PlayFadeInAnimation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PregameHUD_PF_C_PlayFadeInAnimation) == 0x000008, "Wrong alignment on WBP_PregameHUD_PF_C_PlayFadeInAnimation");
static_assert(sizeof(WBP_PregameHUD_PF_C_PlayFadeInAnimation) == 0x000008, "Wrong size on WBP_PregameHUD_PF_C_PlayFadeInAnimation");
static_assert(offsetof(WBP_PregameHUD_PF_C_PlayFadeInAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'WBP_PregameHUD_PF_C_PlayFadeInAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.SetOwner
// 0x0008 (0x0008 - 0x0000)
struct WBP_PregameHUD_PF_C_SetOwner final
{
public:
	class UVALUI_PregameUIManager*                Owner;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PregameHUD_PF_C_SetOwner) == 0x000008, "Wrong alignment on WBP_PregameHUD_PF_C_SetOwner");
static_assert(sizeof(WBP_PregameHUD_PF_C_SetOwner) == 0x000008, "Wrong size on WBP_PregameHUD_PF_C_SetOwner");
static_assert(offsetof(WBP_PregameHUD_PF_C_SetOwner, Owner) == 0x000000, "Member 'WBP_PregameHUD_PF_C_SetOwner::Owner' has a wrong offset!");

}
