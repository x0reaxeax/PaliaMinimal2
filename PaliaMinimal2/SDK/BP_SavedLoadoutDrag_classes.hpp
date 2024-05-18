#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SavedLoadoutDrag

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SavedLoadoutDrag.BP_SavedLoadoutDrag_C
// 0x0010 (0x00A0 - 0x0090)
class UBP_SavedLoadoutDrag_C final : public UDragDropOperation
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0090(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUserWidget*                            Saved_Loadout_Widget_Reference;                    // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void DragCancelled(struct FPointerEvent& PointerEvent);
	void Dragged(struct FPointerEvent& PointerEvent);
	void Drop(struct FPointerEvent& PointerEvent);
	void ExecuteUbergraph_BP_SavedLoadoutDrag(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, struct FPointerEvent& K2Node_Event_PointerEvent_2, struct FPointerEvent& K2Node_Event_PointerEvent_1, struct FPointerEvent& K2Node_Event_PointerEvent, int32 CallFunc_PostGlobalEvent_ReturnValue, int32 CallFunc_PostGlobalEvent_ReturnValue_1, int32 CallFunc_PostGlobalEvent_ReturnValue_2);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SavedLoadoutDrag_C">();
	}
	static class UBP_SavedLoadoutDrag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SavedLoadoutDrag_C>();
	}
};
static_assert(alignof(UBP_SavedLoadoutDrag_C) == 0x000008, "Wrong alignment on UBP_SavedLoadoutDrag_C");
static_assert(sizeof(UBP_SavedLoadoutDrag_C) == 0x0000A0, "Wrong size on UBP_SavedLoadoutDrag_C");
static_assert(offsetof(UBP_SavedLoadoutDrag_C, UberGraphFrame) == 0x000090, "Member 'UBP_SavedLoadoutDrag_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_SavedLoadoutDrag_C, Saved_Loadout_Widget_Reference) == 0x000098, "Member 'UBP_SavedLoadoutDrag_C::Saved_Loadout_Widget_Reference' has a wrong offset!");

}

