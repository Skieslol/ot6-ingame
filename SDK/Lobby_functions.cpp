﻿// Name: Fortnite, Version: OT-6_5

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        InPartyOwnerId                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerSetPartyOwner");

	ALobbyBeaconClient_ServerSetPartyOwner_Params params;
	params.InUniqueId = InUniqueId;
	params.InPartyOwnerId = InPartyOwnerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void ALobbyBeaconClient::ServerNotifyJoiningServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer");

	ALobbyBeaconClient_ServerNotifyJoiningServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ServerLoginPlayer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FString                 InSessionId                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        InUniqueId                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 UrlString                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ServerLoginPlayer(const struct FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const struct FString& UrlString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerLoginPlayer");

	ALobbyBeaconClient_ServerLoginPlayer_Params params;
	params.InSessionId = InSessionId;
	params.InUniqueId = InUniqueId;
	params.UrlString = UrlString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ServerKickPlayer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl        PlayerToKick                   (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   Reason                         (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& Reason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerKickPlayer");

	ALobbyBeaconClient_ServerKickPlayer_Params params;
	params.PlayerToKick = PlayerToKick;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void ALobbyBeaconClient::ServerDisconnectFromLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby");

	ALobbyBeaconClient_ServerDisconnectFromLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ServerCheat
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString                 Msg                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ServerCheat(const struct FString& Msg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerCheat");

	ALobbyBeaconClient_ServerCheat_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ClientWasKicked
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FText                   KickReason                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ClientWasKicked(const struct FText& KickReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientWasKicked");

	ALobbyBeaconClient_ClientWasKicked_Params params;
	params.KickReason = KickReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FJoinabilitySettings    Settings                       (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ClientSetInviteFlags(const struct FJoinabilitySettings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientSetInviteFlags");

	ALobbyBeaconClient_ClientSetInviteFlags_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ClientPlayerLeft
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientPlayerLeft");

	ALobbyBeaconClient_ClientPlayerLeft_Params params;
	params.InUniqueId = InUniqueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ClientPlayerJoined
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FText                   NewPlayerName                  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        InUniqueId                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ClientPlayerJoined(const struct FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientPlayerJoined");

	ALobbyBeaconClient_ClientPlayerJoined_Params params;
	params.NewPlayerName = NewPlayerName;
	params.InUniqueId = InUniqueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ClientLoginComplete
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientLoginComplete");

	ALobbyBeaconClient_ClientLoginComplete_Params params;
	params.InUniqueId = InUniqueId;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ClientJoinGame
// (Net, NetReliable, Native, Event, Public, NetClient)
void ALobbyBeaconClient::ClientJoinGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientJoinGame");

	ALobbyBeaconClient_ClientJoinGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
// (Net, NetReliable, Native, Event, Protected, NetClient)
void ALobbyBeaconClient::ClientAckJoiningServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientAckJoiningServer");

	ALobbyBeaconClient_ClientAckJoiningServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
// (Final, Native, Protected)
void ALobbyBeaconPlayerState::OnRep_PartyOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner");

	ALobbyBeaconPlayerState_OnRep_PartyOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
// (Final, Native, Protected)
void ALobbyBeaconPlayerState::OnRep_InLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby");

	ALobbyBeaconPlayerState_OnRep_InLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
// (Final, Native, Protected)
void ALobbyBeaconState::OnRep_WaitForPlayersTimeRemaining()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining");

	ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
// (Final, Native, Protected)
void ALobbyBeaconState::OnRep_LobbyStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconState.OnRep_LobbyStarted");

	ALobbyBeaconState_OnRep_LobbyStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
