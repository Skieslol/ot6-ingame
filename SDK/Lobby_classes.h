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

// Class Lobby.LobbyBeaconHost
// 0x0024 (FullSize[0x0280] - InheritedSize[0x025C])
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData_SFMF[0x8];                                     // 0x025C(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TAssetPtr<class UClass>                            LobbyStateClass;                                           // 0x0264(0x0018) (Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ALobbyBeaconState*                           LobbyState;                                                // 0x027C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Lobby.LobbyBeaconHost");
		return ptr;
	}



};

// Class Lobby.LobbyBeaconClient
// 0x0048 (FullSize[0x02BC] - InheritedSize[0x0274])
class ALobbyBeaconClient : public AOnlineBeaconClient
{
public:
	class ALobbyBeaconState*                           LobbyState;                                                // 0x0274(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALobbyBeaconPlayerState*                     PlayerState;                                               // 0x0278(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2QMU[0x40];                                    // 0x027C(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Lobby.LobbyBeaconClient");
		return ptr;
	}



	void ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId);
	void ServerNotifyJoiningServer();
	void ServerLoginPlayer(const struct FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const struct FString& UrlString);
	void ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& Reason);
	void ServerDisconnectFromLobby();
	void ServerCheat(const struct FString& Msg);
	void ClientWasKicked(const struct FText& KickReason);
	void ClientSetInviteFlags(const struct FJoinabilitySettings& Settings);
	void ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId);
	void ClientPlayerJoined(const struct FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId);
	void ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
	void ClientJoinGame();
	void ClientAckJoiningServer();
};

// Class Lobby.LobbyBeaconPlayerState
// 0x005C (FullSize[0x029C] - InheritedSize[0x0240])
class ALobbyBeaconPlayerState : public AInfo
{
public:
	struct FText                                       DisplayName;                                               // 0x0240(0x0018) ELEMENT_SIZE_MISMATCH (Net, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            UniqueId;                                                  // 0x024C(0x0008) (Net, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            PartyOwnerUniqueId;                                        // 0x0254(0x0008) (Net, RepNotify, NativeAccessSpecifierPublic)
	bool                                               bInLobby;                                                  // 0x025C(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2FQD[0x3];                                     // 0x025D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AOnlineBeaconClient*                         ClientActor;                                               // 0x0260(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E9PS[0x38];                                    // 0x0264(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Lobby.LobbyBeaconPlayerState");
		return ptr;
	}



	void OnRep_PartyOwner();
	void OnRep_InLobby();
};

// Class Lobby.LobbyBeaconState
// 0x011C (FullSize[0x035C] - InheritedSize[0x0240])
class ALobbyBeaconState : public AInfo
{
public:
	int                                                MaxPlayers;                                                // 0x0240(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      LobbyBeaconPlayerStateClass;                               // 0x0244(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NS5F[0x8];                                     // 0x0248(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bLobbyStarted;                                             // 0x0250(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PRPC[0x3];                                     // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WaitForPlayersTimeRemaining;                               // 0x0254(0x0004) (Net, ZeroConstructor, Config, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLobbyPlayerStateInfoArray                  Players;                                                   // 0x0258(0x0090) (Net, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J43Z[0x74];                                    // 0x02E8(0x0074) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Lobby.LobbyBeaconState");
		return ptr;
	}



	void OnRep_WaitForPlayersTimeRemaining();
	void OnRep_LobbyStarted();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
