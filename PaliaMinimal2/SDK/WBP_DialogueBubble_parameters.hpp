#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DialogueBubble

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_DialogueBubble.WBP_DialogueBubble_C.SetDialogueText
// 0x0018 (0x0018 - 0x0000)
struct WBP_DialogueBubble_C_SetDialogueText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_DialogueBubble_C_SetDialogueText) == 0x000008, "Wrong alignment on WBP_DialogueBubble_C_SetDialogueText");
static_assert(sizeof(WBP_DialogueBubble_C_SetDialogueText) == 0x000018, "Wrong size on WBP_DialogueBubble_C_SetDialogueText");
static_assert(offsetof(WBP_DialogueBubble_C_SetDialogueText, InText) == 0x000000, "Member 'WBP_DialogueBubble_C_SetDialogueText::InText' has a wrong offset!");

}

