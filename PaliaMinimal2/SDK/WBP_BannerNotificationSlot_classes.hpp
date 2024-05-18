#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BannerNotificationSlot

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "S6UICore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BannerNotificationSlot.WBP_BannerNotificationSlot_C
// 0x0040 (0x0560 - 0x0520)
class UWBP_BannerNotificationSlot_C final : public US6UI_InputActionHandlingUserWidget
{
public:
	class USizeBox*                               Box_BannerNotification;                            // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_NotificationQueue*               Notification_Queue;                                // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CurrentNotificationId;                             // 0x0530(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  InputActionHandle_DismissNotification;             // 0x0540(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           RetryTimer;                                        // 0x0550(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          CanShowNotificationsWithoutValidPlayerCharacter;   // 0x0558(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void CanShowBannerNotification(bool* CanShow, uint8 CallFunc_MakeLiteralByte_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UCharacterStateMachineComponent* CallFunc_GetCSM_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, ECharacterState CallFunc_GetCurrentStateType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void HandleInputAction_DismissNotification_Triggered(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* InputAction, bool CallFunc_IsValid_Guid_ReturnValue, bool CallFunc_TryDismissNotification_ReturnValue);
	void HandleNotificationDismissed_Banner(class UVALUI_NotificationQueue* NotificationQueue, struct FGuid& AffectedNotificationId, class UWidget* NotificationWidget);
	void HandleNotificationPushed_Banner(class UVALUI_NotificationQueue* NotificationQueue, struct FGuid& AffectedNotificationId);
	void RetryShowBannerNotification();
	void SetNotificationQueue(class UVALUI_NotificationQueue* Param_Notification_Queue, TDelegate<void(class UVALUI_NotificationQueue* NotificationQueue, struct FGuid& AffectedNotificationId, class UWidget* NotificationWidget)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class UVALUI_NotificationQueue* NotificationQueue, struct FGuid& AffectedNotificationId)> K2Node_CreateDelegate_OutputDelegate_1);
	void TryShowNextBannerNotification(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<struct FGuid>& CallFunc_GetAlllNotificationIds_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_GetNotificationById_ReturnValue, bool CallFunc_CanShowBannerNotification_CanShow, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, class UWidget* CallFunc_GetContent_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateInputActionsForNotifications(bool CallFunc_IsValid_Guid_ReturnValue, bool CallFunc_IsValid_Guid_ReturnValue_1, TDelegate<void(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)> K2Node_CreateDelegate_OutputDelegate, const struct FGuid& CallFunc_RegisterInputActionBinding_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BannerNotificationSlot_C">();
	}
	static class UWBP_BannerNotificationSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BannerNotificationSlot_C>();
	}
};
static_assert(alignof(UWBP_BannerNotificationSlot_C) == 0x000008, "Wrong alignment on UWBP_BannerNotificationSlot_C");
static_assert(sizeof(UWBP_BannerNotificationSlot_C) == 0x000560, "Wrong size on UWBP_BannerNotificationSlot_C");
static_assert(offsetof(UWBP_BannerNotificationSlot_C, Box_BannerNotification) == 0x000520, "Member 'UWBP_BannerNotificationSlot_C::Box_BannerNotification' has a wrong offset!");
static_assert(offsetof(UWBP_BannerNotificationSlot_C, Notification_Queue) == 0x000528, "Member 'UWBP_BannerNotificationSlot_C::Notification_Queue' has a wrong offset!");
static_assert(offsetof(UWBP_BannerNotificationSlot_C, CurrentNotificationId) == 0x000530, "Member 'UWBP_BannerNotificationSlot_C::CurrentNotificationId' has a wrong offset!");
static_assert(offsetof(UWBP_BannerNotificationSlot_C, InputActionHandle_DismissNotification) == 0x000540, "Member 'UWBP_BannerNotificationSlot_C::InputActionHandle_DismissNotification' has a wrong offset!");
static_assert(offsetof(UWBP_BannerNotificationSlot_C, RetryTimer) == 0x000550, "Member 'UWBP_BannerNotificationSlot_C::RetryTimer' has a wrong offset!");
static_assert(offsetof(UWBP_BannerNotificationSlot_C, CanShowNotificationsWithoutValidPlayerCharacter) == 0x000558, "Member 'UWBP_BannerNotificationSlot_C::CanShowNotificationsWithoutValidPlayerCharacter' has a wrong offset!");

}

