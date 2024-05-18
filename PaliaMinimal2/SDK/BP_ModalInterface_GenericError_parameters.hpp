#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ModalInterface_GenericError

#include "Basic.hpp"

#include "F_GenericErrorModalPayload_structs.hpp"


namespace SDK::Params
{

// Function BP_ModalInterface_GenericError.BP_ModalInterface_GenericError_C.SetErrorPayload
// 0x0098 (0x0098 - 0x0000)
struct BP_ModalInterface_GenericError_C_SetErrorPayload final
{
public:
	struct FF_GenericErrorModalPayload            Payload;                                           // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_ModalInterface_GenericError_C_SetErrorPayload) == 0x000008, "Wrong alignment on BP_ModalInterface_GenericError_C_SetErrorPayload");
static_assert(sizeof(BP_ModalInterface_GenericError_C_SetErrorPayload) == 0x000098, "Wrong size on BP_ModalInterface_GenericError_C_SetErrorPayload");
static_assert(offsetof(BP_ModalInterface_GenericError_C_SetErrorPayload, Payload) == 0x000000, "Member 'BP_ModalInterface_GenericError_C_SetErrorPayload::Payload' has a wrong offset!");

}

