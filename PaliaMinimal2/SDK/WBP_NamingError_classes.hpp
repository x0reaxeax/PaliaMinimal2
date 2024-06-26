#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NamingError

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_NamingError.WBP_NamingError_C
// 0x0008 (0x02C8 - 0x02C0)
class UWBP_NamingError_C final : public UUserWidget
{
public:
	class UVALUI_TextBlock_Styled*                Text_Body;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetText(class FText Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_NamingError_C">();
	}
	static class UWBP_NamingError_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_NamingError_C>();
	}
};
static_assert(alignof(UWBP_NamingError_C) == 0x000008, "Wrong alignment on UWBP_NamingError_C");
static_assert(sizeof(UWBP_NamingError_C) == 0x0002C8, "Wrong size on UWBP_NamingError_C");
static_assert(offsetof(UWBP_NamingError_C, Text_Body) == 0x0002C0, "Member 'UWBP_NamingError_C::Text_Body' has a wrong offset!");

}

