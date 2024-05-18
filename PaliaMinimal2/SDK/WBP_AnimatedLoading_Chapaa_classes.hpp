#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AnimatedLoading_Chapaa

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_AnimatedLoading_Chapaa.WBP_AnimatedLoading_Chapaa_C
// 0x0008 (0x02C8 - 0x02C0)
class UWBP_AnimatedLoading_Chapaa_C final : public UUserWidget
{
public:
	class UImage*                                 Image_Loading;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_AnimatedLoading_Chapaa_C">();
	}
	static class UWBP_AnimatedLoading_Chapaa_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_AnimatedLoading_Chapaa_C>();
	}
};
static_assert(alignof(UWBP_AnimatedLoading_Chapaa_C) == 0x000008, "Wrong alignment on UWBP_AnimatedLoading_Chapaa_C");
static_assert(sizeof(UWBP_AnimatedLoading_Chapaa_C) == 0x0002C8, "Wrong size on UWBP_AnimatedLoading_Chapaa_C");
static_assert(offsetof(UWBP_AnimatedLoading_Chapaa_C, Image_Loading) == 0x0002C0, "Member 'UWBP_AnimatedLoading_Chapaa_C::Image_Loading' has a wrong offset!");

}

