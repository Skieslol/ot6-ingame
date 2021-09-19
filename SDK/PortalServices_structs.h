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

// Enum PortalServices.EEntitlementCacheLevelRetrieved
enum class PortalServices_EEntitlementCacheLevelRetrieved : uint8_t
{
	EEntitlementCacheLevelRetrieved__None = 0,
	EEntitlementCacheLevelRetrieved__Memory = 1,
	EEntitlementCacheLevelRetrieved__Disk = 2,
	EEntitlementCacheLevelRetrieved__EEntitlementCacheLevelRetrieved_MAX = 3,

};

// Enum PortalServices.EEntitlementCacheLevelRequest
enum class PortalServices_EEntitlementCacheLevelRequest : uint8_t
{
	EEntitlementCacheLevelRequest__Memory = 0,
	EEntitlementCacheLevelRequest__Disk = 1,
	EEntitlementCacheLevelRequest__EEntitlementCacheLevelRequest_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PortalServices.PortalUserIsEntitledToItemResult
// 0x0010
struct FPortalUserIsEntitledToItemResult
{
	struct FString                                     ItemId;                                                    // 0x0000(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsEntitled;                                                // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<PortalServices_EEntitlementCacheLevelRetrieved> RetrievedFromCacheLevel;                                   // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N1A3[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct PortalServices.PortalUserDetails
// 0x0028
struct FPortalUserDetails
{
	struct FText                                       DisplayName;                                               // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, NativeAccessSpecifierPublic)
	struct FText                                       Email;                                                     // 0x000C(0x0018) ELEMENT_SIZE_MISMATCH (Edit, NativeAccessSpecifierPublic)
	struct FText                                       RealName;                                                  // 0x0018(0x0018) ELEMENT_SIZE_MISMATCH (Edit, NativeAccessSpecifierPublic)
	bool                                               IsSignedIn;                                                // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XYCW[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
