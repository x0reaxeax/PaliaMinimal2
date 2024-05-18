#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EnhancedInput

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "InputCore_structs.hpp"
#include "Slate_structs.hpp"


namespace SDK
{

// Enum EnhancedInput.EPlayerMappableKeySlot
// NumValues: 0x0009
enum class EPlayerMappableKeySlot : uint8
{
	First                                    = 0,
	Second                                   = 1,
	Third                                    = 2,
	Fourth                                   = 3,
	Fifth                                    = 4,
	Sixth                                    = 5,
	Seventh                                  = 6,
	Unspecified                              = 7,
	Max                                      = 8,
};

// Enum EnhancedInput.EInputActionValueType
// NumValues: 0x0005
enum class EInputActionValueType : uint8
{
	Boolean                                  = 0,
	Axis1D                                   = 1,
	Axis2D                                   = 2,
	Axis3D                                   = 3,
	EInputActionValueType_MAX                = 4,
};

// Enum EnhancedInput.EMappingQueryResult
// NumValues: 0x0006
enum class EMappingQueryResult : uint8
{
	Error_EnhancedInputNotEnabled            = 0,
	Error_InputContextNotInActiveContexts    = 1,
	Error_InvalidAction                      = 2,
	NotMappable                              = 3,
	MappingAvailable                         = 4,
	EMappingQueryResult_MAX                  = 5,
};

// Enum EnhancedInput.EMappingQueryIssue
// NumValues: 0x0008
enum class EMappingQueryIssue : uint8
{
	NoIssue                                  = 0,
	ReservedByAction                         = 1,
	HidesExistingMapping                     = 2,
	HiddenByExistingMapping                  = 4,
	CollisionWithMappingInSameContext        = 8,
	ForcesTypePromotion                      = 16,
	ForcesTypeDemotion                       = 32,
	EMappingQueryIssue_MAX                   = 33,
};

// Enum EnhancedInput.EPlayerMappableKeySettingBehaviors
// NumValues: 0x0004
enum class EPlayerMappableKeySettingBehaviors : uint8
{
	InheritSettingsFromAction                = 0,
	OverrideSettings                         = 1,
	IgnoreSettings                           = 2,
	EPlayerMappableKeySettingBehaviors_MAX   = 3,
};

// Enum EnhancedInput.EInputMappingRebuildType
// NumValues: 0x0004
enum class EInputMappingRebuildType : uint8
{
	None                                     = 0,
	Rebuild                                  = 1,
	RebuildWithFlush                         = 2,
	EInputMappingRebuildType_MAX             = 3,
};

// Enum EnhancedInput.EInputActionAccumulationBehavior
// NumValues: 0x0003
enum class EInputActionAccumulationBehavior : uint8
{
	TakeHighestAbsoluteValue                 = 0,
	Cumulative                               = 1,
	EInputActionAccumulationBehavior_MAX     = 2,
};

// Enum EnhancedInput.EDeadZoneType
// NumValues: 0x0003
enum class EDeadZoneType : uint8
{
	Axial                                    = 0,
	Radial                                   = 1,
	EDeadZoneType_MAX                        = 2,
};

// Enum EnhancedInput.EFOVScalingType
// NumValues: 0x0003
enum class EFOVScalingType : uint8
{
	Standard                                 = 0,
	UE4_BackCompat                           = 1,
	EFOVScalingType_MAX                      = 2,
};

// Enum EnhancedInput.EInputAxisSwizzle
// NumValues: 0x0006
enum class EInputAxisSwizzle : uint8
{
	YXZ                                      = 0,
	ZYX                                      = 1,
	XZY                                      = 2,
	YZX                                      = 3,
	ZXY                                      = 4,
	EInputAxisSwizzle_MAX                    = 5,
};

// Enum EnhancedInput.ETriggerState
// NumValues: 0x0004
enum class ETriggerState : uint8
{
	None                                     = 0,
	Ongoing                                  = 1,
	Triggered                                = 2,
	ETriggerState_MAX                        = 3,
};

// Enum EnhancedInput.ETriggerEvent
// NumValues: 0x0007
enum class ETriggerEvent : uint8
{
	None                                     = 0,
	Triggered                                = 1,
	Started                                  = 2,
	Ongoing                                  = 4,
	Canceled                                 = 8,
	Completed                                = 16,
	ETriggerEvent_MAX                        = 17,
};

// Enum EnhancedInput.ETriggerType
// NumValues: 0x0004
enum class ETriggerType : uint8
{
	Explicit                                 = 0,
	Implicit                                 = 1,
	Blocker                                  = 2,
	ETriggerType_MAX                         = 3,
};

// Enum EnhancedInput.ETriggerEventsSupported
// NumValues: 0x0006
enum class ETriggerEventsSupported : uint8
{
	None                                     = 0,
	Instant                                  = 1,
	Uninterruptible                          = 2,
	Ongoing                                  = 4,
	All                                      = 7,
	ETriggerEventsSupported_MAX              = 8,
};

// ScriptStruct EnhancedInput.MappingQueryIssue
// 0x0018 (0x0018 - 0x0000)
struct FMappingQueryIssue final
{
public:
	EMappingQueryIssue                            Issue;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D4F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputMappingContext*                   BlockingContext;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           BlockingAction;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMappingQueryIssue) == 0x000008, "Wrong alignment on FMappingQueryIssue");
