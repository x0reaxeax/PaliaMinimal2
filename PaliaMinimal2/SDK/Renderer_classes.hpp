#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Renderer

#include "Basic.hpp"

#include "Renderer_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class Renderer.SparseVolumeTextureViewerComponent
// 0x0040 (0x05B0 - 0x0570)
class USparseVolumeTextureViewerComponent final : public UPrimitiveComponent
{
public:
	class USparseVolumeTexture*                   SparseVolumeTexturePreview;                        // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bAnimate : 1;                                      // 0x0578(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bReversePlayback : 1;                              // 0x0578(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bBlockingStreamingRequests : 1;                    // 0x0578(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_135D[0x3];                                     // 0x0579(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AnimationFrame;                                    // 0x057C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrameRate;                                         // 0x0580(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimationTime;                                     // 0x0584(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESparseVolumeTexturePreviewAttribute          PreviewAttribute;                                  // 0x0588(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_135E[0x3];                                     // 0x0589(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MipLevel;                                          // 0x058C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Extinction;                                        // 0x0590(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_135F[0x1C];                                    // 0x0594(0x001C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SparseVolumeTextureViewerComponent">();
	}
	static class USparseVolumeTextureViewerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USparseVolumeTextureViewerComponent>();
	}
};
static_assert(alignof(USparseVolumeTextureViewerComponent) == 0x000010, "Wrong alignment on USparseVolumeTextureViewerComponent");
static_assert(sizeof(USparseVolumeTextureViewerComponent) == 0x0005B0, "Wrong size on USparseVolumeTextureViewerComponent");
static_assert(offsetof(USparseVolumeTextureViewerComponent, SparseVolumeTexturePreview) == 0x000570, "Member 'USparseVolumeTextureViewerComponent::SparseVolumeTexturePreview' has a wrong offset!");
static_assert(offsetof(USparseVolumeTextureViewerComponent, AnimationFrame) == 0x00057C, "Member 'USparseVolumeTextureViewerComponent::AnimationFrame' has a wrong offset!");
static_assert(offsetof(USparseVolumeTextureViewerComponent, FrameRate) == 0x000580, "Member 'USparseVolumeTextureViewerComponent::FrameRate' has a wrong offset!");
static_assert(offsetof(USparseVolumeTextureViewerComponent, AnimationTime) == 0x000584, "Member 'USparseVolumeTextureViewerComponent::AnimationTime' has a wrong offset!");
static_assert(offsetof(USparseVolumeTextureViewerComponent, PreviewAttribute) == 0x000588, "Member 'USparseVolumeTextureViewerComponent::PreviewAttribute' has a wrong offset!");
static_assert(offsetof(USparseVolumeTextureViewerComponent, MipLevel) == 0x00058C, "Member 'USparseVolumeTextureViewerComponent::MipLevel' has a wrong offset!");
static_assert(offsetof(USparseVolumeTextureViewerComponent, Extinction) == 0x000590, "Member 'USparseVolumeTextureViewerComponent::Extinction' has a wrong offset!");

// Class Renderer.SparseVolumeTextureViewer
// 0x0008 (0x02B0 - 0x02A8)
class ASparseVolumeTextureViewer final : public AInfo
{
public:
	class USparseVolumeTextureViewerComponent*    SparseVolumeTextureViewerComponent;                // 0x02A8(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SparseVolumeTextureViewer">();
	}
	static class ASparseVolumeTextureViewer* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASparseVolumeTextureViewer>();
	}
};
static_assert(alignof(ASparseVolumeTextureViewer) == 0x000008, "Wrong alignment on ASparseVolumeTextureViewer");
static_assert(sizeof(ASparseVolumeTextureViewer) == 0x0002B0, "Wrong size on ASparseVolumeTextureViewer");
static_assert(offsetof(ASparseVolumeTextureViewer, SparseVolumeTextureViewerComponent) == 0x0002A8, "Member 'ASparseVolumeTextureViewer::SparseVolumeTextureViewerComponent' has a wrong offset!");

}

