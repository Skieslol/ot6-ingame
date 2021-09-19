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

// Class OnlineSubsystem.NamedInterfaces
// 0x0034 (FullSize[0x0050] - InheritedSize[0x001C])
class UNamedInterfaces : public UObject
{
public:
	TArray<struct FNamedInterface>                     NamedInterfaces;                                           // 0x001C(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNamedInterfaceDef>                  NamedInterfaceDefs;                                        // 0x0028(0x000C) (ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LCTB[0x1C];                                    // 0x0034(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystem.NamedInterfaces");
		return ptr;
	}



};

// Class OnlineSubsystem.TurnBasedMatchInterface
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UTurnBasedMatchInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystem.TurnBasedMatchInterface");
		return ptr;
	}



	void OnMatchReceivedTurn(const struct FString& Match, bool bDidBecomeActive);
	void OnMatchEnded(const struct FString& Match);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
