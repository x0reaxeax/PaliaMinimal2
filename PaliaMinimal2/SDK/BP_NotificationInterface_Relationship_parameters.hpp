#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NotificationInterface_Relationship

#include "Basic.hpp"

#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function BP_NotificationInterface_Relationship.BP_NotificationInterface_Relationship_C.InitPrePushNotification
// 0x0010 (0x0010 - 0x0000)
struct BP_NotificationInterface_Relationship_C_InitPrePushNotification final
{
public:
	struct FVillagerRelationshipChange            Change;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(BP_NotificationInterface_Relationship_C_InitPrePushNotification) == 0x000004, "Wrong alignment on BP_NotificationInterface_Relationship_C_InitPrePushNotification");
static_assert(sizeof(BP_NotificationInterface_Relationship_C_InitPrePushNotification) == 0x000010, "Wrong size on BP_NotificationInterface_Relationship_C_InitPrePushNotification");
static_assert(offsetof(BP_NotificationInterface_Relationship_C_InitPrePushNotification, Change) == 0x000000, "Member 'BP_NotificationInterface_Relationship_C_InitPrePushNotification::Change' has a wrong offset!");

}
