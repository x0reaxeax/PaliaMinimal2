#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VoiceSet

#include "Basic.hpp"

#include "E_VoiceEffortEvent_structs.hpp"


namespace SDK::Params
{

// Function VoiceSet.VoiceSet_C.GetRandomVoiceEvent
// 0x0068 (0x0068 - 0x0000)
struct VoiceSet_C_GetRandomVoiceEvent final
{
public:
	class UAkAudioEvent*                          Value;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UAkAudioEvent*>                  NonNullAudioEvents;                                // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42A8[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          CallFunc_Array_Random_OutItem;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42A9[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAkAudioEvent*>                  CallFunc_Map_Values_Values;                        // 0x0038(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42AA[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42AB[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VoiceSet_C_GetRandomVoiceEvent) == 0x000008, "Wrong alignment on VoiceSet_C_GetRandomVoiceEvent");
static_assert(sizeof(VoiceSet_C_GetRandomVoiceEvent) == 0x000068, "Wrong size on VoiceSet_C_GetRandomVoiceEvent");
static_assert(offsetof(VoiceSet_C_GetRandomVoiceEvent, Value) == 0x000000, "Member 'VoiceSet_C_GetRandomVoiceEvent::Value' has a wrong offset!");
static_assert(offsetof(VoiceSet_C_GetRandomVoiceEvent, NonNullAudioEvents) == 0x000008, "Member 'VoiceSet_C_GetRandomVoiceEvent::NonNullAudioEvents' has a wrong offset!");
static_assert(offsetof(VoiceSet_C_GetRandomVoiceEvent, Temp_int_Array_Index_Variable) == 0x000018, "Member 'VoiceSet_C_GetRandomVoiceEvent::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(VoiceSet_C_GetRandomVoiceEvent, CallFunc_Array_Random_OutItem) == 0x000020, "Member 'VoiceSet_C_GetRandomVoiceEvent::CallFunc_Array_Random_OutItem' has a wrong offset!");
static_assert(offsetof(VoiceSet_C_GetRandomVoiceEvent, CallFunc_Array_Random_OutIndex) == 0x000028, "Member 'VoiceSet_C_GetRandomVoiceEvent::CallFunc_Array_Random_OutIndex' has a wrong offset!");
static_assert(offsetof(VoiceSet_C_GetRandomVoiceEvent, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'VoiceSet_C_GetRandomVoiceEvent::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(VoiceSet_C_GetRandomVoiceEvent, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'VoiceSet_C_GetRandomVoiceEvent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VoiceSet_C_GetRandomVoiceEvent, CallFunc_Map_Values_Values) == 0x000038, "Member 'VoiceSet_C_GetRandomVoiceEvent::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(VoiceSet_C_GetRandomVoiceEvent, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'VoiceSet_C_GetRandomVoiceEvent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(VoiceSet_C_GetRandomVoiceEvent, CallFunc_Array_Get_Item) == 0x000050, "Member 'VoiceSet_C_GetRandomVoiceEvent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(VoiceSet_C_GetRandomVoiceEvent, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'VoiceSet_C_GetRandomVoiceEvent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VoiceSet_C_GetRandomVoiceEvent, CallFunc_Array_Add_ReturnValue) == 0x00005C, "Member 'VoiceSet_C_GetRandomVoiceEvent::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(VoiceSet_C_GetRandomVoiceEvent, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'VoiceSet_C_GetRandomVoiceEvent::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function VoiceSet.VoiceSet_C.GetVoiceEvent
// 0x0020 (0x0020 - 0x0000)
struct VoiceSet_C_GetVoiceEvent final
{
public:
	E_VoiceEffortEvent                            Effort;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42AC[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Value;                                             // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          CallFunc_Map_Find_Value;                           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VoiceSet_C_GetVoiceEvent) == 0x000008, "Wrong alignment on VoiceSet_C_GetVoiceEvent");
static_assert(sizeof(VoiceSet_C_GetVoiceEvent) == 0x000020, "Wrong size on VoiceSet_C_GetVoiceEvent");
static_assert(offsetof(VoiceSet_C_GetVoiceEvent, Effort) == 0x000000, "Member 'VoiceSet_C_GetVoiceEvent::Effort' has a wrong offset!");
static_assert(offsetof(VoiceSet_C_GetVoiceEvent, Value) == 0x000008, "Member 'VoiceSet_C_GetVoiceEvent::Value' has a wrong offset!");
static_assert(offsetof(VoiceSet_C_GetVoiceEvent, CallFunc_Map_Find_Value) == 0x000010, "Member 'VoiceSet_C_GetVoiceEvent::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(VoiceSet_C_GetVoiceEvent, CallFunc_Map_Find_ReturnValue) == 0x000018, "Member 'VoiceSet_C_GetVoiceEvent::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

}

