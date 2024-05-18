#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NotificationInterface_PosNeg

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_NotificationInterface_PosNeg.BP_NotificationInterface_PosNeg_C.InitPrePushNotification
// 0x0030 (0x0030 - 0x0000)
struct BP_NotificationInterface_PosNeg_C_InitPrePushNotification final
{
public:
	class FText                                   Message;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                             Image;                                             // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Audio;                                             // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsNeg;                                       // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B06[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Amount;                                            // 0x002C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NotificationInterface_PosNeg_C_InitPrePushNotification) == 0x000008, "Wrong alignment on BP_NotificationInterface_PosNeg_C_InitPrePushNotification");
static_assert(sizeof(BP_NotificationInterface_PosNeg_C_InitPrePushNotification) == 0x000030, "Wrong size on BP_NotificationInterface_PosNeg_C_InitPrePushNotification");
static_assert(offsetof(BP_NotificationInterface_PosNeg_C_InitPrePushNotification, Message) == 0x000000, "Member 'BP_NotificationInterface_PosNeg_C_InitPrePushNotification::Message' has a wrong offset!");
static_assert(offsetof(BP_NotificationInterface_PosNeg_C_InitPrePushNotification, Image) == 0x000018, "Member 'BP_NotificationInterface_PosNeg_C_InitPrePushNotification::Image' has a wrong offset!");
static_assert(offsetof(BP_NotificationInterface_PosNeg_C_InitPrePushNotification, Audio) == 0x000020, "Member 'BP_NotificationInterface_PosNeg_C_InitPrePushNotification::Audio' has a wrong offset!");
static_assert(offsetof(BP_NotificationInterface_PosNeg_C_InitPrePushNotification, Param_IsNeg) == 0x000028, "Member 'BP_NotificationInterface_PosNeg_C_InitPrePushNotification::Param_IsNeg' has a wrong offset!");
static_assert(offsetof(BP_NotificationInterface_PosNeg_C_InitPrePushNotification, Amount) == 0x00002C, "Member 'BP_NotificationInterface_PosNeg_C_InitPrePushNotification::Amount' has a wrong offset!");

// Function BP_NotificationInterface_PosNeg.BP_NotificationInterface_PosNeg_C.SetAmount
// 0x0004 (0x0004 - 0x0000)
struct BP_NotificationInterface_PosNeg_C_SetAmount final
{
public:
	int32                                         Amount;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NotificationInterface_PosNeg_C_SetAmount) == 0x000004, "Wrong alignment on BP_NotificationInterface_PosNeg_C_SetAmount");
static_assert(sizeof(BP_NotificationInterface_PosNeg_C_SetAmount) == 0x000004, "Wrong size on BP_NotificationInterface_PosNeg_C_SetAmount");
static_assert(offsetof(BP_NotificationInterface_PosNeg_C_SetAmount, Amount) == 0x000000, "Member 'BP_NotificationInterface_PosNeg_C_SetAmount::Amount' has a wrong offset!");

// Function BP_NotificationInterface_PosNeg.BP_NotificationInterface_PosNeg_C.SetMessage
// 0x0018 (0x0018 - 0x0000)
struct BP_NotificationInterface_PosNeg_C_SetMessage final
{
public:
	class FText                                   Message;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_NotificationInterface_PosNeg_C_SetMessage) == 0x000008, "Wrong alignment on BP_NotificationInterface_PosNeg_C_SetMessage");
static_assert(sizeof(BP_NotificationInterface_PosNeg_C_SetMessage) == 0x000018, "Wrong size on BP_NotificationInterface_PosNeg_C_SetMessage");
static_assert(offsetof(BP_NotificationInterface_PosNeg_C_SetMessage, Message) == 0x000000, "Member 'BP_NotificationInterface_PosNeg_C_SetMessage::Message' has a wrong offset!");

// Function BP_NotificationInterface_PosNeg.BP_NotificationInterface_PosNeg_C.GetAmount
// 0x0004 (0x0004 - 0x0000)
struct BP_NotificationInterface_PosNeg_C_GetAmount final
{
public:
	int32                                         Amount;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NotificationInterface_PosNeg_C_GetAmount) == 0x000004, "Wrong alignment on BP_NotificationInterface_PosNeg_C_GetAmount");
static_assert(sizeof(BP_NotificationInterface_PosNeg_C_GetAmount) == 0x000004, "Wrong size on BP_NotificationInterface_PosNeg_C_GetAmount");
static_assert(offsetof(BP_NotificationInterface_PosNeg_C_GetAmount, Amount) == 0x000000, "Member 'BP_NotificationInterface_PosNeg_C_GetAmount::Amount' has a wrong offset!");

// Function BP_NotificationInterface_PosNeg.BP_NotificationInterface_PosNeg_C.GetImage
// 0x0008 (0x0008 - 0x0000)
struct BP_NotificationInterface_PosNeg_C_GetImage final
{
public:
	class UTexture2D*                             Image;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NotificationInterface_PosNeg_C_GetImage) == 0x000008, "Wrong alignment on BP_NotificationInterface_PosNeg_C_GetImage");
static_assert(sizeof(BP_NotificationInterface_PosNeg_C_GetImage) == 0x000008, "Wrong size on BP_NotificationInterface_PosNeg_C_GetImage");
static_assert(offsetof(BP_NotificationInterface_PosNeg_C_GetImage, Image) == 0x000000, "Member 'BP_NotificationInterface_PosNeg_C_GetImage::Image' has a wrong offset!");

// Function BP_NotificationInterface_PosNeg.BP_NotificationInterface_PosNeg_C.GetMessage
// 0x0018 (0x0018 - 0x0000)
struct BP_NotificationInterface_PosNeg_C_GetMessage final
{
public:
	class FText                                   Message;                                           // 0x0000(0x0018)(Parm, OutParm)
};
static_assert(alignof(BP_NotificationInterface_PosNeg_C_GetMessage) == 0x000008, "Wrong alignment on BP_NotificationInterface_PosNeg_C_GetMessage");
static_assert(sizeof(BP_NotificationInterface_PosNeg_C_GetMessage) == 0x000018, "Wrong size on BP_NotificationInterface_PosNeg_C_GetMessage");
static_assert(offsetof(BP_NotificationInterface_PosNeg_C_GetMessage, Message) == 0x000000, "Member 'BP_NotificationInterface_PosNeg_C_GetMessage::Message' has a wrong offset!");

// Function BP_NotificationInterface_PosNeg.BP_NotificationInterface_PosNeg_C.IsNeg
// 0x0001 (0x0001 - 0x0000)
struct BP_NotificationInterface_PosNeg_C_IsNeg final
{
public:
	bool                                          Param_IsNeg;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NotificationInterface_PosNeg_C_IsNeg) == 0x000001, "Wrong alignment on BP_NotificationInterface_PosNeg_C_IsNeg");
static_assert(sizeof(BP_NotificationInterface_PosNeg_C_IsNeg) == 0x000001, "Wrong size on BP_NotificationInterface_PosNeg_C_IsNeg");
static_assert(offsetof(BP_NotificationInterface_PosNeg_C_IsNeg, Param_IsNeg) == 0x000000, "Member 'BP_NotificationInterface_PosNeg_C_IsNeg::Param_IsNeg' has a wrong offset!");

}
