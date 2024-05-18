#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PartyHUD_MemberRow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "S6UICore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PartyHUD_MemberRow.WBP_PartyHUD_MemberRow_C
// 0x00B8 (0x0378 - 0x02C0)
class UWBP_PartyHUD_MemberRow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_PartyLeader_Indicator;                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot_UnderBar;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot_UnderName;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlatformPlayerName_C*              WBP_PlatformPlayerName;                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS6UI_ContextMenu                      PartyMemberContextMenu;                            // 0x02E8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FVAL_PartyMember                       PartyMember;                                       // 0x0308(0x0050)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   Full_Name;                                         // 0x0358(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UVALUI_TextBlockStyle*                  NameTextStyleOverride;                             // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_PartyHUD_MemberRow(int32 EntryPoint, struct FGuid& K2Node_CustomEvent_AccountId, struct FGuid& K2Node_CustomEvent_CharacterId, struct FOSSVAL_CharacterNameAndId& K2Node_CustomEvent_Name, TDelegate<void(struct FGuid& AccountId, struct FGuid& CharacterId, struct FOSSVAL_CharacterNameAndId& Name)> K2Node_CreateDelegate_OutputDelegate, const struct FOSSVAL_CharacterNameAndId& Temp_struct_Variable, const struct FGuid& Temp_struct_Variable_1, const struct FGuid& Temp_struct_Variable_2, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UVALUI_TextBlockStyle> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, TDelegate<void(EVAL_PartyManagerState State)> K2Node_CreateDelegate_OutputDelegate_1, struct FGuid& K2Node_CustomEvent_AccountId_1, struct FGuid& K2Node_CustomEvent_CharacterId_1, TDelegate<void(EVAL_PartyManagerState State)> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void(struct FVAL_PartyMember& Member)> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void(struct FGuid& AccountId, struct FGuid& CharacterId)> K2Node_CreateDelegate_OutputDelegate_4, TDelegate<void(struct FVAL_PartyMember& Member)> K2Node_CreateDelegate_OutputDelegate_5, const struct FVAL_PartyMember& K2Node_CustomEvent_Member, class UVAL_PartyManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy* CallFunc_GetCharacterNameByAccountIdAndCharacterId_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_6, bool K2Node_Event_IsDesignTime, class UVAL_PartyManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1);
	void Handle_on_Context_Menu_Button_Pressed(class UWBP_PartyMemberRowContextMenu_C* ContentWidget);
	void Handle_On_Game_User_Settings_UI_Needs(class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue);
	void HandleOnPartyMemberPromoted(struct FVAL_PartyMember& Member);
	void HandleOnPartyStateChanged(EVAL_PartyManagerState State);
	void HideSkillSpacer();
	void OnFailure_64FF0DB94623A63854B70DB4ECCD4422(struct FGuid& AccountId, struct FGuid& CharacterId);
	void OnInitialized();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& Reply, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, TDelegate<void(class UWBP_PartyMemberRowContextMenu_C* ContentWidget)> K2Node_CreateDelegate_OutputDelegate, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UUserWidget* CallFunc_GetContextMenuContentWidget_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetNetId_ReturnValue, class UWBP_PartyMemberRowContextMenu_C* K2Node_DynamicCast_AsWBP_Party_Member_Row_Context_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TSubclassOf<class UUserWidget> Temp_class_Variable, bool CallFunc_SummonContextMenu_ReturnValue);
	void OnSuccess_64FF0DB94623A63854B70DB4ECCD4422(struct FGuid& AccountId, struct FGuid& CharacterId, struct FOSSVAL_CharacterNameAndId& Param_Name);
	void PreConstruct(bool IsDesignTime);
	void SetCharacterName(const struct FUniqueNetIdRepl& NetId, class FText PlayerName);
	void UpdateFromParty(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class UVAL_PartyManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsCurrentPartyValid_ReturnValue, class UVAL_PartyManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, bool CallFunc_EqualEqual_ReturnValue, ESlateVisibility K2Node_Select_Default);
	void UpdateFromPartyMember(const struct FVAL_PartyMember& Member);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PartyHUD_MemberRow_C">();
	}
	static class UWBP_PartyHUD_MemberRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PartyHUD_MemberRow_C>();
	}
};
static_assert(alignof(UWBP_PartyHUD_MemberRow_C) == 0x000008, "Wrong alignment on UWBP_PartyHUD_MemberRow_C");
static_assert(sizeof(UWBP_PartyHUD_MemberRow_C) == 0x000378, "Wrong size on UWBP_PartyHUD_MemberRow_C");
static_assert(offsetof(UWBP_PartyHUD_MemberRow_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_PartyHUD_MemberRow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PartyHUD_MemberRow_C, Image_PartyLeader_Indicator) == 0x0002C8, "Member 'UWBP_PartyHUD_MemberRow_C::Image_PartyLeader_Indicator' has a wrong offset!");
static_assert(offsetof(UWBP_PartyHUD_MemberRow_C, NamedSlot_UnderBar) == 0x0002D0, "Member 'UWBP_PartyHUD_MemberRow_C::NamedSlot_UnderBar' has a wrong offset!");
static_assert(offsetof(UWBP_PartyHUD_MemberRow_C, NamedSlot_UnderName) == 0x0002D8, "Member 'UWBP_PartyHUD_MemberRow_C::NamedSlot_UnderName' has a wrong offset!");
static_assert(offsetof(UWBP_PartyHUD_MemberRow_C, WBP_PlatformPlayerName) == 0x0002E0, "Member 'UWBP_PartyHUD_MemberRow_C::WBP_PlatformPlayerName' has a wrong offset!");
static_assert(offsetof(UWBP_PartyHUD_MemberRow_C, PartyMemberContextMenu) == 0x0002E8, "Member 'UWBP_PartyHUD_MemberRow_C::PartyMemberContextMenu' has a wrong offset!");
static_assert(offsetof(UWBP_PartyHUD_MemberRow_C, PartyMember) == 0x000308, "Member 'UWBP_PartyHUD_MemberRow_C::PartyMember' has a wrong offset!");
static_assert(offsetof(UWBP_PartyHUD_MemberRow_C, Full_Name) == 0x000358, "Member 'UWBP_PartyHUD_MemberRow_C::Full_Name' has a wrong offset!");
static_assert(offsetof(UWBP_PartyHUD_MemberRow_C, NameTextStyleOverride) == 0x000370, "Member 'UWBP_PartyHUD_MemberRow_C::NameTextStyleOverride' has a wrong offset!");

}

