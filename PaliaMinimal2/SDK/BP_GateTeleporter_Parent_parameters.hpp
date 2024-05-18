#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GateTeleporter_Parent

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_GateTeleporter_Parent.BP_GateTeleporter_Parent_C.Implementation_OnTeleportOverlapBegin_Server
// 0x0008 (0x0008 - 0x0000)
struct BP_GateTeleporter_Parent_C_Implementation_OnTeleportOverlapBegin_Server final
{
public:
	const class AValeriaCharacter*                TeleportedCharacter;                               // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GateTeleporter_Parent_C_Implementation_OnTeleportOverlapBegin_Server) == 0x000008, "Wrong alignment on BP_GateTeleporter_Parent_C_Implementation_OnTeleportOverlapBegin_Server");
static_assert(sizeof(BP_GateTeleporter_Parent_C_Implementation_OnTeleportOverlapBegin_Server) == 0x000008, "Wrong size on BP_GateTeleporter_Parent_C_Implementation_OnTeleportOverlapBegin_Server");
static_assert(offsetof(BP_GateTeleporter_Parent_C_Implementation_OnTeleportOverlapBegin_Server, TeleportedCharacter) == 0x000000, "Member 'BP_GateTeleporter_Parent_C_Implementation_OnTeleportOverlapBegin_Server::TeleportedCharacter' has a wrong offset!");

// Function BP_GateTeleporter_Parent.BP_GateTeleporter_Parent_C.ExecuteUbergraph_BP_GateTeleporter_Parent
// 0x0010 (0x0010 - 0x0000)
struct BP_GateTeleporter_Parent_C_ExecuteUbergraph_BP_GateTeleporter_Parent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6079[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class AValeriaCharacter*                K2Node_Event_TeleportedCharacter;                  // 0x0008(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GateTeleporter_Parent_C_ExecuteUbergraph_BP_GateTeleporter_Parent) == 0x000008, "Wrong alignment on BP_GateTeleporter_Parent_C_ExecuteUbergraph_BP_GateTeleporter_Parent");
static_assert(sizeof(BP_GateTeleporter_Parent_C_ExecuteUbergraph_BP_GateTeleporter_Parent) == 0x000010, "Wrong size on BP_GateTeleporter_Parent_C_ExecuteUbergraph_BP_GateTeleporter_Parent");
static_assert(offsetof(BP_GateTeleporter_Parent_C_ExecuteUbergraph_BP_GateTeleporter_Parent, EntryPoint) == 0x000000, "Member 'BP_GateTeleporter_Parent_C_ExecuteUbergraph_BP_GateTeleporter_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GateTeleporter_Parent_C_ExecuteUbergraph_BP_GateTeleporter_Parent, K2Node_Event_TeleportedCharacter) == 0x000008, "Member 'BP_GateTeleporter_Parent_C_ExecuteUbergraph_BP_GateTeleporter_Parent::K2Node_Event_TeleportedCharacter' has a wrong offset!");

}
