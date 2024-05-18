#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MetasoundEngine

#include "Basic.hpp"

#include "MetasoundFrontend_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "MetasoundEngine_structs.hpp"
#include "Engine_classes.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class MetasoundEngine.MetasoundGeneratorHandle
// 0x00B8 (0x00E0 - 0x0028)
class UMetasoundGeneratorHandle final : public UObject
{
public:
	uint8                                         Pad_3E4A[0xB8];                                    // 0x0028(0x00B8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UMetasoundGeneratorHandle* CreateMetaSoundGeneratorHandle(class UAudioComponent* OnComponent);

	bool ApplyParameterPack(class UMetasoundParameterPack* Pack);
	void OnOutputValueChangedMulticast__DelegateSignature(class FName Param_Name, struct FMetaSoundOutput& Output);
	bool WatchOutput(class FName OutputName, TDelegate<void(class FName OutputName, struct FMetaSoundOutput& Output)>& OnOutputValueChanged, class FName AnalyzerName, class FName AnalyzerOutputName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetasoundGeneratorHandle">();
	}
	static class UMetasoundGeneratorHandle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetasoundGeneratorHandle>();
	}
};
static_assert(alignof(UMetasoundGeneratorHandle) == 0x000008, "Wrong alignment on UMetasoundGeneratorHandle");
static_assert(sizeof(UMetasoundGeneratorHandle) == 0x0000E0, "Wrong size on UMetasoundGeneratorHandle");

// Class MetasoundEngine.MetasoundOutputBlueprintAccess
// 0x0000 (0x0028 - 0x0028)
class UMetasoundOutputBlueprintAccess final : public UBlueprintFunctionLibrary
{
public:
	static bool GetBool(struct FMetaSoundOutput& Output, bool* Success);
	static float GetFloat(struct FMetaSoundOutput& Output, bool* Success);
	static int32 GetInt32(struct FMetaSoundOutput& Output, bool* Success);
	static class FString GetString(struct FMetaSoundOutput& Output, bool* Success);
	static float GetTimeSeconds(struct FMetaSoundOutput& Output, bool* Success);
	static bool IsBool(struct FMetaSoundOutput& Output);
	static bool IsFloat(struct FMetaSoundOutput& Output);
	static bool IsInt32(struct FMetaSoundOutput& Output);
	static bool IsString(struct FMetaSoundOutput& Output);
	static bool IsTime(struct FMetaSoundOutput& Output);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetasoundOutputBlueprintAccess">();
	}
	static class UMetasoundOutputBlueprintAccess* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetasoundOutputBlueprintAccess>();
	}
};
static_assert(alignof(UMetasoundOutputBlueprintAccess) == 0x000008, "Wrong alignment on UMetasoundOutputBlueprintAccess");
static_assert(sizeof(UMetasoundOutputBlueprintAccess) == 0x000028, "Wrong size on UMetasoundOutputBlueprintAccess");

// Class MetasoundEngine.MetaSoundOutputSubsystem
// 0x0010 (0x0050 - 0x0040)
class UMetaSoundOutputSubsystem final : public UTickableWorldSubsystem
{
public:
	TArray<class UMetasoundGeneratorHandle*>      TrackedGenerators;                                 // 0x0040(0x0010)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	bool WatchOutput(class UAudioComponent* AudioComponent, class FName OutputName, TDelegate<void(class FName OutputName, struct FMetaSoundOutput& Output)>& OnOutputValueChanged, class FName AnalyzerName, class FName AnalyzerOutputName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundOutputSubsystem">();
	}
	static class UMetaSoundOutputSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundOutputSubsystem>();
	}
};
static_assert(alignof(UMetaSoundOutputSubsystem) == 0x000008, "Wrong alignment on UMetaSoundOutputSubsystem");
static_assert(sizeof(UMetaSoundOutputSubsystem) == 0x000050, "Wrong size on UMetaSoundOutputSubsystem");
static_assert(offsetof(UMetaSoundOutputSubsystem, TrackedGenerators) == 0x000040, "Member 'UMetaSoundOutputSubsystem::TrackedGenerators' has a wrong offset!");

