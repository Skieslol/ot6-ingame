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

// Class OnlineSubsystemUtils.PartyBeaconState
// 0x0038 (FullSize[0x0054] - InheritedSize[0x001C])
class UPartyBeaconState : public UObject
{
public:
	struct FName                                       SessionName;                                               // 0x001C(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumConsumedReservations;                                   // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxReservations;                                           // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumTeams;                                                  // 0x002C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumPlayersPerTeam;                                         // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ReservedHostTeamNum;                                       // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ForceTeamNum;                                              // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPartyReservation>                   Reservations;                                              // 0x003C(0x000C) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JT43[0xC];                                     // 0x0048(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconState");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// 0x001C (FullSize[0x025C] - InheritedSize[0x0240])
class AOnlineBeaconHostObject : public AActor
{
public:
	struct FString                                     BeaconTypeName;                                            // 0x0240(0x000C) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ClientBeaconActorClass;                                    // 0x024C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                              // 0x0250(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHostObject");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlineBeacon
// 0x001C (FullSize[0x025C] - InheritedSize[0x0240])
class AOnlineBeacon : public AActor
{
public:
	unsigned char                                      UnknownData_U6IQ[0x4];                                     // 0x0240(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BeaconConnectionInitialTimeout;                            // 0x0244(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BeaconConnectionTimeout;                                   // 0x0248(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNetDriver*                                  NetDriver;                                                 // 0x024C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LIEN[0xC];                                     // 0x0250(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeacon");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// 0x0018 (FullSize[0x0274] - InheritedSize[0x025C])
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
	class AOnlineBeaconHostObject*                     BeaconOwner;                                               // 0x025C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNetConnection*                              BeaconConnection;                                          // 0x0260(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<OnlineSubsystemUtils_EBeaconConnectionState> ConnectionState;                                           // 0x0264(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W9WT[0xF];                                     // 0x0265(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconClient");
		return ptr;
	}



	void ClientOnConnected();
};

// Class OnlineSubsystemUtils.OnlineSessionClient
// 0x00E0 (FullSize[0x00FC] - InheritedSize[0x001C])
class UOnlineSessionClient : public UOnlineSession
{
public:
	unsigned char                                      UnknownData_C2NI[0xDC];                                    // 0x001C(0x00DC) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsFromInvite;                                             // 0x00F8(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bHandlingDisconnect;                                       // 0x00F9(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_U3P0[0x2];                                     // 0x00FA(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineSessionClient");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.PartyBeaconClient
// 0x0040 (FullSize[0x02B4] - InheritedSize[0x0274])
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData_7VJM[0x18];                                    // 0x0274(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DestSessionId;                                             // 0x028C(0x000C) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPartyReservation                           PendingReservation;                                        // 0x0298(0x0018) (Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<OnlineSubsystemUtils_EClientRequestType> RequestType;                                               // 0x02B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPendingReservationSent;                                   // 0x02B1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bCancelReservation;                                        // 0x02B2(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5TIU[0x1];                                     // 0x02B3(0x0001) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconClient");
		return ptr;
	}



