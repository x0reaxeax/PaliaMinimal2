#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemValeria

#include "Basic.hpp"

#include "OnlineSubsystemValeria_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "OnlineSubsystemUtils_structs.hpp"
#include "Engine_structs.hpp"
#include "ValeriaDTOs_structs.hpp"


namespace SDK::Params
{

// Function OnlineSubsystemValeria.OSSVAL_GetCharacterNamesByAccountIdProxy.GetCharacterNamesByAccountId
// 0x0020 (0x0020 - 0x0000)
struct OSSVAL_GetCharacterNamesByAccountIdProxy_GetCharacterNamesByAccountId final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  AccountId;                                         // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOSSVAL_GetCharacterNamesByAccountIdProxy* ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OSSVAL_GetCharacterNamesByAccountIdProxy_GetCharacterNamesByAccountId) == 0x000008, "Wrong alignment on OSSVAL_GetCharacterNamesByAccountIdProxy_GetCharacterNamesByAccountId");
static_assert(sizeof(OSSVAL_GetCharacterNamesByAccountIdProxy_GetCharacterNamesByAccountId) == 0x000020, "Wrong size on OSSVAL_GetCharacterNamesByAccountIdProxy_GetCharacterNamesByAccountId");
static_assert(offsetof(OSSVAL_GetCharacterNamesByAccountIdProxy_GetCharacterNamesByAccountId, WorldContextObject) == 0x000000, "Member 'OSSVAL_GetCharacterNamesByAccountIdProxy_GetCharacterNamesByAccountId::WorldContextObject' has a wrong offset!");
static_assert(offsetof(OSSVAL_GetCharacterNamesByAccountIdProxy_GetCharacterNamesByAccountId, AccountId) == 0x000008, "Member 'OSSVAL_GetCharacterNamesByAccountIdProxy_GetCharacterNamesByAccountId::AccountId' has a wrong offset!");
static_assert(offsetof(OSSVAL_GetCharacterNamesByAccountIdProxy_GetCharacterNamesByAccountId, ReturnValue) == 0x000018, "Member 'OSSVAL_GetCharacterNamesByAccountIdProxy_GetCharacterNamesByAccountId::ReturnValue' has a wrong offset!");

// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNamesByAccountIdProxy.OnGetCharacterNames_Fail__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct OSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Fail__DelegateSignature final
{
public:
	struct FGuid                                  AccountId;                                         // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Fail__DelegateSignature) == 0x000004, "Wrong alignment on OSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Fail__DelegateSignature");
static_assert(sizeof(OSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Fail__DelegateSignature) == 0x000010, "Wrong size on OSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Fail__DelegateSignature");
static_assert(offsetof(OSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Fail__DelegateSignature, AccountId) == 0x000000, "Member 'OSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Fail__DelegateSignature::AccountId' has a wrong offset!");

// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNamesByAccountIdProxy.OnGetCharacterNames_Success__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct OSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Success__DelegateSignature final
{
public:
	struct FGuid                                  AccountId;                                         // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOSSVAL_CharacterNameAndId>     Names;                                             // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(OSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Success__DelegateSignature) == 0x000008, "Wrong alignment on OSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Success__DelegateSignature");
static_assert(sizeof(OSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Success__DelegateSignature) == 0x000020, "Wrong size on OSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Success__DelegateSignature");
static_assert(offsetof(OSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Success__DelegateSignature, AccountId) == 0x000000, "Member 'OSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Success__DelegateSignature::AccountId' has a wrong offset!");
static_assert(offsetof(OSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Success__DelegateSignature, Names) == 0x000010, "Member 'OSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Success__DelegateSignature::Names' has a wrong offset!");

// Function OnlineSubsystemValeria.OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy.GetCharacterNameByAccountIdAndCharacterId
// 0x0030 (0x0030 - 0x0000)
struct OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_GetCharacterNameByAccountIdAndCharacterId final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  AccountId;                                         // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  CharacterId;                                       // 0x0018(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy* ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_GetCharacterNameByAccountIdAndCharacterId) == 0x000008, "Wrong alignment on OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_GetCharacterNameByAccountIdAndCharacterId");
static_assert(sizeof(OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_GetCharacterNameByAccountIdAndCharacterId) == 0x000030, "Wrong size on OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_GetCharacterNameByAccountIdAndCharacterId");
static_assert(offsetof(OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_GetCharacterNameByAccountIdAndCharacterId, WorldContextObject) == 0x000000, "Member 'OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_GetCharacterNameByAccountIdAndCharacterId::WorldContextObject' has a wrong offset!");
static_assert(offsetof(OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_GetCharacterNameByAccountIdAndCharacterId, AccountId) == 0x000008, "Member 'OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_GetCharacterNameByAccountIdAndCharacterId::AccountId' has a wrong offset!");
static_assert(offsetof(OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_GetCharacterNameByAccountIdAndCharacterId, CharacterId) == 0x000018, "Member 'OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_GetCharacterNameByAccountIdAndCharacterId::CharacterId' has a wrong offset!");
static_assert(offsetof(OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_GetCharacterNameByAccountIdAndCharacterId, ReturnValue) == 0x000028, "Member 'OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_GetCharacterNameByAccountIdAndCharacterId::ReturnValue' has a wrong offset!");

// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy.OnGetCharacterNames_Fail__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Fail__DelegateSignature final
{
public:
	struct FGuid                                  AccountId;                                         // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  CharacterId;                                       // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Fail__DelegateSignature) == 0x000004, "Wrong alignment on OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Fail__DelegateSignature");
static_assert(sizeof(OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Fail__DelegateSignature) == 0x000020, "Wrong size on OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Fail__DelegateSignature");
static_assert(offsetof(OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Fail__DelegateSignature, AccountId) == 0x000000, "Member 'OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Fail__DelegateSignature::AccountId' has a wrong offset!");
static_assert(offsetof(OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Fail__DelegateSignature, CharacterId) == 0x000010, "Member 'OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Fail__DelegateSignature::CharacterId' has a wrong offset!");

// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy.OnGetCharacterNames_Success__DelegateSignature
// 0x0050 (0x0050 - 0x0000)
struct OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Success__DelegateSignature final
{
public:
	struct FGuid                                  AccountId;                                         // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  CharacterId;                                       // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOSSVAL_CharacterNameAndId             Param_Name;                                        // 0x0020(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Success__DelegateSignature) == 0x000008, "Wrong alignment on OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Success__DelegateSignature");
static_assert(sizeof(OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Success__DelegateSignature) == 0x000050, "Wrong size on OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Success__DelegateSignature");
static_assert(offsetof(OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Success__DelegateSignature, AccountId) == 0x000000, "Member 'OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Success__DelegateSignature::AccountId' has a wrong offset!");
static_assert(offsetof(OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Success__DelegateSignature, CharacterId) == 0x000010, "Member 'OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Success__DelegateSignature::CharacterId' has a wrong offset!");
static_assert(offsetof(OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Success__DelegateSignature, Param_Name) == 0x000020, "Member 'OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Success__DelegateSignature::Param_Name' has a wrong offset!");

// Function OnlineSubsystemValeria.OSSVAL_GetCharacterNameByCharacterIdProxy.GetCharacterNameByCharacterId
// 0x0020 (0x0020 - 0x0000)
struct OSSVAL_GetCharacterNameByCharacterIdProxy_GetCharacterNameByCharacterId final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  CharacterId;                                       // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOSSVAL_GetCharacterNameByCharacterIdProxy* ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OSSVAL_GetCharacterNameByCharacterIdProxy_GetCharacterNameByCharacterId) == 0x000008, "Wrong alignment on OSSVAL_GetCharacterNameByCharacterIdProxy_GetCharacterNameByCharacterId");
static_assert(sizeof(OSSVAL_GetCharacterNameByCharacterIdProxy_GetCharacterNameByCharacterId) == 0x000020, "Wrong size on OSSVAL_GetCharacterNameByCharacterIdProxy_GetCharacterNameByCharacterId");
static_assert(offsetof(OSSVAL_GetCharacterNameByCharacterIdProxy_GetCharacterNameByCharacterId, WorldContextObject) == 0x000000, "Member 'OSSVAL_GetCharacterNameByCharacterIdProxy_GetCharacterNameByCharacterId::WorldContextObject' has a wrong offset!");
static_assert(offsetof(OSSVAL_GetCharacterNameByCharacterIdProxy_GetCharacterNameByCharacterId, CharacterId) == 0x000008, "Member 'OSSVAL_GetCharacterNameByCharacterIdProxy_GetCharacterNameByCharacterId::CharacterId' has a wrong offset!");
static_assert(offsetof(OSSVAL_GetCharacterNameByCharacterIdProxy_GetCharacterNameByCharacterId, ReturnValue) == 0x000018, "Member 'OSSVAL_GetCharacterNameByCharacterIdProxy_GetCharacterNameByCharacterId::ReturnValue' has a wrong offset!");

// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNameByCharacterIdProxy.OnFetchCharacter_Failure__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct OSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Failure__DelegateSignature final
{
public:
	struct FGuid                                  CharacterId;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Failure__DelegateSignature) == 0x000004, "Wrong alignment on OSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Failure__DelegateSignature");
static_assert(sizeof(OSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Failure__DelegateSignature) == 0x000010, "Wrong size on OSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Failure__DelegateSignature");
static_assert(offsetof(OSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Failure__DelegateSignature, CharacterId) == 0x000000, "Member 'OSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Failure__DelegateSignature::CharacterId' has a wrong offset!");

// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNameByCharacterIdProxy.OnFetchCharacter_Success__DelegateSignature
// 0x0040 (0x0040 - 0x0000)
struct OSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Success__DelegateSignature final
{
public:
	struct FGuid                                  CharacterId;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOSSVAL_CharacterNameAndId             FetchedCharacter;                                  // 0x0010(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(OSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Success__DelegateSignature) == 0x000008, "Wrong alignment on OSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Success__DelegateSignature");
static_assert(sizeof(OSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Success__DelegateSignature) == 0x000040, "Wrong size on OSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Success__DelegateSignature");
static_assert(offsetof(OSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Success__DelegateSignature, CharacterId) == 0x000000, "Member 'OSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Success__DelegateSignature::CharacterId' has a wrong offset!");
static_assert(offsetof(OSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Success__DelegateSignature, FetchedCharacter) == 0x000010, "Member 'OSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Success__DelegateSignature::FetchedCharacter' has a wrong offset!");

// Function OnlineSubsystemValeria.OSSVAL_GetNetIdByCharacterIdProxy.GetNetIdByCharacterId
// 0x0020 (0x0020 - 0x0000)
struct OSSVAL_GetNetIdByCharacterIdProxy_GetNetIdByCharacterId final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  CharacterId;                                       // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOSSVAL_GetNetIdByCharacterIdProxy*     ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OSSVAL_GetNetIdByCharacterIdProxy_GetNetIdByCharacterId) == 0x000008, "Wrong alignment on OSSVAL_GetNetIdByCharacterIdProxy_GetNetIdByCharacterId");
static_assert(sizeof(OSSVAL_GetNetIdByCharacterIdProxy_GetNetIdByCharacterId) == 0x000020, "Wrong size on OSSVAL_GetNetIdByCharacterIdProxy_GetNetIdByCharacterId");
static_assert(offsetof(OSSVAL_GetNetIdByCharacterIdProxy_GetNetIdByCharacterId, WorldContextObject) == 0x000000, "Member 'OSSVAL_GetNetIdByCharacterIdProxy_GetNetIdByCharacterId::WorldContextObject' has a wrong offset!");
static_assert(offsetof(OSSVAL_GetNetIdByCharacterIdProxy_GetNetIdByCharacterId, CharacterId) == 0x000008, "Member 'OSSVAL_GetNetIdByCharacterIdProxy_GetNetIdByCharacterId::CharacterId' has a wrong offset!");
static_assert(offsetof(OSSVAL_GetNetIdByCharacterIdProxy_GetNetIdByCharacterId, ReturnValue) == 0x000018, "Member 'OSSVAL_GetNetIdByCharacterIdProxy_GetNetIdByCharacterId::ReturnValue' has a wrong offset!");

// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetNetIdByCharacterIdProxy.OnFetchNetId_Failure__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct OSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Failure__DelegateSignature final
{
public:
	struct FGuid                                  CharacterId;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Failure__DelegateSignature) == 0x000004, "Wrong alignment on OSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Failure__DelegateSignature");
static_assert(sizeof(OSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Failure__DelegateSignature) == 0x000010, "Wrong size on OSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Failure__DelegateSignature");
static_assert(offsetof(OSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Failure__DelegateSignature, CharacterId) == 0x000000, "Member 'OSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Failure__DelegateSignature::CharacterId' has a wrong offset!");

// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetNetIdByCharacterIdProxy.OnFetchNetId_Success__DelegateSignature
// 0x0040 (0x0040 - 0x0000)
struct OSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Success__DelegateSignature final
{
public:
	struct FGuid                                  CharacterId;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                       FetchedNetId;                                      // 0x0010(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Success__DelegateSignature) == 0x000008, "Wrong alignment on OSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Success__DelegateSignature");
static_assert(sizeof(OSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Success__DelegateSignature) == 0x000040, "Wrong size on OSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Success__DelegateSignature");
static_assert(offsetof(OSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Success__DelegateSignature, CharacterId) == 0x000000, "Member 'OSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Success__DelegateSignature::CharacterId' has a wrong offset!");
static_assert(offsetof(OSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Success__DelegateSignature, FetchedNetId) == 0x000010, "Member 'OSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Success__DelegateSignature::FetchedNetId' has a wrong offset!");

// Function OnlineSubsystemValeria.OSSVAL_AsyncActionGetCharactersByAccountId.GetCharactersByAccountId
// 0x0020 (0x0020 - 0x0000)
struct OSSVAL_AsyncActionGetCharactersByAccountId_GetCharactersByAccountId final
{
public:
	class ULocalPlayer*                           LocalPlayer;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  ID;                                                // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOSSVAL_AsyncActionGetCharactersByAccountId* ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OSSVAL_AsyncActionGetCharactersByAccountId_GetCharactersByAccountId) == 0x000008, "Wrong alignment on OSSVAL_AsyncActionGetCharactersByAccountId_GetCharactersByAccountId");
static_assert(sizeof(OSSVAL_AsyncActionGetCharactersByAccountId_GetCharactersByAccountId) == 0x000020, "Wrong size on OSSVAL_AsyncActionGetCharactersByAccountId_GetCharactersByAccountId");
static_assert(offsetof(OSSVAL_AsyncActionGetCharactersByAccountId_GetCharactersByAccountId, LocalPlayer) == 0x000000, "Member 'OSSVAL_AsyncActionGetCharactersByAccountId_GetCharactersByAccountId::LocalPlayer' has a wrong offset!");
static_assert(offsetof(OSSVAL_AsyncActionGetCharactersByAccountId_GetCharactersByAccountId, ID) == 0x000008, "Member 'OSSVAL_AsyncActionGetCharactersByAccountId_GetCharactersByAccountId::ID' has a wrong offset!");
static_assert(offsetof(OSSVAL_AsyncActionGetCharactersByAccountId_GetCharactersByAccountId, ReturnValue) == 0x000018, "Member 'OSSVAL_AsyncActionGetCharactersByAccountId_GetCharactersByAccountId::ReturnValue' has a wrong offset!");

// DelegateFunction OnlineSubsystemValeria.OSSVAL_AsyncActionGetCharactersByAccountId.OnGetCharactersObtained__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct OSSVAL_AsyncActionGetCharactersByAccountId_OnGetCharactersObtained__DelegateSignature final
{
public:
	TArray<struct FVALDTOS_MetaCharacterFormat>   CharactersFound;                                   // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(OSSVAL_AsyncActionGetCharactersByAccountId_OnGetCharactersObtained__DelegateSignature) == 0x000008, "Wrong alignment on OSSVAL_AsyncActionGetCharactersByAccountId_OnGetCharactersObtained__DelegateSignature");
static_assert(sizeof(OSSVAL_AsyncActionGetCharactersByAccountId_OnGetCharactersObtained__DelegateSignature) == 0x000010, "Wrong size on OSSVAL_AsyncActionGetCharactersByAccountId_OnGetCharactersObtained__DelegateSignature");
static_assert(offsetof(OSSVAL_AsyncActionGetCharactersByAccountId_OnGetCharactersObtained__DelegateSignature, CharactersFound) == 0x000000, "Member 'OSSVAL_AsyncActionGetCharactersByAccountId_OnGetCharactersObtained__DelegateSignature::CharactersFound' has a wrong offset!");

// Function OnlineSubsystemValeria.OSSVAL_AsyncActionProfanityFilterString.FilterString
// 0x0020 (0x0020 - 0x0000)
struct OSSVAL_AsyncActionProfanityFilterString_FilterString final
{
public:
	class ULocalPlayer*                           LocalPlayer;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Str;                                               // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOSSVAL_AsyncActionProfanityFilterString* ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OSSVAL_AsyncActionProfanityFilterString_FilterString) == 0x000008, "Wrong alignment on OSSVAL_AsyncActionProfanityFilterString_FilterString");
static_assert(sizeof(OSSVAL_AsyncActionProfanityFilterString_FilterString) == 0x000020, "Wrong size on OSSVAL_AsyncActionProfanityFilterString_FilterString");
static_assert(offsetof(OSSVAL_AsyncActionProfanityFilterString_FilterString, LocalPlayer) == 0x000000, "Member 'OSSVAL_AsyncActionProfanityFilterString_FilterString::LocalPlayer' has a wrong offset!");
static_assert(offsetof(OSSVAL_AsyncActionProfanityFilterString_FilterString, Str) == 0x000008, "Member 'OSSVAL_AsyncActionProfanityFilterString_FilterString::Str' has a wrong offset!");
static_assert(offsetof(OSSVAL_AsyncActionProfanityFilterString_FilterString, ReturnValue) == 0x000018, "Member 'OSSVAL_AsyncActionProfanityFilterString_FilterString::ReturnValue' has a wrong offset!");

// DelegateFunction OnlineSubsystemValeria.OSSVAL_AsyncActionProfanityFilterString.OnResultObtained__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct OSSVAL_AsyncActionProfanityFilterString_OnResultObtained__DelegateSignature final
{
public:
	struct FOSSVAL_ProfanityFilterResponse        Response;                                          // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(OSSVAL_AsyncActionProfanityFilterString_OnResultObtained__DelegateSignature) == 0x000008, "Wrong alignment on OSSVAL_AsyncActionProfanityFilterString_OnResultObtained__DelegateSignature");
static_assert(sizeof(OSSVAL_AsyncActionProfanityFilterString_OnResultObtained__DelegateSignature) == 0x000018, "Wrong size on OSSVAL_AsyncActionProfanityFilterString_OnResultObtained__DelegateSignature");
static_assert(offsetof(OSSVAL_AsyncActionProfanityFilterString_OnResultObtained__DelegateSignature, Response) == 0x000000, "Member 'OSSVAL_AsyncActionProfanityFilterString_OnResultObtained__DelegateSignature::Response' has a wrong offset!");

// Function OnlineSubsystemValeria.OSSVAL_AsyncActionQueryUserPrivileges.QueryUserPrivileges
// 0x0018 (0x0018 - 0x0000)
struct OSSVAL_AsyncActionQueryUserPrivileges_QueryUserPrivileges final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InUserIndex;                                       // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EVAL_UserPrivileges                           InPrivilegesType;                                  // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D1F[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UOSSVAL_AsyncActionQueryUserPrivileges* ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OSSVAL_AsyncActionQueryUserPrivileges_QueryUserPrivileges) == 0x000008, "Wrong alignment on OSSVAL_AsyncActionQueryUserPrivileges_QueryUserPrivileges");
static_assert(sizeof(OSSVAL_AsyncActionQueryUserPrivileges_QueryUserPrivileges) == 0x000018, "Wrong size on OSSVAL_AsyncActionQueryUserPrivileges_QueryUserPrivileges");
static_assert(offsetof(OSSVAL_AsyncActionQueryUserPrivileges_QueryUserPrivileges, WorldContextObject) == 0x000000, "Member 'OSSVAL_AsyncActionQueryUserPrivileges_QueryUserPrivileges::WorldContextObject' has a wrong offset!");
static_assert(offsetof(OSSVAL_AsyncActionQueryUserPrivileges_QueryUserPrivileges, InUserIndex) == 0x000008, "Member 'OSSVAL_AsyncActionQueryUserPrivileges_QueryUserPrivileges::InUserIndex' has a wrong offset!");
static_assert(offsetof(OSSVAL_AsyncActionQueryUserPrivileges_QueryUserPrivileges, InPrivilegesType) == 0x00000C, "Member 'OSSVAL_AsyncActionQueryUserPrivileges_QueryUserPrivileges::InPrivilegesType' has a wrong offset!");
static_assert(offsetof(OSSVAL_AsyncActionQueryUserPrivileges_QueryUserPrivileges, ReturnValue) == 0x000010, "Member 'OSSVAL_AsyncActionQueryUserPrivileges_QueryUserPrivileges::ReturnValue' has a wrong offset!");

// DelegateFunction OnlineSubsystemValeria.OSSVAL_AsyncActionQueryUserPrivileges.OnQueryUserPrivilegesComplete__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct OSSVAL_AsyncActionQueryUserPrivileges_OnQueryUserPrivilegesComplete__DelegateSignature final
{
public:
	bool                                          bQueryResult;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(OSSVAL_AsyncActionQueryUserPrivileges_OnQueryUserPrivilegesComplete__DelegateSignature) == 0x000001, "Wrong alignment on OSSVAL_AsyncActionQueryUserPrivileges_OnQueryUserPrivilegesComplete__DelegateSignature");
static_assert(sizeof(OSSVAL_AsyncActionQueryUserPrivileges_OnQueryUserPrivilegesComplete__DelegateSignature) == 0x000001, "Wrong size on OSSVAL_AsyncActionQueryUserPrivileges_OnQueryUserPrivilegesComplete__DelegateSignature");
static_assert(offsetof(OSSVAL_AsyncActionQueryUserPrivileges_OnQueryUserPrivilegesComplete__DelegateSignature, bQueryResult) == 0x000000, "Member 'OSSVAL_AsyncActionQueryUserPrivileges_OnQueryUserPrivilegesComplete__DelegateSignature::bQueryResult' has a wrong offset!");

// Function OnlineSubsystemValeria.OSSVAL_BeaconClient.RpcClient_SendTicketValidationResponse
// 0x00C0 (0x00C0 - 0x0000)
struct OSSVAL_BeaconClient_RpcClient_SendTicketValidationResponse final
{
public:
	struct FGuid                                  RequestID;                                         // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAccepted;                                         // 0x0010(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D21[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOSSVAL_MatchmakingTicket              Ticket;                                            // 0x0018(0x0098)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FOSSVAL_MatchmakingTicketContext       Context;                                           // 0x00B0(0x0010)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(OSSVAL_BeaconClient_RpcClient_SendTicketValidationResponse) == 0x000008, "Wrong alignment on OSSVAL_BeaconClient_RpcClient_SendTicketValidationResponse");
static_assert(sizeof(OSSVAL_BeaconClient_RpcClient_SendTicketValidationResponse) == 0x0000C0, "Wrong size on OSSVAL_BeaconClient_RpcClient_SendTicketValidationResponse");
static_assert(offsetof(OSSVAL_BeaconClient_RpcClient_SendTicketValidationResponse, RequestID) == 0x000000, "Member 'OSSVAL_BeaconClient_RpcClient_SendTicketValidationResponse::RequestID' has a wrong offset!");
static_assert(offsetof(OSSVAL_BeaconClient_RpcClient_SendTicketValidationResponse, bAccepted) == 0x000010, "Member 'OSSVAL_BeaconClient_RpcClient_SendTicketValidationResponse::bAccepted' has a wrong offset!");
static_assert(offsetof(OSSVAL_BeaconClient_RpcClient_SendTicketValidationResponse, Ticket) == 0x000018, "Member 'OSSVAL_BeaconClient_RpcClient_SendTicketValidationResponse::Ticket' has a wrong offset!");
static_assert(offsetof(OSSVAL_BeaconClient_RpcClient_SendTicketValidationResponse, Context) == 0x0000B0, "Member 'OSSVAL_BeaconClient_RpcClient_SendTicketValidationResponse::Context' has a wrong offset!");

// Function OnlineSubsystemValeria.OSSVAL_BeaconClient.RpcServer_ValidateTicket
// 0x00B8 (0x00B8 - 0x0000)
struct OSSVAL_BeaconClient_RpcServer_ValidateTicket final
{
public:
	struct FGuid                                  RequestID;                                         // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOSSVAL_MatchmakingTicket              Ticket;                                            // 0x0010(0x0098)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FOSSVAL_MatchmakingTicketContext       Context;                                           // 0x00A8(0x0010)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(OSSVAL_BeaconClient_RpcServer_ValidateTicket) == 0x000008, "Wrong alignment on OSSVAL_BeaconClient_RpcServer_ValidateTicket");
static_assert(sizeof(OSSVAL_BeaconClient_RpcServer_ValidateTicket) == 0x0000B8, "Wrong size on OSSVAL_BeaconClient_RpcServer_ValidateTicket");
static_assert(offsetof(OSSVAL_BeaconClient_RpcServer_ValidateTicket, RequestID) == 0x000000, "Member 'OSSVAL_BeaconClient_RpcServer_ValidateTicket::RequestID' has a wrong offset!");
static_assert(offsetof(OSSVAL_BeaconClient_RpcServer_ValidateTicket, Ticket) == 0x000010, "Member 'OSSVAL_BeaconClient_RpcServer_ValidateTicket::Ticket' has a wrong offset!");
static_assert(offsetof(OSSVAL_BeaconClient_RpcServer_ValidateTicket, Context) == 0x0000A8, "Member 'OSSVAL_BeaconClient_RpcServer_ValidateTicket::Context' has a wrong offset!");

// Function OnlineSubsystemValeria.ValeriaOnlineBlueprintFunctions.CreateSessionResult
// 0x0140 (0x0140 - 0x0000)
struct ValeriaOnlineBlueprintFunctions_CreateSessionResult final
{
public:
	class FString                                 ServerName;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Addr;                                              // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult                ReturnValue;                                       // 0x0020(0x0120)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ValeriaOnlineBlueprintFunctions_CreateSessionResult) == 0x000008, "Wrong alignment on ValeriaOnlineBlueprintFunctions_CreateSessionResult");
static_assert(sizeof(ValeriaOnlineBlueprintFunctions_CreateSessionResult) == 0x000140, "Wrong size on ValeriaOnlineBlueprintFunctions_CreateSessionResult");
static_assert(offsetof(ValeriaOnlineBlueprintFunctions_CreateSessionResult, ServerName) == 0x000000, "Member 'ValeriaOnlineBlueprintFunctions_CreateSessionResult::ServerName' has a wrong offset!");
static_assert(offsetof(ValeriaOnlineBlueprintFunctions_CreateSessionResult, Addr) == 0x000010, "Member 'ValeriaOnlineBlueprintFunctions_CreateSessionResult::Addr' has a wrong offset!");
static_assert(offsetof(ValeriaOnlineBlueprintFunctions_CreateSessionResult, ReturnValue) == 0x000020, "Member 'ValeriaOnlineBlueprintFunctions_CreateSessionResult::ReturnValue' has a wrong offset!");

}
