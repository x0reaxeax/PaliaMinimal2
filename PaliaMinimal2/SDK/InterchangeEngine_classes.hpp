#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InterchangeEngine

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "InterchangeCore_structs.hpp"
#include "InterchangeCore_classes.hpp"
#include "InterchangeEngine_structs.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class InterchangeEngine.InterchangeBlueprintPipelineBase
// 0x0000 (0x00A8 - 0x00A8)
class UInterchangeBlueprintPipelineBase final : public UBlueprint
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeBlueprintPipelineBase">();
	}
	static class UInterchangeBlueprintPipelineBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeBlueprintPipelineBase>();
	}
};
static_assert(alignof(UInterchangeBlueprintPipelineBase) == 0x000008, "Wrong alignment on UInterchangeBlueprintPipelineBase");
static_assert(sizeof(UInterchangeBlueprintPipelineBase) == 0x0000A8, "Wrong size on UInterchangeBlueprintPipelineBase");

// Class InterchangeEngine.InterchangeFilePickerBase
// 0x0000 (0x0028 - 0x0028)
class UInterchangeFilePickerBase final : public UObject
{
public:
	bool ScriptedFilePickerForTranslatorAssetType(EInterchangeTranslatorAssetType TranslatorAssetType, struct FInterchangeFilePickerParameters* Parameters, TArray<class FString>* OutFilenames);
	bool ScriptedFilePickerForTranslatorType(EInterchangeTranslatorType TranslatorType, struct FInterchangeFilePickerParameters* Parameters, TArray<class FString>* OutFilenames);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeFilePickerBase">();
	}
	static class UInterchangeFilePickerBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeFilePickerBase>();
	}
};
static_assert(alignof(UInterchangeFilePickerBase) == 0x000008, "Wrong alignment on UInterchangeFilePickerBase");
static_assert(sizeof(UInterchangeFilePickerBase) == 0x000028, "Wrong size on UInterchangeFilePickerBase");

// Class InterchangeEngine.InterchangePipelineConfigurationBase
// 0x0000 (0x0028 - 0x0028)
class UInterchangePipelineConfigurationBase final : public UObject
{
public:
	EInterchangePipelineConfigurationDialogResult ScriptedShowPipelineConfigurationDialog(TArray<struct FInterchangeStackInfo>* PipelineStacks, TArray<class UInterchangePipelineBase*>* OutPipelines, class UInterchangeSourceData* SourceData);
	EInterchangePipelineConfigurationDialogResult ScriptedShowReimportPipelineConfigurationDialog(TArray<struct FInterchangeStackInfo>* PipelineStacks, TArray<class UInterchangePipelineBase*>* OutPipelines, class UInterchangeSourceData* SourceData);
	EInterchangePipelineConfigurationDialogResult ScriptedShowScenePipelineConfigurationDialog(TArray<struct FInterchangeStackInfo>* PipelineStacks, TArray<class UInterchangePipelineBase*>* OutPipelines, class UInterchangeSourceData* SourceData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangePipelineConfigurationBase">();
	}
	static class UInterchangePipelineConfigurationBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangePipelineConfigurationBase>();
	}
};
static_assert(alignof(UInterchangePipelineConfigurationBase) == 0x000008, "Wrong alignment on UInterchangePipelineConfigurationBase");
static_assert(sizeof(UInterchangePipelineConfigurationBase) == 0x000028, "Wrong size on UInterchangePipelineConfigurationBase");

// Class InterchangeEngine.InterchangeProjectSettings
// 0x0208 (0x0240 - 0x0038)
class UInterchangeProjectSettings final : public UDeveloperSettings
{
public:
	struct FInterchangeContentImportSettings      ContentImportSettings;                             // 0x0038(0x0128)(Edit, Config, NativeAccessSpecifierPublic)
	struct FInterchangeImportSettings             SceneImportSettings;                               // 0x0160(0x0088)(Edit, Config, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   FilePickerClass;                                   // 0x01E8(0x0028)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing; // 0x0210(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C49[0x7];                                     // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   GenericPipelineClass;                              // 0x0218(0x0028)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeProjectSettings">();
	}
	static class UInterchangeProjectSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeProjectSettings>();
	}
};
static_assert(alignof(UInterchangeProjectSettings) == 0x000008, "Wrong alignment on UInterchangeProjectSettings");
static_assert(sizeof(UInterchangeProjectSettings) == 0x000240, "Wrong size on UInterchangeProjectSettings");
static_assert(offsetof(UInterchangeProjectSettings, ContentImportSettings) == 0x000038, "Member 'UInterchangeProjectSettings::ContentImportSettings' has a wrong offset!");
static_assert(offsetof(UInterchangeProjectSettings, SceneImportSettings) == 0x000160, "Member 'UInterchangeProjectSettings::SceneImportSettings' has a wrong offset!");
static_assert(offsetof(UInterchangeProjectSettings, FilePickerClass) == 0x0001E8, "Member 'UInterchangeProjectSettings::FilePickerClass' has a wrong offset!");
static_assert(offsetof(UInterchangeProjectSettings, bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing) == 0x000210, "Member 'UInterchangeProjectSettings::bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing' has a wrong offset!");
static_assert(offsetof(UInterchangeProjectSettings, GenericPipelineClass) == 0x000218, "Member 'UInterchangeProjectSettings::GenericPipelineClass' has a wrong offset!");

