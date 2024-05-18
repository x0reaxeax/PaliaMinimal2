#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UXIntentHandler_PhotographyMode

#include "Basic.hpp"

#include "S6UXIntentSubsystem_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UXIntentHandler_PhotographyMode.BP_UXIntentHandler_PhotographyMode_C
// 0x0008 (0x0030 - 0x0028)
class UBP_UXIntentHandler_PhotographyMode_C final : public US6RegisterUXActivityFunctor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_UXIntentHandler_PhotographyMode(int32 EntryPoint, bool CallFunc_IsConsolePlatform_ReturnValue, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, class US6UXIntentSubsystem* K2Node_Event_UXIntentSubsystem, class US6UXIntent* K2Node_Event_UXIntent, class UClass* K2Node_Select_Default, class UUserWidget* CallFunc_Create_ReturnValue, class UVALUI_PhotoCameraScreenBase* K2Node_DynamicCast_AsVALUI_Photo_Camera_Screen_Base, bool K2Node_DynamicCast_bSuccess);
	void HandleUXIntentReceived(class US6UXIntentSubsystem* UXIntentSubsystem, class US6UXIntent* UXIntent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UXIntentHandler_PhotographyMode_C">();
	}
	static class UBP_UXIntentHandler_PhotographyMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UXIntentHandler_PhotographyMode_C>();
	}
};
static_assert(alignof(UBP_UXIntentHandler_PhotographyMode_C) == 0x000008, "Wrong alignment on UBP_UXIntentHandler_PhotographyMode_C");
static_assert(sizeof(UBP_UXIntentHandler_PhotographyMode_C) == 0x000030, "Wrong size on UBP_UXIntentHandler_PhotographyMode_C");
static_assert(offsetof(UBP_UXIntentHandler_PhotographyMode_C, UberGraphFrame) == 0x000028, "Member 'UBP_UXIntentHandler_PhotographyMode_C::UberGraphFrame' has a wrong offset!");

}

