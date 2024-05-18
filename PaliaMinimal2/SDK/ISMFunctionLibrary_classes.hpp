#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ISMFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ISMFunctionLibrary.ISMFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UISMFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void AddInstanceOfStaticMeshToISM(class UStaticMesh* StaticMesh, const struct FVector& TransformLocation, const struct FRotator& TransformRotation, const struct FVector& TransformScale, class UObject* __WorldContext, bool* Success, class AActor* ISMActor, class UHierarchicalInstancedStaticMeshComponent* ISMComponent, class AActor* CallFunc_FindISMActor_ISMActor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UHierarchicalInstancedStaticMeshComponent* CallFunc_Find_or_Create_ISMComponent_ISMComponent);
	static void AddInstanceToISM(class UHierarchicalInstancedStaticMeshComponent* ISMComponent, const struct FVector& TransformLocation, const struct FRotator& TransformRotation, const struct FVector& TransformScale, class UObject* __WorldContext, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 CallFunc_AddInstance_ReturnValue);
	static void Create_ISMComponent(class AActor* ISMActor, class UStaticMesh* StaticMesh, class UObject* __WorldContext, class UHierarchicalInstancedStaticMeshComponent** ISMComponent, class UHierarchicalInstancedStaticMeshComponent* NewISMComponent, class UHierarchicalInstancedStaticMeshComponent* CallFunc_AddComponentByClass_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
	static void Find_ISMComponent(class AActor* ISMActor, class UStaticMesh* StaticMesh, const struct FVector& Location, class UObject* __WorldContext, class UHierarchicalInstancedStaticMeshComponent** ISMComponent, const TArray<class USceneComponent*>& ChildrenComponents, const struct FVector& CurrentComponentLocation, class UHierarchicalInstancedStaticMeshComponent* CurrentISMComponent, class UHierarchicalInstancedStaticMeshComponent* CallFunc_NativeFindISMComponent_ReturnValue);
	static void Find_or_Create_ISMComponent(class AActor* ISMActor, class UStaticMesh* StaticMesh, const struct FVector& Location, class UObject* __WorldContext, class UHierarchicalInstancedStaticMeshComponent** ISMComponent, class UHierarchicalInstancedStaticMeshComponent* FoundISMComponent, class UHierarchicalInstancedStaticMeshComponent* CallFunc_Find_ISMComponent_ISMComponent, class UHierarchicalInstancedStaticMeshComponent* CallFunc_Create_ISMComponent_ISMComponent, bool CallFunc_IsValid_ReturnValue);
	static void FindISMActor(class UObject* __WorldContext, class AActor** ISMActor, TSoftObjectPtr<class AActor> CallFunc_GetRuntimeISMActor_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess);
	static void GetGridXYForLocation(const struct FVector& Location, class UObject* __WorldContext, int32* GridX, int32* GridY, double GridSize, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_1);
	static void RemoveInstanceFromISM(class UHierarchicalInstancedStaticMeshComponent* ISMComponent, const struct FVector& Location, class UObject* __WorldContext, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FBox& CallFunc_MakeBox_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<int32>& CallFunc_GetInstancesOverlappingBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_RemoveInstance_ReturnValue);
	static void RemoveInstanceOfStaticMeshFromISM(class UStaticMesh* StaticMesh, const struct FVector& Location, class UObject* __WorldContext, class AActor* ISMActor, class UHierarchicalInstancedStaticMeshComponent* ISMComponent, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_FindISMActor_ISMActor, class UHierarchicalInstancedStaticMeshComponent* CallFunc_Find_ISMComponent_ISMComponent, bool CallFunc_IsValid_ReturnValue_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ISMFunctionLibrary_C">();
	}
	static class UISMFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UISMFunctionLibrary_C>();
	}
};
static_assert(alignof(UISMFunctionLibrary_C) == 0x000008, "Wrong alignment on UISMFunctionLibrary_C");
static_assert(sizeof(UISMFunctionLibrary_C) == 0x000028, "Wrong size on UISMFunctionLibrary_C");

}

