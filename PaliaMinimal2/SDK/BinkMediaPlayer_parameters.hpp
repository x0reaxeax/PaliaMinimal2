#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BinkMediaPlayer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetDuration
// 0x0008 (0x0008 - 0x0000)
struct BinkFunctionLibrary_BinkLoadingMovie_GetDuration final
{
public:
	struct FTimespan                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkFunctionLibrary_BinkLoadingMovie_GetDuration) == 0x000008, "Wrong alignment on BinkFunctionLibrary_BinkLoadingMovie_GetDuration");
static_assert(sizeof(BinkFunctionLibrary_BinkLoadingMovie_GetDuration) == 0x000008, "Wrong size on BinkFunctionLibrary_BinkLoadingMovie_GetDuration");
static_assert(offsetof(BinkFunctionLibrary_BinkLoadingMovie_GetDuration, ReturnValue) == 0x000000, "Member 'BinkFunctionLibrary_BinkLoadingMovie_GetDuration::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetTime
// 0x0008 (0x0008 - 0x0000)
struct BinkFunctionLibrary_BinkLoadingMovie_GetTime final
{
public:
	struct FTimespan                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkFunctionLibrary_BinkLoadingMovie_GetTime) == 0x000008, "Wrong alignment on BinkFunctionLibrary_BinkLoadingMovie_GetTime");
