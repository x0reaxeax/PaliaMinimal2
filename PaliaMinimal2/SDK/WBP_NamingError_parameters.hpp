#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NamingError

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_NamingError.WBP_NamingError_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct WBP_NamingError_C_SetText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_NamingError_C_SetText) == 0x000008, "Wrong alignment on WBP_NamingError_C_SetText");
static_assert(sizeof(WBP_NamingError_C_SetText) == 0x000018, "Wrong size on WBP_NamingError_C_SetText");
static_assert(offsetof(WBP_NamingError_C_SetText, Text) == 0x000000, "Member 'WBP_NamingError_C_SetText::Text' has a wrong offset!");

}
