#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PregameHUD_PF

#include "Basic.hpp"

#include "WBP_PregameHUD_PF_classes.hpp"
#include "WBP_PregameHUD_PF_parameters.hpp"


namespace SDK
{

// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.DisplayCharacterCreationMatchmaking
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_PregameHUD_PF_C::DisplayCharacterCreationMatchmaking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PregameHUD_PF_C", "DisplayCharacterCreationMatchmaking");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.DisplayMatchmakingQueueActive
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bActive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PregameHUD_PF_C::DisplayMatchmakingQueueActive(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PregameHUD_PF_C", "DisplayMatchmakingQueueActive");

	Params::WBP_PregameHUD_PF_C_DisplayMatchmakingQueueActive Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.DisplayMatchmakingQueueNumber
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Number                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PregameHUD_PF_C::DisplayMatchmakingQueueNumber(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PregameHUD_PF_C", "DisplayMatchmakingQueueNumber");

	Params::WBP_PregameHUD_PF_C_DisplayMatchmakingQueueNumber Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.ExecuteUbergraph_WBP_PregameHUD_PF
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS6UI_InputMode                  CallFunc_CreateInputMode_UIOnly_ReturnValue            (NoDestructor)
// EVALUI_LoginState                       K2Node_Event_NewState_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class US6UI_StateViewModel*             CallFunc_GetViewModel_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_IsClosed_Variable                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_bActive                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EVALUI_CharacterCreationState           K2Node_Event_NewState_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EVALUI_LobbyState                       K2Node_Event_NewState                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Has_Been_Initd_Variable                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVALUI_PregameUIManager*          K2Node_Event_Owner                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   K2Node_Event_Number                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PregameUIManager_C*          K2Node_DynamicCast_AsWBP_Pregame_UIManager             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PregameHUD_PF_C::ExecuteUbergraph_WBP_PregameHUD_PF(int32 EntryPoint, const struct FS6UI_InputMode& CallFunc_CreateInputMode_UIOnly_ReturnValue, EVALUI_LoginState K2Node_Event_NewState_2, class US6UI_StateViewModel* CallFunc_GetViewModel_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_bActive, EVALUI_CharacterCreationState K2Node_Event_NewState_1, bool K2Node_SwitchEnum_CmpSuccess_1, EVALUI_LobbyState K2Node_Event_NewState, bool Temp_bool_Has_Been_Initd_Variable, class UVALUI_PregameUIManager* K2Node_Event_Owner, int32 K2Node_Event_Number, class UWBP_PregameUIManager_C* K2Node_DynamicCast_AsWBP_Pregame_UIManager, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PregameHUD_PF_C", "ExecuteUbergraph_WBP_PregameHUD_PF");

	Params::WBP_PregameHUD_PF_C_ExecuteUbergraph_WBP_PregameHUD_PF Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateInputMode_UIOnly_ReturnValue = std::move(CallFunc_CreateInputMode_UIOnly_ReturnValue);
	Parms.K2Node_Event_NewState_2 = K2Node_Event_NewState_2;
	Parms.CallFunc_GetViewModel_ReturnValue = CallFunc_GetViewModel_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_bActive = K2Node_Event_bActive;
	Parms.K2Node_Event_NewState_1 = K2Node_Event_NewState_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_Owner = K2Node_Event_Owner;
	Parms.K2Node_Event_Number = K2Node_Event_Number;
	Parms.K2Node_DynamicCast_AsWBP_Pregame_UIManager = K2Node_DynamicCast_AsWBP_Pregame_UIManager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.GetCharacterCreationScreen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVALUI_CharacterCreationScreenBase*ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UVALUI_CharacterCreationScreenBase* UWBP_PregameHUD_PF_C::GetCharacterCreationScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PregameHUD_PF_C", "GetCharacterCreationScreen");

	Params::WBP_PregameHUD_PF_C_GetCharacterCreationScreen Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.GetLobbyScreen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVALUI_LobbyScreenUserWidget*     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UVALUI_LobbyScreenUserWidget* UWBP_PregameHUD_PF_C::GetLobbyScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PregameHUD_PF_C", "GetLobbyScreen");

	Params::WBP_PregameHUD_PF_C_GetLobbyScreen Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.Goto Character Creation Screen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValeriaCharacter*                CallFunc_GetCharacter_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetDefaultCameraActor_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACameraActor*                     K2Node_DynamicCast_AsCamera_Actor                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Temp_name_Variable                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Temp_name_Variable_1                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetCameraActorWithTag_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACameraActor*                     K2Node_DynamicCast_AsCamera_Actor_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetCameraActorWithTag_ReturnValue_1           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACameraActor*                     K2Node_DynamicCast_AsCamera_Actor_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PregameHUD_PF_C::Goto_Character_Creation_Screen(class AValeriaCharacter* CallFunc_GetCharacter_ReturnValue, class AActor* CallFunc_GetDefaultCameraActor_ReturnValue, class ACameraActor* K2Node_DynamicCast_AsCamera_Actor, bool K2Node_DynamicCast_bSuccess, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class AActor* CallFunc_GetCameraActorWithTag_ReturnValue, class ACameraActor* K2Node_DynamicCast_AsCamera_Actor_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetCameraActorWithTag_ReturnValue_1, class ACameraActor* K2Node_DynamicCast_AsCamera_Actor_2, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PregameHUD_PF_C", "Goto Character Creation Screen");

	Params::WBP_PregameHUD_PF_C_Goto_Character_Creation_Screen Parms{};

	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetDefaultCameraActor_ReturnValue = CallFunc_GetDefaultCameraActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Actor = K2Node_DynamicCast_AsCamera_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_GetCameraActorWithTag_ReturnValue = CallFunc_GetCameraActorWithTag_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Actor_1 = K2Node_DynamicCast_AsCamera_Actor_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCameraActorWithTag_ReturnValue_1 = CallFunc_GetCameraActorWithTag_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCamera_Actor_2 = K2Node_DynamicCast_AsCamera_Actor_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.GotoCharacterLobby
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVALDTOS_MetaCharacterFormat     CallFunc_GetCachedCharacterAtIndex_Checked_OutCharacter()
// TArray<struct FVALDTOS_MetaCharacterFormat>K2Node_MakeArray_Array                                 (ConstParm, ReferenceParm)

void UWBP_PregameHUD_PF_C::GotoCharacterLobby(const struct FVALDTOS_MetaCharacterFormat& CallFunc_GetCachedCharacterAtIndex_Checked_OutCharacter, TArray<struct FVALDTOS_MetaCharacterFormat>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PregameHUD_PF_C", "GotoCharacterLobby");

	Params::WBP_PregameHUD_PF_C_GotoCharacterLobby Parms{};

	Parms.CallFunc_GetCachedCharacterAtIndex_Checked_OutCharacter = std::move(CallFunc_GetCachedCharacterAtIndex_Checked_OutCharacter);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.HandleOnCharacterCreationStateChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EVALUI_CharacterCreationState           NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PregameHUD_PF_C::HandleOnCharacterCreationStateChanged(EVALUI_CharacterCreationState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PregameHUD_PF_C", "HandleOnCharacterCreationStateChanged");

	Params::WBP_PregameHUD_PF_C_HandleOnCharacterCreationStateChanged Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.HandleOnLobbyStateChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EVALUI_LobbyState                       NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PregameHUD_PF_C::HandleOnLobbyStateChanged(EVALUI_LobbyState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PregameHUD_PF_C", "HandleOnLobbyStateChanged");

	Params::WBP_PregameHUD_PF_C_HandleOnLobbyStateChanged Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.HandleOnLoginStateChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EVALUI_LoginState                       NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PregameHUD_PF_C::HandleOnLoginStateChanged(EVALUI_LoginState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PregameHUD_PF_C", "HandleOnLoginStateChanged");

	Params::WBP_PregameHUD_PF_C_HandleOnLoginStateChanged Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PregameHUD_PF_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PregameHUD_PF_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.PlayFadeInAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PregameHUD_PF_C::PlayFadeInAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PregameHUD_PF_C", "PlayFadeInAnimation");

	Params::WBP_PregameHUD_PF_C_PlayFadeInAnimation Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PregameHUD_PF.WBP_PregameHUD_PF_C.SetOwner
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVALUI_PregameUIManager*          Owner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PregameHUD_PF_C::SetOwner(class UVALUI_PregameUIManager* Owner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PregameHUD_PF_C", "SetOwner");

	Params::WBP_PregameHUD_PF_C_SetOwner Parms{};

	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);
}

}
