#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometryCacheTracks

#include "Basic.hpp"

#include "GeometryCacheTracks_structs.hpp"
#include "MovieScene_classes.hpp"


namespace SDK
{

// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// 0x0048 (0x0138 - 0x00F0)
class UMovieSceneGeometryCacheSection final : public UMovieSceneSection
{
public:
	struct FMovieSceneGeometryCacheParams         Params;                                            // 0x00F0(0x0048)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneGeometryCacheSection">();
	}
	static class UMovieSceneGeometryCacheSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneGeometryCacheSection>();
	}
};
static_assert(alignof(UMovieSceneGeometryCacheSection) == 0x000008, "Wrong alignment on UMovieSceneGeometryCacheSection");
static_assert(sizeof(UMovieSceneGeometryCacheSection) == 0x000138, "Wrong size on UMovieSceneGeometryCacheSection");
static_assert(offsetof(UMovieSceneGeometryCacheSection, Params) == 0x0000F0, "Member 'UMovieSceneGeometryCacheSection::Params' has a wrong offset!");

// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// 0x0018 (0x00B0 - 0x0098)
class UMovieSceneGeometryCacheTrack final : public UMovieSceneNameableTrack
{
public:
	uint8                                         Pad_3B36[0x8];                                     // 0x0098(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMovieSceneSection*>             AnimationSections;                                 // 0x00A0(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneGeometryCacheTrack">();
	}
	static class UMovieSceneGeometryCacheTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneGeometryCacheTrack>();
	}
};
static_assert(alignof(UMovieSceneGeometryCacheTrack) == 0x000008, "Wrong alignment on UMovieSceneGeometryCacheTrack");
static_assert(sizeof(UMovieSceneGeometryCacheTrack) == 0x0000B0, "Wrong size on UMovieSceneGeometryCacheTrack");
static_assert(offsetof(UMovieSceneGeometryCacheTrack, AnimationSections) == 0x0000A0, "Member 'UMovieSceneGeometryCacheTrack::AnimationSections' has a wrong offset!");

}

