#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterRenderStudio

#include "Basic.hpp"

#include "BP_CharacterRenderStudio_classes.hpp"
#include "BP_CharacterRenderStudio_parameters.hpp"


namespace SDK
{

// Function BP_CharacterRenderStudio.BP_CharacterRenderStudio_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterRenderStudio_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterRenderStudio_C", "ReceiveTick");

	Params::BP_CharacterRenderStudio_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharacterRenderStudio.BP_CharacterRenderStudio_C.InitializeValeriaCharacterForRenderStudio
// (Event, Public, BlueprintEvent)
// Parameters:
// class AValeriaCharacter*                RenderStudioCharacter                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterRenderStudio_C::InitializeValeriaCharacterForRenderStudio(class AValeriaCharacter* RenderStudioCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterRenderStudio_C", "InitializeValeriaCharacterForRenderStudio");

	Params::BP_CharacterRenderStudio_C_InitializeValeriaCharacterForRenderStudio Parms{};

	Parms.RenderStudioCharacter = RenderStudioCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharacterRenderStudio.BP_CharacterRenderStudio_C.HandleOnCharacterRenderStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EVAL_CharacterRenderStudioState         State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterRenderStudio_C::HandleOnCharacterRenderStateChanged(EVAL_CharacterRenderStudioState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterRenderStudio_C", "HandleOnCharacterRenderStateChanged");

	Params::BP_CharacterRenderStudio_C_HandleOnCharacterRenderStateChanged Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharacterRenderStudio.BP_CharacterRenderStudio_C.ExecuteUbergraph_BP_CharacterRenderStudio
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                K2Node_Event_RenderStudioCharacter                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EVAL_CharacterRenderStudioState         K2Node_Event_State                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ValeriaCharacter_C*           K2Node_DynamicCast_AsBP_Valeria_Character              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetCharacter_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_Event_DeltaSeconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ValeriaCharacter_C*           K2Node_DynamicCast_AsBP_Valeria_Character_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterRenderStudio_C::ExecuteUbergraph_BP_CharacterRenderStudio(int32 EntryPoint, class AValeriaCharacter* K2Node_Event_RenderStudioCharacter, EVAL_CharacterRenderStudioState K2Node_Event_State, class ABP_ValeriaCharacter_C* K2Node_DynamicCast_AsBP_Valeria_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class AValeriaCharacter* CallFunc_GetCharacter_ReturnValue, float K2Node_Event_DeltaSeconds, class ABP_ValeriaCharacter_C* K2Node_DynamicCast_AsBP_Valeria_Character_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterRenderStudio_C", "ExecuteUbergraph_BP_CharacterRenderStudio");

	Params::BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_RenderStudioCharacter = K2Node_Event_RenderStudioCharacter;
	Parms.K2Node_Event_State = K2Node_Event_State;
	Parms.K2Node_DynamicCast_AsBP_Valeria_Character = K2Node_DynamicCast_AsBP_Valeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_DynamicCast_AsBP_Valeria_Character_1 = K2Node_DynamicCast_AsBP_Valeria_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);
}

}