	void ServerUpdateReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate);
	void ServerReservationRequest(const struct FString& SessionId, const struct FPartyReservation& Reservation);
	void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader);
	void ClientSendReservationUpdates(int NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse);
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// 0x0038 (FullSize[0x0294] - InheritedSize[0x025C])
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                           State;                                                     // 0x025C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9PH9[0x28];                                    // 0x0260(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bNoTimeouts;                                               // 0x0288(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KMI0[0x3];                                     // 0x0289(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SessionTimeoutSecs;                                        // 0x028C(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TravelSessionTimeoutSecs;                                  // 0x0290(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconHost");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementBlueprintLibrary");
		return ptr;
	}



	void STATIC_GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, float* Progress);
	void STATIC_GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden);
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// 0x0044 (FullSize[0x0060] - InheritedSize[0x001C])
class UInAppPurchaseCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_01Q2[0x2C];                                    // 0x0034(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy");
		return ptr;
	}



	class UInAppPurchaseCallbackProxy* STATIC_CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest);
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// 0x0050 (FullSize[0x006C] - InheritedSize[0x001C])
class UInAppPurchaseQueryCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MJJT[0x38];                                    // 0x0034(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy");
		return ptr;
	}



	class UInAppPurchaseQueryCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<struct FString> ProductIdentifiers);
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// 0x0050 (FullSize[0x006C] - InheritedSize[0x001C])
class UInAppPurchaseRestoreCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NHSN[0x38];                                    // 0x0034(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy");
		return ptr;
	}



	class UInAppPurchaseRestoreCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseRestore(class APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.IpConnection
// 0x0010 (FullSize[0x290DC] - InheritedSize[0x290CC])
class UIpConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData_FUWL[0x10];                                    // 0x290CC(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpConnection");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.IpNetDriver
// 0x0014 (FullSize[0x0294] - InheritedSize[0x0280])
class UIpNetDriver : public UNetDriver
{
public:
	unsigned char                                      LogPortUnreach : 1;                                        // 0x0280(0x0001) BIT_FIELD (Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      AllowPlayerPortUnreach : 1;                                // 0x0280(0x0001) BIT_FIELD (Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_639V[0x3];                                     // 0x0281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           MaxPortCountToTry;                                         // 0x0284(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J8MI[0xC];                                     // 0x0288(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpNetDriver");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary");
		return ptr;
	}



	bool STATIC_WriteLeaderboardInteger(class APlayerController* PlayerController, const struct FName& StatName, int StatValue);
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// 0x002C (FullSize[0x0048] - InheritedSize[0x001C])
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_79XV[0x14];                                    // 0x0034(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy");
		return ptr;
	}



	class ULeaderboardFlushCallbackProxy* STATIC_CreateProxyObjectForFlush(class APlayerController* PlayerController, const struct FName& SessionName);
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// 0x0050 (FullSize[0x006C] - InheritedSize[0x001C])
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1EWC[0x38];                                    // 0x0034(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy");
		return ptr;
	}



	class ULeaderboardQueryCallbackProxy* STATIC_CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const struct FName& StatName);
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
// 0x002C (FullSize[0x0048] - InheritedSize[0x001C])
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MBD1[0x14];                                    // 0x0034(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.LogoutCallbackProxy");
		return ptr;
	}



	class ULogoutCallbackProxy* STATIC_Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.TestBeaconClient
// 0x0000 (FullSize[0x0274] - InheritedSize[0x0274])
class ATestBeaconClient : public AOnlineBeaconClient
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconClient");
		return ptr;
	}



	void ServerPong();
	void ClientPing();
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// 0x0088 (FullSize[0x02E4] - InheritedSize[0x025C])
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
	int                                                ListenPort;                                                // 0x025C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                              // 0x0260(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_H6CJ[0x78];                                    // 0x026C(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHost");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.TestBeaconHost
