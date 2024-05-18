#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Comp_CV_Local_Music

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Comp_CV_Parent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Comp_CV_Local_Music.Comp_CV_Local_Music_C
// 0x0010 (0x02D0 - 0x02C0)
class UComp_CV_Local_Music_C final : public UComp_CV_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Comp_CV_Local_Music_C;              // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkSwitchValue*                         Mus;                                               // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSwitchingBetweenTimeOfDay;                       // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayMus;                                           // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgnoreDayNightTransition;                          // 0x02CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Comp_CV_Local_Music(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValeriaGameInstance* K2Node_DynamicCast_AsValeria_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* K2Node_Event_OverlappedComponent, class AActor* K2Node_Event_OtherActor, class UPrimitiveComponent* K2Node_Event_OtherComp, int32 K2Node_Event_OtherBodyIndex, class UMusicManager* CallFunc_GetMusicManager_ReturnValue, class UBP_MusicManager_C* K2Node_DynamicCast_AsBP_Music_Manager, bool K2Node_DynamicCast_bSuccess_1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_GetIsSwitchingBetweenNightAndDay_bSwitchingBetweenNightAndDay, int32 Temp_int_Array_Index_Variable, bool CallFunc_BooleanAND_ReturnValue, TArray<class UAkRoomComponent*>& CallFunc_GetAudioRoomComponents_ReturnValue, class UAkRoomComponent* CallFunc_Array_Get_Item, class UAkRoomComponent* CallFunc_Array_Get_Item_1, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UComp_CV_Local_Music_C* CallFunc_GetComponentByClass_ReturnValue, class UComp_CV_Local_Music_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void Manual_Set_Parameters();
	void OverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void SetParameters();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Comp_CV_Local_Music_C">();
	}
	static class UComp_CV_Local_Music_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UComp_CV_Local_Music_C>();
	}
};
static_assert(alignof(UComp_CV_Local_Music_C) == 0x000010, "Wrong alignment on UComp_CV_Local_Music_C");
static_assert(sizeof(UComp_CV_Local_Music_C) == 0x0002D0, "Wrong size on UComp_CV_Local_Music_C");
static_assert(offsetof(UComp_CV_Local_Music_C, UberGraphFrame_Comp_CV_Local_Music_C) == 0x0002B8, "Member 'UComp_CV_Local_Music_C::UberGraphFrame_Comp_CV_Local_Music_C' has a wrong offset!");
static_assert(offsetof(UComp_CV_Local_Music_C, Mus) == 0x0002C0, "Member 'UComp_CV_Local_Music_C::Mus' has a wrong offset!");
static_assert(offsetof(UComp_CV_Local_Music_C, IsSwitchingBetweenTimeOfDay) == 0x0002C8, "Member 'UComp_CV_Local_Music_C::IsSwitchingBetweenTimeOfDay' has a wrong offset!");
static_assert(offsetof(UComp_CV_Local_Music_C, PlayMus) == 0x0002C9, "Member 'UComp_CV_Local_Music_C::PlayMus' has a wrong offset!");
static_assert(offsetof(UComp_CV_Local_Music_C, IgnoreDayNightTransition) == 0x0002CA, "Member 'UComp_CV_Local_Music_C::IgnoreDayNightTransition' has a wrong offset!");

}

