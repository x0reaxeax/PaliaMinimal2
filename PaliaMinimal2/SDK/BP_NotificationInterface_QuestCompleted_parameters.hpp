#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NotificationInterface_QuestCompleted

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_NotificationInterface_QuestCompleted.BP_NotificationInterface_QuestCompleted_C.InitPrePushNotification
// 0x0008 (0x0008 - 0x0000)
struct BP_NotificationInterface_QuestCompleted_C_InitPrePushNotification final
{
public:
	const class UVAL_QuestDef*                    QuestDef;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NotificationInterface_QuestCompleted_C_InitPrePushNotification) == 0x000008, "Wrong alignment on BP_NotificationInterface_QuestCompleted_C_InitPrePushNotification");
static_assert(sizeof(BP_NotificationInterface_QuestCompleted_C_InitPrePushNotification) == 0x000008, "Wrong size on BP_NotificationInterface_QuestCompleted_C_InitPrePushNotification");
static_assert(offsetof(BP_NotificationInterface_QuestCompleted_C_InitPrePushNotification, QuestDef) == 0x000000, "Member 'BP_NotificationInterface_QuestCompleted_C_InitPrePushNotification::QuestDef' has a wrong offset!");

}