// Class MetasoundEngine.MetaSoundSettings
// 0x0048 (0x0080 - 0x0038)
class UMetaSoundSettings final : public UDeveloperSettings
{
public:
	bool                                          bAutoUpdateEnabled;                                // 0x0038(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3E58[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMetasoundFrontendClassName>    AutoUpdateDenylist;                                // 0x0040(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist;                           // 0x0050(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                          bAutoUpdateLogWarningOnDroppedConnection;          // 0x0060(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3E59[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDirectoryPath>                 DirectoriesToRegister;                             // 0x0068(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int32                                         DenyListCacheChangeID;                             // 0x0078(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3E5A[0x4];                                     // 0x007C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundSettings">();
	}
	static class UMetaSoundSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundSettings>();
	}
};
static_assert(alignof(UMetaSoundSettings) == 0x000008, "Wrong alignment on UMetaSoundSettings");
static_assert(sizeof(UMetaSoundSettings) == 0x000080, "Wrong size on UMetaSoundSettings");
static_assert(offsetof(UMetaSoundSettings, bAutoUpdateEnabled) == 0x000038, "Member 'UMetaSoundSettings::bAutoUpdateEnabled' has a wrong offset!");
static_assert(offsetof(UMetaSoundSettings, AutoUpdateDenylist) == 0x000040, "Member 'UMetaSoundSettings::AutoUpdateDenylist' has a wrong offset!");
static_assert(offsetof(UMetaSoundSettings, AutoUpdateAssetDenylist) == 0x000050, "Member 'UMetaSoundSettings::AutoUpdateAssetDenylist' has a wrong offset!");
static_assert(offsetof(UMetaSoundSettings, bAutoUpdateLogWarningOnDroppedConnection) == 0x000060, "Member 'UMetaSoundSettings::bAutoUpdateLogWarningOnDroppedConnection' has a wrong offset!");
static_assert(offsetof(UMetaSoundSettings, DirectoriesToRegister) == 0x000068, "Member 'UMetaSoundSettings::DirectoriesToRegister' has a wrong offset!");
static_assert(offsetof(UMetaSoundSettings, DenyListCacheChangeID) == 0x000078, "Member 'UMetaSoundSettings::DenyListCacheChangeID' has a wrong offset!");

// Class MetasoundEngine.MetasoundEditorGraphBase
// 0x0000 (0x0060 - 0x0060)
class UMetasoundEditorGraphBase final : public UEdGraph
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetasoundEditorGraphBase">();
	}
	static class UMetasoundEditorGraphBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetasoundEditorGraphBase>();
	}
};
static_assert(alignof(UMetasoundEditorGraphBase) == 0x000008, "Wrong alignment on UMetasoundEditorGraphBase");
static_assert(sizeof(UMetasoundEditorGraphBase) == 0x000060, "Wrong size on UMetasoundEditorGraphBase");

// Class MetasoundEngine.MetaSoundPatch
// 0x0338 (0x0360 - 0x0028)
class UMetaSoundPatch final : public UObject
{
public:
	uint8                                         Pad_3E5B[0x70];                                    // 0x0028(0x0070)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMetasoundFrontendDocument             RootMetaSoundDocument;                             // 0x0098(0x01C8)(Edit, Protected, NativeAccessSpecifierProtected)
	TSet<class FString>                           ReferencedAssetClassKeys;                          // 0x0260(0x0050)(Protected, NativeAccessSpecifierProtected)
	TSet<class UObject*>                          ReferencedAssetClassObjects;                       // 0x02B0(0x0050)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSet<struct FSoftObjectPath>                  ReferenceAssetClassCache;                          // 0x0300(0x0050)(Protected, NativeAccessSpecifierProtected)
	struct FGuid                                  AssetClassID;                                      // 0x0350(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundPatch">();
	}
	static class UMetaSoundPatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundPatch>();
	}
};
static_assert(alignof(UMetaSoundPatch) == 0x000008, "Wrong alignment on UMetaSoundPatch");
static_assert(sizeof(UMetaSoundPatch) == 0x000360, "Wrong size on UMetaSoundPatch");
static_assert(offsetof(UMetaSoundPatch, RootMetaSoundDocument) == 0x000098, "Member 'UMetaSoundPatch::RootMetaSoundDocument' has a wrong offset!");
static_assert(offsetof(UMetaSoundPatch, ReferencedAssetClassKeys) == 0x000260, "Member 'UMetaSoundPatch::ReferencedAssetClassKeys' has a wrong offset!");
static_assert(offsetof(UMetaSoundPatch, ReferencedAssetClassObjects) == 0x0002B0, "Member 'UMetaSoundPatch::ReferencedAssetClassObjects' has a wrong offset!");
static_assert(offsetof(UMetaSoundPatch, ReferenceAssetClassCache) == 0x000300, "Member 'UMetaSoundPatch::ReferenceAssetClassCache' has a wrong offset!");
static_assert(offsetof(UMetaSoundPatch, AssetClassID) == 0x000350, "Member 'UMetaSoundPatch::AssetClassID' has a wrong offset!");

