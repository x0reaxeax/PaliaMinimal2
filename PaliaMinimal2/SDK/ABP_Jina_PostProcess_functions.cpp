#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Jina_PostProcess

#include "Basic.hpp"

#include "ABP_Jina_PostProcess_classes.hpp"
#include "ABP_Jina_PostProcess_parameters.hpp"


namespace SDK
{

// Function ABP_Jina_PostProcess.ABP_Jina_PostProcess_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_Jina_PostProcess_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Jina_PostProcess_C", "AnimGraph");

	Params::ABP_Jina_PostProcess_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_Jina_PostProcess.ABP_Jina_PostProcess_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Jina_PostProcess_AnimGraphNode_LayeredBoneBlend_654F3AF147B63430A7AC85B0E527FD71
// (BlueprintEvent)

void UABP_Jina_PostProcess_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Jina_PostProcess_AnimGraphNode_LayeredBoneBlend_654F3AF147B63430A7AC85B0E527FD71()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Jina_PostProcess_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Jina_PostProcess_AnimGraphNode_LayeredBoneBlend_654F3AF147B63430A7AC85B0E527FD71");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Jina_PostProcess.ABP_Jina_PostProcess_C.ExecuteUbergraph_ABP_Jina_PostProcess
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetCurveValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Jina_PostProcess_C::ExecuteUbergraph_ABP_Jina_PostProcess(int32 EntryPoint, float CallFunc_GetCurveValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Jina_PostProcess_C", "ExecuteUbergraph_ABP_Jina_PostProcess");

	Params::ABP_Jina_PostProcess_C_ExecuteUbergraph_ABP_Jina_PostProcess Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}