// Class InterchangeEngine.InterchangePythonPipelineBase
// 0x0000 (0x00E8 - 0x00E8)
class UInterchangePythonPipelineBase final : public UInterchangePipelineBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangePythonPipelineBase">();
	}
	static class UInterchangePythonPipelineBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangePythonPipelineBase>();
	}
};
static_assert(alignof(UInterchangePythonPipelineBase) == 0x000008, "Wrong alignment on UInterchangePythonPipelineBase");
static_assert(sizeof(UInterchangePythonPipelineBase) == 0x0000E8, "Wrong size on UInterchangePythonPipelineBase");

// Class InterchangeEngine.InterchangePythonPipelineAsset
// 0x0040 (0x0068 - 0x0028)
class UInterchangePythonPipelineAsset final : public UObject
{
public:
	TSoftClassPtr<class UClass>                   PythonClass;                                       // 0x0028(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangePythonPipelineBase*         GeneratedPipeline;                                 // 0x0050(0x0008)(Edit, ZeroConstructor, Transient, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 JsonDefaultProperties;                             // 0x0058(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangePythonPipelineAsset">();
	}
	static class UInterchangePythonPipelineAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangePythonPipelineAsset>();
	}
};
static_assert(alignof(UInterchangePythonPipelineAsset) == 0x000008, "Wrong alignment on UInterchangePythonPipelineAsset");
static_assert(sizeof(UInterchangePythonPipelineAsset) == 0x000068, "Wrong size on UInterchangePythonPipelineAsset");
static_assert(offsetof(UInterchangePythonPipelineAsset, PythonClass) == 0x000028, "Member 'UInterchangePythonPipelineAsset::PythonClass' has a wrong offset!");
static_assert(offsetof(UInterchangePythonPipelineAsset, GeneratedPipeline) == 0x000050, "Member 'UInterchangePythonPipelineAsset::GeneratedPipeline' has a wrong offset!");
static_assert(offsetof(UInterchangePythonPipelineAsset, JsonDefaultProperties) == 0x000058, "Member 'UInterchangePythonPipelineAsset::JsonDefaultProperties' has a wrong offset!");

// Class InterchangeEngine.InterchangeSceneImportAsset
// 0x0008 (0x0030 - 0x0028)
class UInterchangeSceneImportAsset final : public UObject
{
public:
	uint8                                         Pad_3C4A[0x8];                                     // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeSceneImportAsset">();
	}
	static class UInterchangeSceneImportAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeSceneImportAsset>();
	}
};
static_assert(alignof(UInterchangeSceneImportAsset) == 0x000008, "Wrong alignment on UInterchangeSceneImportAsset");
static_assert(sizeof(UInterchangeSceneImportAsset) == 0x000030, "Wrong size on UInterchangeSceneImportAsset");

// Class InterchangeEngine.InterchangeAssetImportData
// 0x0088 (0x00B0 - 0x0028)
class UInterchangeAssetImportData final : public UAssetImportData
{
public:
	struct FSoftObjectPath                        SceneImportAsset;                                  // 0x0028(0x0020)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 NodeUniqueID;                                      // 0x0048(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeBaseNodeContainer*          NodeContainer;                                     // 0x0058(0x0008)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                        Pipelines;                                         // 0x0060(0x0010)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UInterchangeBaseNodeContainer*          TransientNodeContainer;                            // 0x0070(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                        TransientPipelines;                                // 0x0078(0x0010)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3C4B[0x28];                                    // 0x0088(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UInterchangeBaseNodeContainer* GetNodeContainer() const;
	int32 GetNumberOfPipelines() const;
	TArray<class UObject*> GetPipelines() const;
	class UInterchangeFactoryBaseNode* GetStoredFactoryNode(const class FString& InNodeUniqueId) const;
	const class UInterchangeBaseNode* GetStoredNode(const class FString& InNodeUniqueId) const;
	TArray<class FString> ScriptExtractDisplayLabels() const;
	TArray<class FString> ScriptExtractFilenames() const;
	class FString ScriptGetFirstFilename() const;
	void SetNodeContainer(class UInterchangeBaseNodeContainer* InNodeContainer) const;
	void SetPipelines(TArray<class UObject*>& InPipelines) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeAssetImportData">();
	}
	static class UInterchangeAssetImportData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeAssetImportData>();
	}
};
static_assert(alignof(UInterchangeAssetImportData) == 0x000008, "Wrong alignment on UInterchangeAssetImportData");
static_assert(sizeof(UInterchangeAssetImportData) == 0x0000B0, "Wrong size on UInterchangeAssetImportData");
static_assert(offsetof(UInterchangeAssetImportData, SceneImportAsset) == 0x000028, "Member 'UInterchangeAssetImportData::SceneImportAsset' has a wrong offset!");
static_assert(offsetof(UInterchangeAssetImportData, NodeUniqueID) == 0x000048, "Member 'UInterchangeAssetImportData::NodeUniqueID' has a wrong offset!");
static_assert(offsetof(UInterchangeAssetImportData, NodeContainer) == 0x000058, "Member 'UInterchangeAssetImportData::NodeContainer' has a wrong offset!");
static_assert(offsetof(UInterchangeAssetImportData, Pipelines) == 0x000060, "Member 'UInterchangeAssetImportData::Pipelines' has a wrong offset!");
static_assert(offsetof(UInterchangeAssetImportData, TransientNodeContainer) == 0x000070, "Member 'UInterchangeAssetImportData::TransientNodeContainer' has a wrong offset!");
static_assert(offsetof(UInterchangeAssetImportData, TransientPipelines) == 0x000078, "Member 'UInterchangeAssetImportData::TransientPipelines' has a wrong offset!");

