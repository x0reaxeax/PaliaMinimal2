#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Buff

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Buff.WBP_Buff_C.SetIcon
// 0x0008 (0x0008 - 0x0000)
struct WBP_Buff_C_SetIcon final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Buff_C_SetIcon) == 0x000008, "Wrong alignment on WBP_Buff_C_SetIcon");
static_assert(sizeof(WBP_Buff_C_SetIcon) == 0x000008, "Wrong size on WBP_Buff_C_SetIcon");
static_assert(offsetof(WBP_Buff_C_SetIcon, Texture) == 0x000000, "Member 'WBP_Buff_C_SetIcon::Texture' has a wrong offset!");

// Function WBP_Buff.WBP_Buff_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct WBP_Buff_C_SetText final
{
public:
	class FText                                   BuffName;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Buff_C_SetText) == 0x000008, "Wrong alignment on WBP_Buff_C_SetText");
static_assert(sizeof(WBP_Buff_C_SetText) == 0x000018, "Wrong size on WBP_Buff_C_SetText");
static_assert(offsetof(WBP_Buff_C_SetText, BuffName) == 0x000000, "Member 'WBP_Buff_C_SetText::BuffName' has a wrong offset!");

}
