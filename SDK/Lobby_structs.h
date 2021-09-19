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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Lobby.LobbyPlayerStateActorInfo
// 0x0004 (0x0010 - 0x000C)
struct FLobbyPlayerStateActorInfo : public FFastArraySerializerItem
{
	class ALobbyBeaconPlayerState*                     LobbyPlayerState;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lobby.LobbyPlayerStateInfoArray
// 0x0010 (0x0090 - 0x0080)
struct FLobbyPlayerStateInfoArray : public FFastArraySerializer
{
	TArray<struct FLobbyPlayerStateActorInfo>          Players;                                                   // 0x0080(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class ALobbyBeaconState*                           ParentState;                                               // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