static_assert(sizeof(BinkFunctionLibrary_BinkLoadingMovie_GetTime) == 0x000008, "Wrong size on BinkFunctionLibrary_BinkLoadingMovie_GetTime");
static_assert(offsetof(BinkFunctionLibrary_BinkLoadingMovie_GetTime, ReturnValue) == 0x000000, "Member 'BinkFunctionLibrary_BinkLoadingMovie_GetTime::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.Draw
// 0x0018 (0x0018 - 0x0000)
struct BinkMediaPlayer_Draw final
{
public:
	class UTexture*                               Texture;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Tonemap;                                           // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EC8[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Out_nits;                                          // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Alpha;                                             // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Srgb_decode;                                       // 0x0014(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Hdr;                                               // 0x0015(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EC9[0x2];                                     // 0x0016(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BinkMediaPlayer_Draw) == 0x000008, "Wrong alignment on BinkMediaPlayer_Draw");
static_assert(sizeof(BinkMediaPlayer_Draw) == 0x000018, "Wrong size on BinkMediaPlayer_Draw");
static_assert(offsetof(BinkMediaPlayer_Draw, Texture) == 0x000000, "Member 'BinkMediaPlayer_Draw::Texture' has a wrong offset!");
static_assert(offsetof(BinkMediaPlayer_Draw, Tonemap) == 0x000008, "Member 'BinkMediaPlayer_Draw::Tonemap' has a wrong offset!");
static_assert(offsetof(BinkMediaPlayer_Draw, Out_nits) == 0x00000C, "Member 'BinkMediaPlayer_Draw::Out_nits' has a wrong offset!");
static_assert(offsetof(BinkMediaPlayer_Draw, Alpha) == 0x000010, "Member 'BinkMediaPlayer_Draw::Alpha' has a wrong offset!");
static_assert(offsetof(BinkMediaPlayer_Draw, Srgb_decode) == 0x000014, "Member 'BinkMediaPlayer_Draw::Srgb_decode' has a wrong offset!");
static_assert(offsetof(BinkMediaPlayer_Draw, Hdr) == 0x000015, "Member 'BinkMediaPlayer_Draw::Hdr' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.OpenUrl
// 0x0018 (0x0018 - 0x0000)
struct BinkMediaPlayer_OpenUrl final
{
public:
	class FString                                 NewURL;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ECA[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BinkMediaPlayer_OpenUrl) == 0x000008, "Wrong alignment on BinkMediaPlayer_OpenUrl");
static_assert(sizeof(BinkMediaPlayer_OpenUrl) == 0x000018, "Wrong size on BinkMediaPlayer_OpenUrl");
static_assert(offsetof(BinkMediaPlayer_OpenUrl, NewURL) == 0x000000, "Member 'BinkMediaPlayer_OpenUrl::NewURL' has a wrong offset!");
static_assert(offsetof(BinkMediaPlayer_OpenUrl, ReturnValue) == 0x000010, "Member 'BinkMediaPlayer_OpenUrl::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.Pause
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_Pause final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkMediaPlayer_Pause) == 0x000001, "Wrong alignment on BinkMediaPlayer_Pause");
static_assert(sizeof(BinkMediaPlayer_Pause) == 0x000001, "Wrong size on BinkMediaPlayer_Pause");
static_assert(offsetof(BinkMediaPlayer_Pause, ReturnValue) == 0x000000, "Member 'BinkMediaPlayer_Pause::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.Play
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_Play final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkMediaPlayer_Play) == 0x000001, "Wrong alignment on BinkMediaPlayer_Play");
static_assert(sizeof(BinkMediaPlayer_Play) == 0x000001, "Wrong size on BinkMediaPlayer_Play");
static_assert(offsetof(BinkMediaPlayer_Play, ReturnValue) == 0x000000, "Member 'BinkMediaPlayer_Play::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.Rewind
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_Rewind final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkMediaPlayer_Rewind) == 0x000001, "Wrong alignment on BinkMediaPlayer_Rewind");
static_assert(sizeof(BinkMediaPlayer_Rewind) == 0x000001, "Wrong size on BinkMediaPlayer_Rewind");
static_assert(offsetof(BinkMediaPlayer_Rewind, ReturnValue) == 0x000000, "Member 'BinkMediaPlayer_Rewind::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.Seek
// 0x0010 (0x0010 - 0x0000)
struct BinkMediaPlayer_Seek final
{
public:
	struct FTimespan                              InTime;                                            // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ECB[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BinkMediaPlayer_Seek) == 0x000008, "Wrong alignment on BinkMediaPlayer_Seek");
static_assert(sizeof(BinkMediaPlayer_Seek) == 0x000010, "Wrong size on BinkMediaPlayer_Seek");
static_assert(offsetof(BinkMediaPlayer_Seek, InTime) == 0x000000, "Member 'BinkMediaPlayer_Seek::InTime' has a wrong offset!");
static_assert(offsetof(BinkMediaPlayer_Seek, ReturnValue) == 0x000008, "Member 'BinkMediaPlayer_Seek::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.SetLooping
// 0x0002 (0x0002 - 0x0000)
struct BinkMediaPlayer_SetLooping final
{
public:
	bool                                          InLooping;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkMediaPlayer_SetLooping) == 0x000001, "Wrong alignment on BinkMediaPlayer_SetLooping");
static_assert(sizeof(BinkMediaPlayer_SetLooping) == 0x000002, "Wrong size on BinkMediaPlayer_SetLooping");
static_assert(offsetof(BinkMediaPlayer_SetLooping, InLooping) == 0x000000, "Member 'BinkMediaPlayer_SetLooping::InLooping' has a wrong offset!");
static_assert(offsetof(BinkMediaPlayer_SetLooping, ReturnValue) == 0x000001, "Member 'BinkMediaPlayer_SetLooping::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.SetRate
// 0x0008 (0x0008 - 0x0000)
struct BinkMediaPlayer_SetRate final
{
public:
	float                                         Rate;                                              // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ECC[0x3];                                     // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BinkMediaPlayer_SetRate) == 0x000004, "Wrong alignment on BinkMediaPlayer_SetRate");
static_assert(sizeof(BinkMediaPlayer_SetRate) == 0x000008, "Wrong size on BinkMediaPlayer_SetRate");
static_assert(offsetof(BinkMediaPlayer_SetRate, Rate) == 0x000000, "Member 'BinkMediaPlayer_SetRate::Rate' has a wrong offset!");
static_assert(offsetof(BinkMediaPlayer_SetRate, ReturnValue) == 0x000004, "Member 'BinkMediaPlayer_SetRate::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.SetVolume
// 0x0004 (0x0004 - 0x0000)
struct BinkMediaPlayer_SetVolume final
{
public:
	float                                         Rate;                                              // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkMediaPlayer_SetVolume) == 0x000004, "Wrong alignment on BinkMediaPlayer_SetVolume");
static_assert(sizeof(BinkMediaPlayer_SetVolume) == 0x000004, "Wrong size on BinkMediaPlayer_SetVolume");
static_assert(offsetof(BinkMediaPlayer_SetVolume, Rate) == 0x000000, "Member 'BinkMediaPlayer_SetVolume::Rate' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.CanPause
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_CanPause final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkMediaPlayer_CanPause) == 0x000001, "Wrong alignment on BinkMediaPlayer_CanPause");
static_assert(sizeof(BinkMediaPlayer_CanPause) == 0x000001, "Wrong size on BinkMediaPlayer_CanPause");
static_assert(offsetof(BinkMediaPlayer_CanPause, ReturnValue) == 0x000000, "Member 'BinkMediaPlayer_CanPause::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.CanPlay
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_CanPlay final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkMediaPlayer_CanPlay) == 0x000001, "Wrong alignment on BinkMediaPlayer_CanPlay");
static_assert(sizeof(BinkMediaPlayer_CanPlay) == 0x000001, "Wrong size on BinkMediaPlayer_CanPlay");
static_assert(offsetof(BinkMediaPlayer_CanPlay, ReturnValue) == 0x000000, "Member 'BinkMediaPlayer_CanPlay::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.GetDuration
// 0x0008 (0x0008 - 0x0000)
struct BinkMediaPlayer_GetDuration final
{
public:
	struct FTimespan                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkMediaPlayer_GetDuration) == 0x000008, "Wrong alignment on BinkMediaPlayer_GetDuration");
static_assert(sizeof(BinkMediaPlayer_GetDuration) == 0x000008, "Wrong size on BinkMediaPlayer_GetDuration");
static_assert(offsetof(BinkMediaPlayer_GetDuration, ReturnValue) == 0x000000, "Member 'BinkMediaPlayer_GetDuration::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.GetRate
// 0x0004 (0x0004 - 0x0000)
struct BinkMediaPlayer_GetRate final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkMediaPlayer_GetRate) == 0x000004, "Wrong alignment on BinkMediaPlayer_GetRate");
static_assert(sizeof(BinkMediaPlayer_GetRate) == 0x000004, "Wrong size on BinkMediaPlayer_GetRate");
static_assert(offsetof(BinkMediaPlayer_GetRate, ReturnValue) == 0x000000, "Member 'BinkMediaPlayer_GetRate::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.GetTime
// 0x0008 (0x0008 - 0x0000)
struct BinkMediaPlayer_GetTime final
{
public:
	struct FTimespan                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkMediaPlayer_GetTime) == 0x000008, "Wrong alignment on BinkMediaPlayer_GetTime");
static_assert(sizeof(BinkMediaPlayer_GetTime) == 0x000008, "Wrong size on BinkMediaPlayer_GetTime");
static_assert(offsetof(BinkMediaPlayer_GetTime, ReturnValue) == 0x000000, "Member 'BinkMediaPlayer_GetTime::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.GetUrl
// 0x0010 (0x0010 - 0x0000)
struct BinkMediaPlayer_GetUrl final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkMediaPlayer_GetUrl) == 0x000008, "Wrong alignment on BinkMediaPlayer_GetUrl");
static_assert(sizeof(BinkMediaPlayer_GetUrl) == 0x000010, "Wrong size on BinkMediaPlayer_GetUrl");
static_assert(offsetof(BinkMediaPlayer_GetUrl, ReturnValue) == 0x000000, "Member 'BinkMediaPlayer_GetUrl::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.IsInitialized
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_IsInitialized final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkMediaPlayer_IsInitialized) == 0x000001, "Wrong alignment on BinkMediaPlayer_IsInitialized");
static_assert(sizeof(BinkMediaPlayer_IsInitialized) == 0x000001, "Wrong size on BinkMediaPlayer_IsInitialized");
static_assert(offsetof(BinkMediaPlayer_IsInitialized, ReturnValue) == 0x000000, "Member 'BinkMediaPlayer_IsInitialized::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.IsLooping
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_IsLooping final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkMediaPlayer_IsLooping) == 0x000001, "Wrong alignment on BinkMediaPlayer_IsLooping");
static_assert(sizeof(BinkMediaPlayer_IsLooping) == 0x000001, "Wrong size on BinkMediaPlayer_IsLooping");
static_assert(offsetof(BinkMediaPlayer_IsLooping, ReturnValue) == 0x000000, "Member 'BinkMediaPlayer_IsLooping::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.IsPaused
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_IsPaused final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkMediaPlayer_IsPaused) == 0x000001, "Wrong alignment on BinkMediaPlayer_IsPaused");
static_assert(sizeof(BinkMediaPlayer_IsPaused) == 0x000001, "Wrong size on BinkMediaPlayer_IsPaused");
static_assert(offsetof(BinkMediaPlayer_IsPaused, ReturnValue) == 0x000000, "Member 'BinkMediaPlayer_IsPaused::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.IsPlaying
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_IsPlaying final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkMediaPlayer_IsPlaying) == 0x000001, "Wrong alignment on BinkMediaPlayer_IsPlaying");
static_assert(sizeof(BinkMediaPlayer_IsPlaying) == 0x000001, "Wrong size on BinkMediaPlayer_IsPlaying");
static_assert(offsetof(BinkMediaPlayer_IsPlaying, ReturnValue) == 0x000000, "Member 'BinkMediaPlayer_IsPlaying::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.IsStopped
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_IsStopped final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkMediaPlayer_IsStopped) == 0x000001, "Wrong alignment on BinkMediaPlayer_IsStopped");
static_assert(sizeof(BinkMediaPlayer_IsStopped) == 0x000001, "Wrong size on BinkMediaPlayer_IsStopped");
static_assert(offsetof(BinkMediaPlayer_IsStopped, ReturnValue) == 0x000000, "Member 'BinkMediaPlayer_IsStopped::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.SupportsRate
// 0x0008 (0x0008 - 0x0000)
struct BinkMediaPlayer_SupportsRate final
{
public:
	float                                         Rate;                                              // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Unthinned;                                         // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ECD[0x2];                                     // 0x0006(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BinkMediaPlayer_SupportsRate) == 0x000004, "Wrong alignment on BinkMediaPlayer_SupportsRate");
static_assert(sizeof(BinkMediaPlayer_SupportsRate) == 0x000008, "Wrong size on BinkMediaPlayer_SupportsRate");
static_assert(offsetof(BinkMediaPlayer_SupportsRate, Rate) == 0x000000, "Member 'BinkMediaPlayer_SupportsRate::Rate' has a wrong offset!");
static_assert(offsetof(BinkMediaPlayer_SupportsRate, Unthinned) == 0x000004, "Member 'BinkMediaPlayer_SupportsRate::Unthinned' has a wrong offset!");
static_assert(offsetof(BinkMediaPlayer_SupportsRate, ReturnValue) == 0x000005, "Member 'BinkMediaPlayer_SupportsRate::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.SupportsScrubbing
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_SupportsScrubbing final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkMediaPlayer_SupportsScrubbing) == 0x000001, "Wrong alignment on BinkMediaPlayer_SupportsScrubbing");
static_assert(sizeof(BinkMediaPlayer_SupportsScrubbing) == 0x000001, "Wrong size on BinkMediaPlayer_SupportsScrubbing");
static_assert(offsetof(BinkMediaPlayer_SupportsScrubbing, ReturnValue) == 0x000000, "Member 'BinkMediaPlayer_SupportsScrubbing::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaPlayer.SupportsSeeking
// 0x0001 (0x0001 - 0x0000)
struct BinkMediaPlayer_SupportsSeeking final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkMediaPlayer_SupportsSeeking) == 0x000001, "Wrong alignment on BinkMediaPlayer_SupportsSeeking");
static_assert(sizeof(BinkMediaPlayer_SupportsSeeking) == 0x000001, "Wrong size on BinkMediaPlayer_SupportsSeeking");
static_assert(offsetof(BinkMediaPlayer_SupportsSeeking, ReturnValue) == 0x000000, "Member 'BinkMediaPlayer_SupportsSeeking::ReturnValue' has a wrong offset!");

// Function BinkMediaPlayer.BinkMediaTexture.SetMediaPlayer
// 0x0008 (0x0008 - 0x0000)
struct BinkMediaTexture_SetMediaPlayer final
{
public:
	class UBinkMediaPlayer*                       InMediaPlayer;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BinkMediaTexture_SetMediaPlayer) == 0x000008, "Wrong alignment on BinkMediaTexture_SetMediaPlayer");
static_assert(sizeof(BinkMediaTexture_SetMediaPlayer) == 0x000008, "Wrong size on BinkMediaTexture_SetMediaPlayer");
static_assert(offsetof(BinkMediaTexture_SetMediaPlayer, InMediaPlayer) == 0x000000, "Member 'BinkMediaTexture_SetMediaPlayer::InMediaPlayer' has a wrong offset!");

}

