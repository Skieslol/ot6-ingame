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

// ScriptStruct PortalRpc.PortalRpcServer
// 0x000C
struct FPortalRpcServer
{
	struct FString                                     ServerAddress;                                             // 0x0000(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PortalRpc.PortalRpcLocateServer
// 0x0028
struct FPortalRpcLocateServer
{
	struct FGuid                                       ProductId;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ProductVersion;                                            // 0x0010(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HostMacAddress;                                            // 0x001C(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
