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

// Enum GameSubCatalog.EAppStore
enum class GameSubCatalog_EAppStore : uint8_t
{
	EAppStore__DebugStore          = 0,
	EAppStore__EpicPurchasingService = 1,
	EAppStore__IOSAppStore         = 2,
	EAppStore__WeChatAppStore      = 3,
	EAppStore__GooglePlayAppStore  = 4,
	EAppStore__KindleStore         = 5,
	EAppStore__PlayStationStore    = 6,
	EAppStore__XboxLiveStore       = 7,
	EAppStore__MAX                 = 8,
	EAppStore__EAppStore_MAX       = 9,

};

// Enum GameSubCatalog.EStoreCurrencyType
enum class GameSubCatalog_EStoreCurrencyType : uint8_t
{
	EStoreCurrencyType__RealMoney  = 0,
	EStoreCurrencyType__MtxCurrency = 1,
	EStoreCurrencyType__GameItem   = 2,
	EStoreCurrencyType__Other      = 3,
	EStoreCurrencyType__MAX        = 4,
	EStoreCurrencyType__EStoreCurrencyType_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameSubCatalog.CatalogPurchaseNotification
// 0x0024
struct FCatalogPurchaseNotification
{
	struct FMcpLootResult                              LootResult;                                                // 0x0000(0x0024) (NativeAccessSpecifierPublic)

};

// ScriptStruct GameSubCatalog.CatalogItemPrice
// 0x0014
struct FCatalogItemPrice
{
	TEnumAsByte<GameSubCatalog_EStoreCurrencyType>     CurrencyType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6ND9[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CurrencySubType;                                           // 0x0004(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BasePrice;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameSubCatalog.CatalogKeyValue
// 0x0018
struct FCatalogKeyValue
{
	struct FString                                     Key;                                                       // 0x0000(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x000C(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameSubCatalog.CatalogMetaAssetInfo
// 0x0014
struct FCatalogMetaAssetInfo
{
	struct FString                                     StructName;                                                // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Payload;                                                   // 0x000C(0x0008) (NativeAccessSpecifierPublic)

};

// ScriptStruct GameSubCatalog.CatalogOffer
// 0x00FC
struct FCatalogOffer
{
	struct FString                                     OfferId;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCatalogKeyValue>                    MetaInfo;                                                  // 0x000C(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCatalogItemPrice>                   Prices;                                                    // 0x0018(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                DailyLimit;                                                // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SinglePurchaseOnly;                                        // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3E26[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             Categories;                                                // 0x002C(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     CatalogGroup;                                              // 0x0038(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CatalogGroupPriority;                                      // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SortPriority;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Title;                                                     // 0x004C(0x0018) ELEMENT_SIZE_MISMATCH (Edit, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0058(0x0018) ELEMENT_SIZE_MISMATCH (Edit, NativeAccessSpecifierPublic)
	struct FString                                     AppStoreId[0x8];                                           // 0x0064(0x0060) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCatalogMetaAssetInfo                       MetaAssetInfo;                                             // 0x00C4(0x0014) (NativeAccessSpecifierPublic)
	struct FString                                     DisplayAssetPath;                                          // 0x00D8(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FulfillmentId;                                             // 0x00E4(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             RequiredFulfillmentIds;                                    // 0x00F0(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameSubCatalog.Storefront
// 0x0018
struct FStorefront
{
	struct FString                                     Name;                                                      // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCatalogOffer>                       CatalogEntries;                                            // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameSubCatalog.ServicePrice
// 0x0020
struct FServicePrice
{
	struct FString                                     ServiceName;                                               // 0x0000(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCatalogItemPrice                           Price;                                                     // 0x000C(0x0014) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct GameSubCatalog.CatalogDownload
// 0x001C
struct FCatalogDownload
{
	int                                                RefreshIntervalHrs;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FServicePrice>                       ServicePricing;                                            // 0x0004(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStorefront>                         Storefronts;                                               // 0x0010(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameSubCatalog.CatalogPurchaseInfo
// 0x0024
struct FCatalogPurchaseInfo
{
	struct FString                                     OfferId;                                                   // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PurchaseQuantity;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GameSubCatalog_EStoreCurrencyType>     Currency;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9763[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CurrencySubType;                                           // 0x0014(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExpectedPrice;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameSubCatalog.CatalogReceiptInfo
// 0x0028
struct FCatalogReceiptInfo
{
	TEnumAsByte<GameSubCatalog_EAppStore>              AppStore;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5U8F[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AppStoreId;                                                // 0x0004(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReceiptId;                                                 // 0x0010(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReceiptInfo;                                               // 0x001C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