// Class MetasoundEngine.MetaSoundAssetSubsystem
// 0x01B0 (0x01E0 - 0x0030)
class UMetaSoundAssetSubsystem final : public UEngineSubsystem
{
public:
	uint8                                         Pad_3E5C[0x8];                                     // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMetaSoundAsyncAssetDependencies> LoadingDependencies;                               // 0x0038(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3E5D[0x198];                                   // 0x0048(0x0198)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void RegisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory>& Directories);
	void UnregisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory>& Directories);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundAssetSubsystem">();
	}
	static class UMetaSoundAssetSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundAssetSubsystem>();
	}
};
static_assert(alignof(UMetaSoundAssetSubsystem) == 0x000008, "Wrong alignment on UMetaSoundAssetSubsystem");
static_assert(sizeof(UMetaSoundAssetSubsystem) == 0x0001E0, "Wrong size on UMetaSoundAssetSubsystem");
static_assert(offsetof(UMetaSoundAssetSubsystem, LoadingDependencies) == 0x000038, "Member 'UMetaSoundAssetSubsystem::LoadingDependencies' has a wrong offset!");

// Class MetasoundEngine.MetaSoundBuilderBase
// 0x0038 (0x0060 - 0x0028)
class UMetaSoundBuilderBase : public UObject
{
public:
	struct FMetaSoundFrontendDocumentBuilder      Builder;                                           // 0x0028(0x0030)(Protected, NativeAccessSpecifierProtected)
	bool                                          bIsAttached;                                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3E5E[0x7];                                     // 0x0059(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	struct FMetaSoundBuilderNodeOutputHandle AddGraphInputNode(class FName Param_Name, class FName DataType, const struct FMetasoundFrontendLiteral& DefaultValue, EMetaSoundBuilderResult* OutResult, bool bIsConstructorInput);
	struct FMetaSoundBuilderNodeInputHandle AddGraphOutputNode(class FName Param_Name, class FName DataType, const struct FMetasoundFrontendLiteral& DefaultValue, EMetaSoundBuilderResult* OutResult, bool bIsConstructorOutput);
	void AddInterface(class FName InterfaceName, EMetaSoundBuilderResult* OutResult);
	struct FMetaSoundNodeHandle AddNode(TScriptInterface<class IMetaSoundDocumentInterface>& NodeClass, EMetaSoundBuilderResult* OutResult);
	struct FMetaSoundNodeHandle AddNodeByClassName(struct FMetasoundFrontendClassName& ClassName, int32 MajorVersion, EMetaSoundBuilderResult* OutResult);
	TArray<struct FMetaSoundBuilderNodeOutputHandle> ConnectNodeInputsToMatchingGraphInterfaceInputs(struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* OutResult);
	void ConnectNodeInputToGraphInput(class FName GraphInputName, struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult* OutResult);
	TArray<struct FMetaSoundBuilderNodeInputHandle> ConnectNodeOutputsToMatchingGraphInterfaceOutputs(struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* OutResult);
	void ConnectNodeOutputToGraphOutput(class FName GraphOutputName, struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult* OutResult);
	void ConnectNodes(struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult* OutResult);
	void ConnectNodesByInterfaceBindings(struct FMetaSoundNodeHandle& FromNodeHandle, struct FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult* OutResult);
	void ConvertFromPreset(EMetaSoundBuilderResult* OutResult);
	void ConvertToPreset(TScriptInterface<class IMetaSoundDocumentInterface>& ReferencedNodeClass, EMetaSoundBuilderResult* OutResult);
	void DisconnectNodeInput(struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult* OutResult);
	void DisconnectNodeOutput(struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult* OutResult);
	void DisconnectNodes(struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult* OutResult);
	void DisconnectNodesByInterfaceBindings(struct FMetaSoundNodeHandle& FromNodeHandle, struct FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult* OutResult);
	struct FMetaSoundNodeHandle FindGraphInputNode(class FName InputName, EMetaSoundBuilderResult* OutResult);
	struct FMetaSoundNodeHandle FindGraphOutputNode(class FName OutputName, EMetaSoundBuilderResult* OutResult);
	TArray<struct FMetaSoundNodeHandle> FindInterfaceInputNodes(class FName InterfaceName, EMetaSoundBuilderResult* OutResult);
	TArray<struct FMetaSoundNodeHandle> FindInterfaceOutputNodes(class FName InterfaceName, EMetaSoundBuilderResult* OutResult);
	struct FMetasoundFrontendVersion FindNodeClassVersion(struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* OutResult);
	struct FMetaSoundBuilderNodeInputHandle FindNodeInputByName(struct FMetaSoundNodeHandle& NodeHandle, class FName InputName, EMetaSoundBuilderResult* OutResult);
	struct FMetaSoundNodeHandle FindNodeInputParent(struct FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult* OutResult);
	TArray<struct FMetaSoundBuilderNodeInputHandle> FindNodeInputs(struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* OutResult);
	TArray<struct FMetaSoundBuilderNodeInputHandle> FindNodeInputsByDataType(struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* OutResult, class FName DataType);
	struct FMetaSoundBuilderNodeOutputHandle FindNodeOutputByName(struct FMetaSoundNodeHandle& NodeHandle, class FName OutputName, EMetaSoundBuilderResult* OutResult);
	struct FMetaSoundNodeHandle FindNodeOutputParent(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, EMetaSoundBuilderResult* OutResult);
	TArray<struct FMetaSoundBuilderNodeOutputHandle> FindNodeOutputs(struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* OutResult);
	TArray<struct FMetaSoundBuilderNodeOutputHandle> FindNodeOutputsByDataType(struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* OutResult, class FName DataType);
	struct FMetasoundFrontendLiteral GetNodeInputClassDefault(struct FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult* OutResult);
	void GetNodeInputData(struct FMetaSoundBuilderNodeInputHandle& InputHandle, class FName* Param_Name, class FName* DataType, EMetaSoundBuilderResult* OutResult);
	struct FMetasoundFrontendLiteral GetNodeInputDefault(struct FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult* OutResult);
	void GetNodeOutputData(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, class FName* Param_Name, class FName* DataType, EMetaSoundBuilderResult* OutResult);
	void RemoveGraphInput(class FName Param_Name, EMetaSoundBuilderResult* OutResult);
	void RemoveGraphOutput(class FName Param_Name, EMetaSoundBuilderResult* OutResult);
	void RemoveInterface(class FName InterfaceName, EMetaSoundBuilderResult* OutResult);
	void RemoveNode(struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* OutResult);
	void RemoveNodeInputDefault(struct FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult* OutResult);
	void SetGraphInputDefault(class FName InputName, struct FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult* OutResult);
	void SetNodeInputDefault(struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, struct FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult* OutResult);