// 0x0000 (FullSize[0x025C] - InheritedSize[0x025C])
class ATestBeaconHost : public AOnlineBeaconHostObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconHost");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlineBlueprintCallProxyBase
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UOnlineBlueprintCallProxyBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBlueprintCallProxyBase");
		return ptr;
	}



	void Activate();
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// 0x0028 (FullSize[0x0044] - InheritedSize[0x001C])
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N4H2[0x10];                                    // 0x0034(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementQueryCallbackProxy");
		return ptr;
	}



	class UAchievementQueryCallbackProxy* STATIC_CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController);
	class UAchievementQueryCallbackProxy* STATIC_CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// 0x003C (FullSize[0x0058] - InheritedSize[0x001C])
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_21SY[0x24];                                    // 0x0034(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementWriteCallbackProxy");
		return ptr;
	}



	class UAchievementWriteCallbackProxy* STATIC_WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementName, float Progress, int UserTag);
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// 0x0034 (FullSize[0x0050] - InheritedSize[0x001C])
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_THGX[0x1C];                                    // 0x0034(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.ConnectionCallbackProxy");
		return ptr;
	}



	class UConnectionCallbackProxy* STATIC_ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// 0x004C (FullSize[0x0068] - InheritedSize[0x001C])
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QHO7[0x34];                                    // 0x0034(0x0034) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.CreateSessionCallbackProxy");
		return ptr;
	}



	class UCreateSessionCallbackProxy* STATIC_CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN);
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// 0x0034 (FullSize[0x0050] - InheritedSize[0x001C])
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FO4G[0x1C];                                    // 0x0034(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.DestroySessionCallbackProxy");
		return ptr;
	}



	class UDestroySessionCallbackProxy* STATIC_DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// 0x003C (FullSize[0x0058] - InheritedSize[0x001C])
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_97AV[0x24];                                    // 0x0034(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.EndMatchCallbackProxy");
		return ptr;
	}



	class UEndMatchCallbackProxy* STATIC_EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> OtherPlayersOutcome);
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// 0x0034 (FullSize[0x0050] - InheritedSize[0x001C])
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RLEL[0x1C];                                    // 0x0034(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.EndTurnCallbackProxy");
		return ptr;
	}



	class UEndTurnCallbackProxy* STATIC_EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID);
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// 0x0044 (FullSize[0x0060] - InheritedSize[0x001C])
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K08W[0x2C];                                    // 0x0034(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.FindSessionsCallbackProxy");
		return ptr;
	}



	struct FString STATIC_GetServerName(const struct FBlueprintSessionResult& Result);
	int STATIC_GetPingInMs(const struct FBlueprintSessionResult& Result);
	int STATIC_GetMaxPlayers(const struct FBlueprintSessionResult& Result);
	int STATIC_GetCurrentPlayers(const struct FBlueprintSessionResult& Result);
	class UFindSessionsCallbackProxy* STATIC_FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN);
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// 0x0040 (FullSize[0x005C] - InheritedSize[0x001C])
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KUUG[0x28];                                    // 0x0034(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy");
		return ptr;
	}



	class UFindTurnBasedMatchCallbackProxy* STATIC_FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, int MinPlayers, int MaxPlayers, int PlayerGroup, bool ShowExistingMatches);
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// 0x00B8 (FullSize[0x00D4] - InheritedSize[0x001C])
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SP7U[0xA0];                                    // 0x0034(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.JoinSessionCallbackProxy");
		return ptr;
	}



	class UJoinSessionCallbackProxy* STATIC_JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// 0x0038 (FullSize[0x0054] - InheritedSize[0x001C])
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WMTH[0x20];                                    // 0x0034(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.QuitMatchCallbackProxy");
		return ptr;
	}



	class UQuitMatchCallbackProxy* STATIC_QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> Outcome, int TurnTimeoutInSeconds);
};

// Class OnlineSubsystemUtils.OnlinePIESettings
// 0x0010 (FullSize[0x003C] - InheritedSize[0x002C])
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	bool                                               bOnlinePIEEnabled;                                         // 0x002C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AF87[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPIELoginSettingsInternal>           Logins;                                                    // 0x0030(0x000C) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlinePIESettings");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// 0x0024 (FullSize[0x0040] - InheritedSize[0x001C])
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MB9S[0xC];                                     // 0x0034(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.ShowLoginUICallbackProxy");
		return ptr;
	}



	class UShowLoginUICallbackProxy* STATIC_ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);
};

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary");
		return ptr;
	}



	void STATIC_RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
	void STATIC_GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int PlayerIndex, struct FString* PlayerDisplayName);
	void STATIC_GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int* PlayerIndex);
	void STATIC_GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, bool* bIsMyTurn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