static_assert(sizeof(FMappingQueryIssue) == 0x000018, "Wrong size on FMappingQueryIssue");
static_assert(offsetof(FMappingQueryIssue, Issue) == 0x000000, "Member 'FMappingQueryIssue::Issue' has a wrong offset!");
static_assert(offsetof(FMappingQueryIssue, BlockingContext) == 0x000008, "Member 'FMappingQueryIssue::BlockingContext' has a wrong offset!");
static_assert(offsetof(FMappingQueryIssue, BlockingAction) == 0x000010, "Member 'FMappingQueryIssue::BlockingAction' has a wrong offset!");

// ScriptStruct EnhancedInput.InputActionValue
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FInputActionValue final
{
public:
	uint8                                         Pad_1D50[0x20];                                    // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInputActionValue) == 0x000008, "Wrong alignment on FInputActionValue");
static_assert(sizeof(FInputActionValue) == 0x000020, "Wrong size on FInputActionValue");

// ScriptStruct EnhancedInput.PlayerKeyMapping
// 0x0090 (0x0090 - 0x0000)
struct FPlayerKeyMapping final
{
public:
	class FName                                   MappingName;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                   DisplayName;                                       // 0x0008(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	class FText                                   DisplayCategory;                                   // 0x0020(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	EPlayerMappableKeySlot                        Slot;                                              // 0x0038(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         bIsDirty : 1;                                      // 0x0039(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_1D51[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   DefaultKey;                                        // 0x0040(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                   CurrentKey;                                        // 0x0058(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FHardwareDeviceIdentifier              HardwareDeviceId;                                  // 0x0070(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputAction*                           AssociatedInputAction;                             // 0x0088(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};
static_assert(alignof(FPlayerKeyMapping) == 0x000008, "Wrong alignment on FPlayerKeyMapping");
static_assert(sizeof(FPlayerKeyMapping) == 0x000090, "Wrong size on FPlayerKeyMapping");
static_assert(offsetof(FPlayerKeyMapping, MappingName) == 0x000000, "Member 'FPlayerKeyMapping::MappingName' has a wrong offset!");
static_assert(offsetof(FPlayerKeyMapping, DisplayName) == 0x000008, "Member 'FPlayerKeyMapping::DisplayName' has a wrong offset!");
static_assert(offsetof(FPlayerKeyMapping, DisplayCategory) == 0x000020, "Member 'FPlayerKeyMapping::DisplayCategory' has a wrong offset!");
static_assert(offsetof(FPlayerKeyMapping, Slot) == 0x000038, "Member 'FPlayerKeyMapping::Slot' has a wrong offset!");
static_assert(offsetof(FPlayerKeyMapping, DefaultKey) == 0x000040, "Member 'FPlayerKeyMapping::DefaultKey' has a wrong offset!");
static_assert(offsetof(FPlayerKeyMapping, CurrentKey) == 0x000058, "Member 'FPlayerKeyMapping::CurrentKey' has a wrong offset!");
static_assert(offsetof(FPlayerKeyMapping, HardwareDeviceId) == 0x000070, "Member 'FPlayerKeyMapping::HardwareDeviceId' has a wrong offset!");
static_assert(offsetof(FPlayerKeyMapping, AssociatedInputAction) == 0x000088, "Member 'FPlayerKeyMapping::AssociatedInputAction' has a wrong offset!");

// ScriptStruct EnhancedInput.KeyMappingRow
// 0x0050 (0x0050 - 0x0000)
struct FKeyMappingRow final
{
public:
	TSet<struct FPlayerKeyMapping>                Mappings;                                          // 0x0000(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKeyMappingRow) == 0x000008, "Wrong alignment on FKeyMappingRow");
static_assert(sizeof(FKeyMappingRow) == 0x000050, "Wrong size on FKeyMappingRow");
static_assert(offsetof(FKeyMappingRow, Mappings) == 0x000000, "Member 'FKeyMappingRow::Mappings' has a wrong offset!");

// ScriptStruct EnhancedInput.ModifyContextOptions
// 0x0001 (0x0001 - 0x0000)
struct FModifyContextOptions final
{
public:
	uint8                                         bIgnoreAllPressedKeysUntilRelease : 1;             // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bForceImmediately : 1;                             // 0x0000(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNotifyUserSettings : 1;                           // 0x0000(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
};
static_assert(alignof(FModifyContextOptions) == 0x000001, "Wrong alignment on FModifyContextOptions");
static_assert(sizeof(FModifyContextOptions) == 0x000001, "Wrong size on FModifyContextOptions");

// ScriptStruct EnhancedInput.PlayerMappableKeyProfileCreationArgs
// 0x0038 (0x0038 - 0x0000)
struct FPlayerMappableKeyProfileCreationArgs final
{
public:
	TSubclassOf<class UEnhancedPlayerMappableKeyProfile> ProfileType;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           ProfileIdentifier;                                 // 0x0008(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlatformUserId                        UserId;                                            // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D52[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   DisplayName;                                       // 0x0018(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         bSetAsCurrentProfile : 1;                          // 0x0030(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1D53[0x7];                                     // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPlayerMappableKeyProfileCreationArgs) == 0x000008, "Wrong alignment on FPlayerMappableKeyProfileCreationArgs");
static_assert(sizeof(FPlayerMappableKeyProfileCreationArgs) == 0x000038, "Wrong size on FPlayerMappableKeyProfileCreationArgs");
static_assert(offsetof(FPlayerMappableKeyProfileCreationArgs, ProfileType) == 0x000000, "Member 'FPlayerMappableKeyProfileCreationArgs::ProfileType' has a wrong offset!");
static_assert(offsetof(FPlayerMappableKeyProfileCreationArgs, ProfileIdentifier) == 0x000008, "Member 'FPlayerMappableKeyProfileCreationArgs::ProfileIdentifier' has a wrong offset!");
static_assert(offsetof(FPlayerMappableKeyProfileCreationArgs, UserId) == 0x000010, "Member 'FPlayerMappableKeyProfileCreationArgs::UserId' has a wrong offset!");
static_assert(offsetof(FPlayerMappableKeyProfileCreationArgs, DisplayName) == 0x000018, "Member 'FPlayerMappableKeyProfileCreationArgs::DisplayName' has a wrong offset!");

// ScriptStruct EnhancedInput.BlueprintEnhancedInputActionBinding
// 0x0018 (0x0018 - 0x0000)
struct FBlueprintEnhancedInputActionBinding final
{
public:
	class UInputAction*                           InputAction;                                       // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETriggerEvent                                 TriggerEvent;                                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D54[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   FunctionNameToBind;                                // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D55[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBlueprintEnhancedInputActionBinding) == 0x000008, "Wrong alignment on FBlueprintEnhancedInputActionBinding");
static_assert(sizeof(FBlueprintEnhancedInputActionBinding) == 0x000018, "Wrong size on FBlueprintEnhancedInputActionBinding");
static_assert(offsetof(FBlueprintEnhancedInputActionBinding, InputAction) == 0x000000, "Member 'FBlueprintEnhancedInputActionBinding::InputAction' has a wrong offset!");
static_assert(offsetof(FBlueprintEnhancedInputActionBinding, TriggerEvent) == 0x000008, "Member 'FBlueprintEnhancedInputActionBinding::TriggerEvent' has a wrong offset!");
static_assert(offsetof(FBlueprintEnhancedInputActionBinding, FunctionNameToBind) == 0x00000C, "Member 'FBlueprintEnhancedInputActionBinding::FunctionNameToBind' has a wrong offset!");

// ScriptStruct EnhancedInput.MapPlayerKeyArgs
// 0x0040 (0x0040 - 0x0000)
struct FMapPlayerKeyArgs final
{
public:
	class FName                                   MappingName;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPlayerMappableKeySlot                        Slot;                                              // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D56[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   NewKey;                                            // 0x0010(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   HardwareDeviceId;                                  // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           ProfileId;                                         // 0x0030(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bCreateMatchingSlotIfNeeded : 1;                   // 0x0038(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bDeferOnSettingsChangedBroadcast : 1;              // 0x0038(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1D57[0x7];                                     // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMapPlayerKeyArgs) == 0x000008, "Wrong alignment on FMapPlayerKeyArgs");
static_assert(sizeof(FMapPlayerKeyArgs) == 0x000040, "Wrong size on FMapPlayerKeyArgs");
static_assert(offsetof(FMapPlayerKeyArgs, MappingName) == 0x000000, "Member 'FMapPlayerKeyArgs::MappingName' has a wrong offset!");
static_assert(offsetof(FMapPlayerKeyArgs, Slot) == 0x000008, "Member 'FMapPlayerKeyArgs::Slot' has a wrong offset!");
static_assert(offsetof(FMapPlayerKeyArgs, NewKey) == 0x000010, "Member 'FMapPlayerKeyArgs::NewKey' has a wrong offset!");
static_assert(offsetof(FMapPlayerKeyArgs, HardwareDeviceId) == 0x000028, "Member 'FMapPlayerKeyArgs::HardwareDeviceId' has a wrong offset!");
static_assert(offsetof(FMapPlayerKeyArgs, ProfileId) == 0x000030, "Member 'FMapPlayerKeyArgs::ProfileId' has a wrong offset!");

// ScriptStruct EnhancedInput.PlayerMappableKeyQueryOptions
// 0x0028 (0x0028 - 0x0000)
struct FPlayerMappableKeyQueryOptions final
{
public:
	class FName                                   MappingName;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                   KeyToMatch;                                        // 0x0008(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPlayerMappableKeySlot                        SlotToMatch;                                       // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bMatchBasicKeyTypes : 1;                           // 0x0021(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bMatchKeyAxisType : 1;                             // 0x0021(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	EHardwareDevicePrimaryType                    RequiredDeviceType;                                // 0x0022(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D58[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RequiredDeviceFlags;                               // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPlayerMappableKeyQueryOptions) == 0x000008, "Wrong alignment on FPlayerMappableKeyQueryOptions");
static_assert(sizeof(FPlayerMappableKeyQueryOptions) == 0x000028, "Wrong size on FPlayerMappableKeyQueryOptions");
static_assert(offsetof(FPlayerMappableKeyQueryOptions, MappingName) == 0x000000, "Member 'FPlayerMappableKeyQueryOptions::MappingName' has a wrong offset!");
static_assert(offsetof(FPlayerMappableKeyQueryOptions, KeyToMatch) == 0x000008, "Member 'FPlayerMappableKeyQueryOptions::KeyToMatch' has a wrong offset!");
static_assert(offsetof(FPlayerMappableKeyQueryOptions, SlotToMatch) == 0x000020, "Member 'FPlayerMappableKeyQueryOptions::SlotToMatch' has a wrong offset!");
static_assert(offsetof(FPlayerMappableKeyQueryOptions, RequiredDeviceType) == 0x000022, "Member 'FPlayerMappableKeyQueryOptions::RequiredDeviceType' has a wrong offset!");
static_assert(offsetof(FPlayerMappableKeyQueryOptions, RequiredDeviceFlags) == 0x000024, "Member 'FPlayerMappableKeyQueryOptions::RequiredDeviceFlags' has a wrong offset!");

// ScriptStruct EnhancedInput.PlayerMappableKeySlot
// 0x0004 (0x0004 - 0x0000)
struct FPlayerMappableKeySlot final
{
public:
	int32                                         SlotNumber;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPlayerMappableKeySlot) == 0x000004, "Wrong alignment on FPlayerMappableKeySlot");
static_assert(sizeof(FPlayerMappableKeySlot) == 0x000004, "Wrong size on FPlayerMappableKeySlot");
static_assert(offsetof(FPlayerMappableKeySlot, SlotNumber) == 0x000000, "Member 'FPlayerMappableKeySlot::SlotNumber' has a wrong offset!");

// ScriptStruct EnhancedInput.PlayerMappableKeyOptions
// 0x0040 (0x0040 - 0x0000)
struct FPlayerMappableKeyOptions final
{
public:
	class UObject*                                MetaData;                                          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   Name;                                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   DisplayName;                                       // 0x0010(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   DisplayCategory;                                   // 0x0028(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPlayerMappableKeyOptions) == 0x000008, "Wrong alignment on FPlayerMappableKeyOptions");
static_assert(sizeof(FPlayerMappableKeyOptions) == 0x000040, "Wrong size on FPlayerMappableKeyOptions");
static_assert(offsetof(FPlayerMappableKeyOptions, MetaData) == 0x000000, "Member 'FPlayerMappableKeyOptions::MetaData' has a wrong offset!");
static_assert(offsetof(FPlayerMappableKeyOptions, Name) == 0x000008, "Member 'FPlayerMappableKeyOptions::Name' has a wrong offset!");
static_assert(offsetof(FPlayerMappableKeyOptions, DisplayName) == 0x000010, "Member 'FPlayerMappableKeyOptions::DisplayName' has a wrong offset!");
static_assert(offsetof(FPlayerMappableKeyOptions, DisplayCategory) == 0x000028, "Member 'FPlayerMappableKeyOptions::DisplayCategory' has a wrong offset!");

// ScriptStruct EnhancedInput.EnhancedActionKeyMapping
// 0x0050 (0x0050 - 0x0000)
struct FEnhancedActionKeyMapping final
{
public:
	TArray<class UInputTrigger*>                  Triggers;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UInputModifier*>                 Modifiers;                                         // 0x0010(0x0010)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	class UInputAction*                           Action;                                            // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                   Key;                                               // 0x0028(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bShouldBeIgnored : 1;                              // 0x0040(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	EPlayerMappableKeySettingBehaviors            SettingBehavior;                                   // 0x0041(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1D59[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerMappableKeySettings*             PlayerMappableKeySettings;                         // 0x0048(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};
static_assert(alignof(FEnhancedActionKeyMapping) == 0x000008, "Wrong alignment on FEnhancedActionKeyMapping");
static_assert(sizeof(FEnhancedActionKeyMapping) == 0x000050, "Wrong size on FEnhancedActionKeyMapping");
static_assert(offsetof(FEnhancedActionKeyMapping, Triggers) == 0x000000, "Member 'FEnhancedActionKeyMapping::Triggers' has a wrong offset!");
static_assert(offsetof(FEnhancedActionKeyMapping, Modifiers) == 0x000010, "Member 'FEnhancedActionKeyMapping::Modifiers' has a wrong offset!");
static_assert(offsetof(FEnhancedActionKeyMapping, Action) == 0x000020, "Member 'FEnhancedActionKeyMapping::Action' has a wrong offset!");
static_assert(offsetof(FEnhancedActionKeyMapping, Key) == 0x000028, "Member 'FEnhancedActionKeyMapping::Key' has a wrong offset!");
static_assert(offsetof(FEnhancedActionKeyMapping, SettingBehavior) == 0x000041, "Member 'FEnhancedActionKeyMapping::SettingBehavior' has a wrong offset!");
static_assert(offsetof(FEnhancedActionKeyMapping, PlayerMappableKeySettings) == 0x000048, "Member 'FEnhancedActionKeyMapping::PlayerMappableKeySettings' has a wrong offset!");

// ScriptStruct EnhancedInput.DefaultContextSetting
// 0x0030 (0x0030 - 0x0000)
struct FDefaultContextSetting final
{
public:
	TSoftObjectPtr<class UInputMappingContext>    InputMappingContext;                               // 0x0000(0x0028)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Priority;                                          // 0x0028(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D5A[0x4];                                     // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDefaultContextSetting) == 0x000008, "Wrong alignment on FDefaultContextSetting");
static_assert(sizeof(FDefaultContextSetting) == 0x000030, "Wrong size on FDefaultContextSetting");
static_assert(offsetof(FDefaultContextSetting, InputMappingContext) == 0x000000, "Member 'FDefaultContextSetting::InputMappingContext' has a wrong offset!");
static_assert(offsetof(FDefaultContextSetting, Priority) == 0x000028, "Member 'FDefaultContextSetting::Priority' has a wrong offset!");

// ScriptStruct EnhancedInput.KeyConsumptionOptions
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FKeyConsumptionOptions final
{
public:
	uint8                                         Pad_1D5B[0x18];                                    // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FKeyConsumptionOptions) == 0x000008, "Wrong alignment on FKeyConsumptionOptions");
static_assert(sizeof(FKeyConsumptionOptions) == 0x000018, "Wrong size on FKeyConsumptionOptions");

// ScriptStruct EnhancedInput.InjectedInputArray
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FInjectedInputArray final
{
public:
	uint8                                         Pad_1D5C[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInjectedInputArray) == 0x000008, "Wrong alignment on FInjectedInputArray");
static_assert(sizeof(FInjectedInputArray) == 0x000010, "Wrong size on FInjectedInputArray");

// ScriptStruct EnhancedInput.InputActionInstance
// 0x0060 (0x0060 - 0x0000)
struct FInputActionInstance final
{
public:
	class UInputAction*                           SourceAction;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1D5D[0xB];                                     // 0x0008(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	ETriggerEvent                                 TriggerEvent;                                      // 0x0013(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         LastTriggeredWorldTime;                            // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UInputTrigger*>                  Triggers;                                          // 0x0018(0x0010)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UInputModifier*>                 Modifiers;                                         // 0x0028(0x0010)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                         Pad_1D5E[0x20];                                    // 0x0038(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ElapsedProcessedTime;                              // 0x0058(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         ElapsedTriggeredTime;                              // 0x005C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};
static_assert(alignof(FInputActionInstance) == 0x000008, "Wrong alignment on FInputActionInstance");
static_assert(sizeof(FInputActionInstance) == 0x000060, "Wrong size on FInputActionInstance");
static_assert(offsetof(FInputActionInstance, SourceAction) == 0x000000, "Member 'FInputActionInstance::SourceAction' has a wrong offset!");
static_assert(offsetof(FInputActionInstance, TriggerEvent) == 0x000013, "Member 'FInputActionInstance::TriggerEvent' has a wrong offset!");
static_assert(offsetof(FInputActionInstance, LastTriggeredWorldTime) == 0x000014, "Member 'FInputActionInstance::LastTriggeredWorldTime' has a wrong offset!");
static_assert(offsetof(FInputActionInstance, Triggers) == 0x000018, "Member 'FInputActionInstance::Triggers' has a wrong offset!");
static_assert(offsetof(FInputActionInstance, Modifiers) == 0x000028, "Member 'FInputActionInstance::Modifiers' has a wrong offset!");
static_assert(offsetof(FInputActionInstance, ElapsedProcessedTime) == 0x000058, "Member 'FInputActionInstance::ElapsedProcessedTime' has a wrong offset!");
static_assert(offsetof(FInputActionInstance, ElapsedTriggeredTime) == 0x00005C, "Member 'FInputActionInstance::ElapsedTriggeredTime' has a wrong offset!");

// ScriptStruct EnhancedInput.BlueprintInputDebugKeyDelegateBinding
// 0x0030 (0x0030 - 0x0000)
struct FBlueprintInputDebugKeyDelegateBinding final
{
public:
	struct FInputChord                            InputChord;                                        // 0x0000(0x0020)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInputEvent                                   InputKeyEvent;                                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D5F[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   FunctionNameToBind;                                // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExecuteWhenPaused;                                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D60[0x3];                                     // 0x002D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBlueprintInputDebugKeyDelegateBinding) == 0x000008, "Wrong alignment on FBlueprintInputDebugKeyDelegateBinding");
static_assert(sizeof(FBlueprintInputDebugKeyDelegateBinding) == 0x000030, "Wrong size on FBlueprintInputDebugKeyDelegateBinding");
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, InputChord) == 0x000000, "Member 'FBlueprintInputDebugKeyDelegateBinding::InputChord' has a wrong offset!");
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, InputKeyEvent) == 0x000020, "Member 'FBlueprintInputDebugKeyDelegateBinding::InputKeyEvent' has a wrong offset!");
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, FunctionNameToBind) == 0x000024, "Member 'FBlueprintInputDebugKeyDelegateBinding::FunctionNameToBind' has a wrong offset!");
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, bExecuteWhenPaused) == 0x00002C, "Member 'FBlueprintInputDebugKeyDelegateBinding::bExecuteWhenPaused' has a wrong offset!");

// ScriptStruct EnhancedInput.InputComboStepData
// 0x0010 (0x0010 - 0x0000)
struct FInputComboStepData final
{
public:
	class UInputAction*                           ComboStepAction;                                   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         ComboStepCompletionStates;                         // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D61[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TimeToPressKey;                                    // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInputComboStepData) == 0x000008, "Wrong alignment on FInputComboStepData");
static_assert(sizeof(FInputComboStepData) == 0x000010, "Wrong size on FInputComboStepData");
static_assert(offsetof(FInputComboStepData, ComboStepAction) == 0x000000, "Member 'FInputComboStepData::ComboStepAction' has a wrong offset!");
static_assert(offsetof(FInputComboStepData, ComboStepCompletionStates) == 0x000008, "Member 'FInputComboStepData::ComboStepCompletionStates' has a wrong offset!");
static_assert(offsetof(FInputComboStepData, TimeToPressKey) == 0x00000C, "Member 'FInputComboStepData::TimeToPressKey' has a wrong offset!");

// ScriptStruct EnhancedInput.InputCancelAction
// 0x0010 (0x0010 - 0x0000)
struct FInputCancelAction final
{
public:
	class UInputAction*                           CancelAction;                                      // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         CancellationStates;                                // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D62[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInputCancelAction) == 0x000008, "Wrong alignment on FInputCancelAction");
static_assert(sizeof(FInputCancelAction) == 0x000010, "Wrong size on FInputCancelAction");
static_assert(offsetof(FInputCancelAction, CancelAction) == 0x000000, "Member 'FInputCancelAction::CancelAction' has a wrong offset!");
static_assert(offsetof(FInputCancelAction, CancellationStates) == 0x000008, "Member 'FInputCancelAction::CancellationStates' has a wrong offset!");

}

