#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ak_OneShot_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Ak_OneShot_Base.Ak_OneShot_Base_C.GetNotifyName
// 0x0020 (0x0020 - 0x0000)
struct Ak_OneShot_Base_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Ak_OneShot_Base_C_GetNotifyName) == 0x000008, "Wrong alignment on Ak_OneShot_Base_C_GetNotifyName");
static_assert(sizeof(Ak_OneShot_Base_C_GetNotifyName) == 0x000020, "Wrong size on Ak_OneShot_Base_C_GetNotifyName");
static_assert(offsetof(Ak_OneShot_Base_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'Ak_OneShot_Base_C_GetNotifyName::ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_GetNotifyName, CallFunc_GetDisplayName_ReturnValue) == 0x000010, "Member 'Ak_OneShot_Base_C_GetNotifyName::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");

// Function Ak_OneShot_Base.Ak_OneShot_Base_C.PlayAudio
// 0x0040 (0x0040 - 0x0000)
struct Ak_OneShot_Base_C_PlayAudio final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4581[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          UsedAkEvent;                                       // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Owner;                                             // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           Ak;                                                // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AkGetComponent_ComponentCreated;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4582[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_AkGetComponent_AkComponent;               // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventComponent_ReturnValue;             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ak_OneShot_Base_C_PlayAudio) == 0x000008, "Wrong alignment on Ak_OneShot_Base_C_PlayAudio");
static_assert(sizeof(Ak_OneShot_Base_C_PlayAudio) == 0x000040, "Wrong size on Ak_OneShot_Base_C_PlayAudio");
static_assert(offsetof(Ak_OneShot_Base_C_PlayAudio, MeshComp) == 0x000000, "Member 'Ak_OneShot_Base_C_PlayAudio::MeshComp' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_PlayAudio, Success) == 0x000008, "Member 'Ak_OneShot_Base_C_PlayAudio::Success' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_PlayAudio, UsedAkEvent) == 0x000010, "Member 'Ak_OneShot_Base_C_PlayAudio::UsedAkEvent' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_PlayAudio, Owner) == 0x000018, "Member 'Ak_OneShot_Base_C_PlayAudio::Owner' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_PlayAudio, Ak) == 0x000020, "Member 'Ak_OneShot_Base_C_PlayAudio::Ak' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_PlayAudio, CallFunc_AkGetComponent_ComponentCreated) == 0x000028, "Member 'Ak_OneShot_Base_C_PlayAudio::CallFunc_AkGetComponent_ComponentCreated' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_PlayAudio, CallFunc_AkGetComponent_AkComponent) == 0x000030, "Member 'Ak_OneShot_Base_C_PlayAudio::CallFunc_AkGetComponent_AkComponent' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_PlayAudio, CallFunc_AkEventComponent_ReturnValue) == 0x000038, "Member 'Ak_OneShot_Base_C_PlayAudio::CallFunc_AkEventComponent_ReturnValue' has a wrong offset!");

// Function Ak_OneShot_Base.Ak_OneShot_Base_C.Received_Notify
// 0x0058 (0x0058 - 0x0000)
struct Ak_OneShot_Base_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4583[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           Ak;                                                // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayAudio_Success;                        // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShouldPlay_Should;                        // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ak_OneShot_Base_C_Received_Notify) == 0x000008, "Wrong alignment on Ak_OneShot_Base_C_Received_Notify");
static_assert(sizeof(Ak_OneShot_Base_C_Received_Notify) == 0x000058, "Wrong size on Ak_OneShot_Base_C_Received_Notify");
static_assert(offsetof(Ak_OneShot_Base_C_Received_Notify, MeshComp) == 0x000000, "Member 'Ak_OneShot_Base_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_Received_Notify, Animation) == 0x000008, "Member 'Ak_OneShot_Base_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_Received_Notify, EventReference) == 0x000010, "Member 'Ak_OneShot_Base_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_Received_Notify, ReturnValue) == 0x000040, "Member 'Ak_OneShot_Base_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_Received_Notify, Ak) == 0x000048, "Member 'Ak_OneShot_Base_C_Received_Notify::Ak' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_Received_Notify, CallFunc_PlayAudio_Success) == 0x000050, "Member 'Ak_OneShot_Base_C_Received_Notify::CallFunc_PlayAudio_Success' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_Received_Notify, CallFunc_ShouldPlay_Should) == 0x000051, "Member 'Ak_OneShot_Base_C_Received_Notify::CallFunc_ShouldPlay_Should' has a wrong offset!");

// Function Ak_OneShot_Base.Ak_OneShot_Base_C.ShouldPlay
// 0x0038 (0x0038 - 0x0000)
struct Ak_OneShot_Base_C_ShouldPlay final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Should;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4584[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      K2Node_DynamicCast_AsValeria_Character;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4585[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ak_OneShot_Base_C_ShouldPlay) == 0x000008, "Wrong alignment on Ak_OneShot_Base_C_ShouldPlay");
static_assert(sizeof(Ak_OneShot_Base_C_ShouldPlay) == 0x000038, "Wrong size on Ak_OneShot_Base_C_ShouldPlay");
static_assert(offsetof(Ak_OneShot_Base_C_ShouldPlay, MeshComp) == 0x000000, "Member 'Ak_OneShot_Base_C_ShouldPlay::MeshComp' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_ShouldPlay, Should) == 0x000008, "Member 'Ak_OneShot_Base_C_ShouldPlay::Should' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_ShouldPlay, CallFunc_IsServer_ReturnValue) == 0x000009, "Member 'Ak_OneShot_Base_C_ShouldPlay::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_ShouldPlay, CallFunc_Not_PreBool_ReturnValue) == 0x00000A, "Member 'Ak_OneShot_Base_C_ShouldPlay::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_ShouldPlay, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'Ak_OneShot_Base_C_ShouldPlay::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_ShouldPlay, K2Node_DynamicCast_AsValeria_Character) == 0x000018, "Member 'Ak_OneShot_Base_C_ShouldPlay::K2Node_DynamicCast_AsValeria_Character' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_ShouldPlay, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Ak_OneShot_Base_C_ShouldPlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_ShouldPlay, CallFunc_GetGameInstance_ReturnValue) == 0x000028, "Member 'Ak_OneShot_Base_C_ShouldPlay::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_ShouldPlay, CallFunc_IsLocallyControlled_ReturnValue) == 0x000030, "Member 'Ak_OneShot_Base_C_ShouldPlay::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_ShouldPlay, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'Ak_OneShot_Base_C_ShouldPlay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_Base_C_ShouldPlay, CallFunc_IsValid_ReturnValue_1) == 0x000032, "Member 'Ak_OneShot_Base_C_ShouldPlay::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}
