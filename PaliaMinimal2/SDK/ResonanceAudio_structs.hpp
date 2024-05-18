#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ResonanceAudio

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum ResonanceAudio.ERaQualityMode
// NumValues: 0x0005
enum class ERaQualityMode : uint8
{
	STEREO_PANNING                           = 0,
	BINAURAL_LOW                             = 1,
	BINAURAL_MEDIUM                          = 2,
	BINAURAL_HIGH                            = 3,
	ERaQualityMode_MAX                       = 4,
};

// Enum ResonanceAudio.ERaSpatializationMethod
// NumValues: 0x0003
enum class ERaSpatializationMethod : uint8
{
	STEREO_PANNING                           = 0,
	HRTF                                     = 1,
	ERaSpatializationMethod_MAX              = 2,
};

// Enum ResonanceAudio.ERaDistanceRolloffModel
// NumValues: 0x0004
enum class ERaDistanceRolloffModel : uint8
{
	LOGARITHMIC                              = 0,
	LINEAR                                   = 1,
	NONE                                     = 2,
	ERaDistanceRolloffModel_MAX              = 3,
};

// Enum ResonanceAudio.ERaMaterialName
// NumValues: 0x0019
enum class ERaMaterialName : uint8
{
	TRANSPARENT_0                            = 0,
	ACOUSTIC_CEILING_TILES                   = 1,
	BRICK_BARE                               = 2,
	BRICK_PAINTED                            = 3,
	CONCRETE_BLOCK_COARSE                    = 4,
	CONCRETE_BLOCK_PAINTED                   = 5,
	CURTAIN_HEAVY                            = 6,
	FIBER_GLASS_INSULATION                   = 7,
	GLASS_THIN                               = 8,
	GLASS_THICK                              = 9,
	GRASS                                    = 10,
	LINOLEUM_ON_CONCRETE                     = 11,
	MARBLE                                   = 12,
	METAL                                    = 13,
	PARQUET_ONCONCRETE                       = 14,
	PLASTER_ROUGH                            = 15,
	PLASTER_SMOOTH                           = 16,
	PLYWOOD_PANEL                            = 17,
	POLISHED_CONCRETE_OR_TILE                = 18,
	SHEETROCK                                = 19,
	WATER_OR_ICE_SURFACE                     = 20,
	WOOD_CEILING                             = 21,
	WOOD_PANEL                               = 22,
	UNIFORM                                  = 23,
	ERaMaterialName_MAX                      = 24,
};

// Enum ResonanceAudio.EResonanceRenderMode
// NumValues: 0x0006
enum class EResonanceRenderMode : uint8
{
	StereoPanning                            = 0,
	BinauralLowQuality                       = 1,
	BinauralMediumQuality                    = 2,
	BinauralHighQuality                      = 3,
	RoomEffectsOnly                          = 4,
	EResonanceRenderMode_MAX                 = 5,
};

// ScriptStruct ResonanceAudio.ResonanceAudioReverbPluginSettings
// 0x0070 (0x0070 - 0x0000)
struct FResonanceAudioReverbPluginSettings final
{
public:
	bool                                          bEnableRoomEffects;                                // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bGetTransformFromAudioVolume;                      // 0x0001(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3EDC[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                RoomPosition;                                      // 0x0008(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                  RoomRotation;                                      // 0x0020(0x0020)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RoomDimensions;                                    // 0x0040(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERaMaterialName                               LeftWallMaterial;                                  // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERaMaterialName                               RightWallMaterial;                                 // 0x0059(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERaMaterialName                               FloorMaterial;                                     // 0x005A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERaMaterialName                               CeilingMaterial;                                   // 0x005B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERaMaterialName                               FrontWallMaterial;                                 // 0x005C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERaMaterialName                               BackWallMaterial;                                  // 0x005D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3EDD[0x2];                                     // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReflectionScalar;                                  // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReverbGain;                                        // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReverbTimeModifier;                                // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReverbBrightness;                                  // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FResonanceAudioReverbPluginSettings) == 0x000010, "Wrong alignment on FResonanceAudioReverbPluginSettings");
static_assert(sizeof(FResonanceAudioReverbPluginSettings) == 0x000070, "Wrong size on FResonanceAudioReverbPluginSettings");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, bEnableRoomEffects) == 0x000000, "Member 'FResonanceAudioReverbPluginSettings::bEnableRoomEffects' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, bGetTransformFromAudioVolume) == 0x000001, "Member 'FResonanceAudioReverbPluginSettings::bGetTransformFromAudioVolume' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, RoomPosition) == 0x000008, "Member 'FResonanceAudioReverbPluginSettings::RoomPosition' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, RoomRotation) == 0x000020, "Member 'FResonanceAudioReverbPluginSettings::RoomRotation' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, RoomDimensions) == 0x000040, "Member 'FResonanceAudioReverbPluginSettings::RoomDimensions' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, LeftWallMaterial) == 0x000058, "Member 'FResonanceAudioReverbPluginSettings::LeftWallMaterial' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, RightWallMaterial) == 0x000059, "Member 'FResonanceAudioReverbPluginSettings::RightWallMaterial' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, FloorMaterial) == 0x00005A, "Member 'FResonanceAudioReverbPluginSettings::FloorMaterial' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, CeilingMaterial) == 0x00005B, "Member 'FResonanceAudioReverbPluginSettings::CeilingMaterial' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, FrontWallMaterial) == 0x00005C, "Member 'FResonanceAudioReverbPluginSettings::FrontWallMaterial' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, BackWallMaterial) == 0x00005D, "Member 'FResonanceAudioReverbPluginSettings::BackWallMaterial' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, ReflectionScalar) == 0x000060, "Member 'FResonanceAudioReverbPluginSettings::ReflectionScalar' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, ReverbGain) == 0x000064, "Member 'FResonanceAudioReverbPluginSettings::ReverbGain' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, ReverbTimeModifier) == 0x000068, "Member 'FResonanceAudioReverbPluginSettings::ReverbTimeModifier' has a wrong offset!");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, ReverbBrightness) == 0x00006C, "Member 'FResonanceAudioReverbPluginSettings::ReverbBrightness' has a wrong offset!");

}