	bool ContainsNode(struct FMetaSoundNodeHandle& Node) const;
	bool ContainsNodeInput(struct FMetaSoundBuilderNodeInputHandle& Input) const;
	bool ContainsNodeOutput(struct FMetaSoundBuilderNodeOutputHandle& Output) const;
	class UObject* GetReferencedPresetAsset() const;
	bool InterfaceIsDeclared(class FName InterfaceName) const;
	bool IsPreset() const;
	bool NodeInputIsConnected(struct FMetaSoundBuilderNodeInputHandle& InputHandle) const;
	bool NodeOutputIsConnected(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle) const;
	bool NodesAreConnected(struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, struct FMetaSoundBuilderNodeInputHandle& InputHandle) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundBuilderBase">();
	}
	static class UMetaSoundBuilderBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundBuilderBase>();
	}
};
static_assert(alignof(UMetaSoundBuilderBase) == 0x000008, "Wrong alignment on UMetaSoundBuilderBase");
static_assert(sizeof(UMetaSoundBuilderBase) == 0x000060, "Wrong size on UMetaSoundBuilderBase");
static_assert(offsetof(UMetaSoundBuilderBase, Builder) == 0x000028, "Member 'UMetaSoundBuilderBase::Builder' has a wrong offset!");
static_assert(offsetof(UMetaSoundBuilderBase, bIsAttached) == 0x000058, "Member 'UMetaSoundBuilderBase::bIsAttached' has a wrong offset!");

