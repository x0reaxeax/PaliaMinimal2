#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Libsodium

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class Libsodium.LibSd_CryptoLibrary
// 0x0000 (0x0028 - 0x0028)
class ULibSd_CryptoLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool GenerateKeyPair(TArray<uint8>* OutPublicKey, TArray<uint8>* OutSecretKey);
	static bool InitSodium();
	static bool SignMessageWithSecretKey(TArray<uint8>& Message, TArray<uint8>& SecretKey, TArray<uint8>* SignedMessage);
	static bool SignMessageWithSecretKey_Detached(TArray<uint8>& Message, TArray<uint8>& SecretKey, TArray<uint8>* Signature);
	static bool VerifyMessageWithPublicKey(TArray<uint8>& SignedMessage, TArray<uint8>& PublicKey, TArray<uint8>* Message);
	static bool VerifyMessageWithPublicKey_Detached(TArray<uint8>& Signature, TArray<uint8>& Message, TArray<uint8>& PublicKey);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LibSd_CryptoLibrary">();
	}
	static class ULibSd_CryptoLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibSd_CryptoLibrary>();
	}
};
static_assert(alignof(ULibSd_CryptoLibrary) == 0x000008, "Wrong alignment on ULibSd_CryptoLibrary");
static_assert(sizeof(ULibSd_CryptoLibrary) == 0x000028, "Wrong size on ULibSd_CryptoLibrary");

}
