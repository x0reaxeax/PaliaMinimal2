#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NotificationInterface_QuestCompleted

#include "Basic.hpp"

#include "BP_NotificationInterface_QuestCompleted_classes.hpp"
#include "BP_NotificationInterface_QuestCompleted_parameters.hpp"


namespace SDK
{

// Function BP_NotificationInterface_QuestCompleted.BP_NotificationInterface_QuestCompleted_C.InitPrePushNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVAL_QuestDef*                    QuestDef                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_NotificationInterface_QuestCompleted_C::InitPrePushNotification(class UVAL_QuestDef* QuestDef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NotificationInterface_QuestCompleted_C", "InitPrePushNotification");

	Params::BP_NotificationInterface_QuestCompleted_C_InitPrePushNotification Parms{};

	Parms.QuestDef = QuestDef;

	UObject::ProcessEvent(Func, &Parms);
}

}
