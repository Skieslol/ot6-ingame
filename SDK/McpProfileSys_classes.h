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

// Class McpProfileSys.McpProfile
// 0x0108 (FullSize[0x0124] - InheritedSize[0x001C])
class UMcpProfile : public UObject
{
public:
	unsigned char                                      UnknownData_FQBJ[0x78];                                    // 0x001C(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DebugName;                                                 // 0x0094(0x000C) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CELB[0x4];                                     // 0x00A0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMcpProfileGroup*                            ProfileGroup;                                              // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     ProfileId;                                                 // 0x00A8(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int64_t                                            ProfileRevision;                                           // 0x00B4(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                FullProfileQueryQueued;                                    // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bShouldCreateInstances;                                    // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BQJD[0x63];                                    // 0x00C1(0x0063) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class McpProfileSys.McpProfile");
		return ptr;
	}



	void QueryProfile(struct FBaseUrlContext* Context);
	void DeleteProfile(struct FClientUrlContext* Context);
	void DeleteAllProfiles(struct FClientUrlContext* Context);
};

// Class McpProfileSys.McpItemAware
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UMcpItemAware : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class McpProfileSys.McpItemAware");
		return ptr;
	}



};

// Class McpProfileSys.McpProfileGroup
// 0x0058 (FullSize[0x0074] - InheritedSize[0x001C])
class UMcpProfileGroup : public UObject
{
public:
	unsigned char                                      UnknownData_P8E3[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FProfileEntry>                       ProfileList;                                               // 0x0020(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                               bIsInitialized;                                            // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7LQ6[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayerName;                                                // 0x0030(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsServer;                                                 // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W6YK[0x13];                                    // 0x003D(0x0013) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LastMcpVersion;                                            // 0x0050(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimespan                                   LocalTimeOffset;                                           // 0x005C(0x0008) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FProfilePendingHttpRequest>          PendingRequests;                                           // 0x0064(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                               bIsProcessingRequestGenerator;                             // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_THNS[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class McpProfileSys.McpProfileGroup");
		return ptr;
	}



};

// Class McpProfileSys.McpProfileManager
// 0x0018 (FullSize[0x0034] - InheritedSize[0x001C])
class UMcpProfileManager : public UObject
{
public:
	TArray<struct FProfileGroupEntry>                  ServerProfileGroups;                                       // 0x001C(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FProfileGroupEntry>                  ClientProfileGroups;                                       // 0x0028(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class McpProfileSys.McpProfileManager");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