// Class MetasoundEngine.MetaSoundPatchBuilder
// 0x0000 (0x0060 - 0x0060)
class UMetaSoundPatchBuilder final : public UMetaSoundBuilderBase
{
public:
	TScriptInterface<class IMetaSoundDocumentInterface> Build(class UObject* Parent, struct FMetaSoundBuilderOptions& Options) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundPatchBuilder">();
	}
	static class UMetaSoundPatchBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundPatchBuilder>();
	}
};
static_assert(alignof(UMetaSoundPatchBuilder) == 0x000008, "Wrong alignment on UMetaSoundPatchBuilder");
static_assert(sizeof(UMetaSoundPatchBuilder) == 0x000060, "Wrong size on UMetaSoundPatchBuilder");

// Class MetasoundEngine.MetaSoundSourceBuilder
// 0x0008 (0x0068 - 0x0060)
class UMetaSoundSourceBuilder final : public UMetaSoundBuilderBase
{
public:
	uint8                                         Pad_3E93[0x8];                                     // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Audition(class UObject* Parent, class UAudioComponent* AudioComponent, TDelegate<void(class UMetasoundGeneratorHandle* GeneratorHandle)> OnCreateGenerator, bool bLiveUpdatesEnabled);
	void SetFormat(EMetaSoundOutputAudioFormat OutputFormat, EMetaSoundBuilderResult* OutResult);

	TScriptInterface<class IMetaSoundDocumentInterface> Build(class UObject* Parent, struct FMetaSoundBuilderOptions& Options) const;
	bool GetLiveUpdatesEnabled() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundSourceBuilder">();
	}
	static class UMetaSoundSourceBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundSourceBuilder>();
	}
};
static_assert(alignof(UMetaSoundSourceBuilder) == 0x000008, "Wrong alignment on UMetaSoundSourceBuilder");
static_assert(sizeof(UMetaSoundSourceBuilder) == 0x000068, "Wrong size on UMetaSoundSourceBuilder");

// Class MetasoundEngine.MetaSoundBuilderSubsystem
// 0x00A8 (0x00D8 - 0x0030)
class UMetaSoundBuilderSubsystem final : public UEngineSubsystem
{
public:
	uint8                                         Pad_3E95[0x8];                                     // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class UMetaSoundBuilderBase*> NamedBuilders;                                     // 0x0038(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FName, TWeakObjectPtr<class UMetaSoundBuilderBase>> AssetBuilders;                                     // 0x0088(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	struct FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(TArray<bool>& Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(TArray<float>& Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(TArray<int32>& Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32 Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(struct FAudioParameter& Param);
	struct FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(TArray<class UObject*>& Value);
	struct FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(class UObject* Value);
	class UMetaSoundPatchBuilder* CreatePatchBuilder(class FName BuilderName, EMetaSoundBuilderResult* OutResult);
	class UMetaSoundPatchBuilder* CreatePatchPresetBuilder(class FName BuilderName, TScriptInterface<class IMetaSoundDocumentInterface>& ReferencedPatchClass, EMetaSoundBuilderResult* OutResult);
	class UMetaSoundSourceBuilder* CreateSourceBuilder(class FName BuilderName, struct FMetaSoundBuilderNodeOutputHandle* OnPlayNodeOutput, struct FMetaSoundBuilderNodeInputHandle* OnFinishedNodeInput, TArray<struct FMetaSoundBuilderNodeInputHandle>* AudioOutNodeInputs, EMetaSoundBuilderResult* OutResult, EMetaSoundOutputAudioFormat OutputFormat, bool bIsOneShot);
	class UMetaSoundSourceBuilder* CreateSourcePresetBuilder(class FName BuilderName, TScriptInterface<class IMetaSoundDocumentInterface>& ReferencedSourceClass, EMetaSoundBuilderResult* OutResult);
	struct FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(TArray<class FString>& Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(const class FString& Value, class FName* DataType);
	class UMetaSoundBuilderBase* FindBuilder(class FName BuilderName);
	class UMetaSoundPatchBuilder* FindPatchBuilder(class FName BuilderName);
	class UMetaSoundSourceBuilder* FindSourceBuilder(class FName BuilderName);
	void RegisterBuilder(class FName BuilderName, class UMetaSoundBuilderBase* Builder);
	void RegisterPatchBuilder(class FName BuilderName, class UMetaSoundPatchBuilder* Builder);
	void RegisterSourceBuilder(class FName BuilderName, class UMetaSoundSourceBuilder* Builder);
	bool UnregisterBuilder(class FName BuilderName);
	bool UnregisterPatchBuilder(class FName BuilderName);
	bool UnregisterSourceBuilder(class FName BuilderName);

	bool IsInterfaceRegistered(class FName InInterfaceName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundBuilderSubsystem">();
	}
	static class UMetaSoundBuilderSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundBuilderSubsystem>();
	}
};
static_assert(alignof(UMetaSoundBuilderSubsystem) == 0x000008, "Wrong alignment on UMetaSoundBuilderSubsystem");
static_assert(sizeof(UMetaSoundBuilderSubsystem) == 0x0000D8, "Wrong size on UMetaSoundBuilderSubsystem");
static_assert(offsetof(UMetaSoundBuilderSubsystem, NamedBuilders) == 0x000038, "Member 'UMetaSoundBuilderSubsystem::NamedBuilders' has a wrong offset!");
static_assert(offsetof(UMetaSoundBuilderSubsystem, AssetBuilders) == 0x000088, "Member 'UMetaSoundBuilderSubsystem::AssetBuilders' has a wrong offset!");

