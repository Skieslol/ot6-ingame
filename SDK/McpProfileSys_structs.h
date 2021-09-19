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

// ScriptStruct McpProfileSys.BaseUrlContext
// 0x0018
struct FBaseUrlContext
{
	unsigned char                                      UnknownData_7I3W[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct McpProfileSys.ClientUrlContext
// 0x0000 (0x0018 - 0x0018)
struct FClientUrlContext : public FBaseUrlContext
{

};

// ScriptStruct McpProfileSys.ProfileEntry
// 0x0010
struct FProfileEntry
{
	struct FString                                     ProfileId;                                                 // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMcpProfile*                                 ProfileObject;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct McpProfileSys.ProfilePendingHttpRequest
// 0x0018
struct FProfilePendingHttpRequest
{
	class UMcpProfile*                                 SourceProfile;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RZI5[0x14];                                    // 0x0004(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct McpProfileSys.ProfileGroupEntry
// 0x000C
struct FProfileGroupEntry
{
	unsigned char                                      UnknownData_DJM9[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMcpProfileGroup*                            ProfileGroup;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct McpProfileSys.McpLootEntry
// 0x0024
struct FMcpLootEntry
{
	struct FString                                     ItemType;                                                  // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemGuid;                                                  // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Attributes;                                                // 0x001C(0x0008) (NativeAccessSpecifierPublic)

};

// ScriptStruct McpProfileSys.McpLootResult
// 0x0024
struct FMcpLootResult
{
	struct FString                                     TierGroupName;                                             // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMcpLootEntry>                       PersistentItems;                                           // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMcpLootEntry>                       WorldItems;                                                // 0x0018(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct McpProfileSys.DedicatedServerUrlContext
// 0x0000 (0x0018 - 0x0018)
struct FDedicatedServerUrlContext : public FBaseUrlContext
{

};

// ScriptStruct McpProfileSys.McpRemoveItemRequest
// 0x000C
struct FMcpRemoveItemRequest
{
	struct FString                                     ItemId;                                                    // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct McpProfileSys.McpChangeQuantityRequest
// 0x0010
struct FMcpChangeQuantityRequest
{
	struct FString                                     ItemId;                                                    // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DeltaQuantity;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct McpProfileSys.McpChangeAttributesRequest
// 0x0014
struct FMcpChangeAttributesRequest
{
	struct FString                                     ItemId;                                                    // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Attributes;                                                // 0x000C(0x0008) (NativeAccessSpecifierPublic)

};

// ScriptStruct McpProfileSys.McpAddItemRequest
// 0x0024
struct FMcpAddItemRequest
{
	struct FString                                     ItemId;                                                    // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TemplateId;                                                // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Attributes;                                                // 0x001C(0x0008) (NativeAccessSpecifierPublic)

};

// ScriptStruct McpProfileSys.McpProfileChangeRequest
// 0x0040
struct FMcpProfileChangeRequest
{
	int                                                BaseProfileRevision;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMcpAddItemRequest>                  AddRequests;                                               // 0x0004(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMcpRemoveItemRequest>               RemoveRequests;                                            // 0x0010(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMcpChangeQuantityRequest>           ChangeQuantityRequests;                                    // 0x001C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMcpChangeAttributesRequest>         ChangeAttributesRequests;                                  // 0x0028(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  ChangeStatRequests;                                        // 0x0034(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
