#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RadioSlider_GenericSlider

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_RadioSlider_GenericSlider.WBP_RadioSlider_GenericSlider_C.SetIcon
// 0x0008 (0x0008 - 0x0000)
struct WBP_RadioSlider_GenericSlider_C_SetIcon final
{
public:
	class UTexture2D*                             Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RadioSlider_GenericSlider_C_SetIcon) == 0x000008, "Wrong alignment on WBP_RadioSlider_GenericSlider_C_SetIcon");
static_assert(sizeof(WBP_RadioSlider_GenericSlider_C_SetIcon) == 0x000008, "Wrong size on WBP_RadioSlider_GenericSlider_C_SetIcon");
static_assert(offsetof(WBP_RadioSlider_GenericSlider_C_SetIcon, Icon) == 0x000000, "Member 'WBP_RadioSlider_GenericSlider_C_SetIcon::Icon' has a wrong offset!");

// Function WBP_RadioSlider_GenericSlider.WBP_RadioSlider_GenericSlider_C.SetWidth
// 0x0010 (0x0010 - 0x0000)
struct WBP_RadioSlider_GenericSlider_C_SetWidth final
{
public:
	double                                        Width;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RadioSlider_GenericSlider_C_SetWidth) == 0x000008, "Wrong alignment on WBP_RadioSlider_GenericSlider_C_SetWidth");
static_assert(sizeof(WBP_RadioSlider_GenericSlider_C_SetWidth) == 0x000010, "Wrong size on WBP_RadioSlider_GenericSlider_C_SetWidth");
static_assert(offsetof(WBP_RadioSlider_GenericSlider_C_SetWidth, Width) == 0x000000, "Member 'WBP_RadioSlider_GenericSlider_C_SetWidth::Width' has a wrong offset!");
static_assert(offsetof(WBP_RadioSlider_GenericSlider_C_SetWidth, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast) == 0x000008, "Member 'WBP_RadioSlider_GenericSlider_C_SetWidth::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast' has a wrong offset!");

}

