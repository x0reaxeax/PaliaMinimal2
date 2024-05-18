#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MusicManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MusicManager.BP_MusicManager_C
// 0x0030 (0x0058 - 0x0028)
class UBP_MusicManager_C final : public UMusicManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnMusUserCallback;                                 // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bSwitchingBetweenNightAndDay;                      // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_451B[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkSwitchValue*                         MusTriggerAfterDayNight;                           // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldSkipTODTransition;                           // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MusicManager(int32 EntryPoint, EAkCallbackType K2Node_CustomEvent_CallbackType, class UAkCallbackInfo* K2Node_CustomEvent_CallbackInfo, class UAkMusicSyncCallbackInfo* K2Node_DynamicCast_AsAk_Music_Sync_Callback_Info, bool K2Node_DynamicCast_bSuccess, TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_PostGlobalMusic_ReturnValue);
	void GetIsSwitchingBetweenNightAndDay(bool* Param_bSwitchingBetweenNightAndDay);
	void GetMusAfterDayNightTransition(class UAkSwitchValue** Param_MusTriggerAfterDayNight);
	void HandleUserCue(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
	void Initialize();
	void OnMusUserCallback__DelegateSignature(const class FString& UserCueName);
	void SetIsSwitchingBetweenNightAndDay(bool Param_bSwitchingBetweenNightAndDay);
	void SetMusAfterDayNightTransition(class UAkSwitchValue* Param_MusTriggerAfterDayNight);
	void SetSkipTODTransition(bool Param_ShouldSkipTODTransition);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MusicManager_C">();
	}
	static class UBP_MusicManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MusicManager_C>();
	}
};
static_assert(alignof(UBP_MusicManager_C) == 0x000008, "Wrong alignment on UBP_MusicManager_C");
static_assert(sizeof(UBP_MusicManager_C) == 0x000058, "Wrong size on UBP_MusicManager_C");
static_assert(offsetof(UBP_MusicManager_C, UberGraphFrame) == 0x000028, "Member 'UBP_MusicManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_MusicManager_C, OnMusUserCallback) == 0x000030, "Member 'UBP_MusicManager_C::OnMusUserCallback' has a wrong offset!");
static_assert(offsetof(UBP_MusicManager_C, bSwitchingBetweenNightAndDay) == 0x000040, "Member 'UBP_MusicManager_C::bSwitchingBetweenNightAndDay' has a wrong offset!");
static_assert(offsetof(UBP_MusicManager_C, MusTriggerAfterDayNight) == 0x000048, "Member 'UBP_MusicManager_C::MusTriggerAfterDayNight' has a wrong offset!");
static_assert(offsetof(UBP_MusicManager_C, ShouldSkipTODTransition) == 0x000050, "Member 'UBP_MusicManager_C::ShouldSkipTODTransition' has a wrong offset!");

}
