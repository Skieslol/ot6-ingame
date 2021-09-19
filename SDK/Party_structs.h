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
// Enums
//---------------------------------------------------------------------------

// Enum Party.EPartyType
enum class Party_EPartyType : uint8_t
{
	EPartyType__Public             = 0,
	EPartyType__FriendsOnly        = 1,
	EPartyType__Private            = 2,
	EPartyType__EPartyType_MAX     = 3,

};

// Enum Party.EJoinPartyDenialReason
enum class Party_EJoinPartyDenialReason : uint8_t
{
	EJoinPartyDenialReason__NoReason = 0,
	EJoinPartyDenialReason__Busy   = 1,
	EJoinPartyDenialReason__PartyFull = 2,
	EJoinPartyDenialReason__GameFull = 3,
	EJoinPartyDenialReason__NotPartyLeader = 4,
	EJoinPartyDenialReason__PartyPrivate = 5,
	EJoinPartyDenialReason__NeedsTutorial = 6,
	EJoinPartyDenialReason__EJoinPartyDenialReason_MAX = 7,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Party.PartyState
// 0x0008
struct FPartyState
{
	unsigned char                                      UnknownData_UG7Q[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Party_EPartyType>                      PartyType;                                                 // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLeaderFriendsOnly;                                        // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bLeaderInvitesOnly;                                        // 0x0006(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SZCM[0x1];                                     // 0x0007(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Party.PartyMemberRepState
// 0x0004
struct FPartyMemberRepState
{
	unsigned char                                      UnknownData_890Y[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