// Class InterchangeEngine.InterchangePipelineStackOverride
// 0x0010 (0x0038 - 0x0028)
class UInterchangePipelineStackOverride final : public UObject
{
public:
	TArray<struct FSoftObjectPath>                OverridePipelines;                                 // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	void AddBlueprintPipeline(class UInterchangeBlueprintPipelineBase* PipelineBase);
	void AddPipeline(class UInterchangePipelineBase* PipelineBase);
	void AddPythonPipeline(class UInterchangePythonPipelineBase* PipelineBase);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangePipelineStackOverride">();
	}
	static class UInterchangePipelineStackOverride* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangePipelineStackOverride>();
	}
};
static_assert(alignof(UInterchangePipelineStackOverride) == 0x000008, "Wrong alignment on UInterchangePipelineStackOverride");
static_assert(sizeof(UInterchangePipelineStackOverride) == 0x000038, "Wrong size on UInterchangePipelineStackOverride");
static_assert(offsetof(UInterchangePipelineStackOverride, OverridePipelines) == 0x000028, "Member 'UInterchangePipelineStackOverride::OverridePipelines' has a wrong offset!");

// Class InterchangeEngine.InterchangeManager
// 0x01B8 (0x01E0 - 0x0028)
class alignas(0x10) UInterchangeManager final : public UObject
{
public:
	uint8                                         Pad_3C4C[0xB0];                                    // 0x0028(0x00B0)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<TSubclassOf<class UObject>>              RegisteredTranslatorsClass;                        // 0x00D8(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class UObject>, TSubclassOf<class UObject>> RegisteredFactoryClasses;                          // 0x0128(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class UObject>, class UInterchangeWriterBase*> RegisteredWriters;                                 // 0x0178(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3C4D[0x18];                                    // 0x01C8(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UInterchangeSourceData* CreateSourceData(const class FString& InFilename);
	static class UInterchangeManager* GetInterchangeManagerScripted();

	bool ExportAsset(class UObject* Asset, bool bIsAutomated);
	bool ExportScene(class UObject* World, bool bIsAutomated);
	bool ImportAsset(const class FString& ContentPath, class UInterchangeSourceData* SourceData, struct FImportAssetParameters& ImportAssetParameters);
	bool ImportScene(const class FString& ContentPath, class UInterchangeSourceData* SourceData, struct FImportAssetParameters& ImportAssetParameters);

	const class UClass* GetRegisteredFactoryClass(class UClass* ClassToMake) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeManager">();
	}
	static class UInterchangeManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeManager>();
	}
};
static_assert(alignof(UInterchangeManager) == 0x000010, "Wrong alignment on UInterchangeManager");
static_assert(sizeof(UInterchangeManager) == 0x0001E0, "Wrong size on UInterchangeManager");
static_assert(offsetof(UInterchangeManager, RegisteredTranslatorsClass) == 0x0000D8, "Member 'UInterchangeManager::RegisteredTranslatorsClass' has a wrong offset!");
static_assert(offsetof(UInterchangeManager, RegisteredFactoryClasses) == 0x000128, "Member 'UInterchangeManager::RegisteredFactoryClasses' has a wrong offset!");
static_assert(offsetof(UInterchangeManager, RegisteredWriters) == 0x000178, "Member 'UInterchangeManager::RegisteredWriters' has a wrong offset!");

// Class InterchangeEngine.InterchangeMeshUtilities
// 0x0000 (0x0028 - 0x0028)
class UInterchangeMeshUtilities final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeMeshUtilities">();
	}
	static class UInterchangeMeshUtilities* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeMeshUtilities>();
	}
};
static_assert(alignof(UInterchangeMeshUtilities) == 0x000008, "Wrong alignment on UInterchangeMeshUtilities");
static_assert(sizeof(UInterchangeMeshUtilities) == 0x000028, "Wrong size on UInterchangeMeshUtilities");

}

