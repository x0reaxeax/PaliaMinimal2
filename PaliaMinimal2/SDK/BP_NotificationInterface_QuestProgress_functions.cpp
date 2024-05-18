#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NotificationInterface_QuestProgress

#include "Basic.hpp"

#include "BP_NotificationInterface_QuestProgress_classes.hpp"
#include "BP_NotificationInterface_QuestProgress_parameters.hpp"


namespace SDK
{

// Function BP_NotificationInterface_QuestProgress.BP_NotificationInterface_QuestProgress_C.GetTextBlockQuestObjective
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVALUI_TextBlock_Styled*          TextBlockQuestObjective                                (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBP_NotificationInterface_QuestProgress_C::GetTextBlockQuestObjective(class UVALUI_TextBlock_Styled** TextBlockQuestObjective)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NotificationInterface_QuestProgress_C", "GetTextBlockQuestObjective");

	Params::BP_NotificationInterface_QuestProgress_C_GetTextBlockQuestObjective Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TextBlockQuestObjective != nullptr)
		*TextBlockQuestObjective = Parms.TextBlockQuestObjective;
}


// Function BP_NotificationInterface_QuestProgress.BP_NotificationInterface_QuestProgress_C.InitAcceptedPostPushNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVAL_QuestDef*                    QuestDef                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_NotificationInterface_QuestProgress_C::InitAcceptedPostPushNotification(class UVAL_QuestDef* QuestDef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NotificationInterface_QuestProgress_C", "InitAcceptedPostPushNotification");

	Params::BP_NotificationInterface_QuestProgress_C_InitAcceptedPostPushNotification Parms{};

	Parms.QuestDef = QuestDef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NotificationInterface_QuestProgress.BP_NotificationInterface_QuestProgress_C.InitPrePushNotification
// (Public, BlueprintCallable, BlueprintEvent)

void IBP_NotificationInterface_QuestProgress_C::InitPrePushNotification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NotificationInterface_QuestProgress_C", "InitPrePushNotification");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NotificationInterface_QuestProgress.BP_NotificationInterface_QuestProgress_C.InitStepPostPushNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVAL_QuestDef*                    QuestDef                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   QuestStepNum                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_NotificationInterface_QuestProgress_C::InitStepPostPushNotification(class UVAL_QuestDef* QuestDef, int32 QuestStepNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NotificationInterface_QuestProgress_C", "InitStepPostPushNotification");

	Params::BP_NotificationInterface_QuestProgress_C_InitStepPostPushNotification Parms{};

	Parms.QuestDef = QuestDef;
	Parms.QuestStepNum = QuestStepNum;

	UObject::ProcessEvent(Func, &Parms);
}

}
