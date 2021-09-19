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

// ScriptStruct MessagingRpc.MessageRpcUnhandled
// 0x0010
struct FMessageRpcUnhandled
{
	struct FGuid                                       CallId;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MessagingRpc.MessageRpcProgress
// 0x0020
struct FMessageRpcProgress
{
	float                                              Completion;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       CallId;                                                    // 0x0004(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     StatusText;                                                // 0x0014(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MessagingRpc.MessageRpcCancel
// 0x0010
struct FMessageRpcCancel
{
	struct FGuid                                       CallId;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MessagingRpc.RpcMessage
// 0x0010
struct FRpcMessage
{
	struct FGuid                                       CallId;                                                    // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
