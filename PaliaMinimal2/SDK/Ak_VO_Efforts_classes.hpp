#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ak_VO_Efforts

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "E_VoiceEffortEvent_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ak_VO_Efforts.Ak_VO_Efforts_C
// 0x0010 (0x0048 - 0x0038)
class UAk_VO_Efforts_C final : public UAnimNotify
{
public:
	E_VoiceEffortEvent                            VoiceEvent;                                        // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46E7[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVoiceSet_C*                            DummyData;                                         // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	class FString GetNotifyName(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue) const;
	class UAkComponent* PrepVoAkComponent(class USceneComponent* AttachToComponent, class UAkComponent* AkComp, class UVAL_CharacterCustomizationComponent* CustomizationComp, int32 Temp_int_Array_Index_Variable, bool CallFunc_AkGetComponent_ComponentCreated, class UAkComponent* CallFunc_AkGetComponent_AkComponent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAkRtpc* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVAL_CharacterCustomizationComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue) const;
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UAkAudioEvent* VoiceSetEvent, class UAkAudioEvent* CallFunc_GetVoiceEvent_Value, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, class UBP_CharacterCustomizationComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UVAL_VoiceSet* CallFunc_GetVoiceSet_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UVoiceSet_C* K2Node_DynamicCast_AsVoice_Set, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class UAkAudioEvent* CallFunc_GetVoiceEvent_Value_1, bool CallFunc_IsValid_ReturnValue_2, class UAkComponent* CallFunc_PrepVoAkComponent_ReturnValue, int32 CallFunc_AkEventComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ak_VO_Efforts_C">();
	}
	static class UAk_VO_Efforts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAk_VO_Efforts_C>();
	}
};
static_assert(alignof(UAk_VO_Efforts_C) == 0x000008, "Wrong alignment on UAk_VO_Efforts_C");
static_assert(sizeof(UAk_VO_Efforts_C) == 0x000048, "Wrong size on UAk_VO_Efforts_C");
static_assert(offsetof(UAk_VO_Efforts_C, VoiceEvent) == 0x000038, "Member 'UAk_VO_Efforts_C::VoiceEvent' has a wrong offset!");
static_assert(offsetof(UAk_VO_Efforts_C, DummyData) == 0x000040, "Member 'UAk_VO_Efforts_C::DummyData' has a wrong offset!");

}
