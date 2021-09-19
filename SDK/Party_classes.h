#pragma once

// Name: Fortnite, Version: OT-6_5


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class Party.PartyGameState
// 0x0214 (FullSize[0x0230] - InheritedSize[0x001C])
class UPartyGameState : public UObject
{
public:
	class UScriptStruct*                               PartyStateRefDef;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MQVR[0x4];                                     // 0x0020(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUniqueNetIdRepl                            OwningUserId;                                              // 0x0024(0x0008) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K2V7[0x88];                                    // 0x002C(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bDebugAcceptingMembers;                                    // 0x00B4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XOLF[0xC];                                     // 0x00B5(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bStayWithPartyOnDisconnect;                                // 0x00C1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9FMW[0x2];                                     // 0x00C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PartyMemberStateClass;                                     // 0x00C4(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FI8K[0xC0];                                    // 0x00C8(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ReservationBeaconClientClass;                              // 0x0188(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APartyBeaconClient*                          ReservationBeaconClient;                                   // 0x018C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ALQG[0xA0];                                    // 0x0190(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Party.PartyGameState");
		return ptr;
	}



};

// Class Party.Party
// 0x01B8 (FullSize[0x01D4] - InheritedSize[0x001C])
class UParty : public UObject
{
public:
	unsigned char                                      UnknownData_2XQF[0x44];                                    // 0x001C(0x0044) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DefaultMaxPartySize;                                       // 0x0060(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bLeavingPersistentParty;                                   // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UQ6X[0x16F];                                   // 0x0065(0x016F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Party.Party");
		return ptr;
	}



};

// Class Party.PartyMemberState
// 0x0024 (FullSize[0x0040] - InheritedSize[0x001C])
class UPartyMemberState : public UObject
{
public:
	struct FUniqueNetIdRepl                            UniqueId;                                                  // 0x001C(0x0008) (Transient, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x0024(0x0018) ELEMENT_SIZE_MISMATCH (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	class UScriptStruct*                               MemberStateRefDef;                                         // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1XAJ[0x8];                                     // 0x0034(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bHasAnnouncedJoin;                                         // 0x003C(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HVL6[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Party.PartyMemberState");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
