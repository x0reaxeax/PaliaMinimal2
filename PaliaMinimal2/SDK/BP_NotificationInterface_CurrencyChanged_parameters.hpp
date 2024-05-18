#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NotificationInterface_CurrencyChanged

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_NotificationInterface_CurrencyChanged.BP_NotificationInterface_CurrencyChanged_C.InitPrePushNotification
// 0x0010 (0x0010 - 0x0000)
struct BP_NotificationInterface_CurrencyChanged_C_InitPrePushNotification final
{
public:
	class UCurrencyConfig*                        Config;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NotificationInterface_CurrencyChanged_C_InitPrePushNotification) == 0x000008, "Wrong alignment on BP_NotificationInterface_CurrencyChanged_C_InitPrePushNotification");
static_assert(sizeof(BP_NotificationInterface_CurrencyChanged_C_InitPrePushNotification) == 0x000010, "Wrong size on BP_NotificationInterface_CurrencyChanged_C_InitPrePushNotification");
static_assert(offsetof(BP_NotificationInterface_CurrencyChanged_C_InitPrePushNotification, Config) == 0x000000, "Member 'BP_NotificationInterface_CurrencyChanged_C_InitPrePushNotification::Config' has a wrong offset!");
static_assert(offsetof(BP_NotificationInterface_CurrencyChanged_C_InitPrePushNotification, Amount) == 0x000008, "Member 'BP_NotificationInterface_CurrencyChanged_C_InitPrePushNotification::Amount' has a wrong offset!");

}