// Class MetasoundEngine.MetaSoundSource
// 0x0410 (0x0890 - 0x0480)
class alignas(0x10) UMetaSoundSource final : public USoundWaveProcedural
{
public:
	uint8                                         Pad_3EA2[0x70];                                    // 0x0480(0x0070)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMetasoundFrontendDocument             RootMetaSoundDocument;                             // 0x04F0(0x01C8)(Edit, Protected, NativeAccessSpecifierProtected)
	TSet<class FString>                           ReferencedAssetClassKeys;                          // 0x06B8(0x0050)(Protected, NativeAccessSpecifierProtected)
	TSet<class UObject*>                          ReferencedAssetClassObjects;                       // 0x0708(0x0050)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSet<struct FSoftObjectPath>                  ReferenceAssetClassCache;                          // 0x0758(0x0050)(Protected, NativeAccessSpecifierProtected)
	EMetaSoundOutputAudioFormat                   OutputFormat;                                      // 0x07A8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3EA3[0x3];                                     // 0x07A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  AssetClassID;                                      // 0x07AC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3EA4[0xD4];                                    // 0x07BC(0x00D4)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundSource">();
	}
	static class UMetaSoundSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundSource>();
	}
};
static_assert(alignof(UMetaSoundSource) == 0x000010, "Wrong alignment on UMetaSoundSource");
static_assert(sizeof(UMetaSoundSource) == 0x000890, "Wrong size on UMetaSoundSource");
static_assert(offsetof(UMetaSoundSource, RootMetaSoundDocument) == 0x0004F0, "Member 'UMetaSoundSource::RootMetaSoundDocument' has a wrong offset!");
static_assert(offsetof(UMetaSoundSource, ReferencedAssetClassKeys) == 0x0006B8, "Member 'UMetaSoundSource::ReferencedAssetClassKeys' has a wrong offset!");
static_assert(offsetof(UMetaSoundSource, ReferencedAssetClassObjects) == 0x000708, "Member 'UMetaSoundSource::ReferencedAssetClassObjects' has a wrong offset!");
static_assert(offsetof(UMetaSoundSource, ReferenceAssetClassCache) == 0x000758, "Member 'UMetaSoundSource::ReferenceAssetClassCache' has a wrong offset!");
static_assert(offsetof(UMetaSoundSource, OutputFormat) == 0x0007A8, "Member 'UMetaSoundSource::OutputFormat' has a wrong offset!");
static_assert(offsetof(UMetaSoundSource, AssetClassID) == 0x0007AC, "Member 'UMetaSoundSource::AssetClassID' has a wrong offset!");

}

