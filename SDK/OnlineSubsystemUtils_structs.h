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

// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class OnlineSubsystemUtils_EBeaconConnectionState : uint8_t
{
	EBeaconConnectionState__Invalid = 0,
	EBeaconConnectionState__Closed = 1,
	EBeaconConnectionState__Pending = 2,
	EBeaconConnectionState__Open   = 3,
	EBeaconConnectionState__EBeaconConnectionState_MAX = 4,

};

// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class OnlineSubsystemUtils_EPartyReservationResult : uint8_t
{
	EPartyReservationResult__NoResult = 0,
	EPartyReservationResult__RequestPending = 1,
	EPartyReservationResult__GeneralError = 2,
	EPartyReservationResult__PartyLimitReached = 3,
	EPartyReservationResult__IncorrectPlayerCount = 4,
	EPartyReservationResult__RequestTimedOut = 5,
	EPartyReservationResult__ReservationDuplicate = 6,
	EPartyReservationResult__ReservationNotFound = 7,
	EPartyReservationResult__ReservationAccepted = 8,
	EPartyReservationResult__ReservationDenied = 9,
	EPartyReservationResult__ReservationDenied_Banned = 10,
	EPartyReservationResult__ReservationRequestCanceled = 11,
	EPartyReservationResult__ReservationInvalid = 12,
	EPartyReservationResult__BadSessionId = 13,
	EPartyReservationResult__EPartyReservationResult_MAX = 14,

};

// Enum OnlineSubsystemUtils.EClientRequestType
enum class OnlineSubsystemUtils_EClientRequestType : uint8_t
{
	EClientRequestType__NonePending = 0,
	EClientRequestType__ExistingSessionReservation = 1,
	EClientRequestType__ReservationUpdate = 2,
	EClientRequestType__EmptyServerReservation = 3,
	EClientRequestType__Reconnect  = 4,
	EClientRequestType__EClientRequestType_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// 0x0018
struct FPlayerReservation
{
	struct FUniqueNetIdRepl                            UniqueId;                                                  // 0x0000(0x0008) (Transient, NativeAccessSpecifierPublic)
	struct FString                                     ValidationStr;                                             // 0x0008(0x000C) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ElapsedTime;                                               // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// 0x0018
struct FPartyReservation
{
	int                                                TeamNum;                                                   // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            PartyLeader;                                               // 0x0004(0x0008) (Transient, NativeAccessSpecifierPublic)
	TArray<struct FPlayerReservation>                  PartyMembers;                                              // 0x000C(0x000C) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// 0x0084
struct FBlueprintSessionResult
{
	unsigned char                                      UnknownData_WT65[0x84];                                    // 0x0000(0x0084) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// 0x0030
struct FPIELoginSettingsInternal
{
	struct FString                                     ID;                                                        // 0x0000(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Token;                                                     // 0x000C(0x000C) (Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Type;                                                      // 0x0018(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              TokenBytes;                                                // 0x0024(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
