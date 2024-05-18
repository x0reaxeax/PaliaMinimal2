#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterCustomizationScript_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CharacterCustomizationScript_Base.BP_CharacterCustomizationScript_Base_C
// 0x0010 (0x00E0 - 0x00D0)
class UBP_CharacterCustomizationScript_Base_C : public UVAL_CharacterCustomization_ScriptObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AValeriaCharacter*                      OwningValeriaCharacter;                            // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CharacterCustomizationScript_Base(int32 EntryPoint, TDelegate<void(bool bIsMoving, bool bIsSprinting)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(bool IsGliding)> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(bool bIsJumping)> K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UVAL_CharacterCustomizationComponent* K2Node_Event_component_1, class UVAL_CharacterCustomizationItemBase* K2Node_Event_Item, TMap<class FName, struct FGuid>& K2Node_Event_VariantSelections, class UABP_PC_Female_C* K2Node_DynamicCast_AsABP_PC_Female, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, bool K2Node_CustomEvent_isClimbing, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_CustomEvent_bIsMoving, bool K2Node_CustomEvent_bIsSprinting, bool K2Node_CustomEvent_isGliding, bool K2Node_CustomEvent_bIsJumping, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UABP_PC_Female_C* K2Node_DynamicCast_AsABP_PC_Female_1, bool K2Node_DynamicCast_bSuccess_2, TDelegate<void(bool IsClimbing)> K2Node_CreateDelegate_OutputDelegate_3, class UVAL_CharacterCustomizationComponent* K2Node_Event_component, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnApply(class UVAL_CharacterCustomizationComponent* Component, class UVAL_CharacterCustomizationItemBase* Item, TMap<class FName, struct FGuid>& VariantSelections);
	void OnClimbingChanged(bool IsClimbing);
	void OnGlidingChanged(bool IsGliding);
	void OnJumpingChanged(bool bIsJumping);
	void OnMovingChanged(bool bIsMoving, bool bIsSprinting);
	void OnRemove(class UVAL_CharacterCustomizationComponent* Component);
	void StandingStill();

	bool ShouldInstantiate() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharacterCustomizationScript_Base_C">();
	}
	static class UBP_CharacterCustomizationScript_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CharacterCustomizationScript_Base_C>();
	}
};
static_assert(alignof(UBP_CharacterCustomizationScript_Base_C) == 0x000008, "Wrong alignment on UBP_CharacterCustomizationScript_Base_C");
static_assert(sizeof(UBP_CharacterCustomizationScript_Base_C) == 0x0000E0, "Wrong size on UBP_CharacterCustomizationScript_Base_C");
static_assert(offsetof(UBP_CharacterCustomizationScript_Base_C, UberGraphFrame) == 0x0000D0, "Member 'UBP_CharacterCustomizationScript_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_CharacterCustomizationScript_Base_C, OwningValeriaCharacter) == 0x0000D8, "Member 'UBP_CharacterCustomizationScript_Base_C::OwningValeriaCharacter' has a wrong offset!");

}

