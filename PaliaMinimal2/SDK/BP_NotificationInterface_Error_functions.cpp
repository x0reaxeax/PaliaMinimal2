#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NotificationInterface_Error

#include "Basic.hpp"

#include "BP_NotificationInterface_Error_classes.hpp"
#include "BP_NotificationInterface_Error_parameters.hpp"


namespace SDK
{

// Function BP_NotificationInterface_Error.BP_NotificationInterface_Error_C.InitPrePushNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Message                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void IBP_NotificationInterface_Error_C::InitPrePushNotification(class FText Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NotificationInterface_Error_C", "InitPrePushNotification");

	Params::BP_NotificationInterface_Error_C_InitPrePushNotification Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);
}

}

