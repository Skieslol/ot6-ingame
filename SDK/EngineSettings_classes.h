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

// Class EngineSettings.ConsoleSettings
// 0x001C (FullSize[0x0038] - InheritedSize[0x001C])
class UConsoleSettings : public UObject
{
public:
	int                                                MaxScrollbackSize;                                         // 0x001C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAutoCompleteCommand>                ManualAutoCompleteList;                                    // 0x0020(0x000C) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FString>                             AutoCompleteMapPaths;                                      // 0x002C(0x000C) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EngineSettings.ConsoleSettings");
		return ptr;
	}



};

// Class EngineSettings.GameMapsSettings
// 0x0064 (FullSize[0x0080] - InheritedSize[0x001C])
class UGameMapsSettings : public UObject
{
public:
	struct FString                                     EditorStartupMap;                                          // 0x001C(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LocalMapOptions;                                           // 0x0028(0x000C) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TransitionMap;                                             // 0x0034(0x000C) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseSplitscreen;                                           // 0x0040(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EngineSettings_ETwoPlayerSplitScreenType> TwoPlayerSplitscreenLayout;                                // 0x0041(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EngineSettings_EThreePlayerSplitScreenType> ThreePlayerSplitscreenLayout;                              // 0x0042(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YHPA[0x1];                                     // 0x0043(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStringClassReference                       GameInstanceClass;                                         // 0x0044(0x000C) (Edit, ZeroConstructor, Config, NoClear, NativeAccessSpecifierPublic)
	struct FString                                     GameDefaultMap;                                            // 0x0050(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     ServerDefaultMap;                                          // 0x005C(0x000C) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FStringClassReference                       GlobalDefaultGameMode;                                     // 0x0068(0x000C) (Edit, ZeroConstructor, Config, NoClear, NativeAccessSpecifierPrivate)
	struct FStringClassReference                       GlobalDefaultServerGameMode;                               // 0x0074(0x000C) (Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EngineSettings.GameMapsSettings");
		return ptr;
	}



};

// Class EngineSettings.GameNetworkManagerSettings
// 0x002C (FullSize[0x0048] - InheritedSize[0x001C])
class UGameNetworkManagerSettings : public UObject
{
public:
	int                                                MinDynamicBandwidth;                                       // 0x001C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxDynamicBandwidth;                                       // 0x0020(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalNetBandwidth;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BadPingThreshold;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsStandbyCheckingEnabled : 1;                             // 0x002C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5OH1[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StandbyRxCheatTime;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StandbyTxCheatTime;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentMissingForRxStandby;                                // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentMissingForTxStandby;                                // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentForBadPing;                                         // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              JoinInProgressStandbyWaitTime;                             // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EngineSettings.GameNetworkManagerSettings");
		return ptr;
	}



};

// Class EngineSettings.GameSessionSettings
// 0x000C (FullSize[0x0028] - InheritedSize[0x001C])
class UGameSessionSettings : public UObject
{
public:
	int                                                MaxSpectators;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRequiresPushToTalk : 1;                                   // 0x0024(0x0001) BIT_FIELD (Edit, Config, GlobalConfig, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SNCR[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EngineSettings.GameSessionSettings");
		return ptr;
	}



};

// Class EngineSettings.GeneralEngineSettings
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UGeneralEngineSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EngineSettings.GeneralEngineSettings");
		return ptr;
	}



};

// Class EngineSettings.GeneralProjectSettings
// 0x0094 (FullSize[0x00B0] - InheritedSize[0x001C])
class UGeneralProjectSettings : public UObject
{
public:
	struct FString                                     CompanyName;                                               // 0x001C(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CompanyDistinguishedName;                                  // 0x0028(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CopyrightNotice;                                           // 0x0034(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0040(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Homepage;                                                  // 0x004C(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LicensingTerms;                                            // 0x0058(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PrivacyPolicy;                                             // 0x0064(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ProjectID;                                                 // 0x0070(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ProjectName;                                               // 0x0080(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProjectVersion;                                            // 0x008C(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SupportContact;                                            // 0x0098(0x000C) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ProjectDisplayedTitle;                                     // 0x00A4(0x0018) ELEMENT_SIZE_MISMATCH (Edit, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EngineSettings.GeneralProjectSettings");
		return ptr;
	}



};

// Class EngineSettings.HudSettings
// 0x0010 (FullSize[0x002C] - InheritedSize[0x001C])
class UHudSettings : public UObject
{
public:
	unsigned char                                      bShowHUD : 1;                                              // 0x001C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D0KS[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               DebugDisplay;                                              // 0x0020(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EngineSettings.HudSettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
