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

// Class AIModule.AISense
// 0x0048 (FullSize[0x0064] - InheritedSize[0x001C])
class UAISense : public UObject
{
public:
	struct FColor                                      DebugDrawColor;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FString                                     DebugName;                                                 // 0x0020(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DefaultExpirationAge;                                      // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<AIModule_EAISenseNotifyType>           NotifyType;                                                // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UU7Q[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bWantsNewPawnNotification : 1;                             // 0x0034(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bAutoRegisterAllPawnsAsSources : 1;                        // 0x0034(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_348Q[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIPerceptionSystem*                         PerceptionSystemInstance;                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PEAA[0x28];                                    // 0x003C(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense");
		return ptr;
	}



};

// Class AIModule.AISense_Sight
// 0x00A4 (FullSize[0x0108] - InheritedSize[0x0064])
class UAISense_Sight : public UAISense
{
public:
	unsigned char                                      UnknownData_98A1[0x84];                                    // 0x0064(0x0084) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxTracesPerTick;                                          // 0x00E8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MinQueriesPerTimeSliceCheck;                               // 0x00EC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                             MaxTimeSlicePerTick;                                       // 0x00F0(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HighImportanceQueryDistanceThreshold;                      // 0x00F8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9DXM[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxQueryImportance;                                        // 0x0100(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SightLimitQueryImportance;                                 // 0x0104(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Sight");
		return ptr;
	}



};

// Class AIModule.AISense_Hearing
// 0x004C (FullSize[0x00B0] - InheritedSize[0x0064])
class UAISense_Hearing : public UAISense
{
public:
	TArray<struct FAINoiseEvent>                       NoiseEvents;                                               // 0x0064(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                              SpeedOfSoundSq;                                            // 0x0070(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_I1PE[0x3C];                                    // 0x0074(0x003C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Hearing");
		return ptr;
	}



	void STATIC_ReportNoiseEvent(class UObject* WorldContext, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const struct FName& Tag);
};

// Class AIModule.AISense_Damage
// 0x000C (FullSize[0x0070] - InheritedSize[0x0064])
class UAISense_Damage : public UAISense
{
public:
	TArray<struct FAIDamageEvent>                      RegisteredEvents;                                          // 0x0064(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Damage");
		return ptr;
	}



	void STATIC_ReportDamageEvent(class UObject* WorldContext, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation);
};

// Class AIModule.AISense_Touch
// 0x000C (FullSize[0x0070] - InheritedSize[0x0064])
class UAISense_Touch : public UAISense
{
public:
	TArray<struct FAITouchEvent>                       RegisteredEvents;                                          // 0x0064(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Touch");
		return ptr;
	}



};

// Class AIModule.AISense_Team
// 0x000C (FullSize[0x0070] - InheritedSize[0x0064])
class UAISense_Team : public UAISense
{
public:
	TArray<struct FAITeamStimulusEvent>                RegisteredEvents;                                          // 0x0064(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Team");
		return ptr;
	}



};

// Class AIModule.AISense_Prediction
// 0x000C (FullSize[0x0070] - InheritedSize[0x0064])
class UAISense_Prediction : public UAISense
{
public:
	TArray<struct FAIPredictionEvent>                  RegisteredEvents;                                          // 0x0064(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Prediction");
		return ptr;
	}



	void STATIC_RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);
	void STATIC_RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime);
};

// Class AIModule.AIHotSpotManager
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UAIHotSpotManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIHotSpotManager");
		return ptr;
	}



};

// Class AIModule.GenericTeamAgentInterface
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UGenericTeamAgentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.GenericTeamAgentInterface");
		return ptr;
	}



};

// Class AIModule.PathFollowingComponent
// 0x014C (FullSize[0x01D8] - InheritedSize[0x008C])
class UPathFollowingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_CXX6[0x28];                                    // 0x008C(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNavMovementComponent*                       MovementComp;                                              // 0x00B4(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_241Q[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ANavigationData*                             MyNavData;                                                 // 0x00C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TTVH[0x8C];                                    // 0x00C4(0x008C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bUseVisibilityTestsSimplification : 1;                     // 0x0150(0x0001) BIT_FIELD (Config, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VUTO[0x87];                                    // 0x0151(0x0087) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PathFollowingComponent");
		return ptr;
	}



	void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	struct FVector GetPathDestination();
	TEnumAsByte<AIModule_EPathFollowingAction> GetPathActionType();
};

// Class AIModule.CrowdFollowingComponent
// 0x0040 (FullSize[0x0218] - InheritedSize[0x01D8])
class UCrowdFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData_8A4S[0x4];                                     // 0x01D8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CrowdAgentMoveDirection;                                   // 0x01DC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UCharacterMovementComponent*                 CharacterMovement;                                         // 0x01E8(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                            // 0x01EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                             // 0x01F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                            // 0x01F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QYPF[0x20];                                    // 0x01F8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.CrowdFollowingComponent");
		return ptr;
	}



	void SuspendCrowdSteering(bool bSuspend);
};

// Class AIModule.AIController
// 0x0048 (FullSize[0x02D0] - InheritedSize[0x0288])
class AAIController : public AController
{
public:
	unsigned char                                      UnknownData_XKQ1[0x1C];                                    // 0x0288(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bStopAILogicOnUnposses : 1;                                // 0x02A4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bLOSflag : 1;                                              // 0x02A4(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSkipExtraLOSChecks : 1;                                   // 0x02A4(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowStrafe : 1;                                          // 0x02A4(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bWantsPlayerState : 1;                                     // 0x02A4(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L3RU[0x3];                                     // 0x02A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPathFollowingComponent*                     PathFollowingComponent;                                    // 0x02A8(0x0004) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBrainComponent*                             BrainComponent;                                            // 0x02AC(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIPerceptionComponent*                      PerceptionComponent;                                       // 0x02B0(0x0004) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawnActionsComponent*                       ActionsComp;                                               // 0x02B4(0x0004) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                        Blackboard;                                                // 0x02B8(0x0004) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayTasksComponent*                     CachedGameplayTasksComponent;                              // 0x02BC(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    ReceiveMoveCompleted;                                      // 0x02C0(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CE0N[0x4];                                     // 0x02CC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIController");
		return ptr;
	}



	bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent);
	void SetMoveBlockDetection(bool bEnable);
	bool RunBehaviorTree(class UBehaviorTree* BTAsset);
	void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
	void OnUnpossess(class APawn* UnpossessedPawn);
	void OnPossess(class APawn* PossessedPawn);
	void OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased);
	TEnumAsByte<AIModule_EPathFollowingRequestResult> MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	TEnumAsByte<AIModule_EPathFollowingRequestResult> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	void K2_SetFocus(class AActor* NewFocus);
	void K2_SetFocalPoint(const struct FVector& FP);
	void K2_ClearFocus();
	bool HasPartialPath();
	class UPathFollowingComponent* GetPathFollowingComponent();
	TEnumAsByte<AIModule_EPathFollowingStatus> GetMoveStatus();
	struct FVector GetImmediateMoveDestination();
	class AActor* GetFocusActor();
	struct FVector GetFocalPointOnActor(class AActor* Actor);
	struct FVector GetFocalPoint();
	class UAIPerceptionComponent* GetAIPerceptionComponent();
};

// Class AIModule.AIDataProvider
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UAIDataProvider : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIDataProvider");
		return ptr;
	}



};

// Class AIModule.AIPerceptionComponent
// 0x00AC (FullSize[0x0138] - InheritedSize[0x008C])
class UAIPerceptionComponent : public UActorComponent
{
public:
	float                                              HearingRange;                                              // 0x008C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LoSHearingRange;                                           // 0x0090(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SightRadius;                                               // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LoseSightRadius;                                           // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PeripheralVisionAngle;                                     // 0x009C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAISenseConfig*>                      SensesConfig;                                              // 0x00A0(0x000C) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      DominantSense;                                             // 0x00AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4NRQ[0xC];                                     // 0x00B0(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AAIController*                               AIOwner;                                                   // 0x00BC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_A2HV[0x5C];                                    // 0x00C0(0x005C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPerceptionUpdated;                                       // 0x011C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTargetPerceptionUpdated;                                 // 0x0128(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PL44[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIPerceptionComponent");
		return ptr;
	}



	void RequestStimuliListenerUpdate();
	void OnOwnerEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void GetPerceivedHostileActors(TArray<class AActor*>* OutActors);
	void GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	bool GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info);
};

// Class AIModule.AIPerceptionSystem
// 0x00C0 (FullSize[0x00DC] - InheritedSize[0x001C])
class UAIPerceptionSystem : public UObject
{
public:
	unsigned char                                      UnknownData_LJDY[0x40];                                    // 0x001C(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAISense*>                            Senses;                                                    // 0x005C(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                              PerceptionAgingRate;                                       // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0KB8[0x70];                                    // 0x006C(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIPerceptionSystem");
		return ptr;
	}



	void STATIC_ReportPerceptionEvent(class UObject* WorldContext, class UAISenseEvent* PerceptionEvent);
	void ReportEvent(class UAISenseEvent* PerceptionEvent);
	bool STATIC_RegisterPerceptionStimuliSource(class UObject* WorldContext, class UClass* Sense, class AActor* Target);
	void OnPerceptionStimuliSourceEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	class UClass* STATIC_GetSenseClassForStimulus(class UObject* WorldContext, const struct FAIStimulus& Stimulus);
};

// Class AIModule.AISystem
// 0x008C (FullSize[0x00C0] - InheritedSize[0x0034])
class UAISystem : public UAISystemBase
{
public:
	struct FStringClassReference                       PerceptionSystemClassName;                                 // 0x0034(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig, Protected, NativeAccessSpecifierProtected)
	struct FStringClassReference                       HotSpotManagerClassName;                                   // 0x0040(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig, Protected, NativeAccessSpecifierProtected)
	float                                              AcceptanceRadius;                                          // 0x004C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PathfollowingRegularPathPointAcceptanceRadius;             // 0x0050(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PathfollowingNavLinkAcceptanceRadius;                      // 0x0054(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFinishMoveOnGoalOverlap;                                  // 0x0058(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAcceptPartialPaths;                                       // 0x0059(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAllowStrafing;                                            // 0x005A(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bEnableBTAITasks;                                          // 0x005B(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAllowControllersAsEQSQuerier;                             // 0x005C(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C2TX[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBehaviorTreeManager*                        BehaviorTreeManager;                                       // 0x0060(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEnvQueryManager*                            EnvironmentQueryManager;                                   // 0x0064(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAIPerceptionSystem*                         PerceptionSystem;                                          // 0x0068(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAIAsyncTaskBlueprintProxy*>          AllProxyObjects;                                           // 0x006C(0x000C) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UAIHotSpotManager*                           HotSpotManager;                                            // 0x0078(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0V03[0x44];                                    // 0x007C(0x0044) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISystem");
		return ptr;
	}



	void AILoggingVerbose();
	void AIIgnorePlayers();
};

// Class AIModule.BrainComponent
// 0x003C (FullSize[0x00C8] - InheritedSize[0x008C])
class UBrainComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_4IYK[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlackboardComponent*                        BlackboardComp;                                            // 0x0090(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AAIController*                               AIOwner;                                                   // 0x0094(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GLUL[0x30];                                    // 0x0098(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BrainComponent");
		return ptr;
	}



	void StopLogic(const struct FString& Reason);
	void RestartLogic();
};

// Class AIModule.BehaviorTreeComponent
// 0x00E4 (FullSize[0x01AC] - InheritedSize[0x00C8])
class UBehaviorTreeComponent : public UBrainComponent
{
public:
	unsigned char                                      UnknownData_JHU7[0x18];                                    // 0x00C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UBTNode*>                             NodeInstances;                                             // 0x00E0(0x000C) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G7Z6[0xC0];                                    // 0x00EC(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BehaviorTreeComponent");
		return ptr;
	}



	void SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset);
	float GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag);
	void AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
};

// Class AIModule.BTNode
// 0x0020 (FullSize[0x003C] - InheritedSize[0x001C])
class UBTNode : public UObject
{
public:
	unsigned char                                      UnknownData_WCMM[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NodeName;                                                  // 0x0020(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTree*                               TreeAsset;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBTCompositeNode*                            ParentNode;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XDSP[0x8];                                     // 0x0034(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTNode");
		return ptr;
	}



};

// Class AIModule.BTAuxiliaryNode
// 0x0004 (FullSize[0x0040] - InheritedSize[0x003C])
class UBTAuxiliaryNode : public UBTNode
{
public:
	unsigned char                                      UnknownData_TJOH[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTAuxiliaryNode");
		return ptr;
	}



};

// Class AIModule.BTDecorator
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UBTDecorator : public UBTAuxiliaryNode
{
public:
	unsigned char                                      UnknownData_XDZY : 7;                                      // 0x0040(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bInverseCondition : 1;                                     // 0x0040(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HOHG[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AIModule_EBTFlowAbortMode>             FlowAbortMode;                                             // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HFLX[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator");
		return ptr;
	}



};

// Class AIModule.BTService
// 0x000C (FullSize[0x004C] - InheritedSize[0x0040])
class UBTService : public UBTAuxiliaryNode
{
public:
	float                                              Interval;                                                  // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RandomDeviation;                                           // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCallTickOnSearchStart : 1;                                // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bRestartTimerOnEachActivation : 1;                         // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7RCL[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTService");
		return ptr;
	}



};

// Class AIModule.BTTaskNode
// 0x0004 (FullSize[0x0040] - InheritedSize[0x003C])
class UBTTaskNode : public UBTNode
{
public:
	unsigned char                                      bIgnoreRestartSelf : 1;                                    // 0x003C(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AZKJ[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTaskNode");
		return ptr;
	}



};

// Class AIModule.BTTask_PawnActionBase
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UBTTask_PawnActionBase : public UBTTaskNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_PawnActionBase");
		return ptr;
	}



};

// Class AIModule.BTTask_BlackboardBase
// 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x0040(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_BlackboardBase");
		return ptr;
	}



};

// Class AIModule.BTTask_MoveDirectlyToward
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_MoveDirectlyToward : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                          // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDisablePathUpdateOnGoalLocationChange : 1;                // 0x0064(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bProjectVectorGoalToNavigation : 1;                        // 0x0064(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowStrafe : 1;                                          // 0x0064(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bStopOnOverlap : 1;                                        // 0x0064(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RE9Q[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_MoveDirectlyToward");
		return ptr;
	}



};

// Class AIModule.BTTask_MoveTo
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                          // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FilterClass;                                               // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ObservedBlackboardValueTolerance;                          // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowStrafe : 1;                                          // 0x006C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowPartialPath : 1;                                     // 0x006C(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      bStopOnOverlap : 1;                                        // 0x006C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bObserveBlackboardValue : 1;                               // 0x006C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D8FA[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_MoveTo");
		return ptr;
	}



};

// Class AIModule.CrowdManager
// 0x008C (FullSize[0x00A8] - InheritedSize[0x001C])
class UCrowdManager : public UObject
{
public:
	class ANavigationData*                             MyNavData;                                                 // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCrowdAvoidanceConfig>               AvoidanceConfig;                                           // 0x0020(0x000C) (Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCrowdAvoidanceSamplingPattern>      SamplingPatterns;                                          // 0x002C(0x000C) (Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	int                                                MaxAgents;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxAgentRadius;                                            // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxAvoidedAgents;                                          // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxAvoidedWalls;                                           // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              NavmeshCheckInterval;                                      // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PathOptimizationInterval;                                  // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_B9SE : 3;                                      // 0x0050(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bResolveCollisions : 1;                                    // 0x0050(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7R4H[0x57];                                    // 0x0051(0x0057) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.CrowdManager");
		return ptr;
	}



};

// Class AIModule.PawnAction
// 0x0048 (FullSize[0x0064] - InheritedSize[0x001C])
class UPawnAction : public UObject
{
public:
	class UPawnAction*                                 ChildAction;                                               // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPawnAction*                                 ParentAction;                                              // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPawnActionsComponent*                       OwnerComponent;                                            // 0x0024(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                                     Instigator;                                                // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBrainComponent*                             BrainComp;                                                 // 0x002C(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DAHT[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bAllowNewSameClassInstance : 1;                            // 0x0050(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bReplaceActiveSameClassInstance : 1;                       // 0x0050(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bShouldPauseMovement : 1;                                  // 0x0050(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bAlwaysNotifyOnFinished : 1;                               // 0x0050(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UUK7[0x13];                                    // 0x0051(0x0013) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnAction");
		return ptr;
	}



	TEnumAsByte<AIModule_EAIRequestPriority> GetActionPriority();
	void Finish(TEnumAsByte<AIModule_EPawnActionResult> WithResult);
	class UPawnAction* STATIC_CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);
};

// Class AIModule.PawnAction_Move
// 0x0034 (FullSize[0x0098] - InheritedSize[0x0064])
class UPawnAction_Move : public UPawnAction
{
public:
	class AActor*                                      GoalActor;                                                 // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     GoalLocation;                                              // 0x0068(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                              AcceptableRadius;                                          // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      FilterClass;                                               // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAllowStrafe : 1;                                          // 0x007C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bFinishOnOverlap : 1;                                      // 0x007C(0x0001) BIT_FIELD (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bUsePathfinding : 1;                                       // 0x007C(0x0001) BIT_FIELD (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bAllowPartialPath : 1;                                     // 0x007C(0x0001) BIT_FIELD (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bProjectGoalToNavigation : 1;                              // 0x007C(0x0001) BIT_FIELD (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bUpdatePathToGoal : 1;                                     // 0x007C(0x0001) BIT_FIELD (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bAbortChildActionOnPathChange : 1;                         // 0x007C(0x0001) BIT_FIELD (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5V86[0x1B];                                    // 0x007D(0x001B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnAction_Move");
		return ptr;
	}



};

// Class AIModule.EnvQueryContext
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UEnvQueryContext : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryContext");
		return ptr;
	}



};

// Class AIModule.EnvQueryNode
// 0x0004 (FullSize[0x0020] - InheritedSize[0x001C])
class UEnvQueryNode : public UObject
{
public:
	int                                                VerNum;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryNode");
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator
// 0x0014 (FullSize[0x0034] - InheritedSize[0x0020])
class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	struct FString                                     OptionName;                                                // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ItemType;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAutoSortTests : 1;                                        // 0x0030(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ERMI[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator");
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// 0x0028 (FullSize[0x005C] - InheritedSize[0x0034])
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	struct FEnvTraceData                               ProjectionData;                                            // 0x0034(0x0028) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ProjectedPoints");
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_OnCircle
// 0x00D8 (FullSize[0x0134] - InheritedSize[0x005C])
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   CircleRadius;                                              // 0x005C(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                              // 0x0078(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue                     NumberOfPoints;                                            // 0x0094(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EPointOnCircleSpacingMethod>  PointOnCircleSpacingMethod;                                // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8VK5[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEnvDirection                               ArcDirection;                                              // 0x00B4(0x0010) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                  // 0x00C4(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                              AngleRadians;                                              // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CircleCenter;                                              // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreAnyContextActorsWhenGeneratingCircle;               // 0x00E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WTB8[0x3];                                     // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderFloatValue                   CircleCenterZOffset;                                       // 0x00EC(0x001C) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FEnvTraceData                               TraceData;                                                 // 0x0108(0x0028) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      bDefineArc : 1;                                            // 0x0130(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IXJ1[0x3];                                     // 0x0131(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_OnCircle");
		return ptr;
	}



};

// Class AIModule.EnvQueryItemType
// 0x0004 (FullSize[0x0020] - InheritedSize[0x001C])
class UEnvQueryItemType : public UObject
{
public:
	unsigned char                                      UnknownData_JVYV[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryItemType");
		return ptr;
	}



};

// Class AIModule.EnvQueryItemType_VectorBase
// 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_VectorBase");
		return ptr;
	}



};

// Class AIModule.EnvQueryItemType_ActorBase
// 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_ActorBase");
		return ptr;
	}



};

// Class AIModule.EnvQueryItemType_Point
// 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Point");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest
// 0x00EC (FullSize[0x010C] - InheritedSize[0x0020])
class UEnvQueryTest : public UEnvQueryNode
{
public:
	int                                                TestOrder;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvTestPurpose>              TestPurpose;                                               // 0x0024(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4VMO[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TestComment;                                               // 0x0028(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvTestFilterOperator>       MultipleContextFilterOp;                                   // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvTestScoreOperator>        MultipleContextScoreOp;                                    // 0x0035(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvTestFilterType>           FilterType;                                                // 0x0036(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4KLK[0x1];                                     // 0x0037(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderBoolValue                    BoolValue;                                                 // 0x0038(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   FloatValueMin;                                             // 0x0054(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   FloatValueMax;                                             // 0x0070(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_61CB[0x1];                                     // 0x008C(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AIModule_EEnvTestScoreEquation>        ScoringEquation;                                           // 0x008D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvQueryTestClamping>        ClampMinType;                                              // 0x008E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvQueryTestClamping>        ClampMaxType;                                              // 0x008F(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ScoreClampMin;                                             // 0x0090(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ScoreClampMax;                                             // 0x00AC(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ScoringFactor;                                             // 0x00C8(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   SweetSpotValue;                                            // 0x00E4(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bDefineSweetSpot;                                          // 0x0100(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1WIA[0x7];                                     // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bWorkOnFloatValues : 1;                                    // 0x0108(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EUSS[0x3];                                     // 0x0109(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest");
		return ptr;
	}



};

// Class AIModule.AIResourceInterface
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UAIResourceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIResourceInterface");
		return ptr;
	}



};

// Class AIModule.AIAsyncTaskBlueprintProxy
// 0x0030 (FullSize[0x004C] - InheritedSize[0x001C])
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFail;                                                    // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2PBB[0x18];                                    // 0x0034(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIAsyncTaskBlueprintProxy");
		return ptr;
	}



	void OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
};

// Class AIModule.AIBlueprintHelperLibrary
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIBlueprintHelperLibrary");
		return ptr;
	}



	void STATIC_UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
	class APawn* STATIC_SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail);
	void STATIC_SendAIMessage(class APawn* Target, const struct FName& Message, class UObject* MessageSource, bool bSuccess);
	void STATIC_LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
	bool STATIC_IsValidAIRotation(const struct FRotator& Rotation);
	bool STATIC_IsValidAILocation(const struct FVector& Location);
	bool STATIC_IsValidAIDirection(const struct FVector& DirectionVector);
	class UBlackboardComponent* STATIC_GetBlackboard(class AActor* Target);
	class AAIController* STATIC_GetAIController(class AActor* ControlledActor);
	class UAIAsyncTaskBlueprintProxy* STATIC_CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
};

// Class AIModule.PawnActionsComponent
// 0x0028 (FullSize[0x00B4] - InheritedSize[0x008C])
class UPawnActionsComponent : public UActorComponent
{
public:
	class APawn*                                       ControlledPawn;                                            // 0x008C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPawnActionStack>                    ActionStacks;                                              // 0x0090(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPawnActionEvent>                    ActionEvents;                                              // 0x009C(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UPawnAction*                                 CurrentAction;                                             // 0x00A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CFBK[0x8];                                     // 0x00AC(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnActionsComponent");
		return ptr;
	}



	bool K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<AIModule_EAIRequestPriority> Priority, class UObject* Instigator);
	bool STATIC_K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<AIModule_EAIRequestPriority> Priority);
	TEnumAsByte<AIModule_EPawnActionAbortState> K2_ForceAbortAction(class UPawnAction* ActionToAbort);
	TEnumAsByte<AIModule_EPawnActionAbortState> K2_AbortAction(class UPawnAction* ActionToAbort);
};

// Class AIModule.AIPerceptionListenerInterface
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UAIPerceptionListenerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIPerceptionListenerInterface");
		return ptr;
	}



};

// Class AIModule.BehaviorTreeTypes
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UBehaviorTreeTypes : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BehaviorTreeTypes");
		return ptr;
	}



};

// Class AIModule.DetourCrowdAIController
// 0x0000 (FullSize[0x02D0] - InheritedSize[0x02D0])
class ADetourCrowdAIController : public AAIController
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.DetourCrowdAIController");
		return ptr;
	}



};

// Class AIModule.AIDataProvider_QueryParams
// 0x0014 (FullSize[0x0030] - InheritedSize[0x001C])
class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                 // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FloatValue;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IntValue;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BoolValue;                                                 // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MJFW[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIDataProvider_QueryParams");
		return ptr;
	}



};

// Class AIModule.AIModuleBasicGameplayDebuggerObject
// 0x00D4 (FullSize[0x0138] - InheritedSize[0x0064])
class UAIModuleBasicGameplayDebuggerObject : public UGameplayDebuggerBaseObject
{
public:
	struct FString                                     ControllerName;                                            // 0x0064(0x000C) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     PawnName;                                                  // 0x0070(0x000C) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     PawnClass;                                                 // 0x007C(0x000C) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     DebugIcon;                                                 // 0x0088(0x000C) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     MovementBaseInfo;                                          // 0x0094(0x000C) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     MovementModeInfo;                                          // 0x00A0(0x000C) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     PathFollowingInfo;                                         // 0x00AC(0x000C) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CurrentAITask;                                             // 0x00B8(0x000C) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CurrentAIState;                                            // 0x00C4(0x000C) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CurrentAIAssets;                                           // 0x00D0(0x000C) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     GameplayTasksState;                                        // 0x00DC(0x000C) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     NavDataInfo;                                               // 0x00E8(0x000C) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     MontageInfo;                                               // 0x00F4(0x000C) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bIsUsingPathFollowing : 1;                                 // 0x0100(0x0001) BIT_FIELD (Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bIsUsingCharacter : 1;                                     // 0x0100(0x0001) BIT_FIELD (Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bIsUsingBehaviorTree : 1;                                  // 0x0100(0x0001) BIT_FIELD (Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KGOT[0x3];                                     // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NextPathPointIndex;                                        // 0x0104(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FVector>                             PathPoints;                                                // 0x0108(0x000C) (Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZAIT[0x24];                                    // 0x0114(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIModuleBasicGameplayDebuggerObject");
		return ptr;
	}



};

// Class AIModule.AIPerceptionStimuliSourceComponent
// 0x0010 (FullSize[0x009C] - InheritedSize[0x008C])
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	unsigned char                                      bAutoRegisterAsSource : 1;                                 // 0x008C(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QXKA[0x3];                                     // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              RegisterAsSourceForSenses;                                 // 0x0090(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIPerceptionStimuliSourceComponent");
		return ptr;
	}



	void UnregisterFromSense(class UClass* SenseClass);
	void UnregisterFromPerceptionSystem();
	void RegisterWithPerceptionSystem();
	void RegisterForSense(class UClass* SenseClass);
};

// Class AIModule.AIResource_Movement
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIResource_Movement : public UGameplayTaskResource
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIResource_Movement");
		return ptr;
	}



};

// Class AIModule.AIResource_Logic
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIResource_Logic : public UGameplayTaskResource
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIResource_Logic");
		return ptr;
	}



};

// Class AIModule.AISense_Blueprint
// 0x001C (FullSize[0x0080] - InheritedSize[0x0064])
class UAISense_Blueprint : public UAISense
{
public:
	class UClass*                                      ListenerDataType;                                          // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAIPerceptionComponent*>              ListenerContainer;                                         // 0x0068(0x000C) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UAISenseEvent*>                       UnprocessedEvents;                                         // 0x0074(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Blueprint");
		return ptr;
	}



	float OnUpdate(TArray<class UAISenseEvent*> EventsToProcess);
	void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void K2_OnNewPawn(class APawn* NewPawn);
	void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents);
	void GetAllListenerActors(TArray<class AActor*>* ListenerActors);
};

// Class AIModule.AISenseBlueprintListener
// 0x0000 (FullSize[0x0074] - InheritedSize[0x0074])
class UAISenseBlueprintListener : public UUserDefinedStruct
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseBlueprintListener");
		return ptr;
	}



};

// Class AIModule.AISenseConfig
// 0x0008 (FullSize[0x0024] - InheritedSize[0x001C])
class UAISenseConfig : public UObject
{
public:
	float                                              MaxAge;                                                    // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bStartsEnabled : 1;                                        // 0x0020(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EQQX[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig");
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Blueprint
// 0x0004 (FullSize[0x0028] - InheritedSize[0x0024])
class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Blueprint");
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Damage
// 0x0004 (FullSize[0x0028] - InheritedSize[0x0024])
class UAISenseConfig_Damage : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Damage");
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Hearing
// 0x0014 (FullSize[0x0038] - InheritedSize[0x0024])
class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HearingRange;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoSHearingRange;                                           // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseLoSHearing : 1;                                        // 0x0030(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NVE5[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                    // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Hearing");
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Prediction
// 0x0000 (FullSize[0x0024] - InheritedSize[0x0024])
class UAISenseConfig_Prediction : public UAISenseConfig
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Prediction");
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Sight
// 0x0018 (FullSize[0x003C] - InheritedSize[0x0024])
class UAISenseConfig_Sight : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SightRadius;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoseSightRadius;                                           // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PeripheralVisionAngleDegrees;                              // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                    // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              AutoSuccessRangeFromLastSeenLocation;                      // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Sight");
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Team
// 0x0000 (FullSize[0x0024] - InheritedSize[0x0024])
class UAISenseConfig_Team : public UAISenseConfig
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Team");
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Touch
// 0x0000 (FullSize[0x0024] - InheritedSize[0x0024])
class UAISenseConfig_Touch : public UAISenseConfig
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Touch");
		return ptr;
	}



};

// Class AIModule.AISenseEvent
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UAISenseEvent : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseEvent");
		return ptr;
	}



};

// Class AIModule.AISenseEvent_Damage
// 0x0024 (FullSize[0x0040] - InheritedSize[0x001C])
class UAISenseEvent_Damage : public UAISenseEvent
{
public:
	struct FAIDamageEvent                              Event;                                                     // 0x001C(0x0024) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseEvent_Damage");
		return ptr;
	}



};

// Class AIModule.AISenseEvent_Hearing
// 0x0028 (FullSize[0x0044] - InheritedSize[0x001C])
class UAISenseEvent_Hearing : public UAISenseEvent
{
public:
	struct FAINoiseEvent                               Event;                                                     // 0x001C(0x0028) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseEvent_Hearing");
		return ptr;
	}



};

// Class AIModule.AISightTargetInterface
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UAISightTargetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISightTargetInterface");
		return ptr;
	}



};

// Class AIModule.AITask
// 0x0004 (FullSize[0x0048] - InheritedSize[0x0044])
class UAITask : public UGameplayTask
{
public:
	class AAIController*                               OwnerController;                                           // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AITask");
		return ptr;
	}



};

// Class AIModule.AITask_MoveTo
// 0x0048 (FullSize[0x0090] - InheritedSize[0x0048])
class UAITask_MoveTo : public UAITask
{
public:
	struct FScriptMulticastDelegate                    OnRequestFailed;                                           // 0x0048(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnMoveFinished;                                            // 0x0054(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FVector                                     MoveGoalLocation;                                          // 0x0060(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W6UX[0xC];                                     // 0x006C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      MoveGoalActor;                                             // 0x0078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MoveAcceptanceRadius;                                      // 0x007C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bShouldStopOnOverlap;                                      // 0x0080(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	bool                                               bShouldAcceptPartialPath;                                  // 0x0081(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	bool                                               bShouldUsePathfinding;                                     // 0x0082(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JFS9[0xD];                                     // 0x0083(0x000D) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AITask_MoveTo");
		return ptr;
	}



	class UAITask_MoveTo* STATIC_AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<AIModule_EAIOptionFlag> StopOnOverlap, TEnumAsByte<AIModule_EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic);
};

// Class AIModule.BTCompositeNode
// 0x0024 (FullSize[0x0060] - InheritedSize[0x003C])
class UBTCompositeNode : public UBTNode
{
public:
	TArray<struct FBTCompositeChild>                   Children;                                                  // 0x003C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UBTService*>                          Services;                                                  // 0x0048(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0439[0xC];                                     // 0x0054(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTCompositeNode");
		return ptr;
	}



};

// Class AIModule.BehaviorTree
// 0x0024 (FullSize[0x0040] - InheritedSize[0x001C])
class UBehaviorTree : public UObject
{
public:
	class UBTCompositeNode*                            RootNode;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlackboardData*                             BlackboardAsset;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UBTDecorator*>                        RootDecorators;                                            // 0x0024(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBTDecoratorLogic>                   RootDecoratorOps;                                          // 0x0030(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_46M7[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BehaviorTree");
		return ptr;
	}



};

// Class AIModule.BehaviorTreeManager
// 0x001C (FullSize[0x0038] - InheritedSize[0x001C])
class UBehaviorTreeManager : public UObject
{
public:
	int                                                MaxDebuggerSteps;                                          // 0x001C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBehaviorTreeTemplateInfo>           LoadedTemplates;                                           // 0x0020(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UBehaviorTreeComponent*>              ActiveComponents;                                          // 0x002C(0x000C) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BehaviorTreeManager");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType
// 0x0004 (FullSize[0x0020] - InheritedSize[0x001C])
class UBlackboardKeyType : public UObject
{
public:
	unsigned char                                      UnknownData_T22I[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Enum
// 0x0014 (FullSize[0x0034] - InheritedSize[0x0020])
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
	class UEnum*                                       EnumType;                                                  // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EnumName;                                                  // 0x0024(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsEnumNameValid : 1;                                      // 0x0030(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ATYU[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Enum");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_NativeEnum
// 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
public:
	struct FString                                     EnumName;                                                  // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnum*                                       EnumType;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_NativeEnum");
		return ptr;
	}



};

// Class AIModule.BlackboardData
// 0x0018 (FullSize[0x0034] - InheritedSize[0x001C])
class UBlackboardData : public UDataAsset
{
public:
	class UBlackboardData*                             Parent;                                                    // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBlackboardEntry>                    Keys;                                                      // 0x0020(0x000C) (Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      bHasSynchronizedKeys : 1;                                  // 0x002C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZB72[0x7];                                     // 0x002D(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardData");
		return ptr;
	}



};

// Class AIModule.BlackboardComponent
// 0x00B4 (FullSize[0x0140] - InheritedSize[0x008C])
class UBlackboardComponent : public UActorComponent
{
public:
	class UBrainComponent*                             BrainComp;                                                 // 0x008C(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlackboardData*                             BlackboardAsset;                                           // 0x0090(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0PWW[0x18];                                    // 0x0094(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UBlackboardKeyType*>                  KeyInstances;                                              // 0x00AC(0x000C) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M8SC[0x88];                                    // 0x00B8(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardComponent");
		return ptr;
	}



	void SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue);
	void SetValueAsString(const struct FName& KeyName, const struct FString& StringValue);
	void SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue);
	void SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue);
	void SetValueAsName(const struct FName& KeyName, const struct FName& NameValue);
	void SetValueAsInt(const struct FName& KeyName, int IntValue);
	void SetValueAsFloat(const struct FName& KeyName, float FloatValue);
	void SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue);
	void SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue);
	void SetValueAsBool(const struct FName& KeyName, bool BoolValue);
	bool IsVectorValueSet(const struct FName& KeyName);
	struct FVector GetValueAsVector(const struct FName& KeyName);
	struct FString GetValueAsString(const struct FName& KeyName);
	struct FRotator GetValueAsRotator(const struct FName& KeyName);
	class UObject* GetValueAsObject(const struct FName& KeyName);
	struct FName GetValueAsName(const struct FName& KeyName);
	int GetValueAsInt(const struct FName& KeyName);
	float GetValueAsFloat(const struct FName& KeyName);
	unsigned char GetValueAsEnum(const struct FName& KeyName);
	class UClass* GetValueAsClass(const struct FName& KeyName);
	bool GetValueAsBool(const struct FName& KeyName);
	bool GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation);
	bool GetLocationFromEntry(const struct FName& KeyName, struct FVector* ResultLocation);
	void ClearValue(const struct FName& KeyName);
};

// Class AIModule.BlackboardKeyType_Bool
// 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Bool");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Class
// 0x0004 (FullSize[0x0024] - InheritedSize[0x0020])
class UBlackboardKeyType_Class : public UBlackboardKeyType
{
public:
	class UClass*                                      BASEClass;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Class");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Float
// 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
class UBlackboardKeyType_Float : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Float");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Int
// 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
class UBlackboardKeyType_Int : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Int");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Name
// 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
class UBlackboardKeyType_Name : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Name");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Object
// 0x0004 (FullSize[0x0024] - InheritedSize[0x0020])
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
	class UClass*                                      BASEClass;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Object");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Rotator
// 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Rotator");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_String
// 0x000C (FullSize[0x002C] - InheritedSize[0x0020])
class UBlackboardKeyType_String : public UBlackboardKeyType
{
public:
	struct FString                                     StringValue;                                               // 0x0020(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_String");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Vector
// 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Vector");
		return ptr;
	}



};

// Class AIModule.BTFunctionLibrary
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTFunctionLibrary");
		return ptr;
	}



	void STATIC_StopUsingExternalEvent(class UBTNode* NodeOwner);
	void STATIC_StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);
	void STATIC_SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value);
	void STATIC_SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FString& Value);
	void STATIC_SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value);
	void STATIC_SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value);
	void STATIC_SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FName& Value);
	void STATIC_SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int Value);
	void STATIC_SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value);
	void STATIC_SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value);
	void STATIC_SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value);
	void STATIC_SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value);
	class UBlackboardComponent* STATIC_GetOwnersBlackboard(class UBTNode* NodeOwner);
	class UBehaviorTreeComponent* STATIC_GetOwnerComponent(class UBTNode* NodeOwner);
	struct FVector STATIC_GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FString STATIC_GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FRotator STATIC_GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class UObject* STATIC_GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FName STATIC_GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	int STATIC_GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	float STATIC_GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	unsigned char STATIC_GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class UClass* STATIC_GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	bool STATIC_GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class AActor* STATIC_GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	void STATIC_ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	void STATIC_ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
};

// Class AIModule.BTGameplayDebuggerObject
// 0x0024 (FullSize[0x0088] - InheritedSize[0x0064])
class UBTGameplayDebuggerObject : public UGameplayDebuggerBaseObject
{
public:
	struct FString                                     BrainComponentName;                                        // 0x0064(0x000C) (Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BrainComponentString;                                      // 0x0070(0x000C) (Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M361[0xC];                                     // 0x007C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTGameplayDebuggerObject");
		return ptr;
	}



};

// Class AIModule.BTDecorator_BlackboardBase
// 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x0048(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_BlackboardBase");
		return ptr;
	}



};

// Class AIModule.BTDecorator_Blackboard
// 0x0024 (FullSize[0x008C] - InheritedSize[0x0068])
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	int                                                IntValue;                                                  // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FloatValue;                                                // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     StringValue;                                               // 0x0070(0x000C) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CachedDescription;                                         // 0x007C(0x000C) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      OperationType;                                             // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<AIModule_EBTBlackboardRestart>         NotifyObserver;                                            // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2047[0x2];                                     // 0x008A(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_Blackboard");
		return ptr;
	}



};

// Class AIModule.BTDecorator_ConditionalLoop
// 0x0000 (FullSize[0x008C] - InheritedSize[0x008C])
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_ConditionalLoop");
		return ptr;
	}



};

// Class AIModule.BTDecorator_IsAtLocation
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                          // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseNavAgentGoalLocation;                                  // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A2NX[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_IsAtLocation");
		return ptr;
	}



};

// Class AIModule.BTDecorator_IsBBEntryOfClass
// 0x0004 (FullSize[0x006C] - InheritedSize[0x0068])
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      TestClass;                                                 // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_IsBBEntryOfClass");
		return ptr;
	}



};

// Class AIModule.BTDecorator_BlueprintBase
// 0x0024 (FullSize[0x006C] - InheritedSize[0x0048])
class UBTDecorator_BlueprintBase : public UBTDecorator
{
public:
	class AAIController*                               AIOwner;                                                   // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      ActorOwner;                                                // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FName>                               ObservedKeyNames;                                          // 0x0050(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T1IB[0xC];                                     // 0x005C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bShowPropertyDetails : 1;                                  // 0x0068(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bCheckConditionOnlyBlackBoardChanges : 1;                  // 0x0068(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bIsObservingBB : 1;                                        // 0x0068(0x0001) BIT_FIELD (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6GSN[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_BlueprintBase");
		return ptr;
	}



	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverDeactivated(class AActor* OwnerActor);
	void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverActivated(class AActor* OwnerActor);
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionStart(class AActor* OwnerActor);
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<AIModule_EBTNodeResult> NodeResult);
	void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<AIModule_EBTNodeResult> NodeResult);
	void ReceiveConditionCheck(class AActor* OwnerActor);
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	bool PerformConditionCheck(class AActor* OwnerActor);
	bool IsDecoratorObserverActive();
	bool IsDecoratorExecutionActive();
	void FinishConditionCheck(bool bAllowExecution);
};

// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// 0x0048 (FullSize[0x0090] - InheritedSize[0x0048])
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      ActorToCheck;                                              // 0x0048(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<GameplayTags_EGameplayContainerMatchType> TagsToMatch;                                               // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7J2I[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x006C(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FString                                     CachedDescription;                                         // 0x0084(0x000C) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_CheckGameplayTagsOnActor");
		return ptr;
	}



};

// Class AIModule.BTDecorator_CompareBBEntries
// 0x0044 (FullSize[0x008C] - InheritedSize[0x0048])
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
	TEnumAsByte<AIModule_EBlackBoardEntryComparison>   Operator;                                                  // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZUAX[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      BlackboardKeyA;                                            // 0x004C(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                            // 0x006C(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_CompareBBEntries");
		return ptr;
	}



};

// Class AIModule.BTDecorator_ConeCheck
// 0x0068 (FullSize[0x00B0] - InheritedSize[0x0048])
class UBTDecorator_ConeCheck : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      ConeOrigin;                                                // 0x004C(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      ConeDirection;                                             // 0x006C(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      Observed;                                                  // 0x008C(0x0020) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F6M2[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_ConeCheck");
		return ptr;
	}



};

// Class AIModule.BTDecorator_Cooldown
// 0x0004 (FullSize[0x004C] - InheritedSize[0x0048])
class UBTDecorator_Cooldown : public UBTDecorator
{
public:
	float                                              CoolDownTime;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_Cooldown");
		return ptr;
	}



};

// Class AIModule.BTDecorator_DoesPathExist
// 0x004C (FullSize[0x0094] - InheritedSize[0x0048])
class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKeyA;                                            // 0x0048(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                            // 0x0068(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bUseSelf : 1;                                              // 0x0088(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WM75[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AIModule_EPathExistanceQueryType>      PathQueryType;                                             // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZKPJ[0x3];                                     // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      FilterClass;                                               // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_DoesPathExist");
		return ptr;
	}



};

// Class AIModule.BTDecorator_ForceSuccess
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UBTDecorator_ForceSuccess : public UBTDecorator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_ForceSuccess");
		return ptr;
	}



};

// Class AIModule.BTDecorator_KeepInCone
// 0x004C (FullSize[0x0094] - InheritedSize[0x0048])
class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      ConeOrigin;                                                // 0x004C(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      Observed;                                                  // 0x006C(0x0020) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      bUseSelfAsOrigin : 1;                                      // 0x008C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bUseSelfAsObserved : 1;                                    // 0x008C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F6HY[0x7];                                     // 0x008D(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_KeepInCone");
		return ptr;
	}



};

// Class AIModule.BTDecorator_Loop
// 0x000C (FullSize[0x0054] - InheritedSize[0x0048])
class UBTDecorator_Loop : public UBTDecorator
{
public:
	int                                                NumLoops;                                                  // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInfiniteLoop;                                             // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FU6K[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InfiniteLoopTimeoutTime;                                   // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_Loop");
		return ptr;
	}



};

// Class AIModule.BTDecorator_ReachedMoveGoal
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_ReachedMoveGoal");
		return ptr;
	}



};

// Class AIModule.BTDecorator_SetTagCooldown
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UBTDecorator_SetTagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                               // 0x0048(0x0008) (Edit, NativeAccessSpecifierPublic)
	float                                              CooldownDuration;                                          // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAddToExistingDuration;                                    // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X3CS[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_SetTagCooldown");
		return ptr;
	}



};

// Class AIModule.BTDecorator_TagCooldown
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UBTDecorator_TagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                               // 0x0048(0x0008) (Edit, NativeAccessSpecifierPublic)
	float                                              CooldownDuration;                                          // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAddToExistingDuration;                                    // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bActivatesCooldown;                                        // 0x0055(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z9H3[0x2];                                     // 0x0056(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_TagCooldown");
		return ptr;
	}



};

// Class AIModule.BTDecorator_TimeLimit
// 0x0004 (FullSize[0x004C] - InheritedSize[0x0048])
class UBTDecorator_TimeLimit : public UBTDecorator
{
public:
	float                                              TimeLimit;                                                 // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_TimeLimit");
		return ptr;
	}



};

// Class AIModule.BTService_BlackboardBase
// 0x0020 (FullSize[0x006C] - InheritedSize[0x004C])
class UBTService_BlackboardBase : public UBTService
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x004C(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTService_BlackboardBase");
		return ptr;
	}



};

// Class AIModule.BTService_DefaultFocus
// 0x0004 (FullSize[0x0070] - InheritedSize[0x006C])
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
public:
	unsigned char                                      FocusPriority;                                             // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SIVL[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTService_DefaultFocus");
		return ptr;
	}



};

// Class AIModule.EnvQueryTypes
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UEnvQueryTypes : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTypes");
		return ptr;
	}



};

// Class AIModule.BTService_RunEQS
// 0x0040 (FullSize[0x00AC] - InheritedSize[0x006C])
class UBTService_RunEQS : public UBTService_BlackboardBase
{
public:
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                                // 0x006C(0x0038) (Edit, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OX1P[0x8];                                     // 0x00A4(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTService_RunEQS");
		return ptr;
	}



};

// Class AIModule.BTService_BlueprintBase
// 0x0018 (FullSize[0x0064] - InheritedSize[0x004C])
class UBTService_BlueprintBase : public UBTService
{
public:
	class AAIController*                               AIOwner;                                                   // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      ActorOwner;                                                // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XAS5[0xC];                                     // 0x0054(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bShowPropertyDetails : 1;                                  // 0x0060(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bShowEventDetails : 1;                                     // 0x0060(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0JT4[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTService_BlueprintBase");
		return ptr;
	}



	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveSearchStart(class AActor* OwnerActor);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveActivation(class AActor* OwnerActor);
	bool IsServiceActive();
};

// Class AIModule.BTComposite_Selector
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBTComposite_Selector : public UBTCompositeNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTComposite_Selector");
		return ptr;
	}



};

// Class AIModule.BTComposite_Sequence
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBTComposite_Sequence : public UBTCompositeNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTComposite_Sequence");
		return ptr;
	}



};

// Class AIModule.BTComposite_SimpleParallel
// 0x0004 (FullSize[0x0064] - InheritedSize[0x0060])
class UBTComposite_SimpleParallel : public UBTCompositeNode
{
public:
	TEnumAsByte<AIModule_EBTParallelMode>              FinishMode;                                                // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5TUZ[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTComposite_SimpleParallel");
		return ptr;
	}



};

// Class AIModule.BTTask_RotateToFaceBBEntry
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	float                                              Precision;                                                 // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EXJR[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_RotateToFaceBBEntry");
		return ptr;
	}



};

// Class AIModule.BTTask_RunEQSQuery
// 0x0084 (FullSize[0x00E4] - InheritedSize[0x0060])
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                                   QueryTemplate;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEnvNamedValue>                      QueryParams;                                               // 0x0064(0x000C) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                               // 0x0070(0x000C) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvQueryRunMode>             RunMode;                                                   // 0x007C(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KNDO[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      EQSQueryBlackboardKey;                                     // 0x0080(0x0020) (Edit, EditConst, NativeAccessSpecifierPublic)
	bool                                               bUseBBKey;                                                 // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HHRI[0x3];                                     // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                                // 0x00A4(0x0038) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W52E[0x8];                                     // 0x00DC(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_RunEQSQuery");
		return ptr;
	}



};

// Class AIModule.BTTask_BlueprintBase
// 0x001C (FullSize[0x005C] - InheritedSize[0x0040])
class UBTTask_BlueprintBase : public UBTTaskNode
{
public:
	class AAIController*                               AIOwner;                                                   // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      ActorOwner;                                                // 0x0044(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2I9M[0x10];                                    // 0x0048(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bShowPropertyDetails : 1;                                  // 0x0058(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AJ0H[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_BlueprintBase");
		return ptr;
	}



	void SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID);
	void SetFinishOnMessage(const struct FName& MessageName);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecute(class AActor* OwnerActor);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbort(class AActor* OwnerActor);
	bool IsTaskExecuting();
	bool IsTaskAborting();
	void FinishExecute(bool bSuccess);
	void FinishAbort();
};

// Class AIModule.BTTask_MakeNoise
// 0x0004 (FullSize[0x0044] - InheritedSize[0x0040])
class UBTTask_MakeNoise : public UBTTaskNode
{
public:
	float                                              Loudnes;                                                   // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_MakeNoise");
		return ptr;
	}



};

// Class AIModule.BTTask_PushPawnAction
// 0x0004 (FullSize[0x0044] - InheritedSize[0x0040])
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:
	class UPawnAction*                                 Action;                                                    // 0x0040(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_PushPawnAction");
		return ptr;
	}



};

// Class AIModule.BTTask_PlayAnimation
// 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
class UBTTask_PlayAnimation : public UBTTaskNode
{
public:
	class UAnimationAsset*                             AnimationToPlay;                                           // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLooping : 1;                                              // 0x0044(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bNonBlocking : 1;                                          // 0x0044(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QKH0[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBehaviorTreeComponent*                      MyOwnerComp;                                               // 0x0048(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      CachedSkelMesh;                                            // 0x004C(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JJRQ[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_PlayAnimation");
		return ptr;
	}



};

// Class AIModule.BTTask_PlaySound
// 0x0004 (FullSize[0x0044] - InheritedSize[0x0040])
class UBTTask_PlaySound : public UBTTaskNode
{
public:
	class USoundCue*                                   SoundToPlay;                                               // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_PlaySound");
		return ptr;
	}



};

// Class AIModule.BTTask_RunBehavior
// 0x0004 (FullSize[0x0044] - InheritedSize[0x0040])
class UBTTask_RunBehavior : public UBTTaskNode
{
public:
	class UBehaviorTree*                               BehaviorAsset;                                             // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_RunBehavior");
		return ptr;
	}



};

// Class AIModule.BTTask_RunBehaviorDynamic
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	struct FGameplayTag                                InjectionTag;                                              // 0x0040(0x0008) (Edit, Protected, NativeAccessSpecifierProtected)
	class UBehaviorTree*                               DefaultBehaviorAsset;                                      // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBehaviorTree*                               BehaviorAsset;                                             // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_RunBehaviorDynamic");
		return ptr;
	}



};

// Class AIModule.BTTask_SetTagCooldown
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
	struct FGameplayTag                                CooldownTag;                                               // 0x0040(0x0008) (Edit, NativeAccessSpecifierPublic)
	bool                                               bAddToExistingDuration;                                    // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0MG9[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CooldownDuration;                                          // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_SetTagCooldown");
		return ptr;
	}



};

// Class AIModule.BTTask_Wait
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UBTTask_Wait : public UBTTaskNode
{
public:
	float                                              WaitTime;                                                  // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RandomDeviation;                                           // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_Wait");
		return ptr;
	}



};

// Class AIModule.BTTask_WaitBlackboardTime
// 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x0048(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_WaitBlackboardTime");
		return ptr;
	}



};

// Class AIModule.CrowdAgentInterface
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UCrowdAgentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.CrowdAgentInterface");
		return ptr;
	}



};

// Class AIModule.EnvQuery
// 0x0014 (FullSize[0x0030] - InheritedSize[0x001C])
class UEnvQuery : public UDataAsset
{
public:
	struct FName                                       QueryName;                                                 // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UEnvQueryOption*>                     Options;                                                   // 0x0024(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQuery");
		return ptr;
	}



};

// Class AIModule.EnvQueryContext_BlueprintBase
// 0x0004 (FullSize[0x0020] - InheritedSize[0x001C])
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData_F1MG[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryContext_BlueprintBase");
		return ptr;
	}



	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation);
	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor);
	void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet);
};

// Class AIModule.EnvQueryContext_Item
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UEnvQueryContext_Item : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Item");
		return ptr;
	}



};

// Class AIModule.EnvQueryContext_Querier
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UEnvQueryContext_Querier : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Querier");
		return ptr;
	}



};

// Class AIModule.VisualLoggerExtension
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UVisualLoggerExtension : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.VisualLoggerExtension");
		return ptr;
	}



};

// Class AIModule.EnvQueryDebugHelpers
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UEnvQueryDebugHelpers : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryDebugHelpers");
		return ptr;
	}



};

// Class AIModule.EQSQueryResultSourceInterface
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UEQSQueryResultSourceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EQSQueryResultSourceInterface");
		return ptr;
	}



};

// Class AIModule.EnvQueryInstanceBlueprintWrapper
// 0x0028 (FullSize[0x0044] - InheritedSize[0x001C])
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	unsigned char                                      UnknownData_SIZ4[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                QueryID;                                                   // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WTQE[0xC];                                     // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ItemType;                                                  // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                OptionIndex;                                               // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnQueryFinishedEvent;                                      // 0x0038(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryInstanceBlueprintWrapper");
		return ptr;
	}



	TArray<struct FVector> GetResultsAsLocations();
	TArray<class AActor*> GetResultsAsActors();
	float GetItemScore(int ItemIndex);
	void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<AIModule_EEnvQueryStatus> QueryStatus);
};

// Class AIModule.EnvQueryItemType_Actor
// 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Actor");
		return ptr;
	}



};

// Class AIModule.EnvQueryItemType_Direction
// 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Direction");
		return ptr;
	}



};

// Class AIModule.EnvQueryManager
// 0x00BC (FullSize[0x00D8] - InheritedSize[0x001C])
class UEnvQueryManager : public UObject
{
public:
	unsigned char                                      UnknownData_429H[0x4C];                                    // 0x001C(0x004C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEnvQueryInstanceCache>              InstanceCache;                                             // 0x0068(0x000C) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UEnvQueryContext*>                    LocalContexts;                                             // 0x0074(0x000C) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UEnvQueryInstanceBlueprintWrapper*>   GCShieldedWrappers;                                        // 0x0080(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_O2QK[0x40];                                    // 0x008C(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             MaxAllowedTestingTime;                                     // 0x00CC(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bTestQueriesUsingBreadth;                                  // 0x00D4(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SNJM[0x3];                                     // 0x00D5(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryManager");
		return ptr;
	}



	class UEnvQueryInstanceBlueprintWrapper* STATIC_RunEQSQuery(class UObject* WorldContext, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<AIModule_EEnvQueryRunMode> RunMode, class UClass* WrapperClass);
};

// Class AIModule.EnvQueryGenerator_ActorsOfClass
// 0x0024 (FullSize[0x0058] - InheritedSize[0x0034])
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderFloatValue                   SearchRadius;                                              // 0x0034(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      SearchedActorClass;                                        // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SearchCenter;                                              // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ActorsOfClass");
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_BlueprintBase
// 0x0018 (FullSize[0x004C] - InheritedSize[0x0034])
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
	struct FText                                       GeneratorsActionDescription;                               // 0x0034(0x0018) ELEMENT_SIZE_MISMATCH (Edit, NativeAccessSpecifierPublic)
	class UClass*                                      Context;                                                   // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      GeneratedItemType;                                         // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZF2H[0x4];                                     // 0x0048(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_BlueprintBase");
		return ptr;
	}



	class UObject* GetQuerier();
	void DoItemGeneration(TArray<struct FVector> ContextLocations);
	void AddGeneratedVector(const struct FVector& GeneratedVector);
	void AddGeneratedActor(class AActor* GeneratedActor);
};

// Class AIModule.EnvQueryGenerator_Composite
// 0x0010 (FullSize[0x0044] - InheritedSize[0x0034])
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
public:
	TArray<class UEnvQueryGenerator*>                  Generators;                                                // 0x0034(0x000C) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bHasMatchingItemType;                                      // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MDXF[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Composite");
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_CurrentLocation
// 0x0004 (FullSize[0x0038] - InheritedSize[0x0034])
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
public:
	class UClass*                                      QueryContext;                                              // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_CurrentLocation");
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_Donut
// 0x00A8 (FullSize[0x0104] - InheritedSize[0x005C])
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                               // 0x005C(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   OuterRadius;                                               // 0x0078(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue                     NumberOfRings;                                             // 0x0094(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue                     PointsPerRing;                                             // 0x00B0(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FEnvDirection                               ArcDirection;                                              // 0x00CC(0x0010) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                  // 0x00DC(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bUseSpiralPattern;                                         // 0x00F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6AUN[0x3];                                     // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Center;                                                    // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDefineArc : 1;                                            // 0x0100(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VBW5[0x3];                                     // 0x0101(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Donut");
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_SimpleGrid
// 0x003C (FullSize[0x0098] - InheritedSize[0x005C])
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   GridSize;                                                  // 0x005C(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                              // 0x0078(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      GenerateAround;                                            // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_SimpleGrid");
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_PathingGrid
// 0x003C (FullSize[0x00D4] - InheritedSize[0x0098])
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:
	struct FAIDataProviderBoolValue                    PathToItem;                                                // 0x0098(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      NavigationFilter;                                          // 0x00B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                       // 0x00B8(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_PathingGrid");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Distance
// 0x0008 (FullSize[0x0114] - InheritedSize[0x010C])
class UEnvQueryTest_Distance : public UEnvQueryTest
{
public:
	TEnumAsByte<AIModule_EEnvTestDistance>             TestMode;                                                  // 0x010C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RV74[0x3];                                     // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DistanceTo;                                                // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Distance");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Dot
// 0x0024 (FullSize[0x0130] - InheritedSize[0x010C])
class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
	struct FEnvDirection                               LineA;                                                     // 0x010C(0x0010) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FEnvDirection                               LineB;                                                     // 0x011C(0x0010) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<AIModule_EEnvTestDot>                  TestMode;                                                  // 0x012C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAbsoluteValue;                                            // 0x012D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_X5NW[0x2];                                     // 0x012E(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Dot");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_GameplayTags
// 0x001C (FullSize[0x0128] - InheritedSize[0x010C])
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
public:
	TEnumAsByte<GameplayTags_EGameplayContainerMatchType> TagsToMatch;                                               // 0x010C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4904[0x3];                                     // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x0110(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_GameplayTags");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Overlap
// 0x0020 (FullSize[0x012C] - InheritedSize[0x010C])
class UEnvQueryTest_Overlap : public UEnvQueryTest
{
public:
	struct FEnvOverlapData                             OverlapData;                                               // 0x010C(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Overlap");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Pathfinding
// 0x0044 (FullSize[0x0150] - InheritedSize[0x010C])
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	TEnumAsByte<AIModule_EEnvTestPathfinding>          TestMode;                                                  // 0x010C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X9C1[0x3];                                     // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Context;                                                   // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue                    PathFromContext;                                           // 0x0114(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue                    SkipUnreachable;                                           // 0x0130(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UClass*                                      FilterClass;                                               // 0x014C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Pathfinding");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_PathfindingBatch
// 0x001C (FullSize[0x016C] - InheritedSize[0x0150])
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                       // 0x0150(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_PathfindingBatch");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Project
// 0x0028 (FullSize[0x0134] - InheritedSize[0x010C])
class UEnvQueryTest_Project : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               ProjectionData;                                            // 0x010C(0x0028) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Project");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Random
// 0x0000 (FullSize[0x010C] - InheritedSize[0x010C])
class UEnvQueryTest_Random : public UEnvQueryTest
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Random");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Trace
// 0x0080 (FullSize[0x018C] - InheritedSize[0x010C])
class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               TraceData;                                                 // 0x010C(0x0028) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue                    TraceFromContext;                                          // 0x0134(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ItemHeightOffset;                                          // 0x0150(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ContextHeightOffset;                                       // 0x016C(0x001C) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UClass*                                      Context;                                                   // 0x0188(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Trace");
		return ptr;
	}



};

// Class AIModule.EnvQueryOption
// 0x0010 (FullSize[0x002C] - InheritedSize[0x001C])
class UEnvQueryOption : public UObject
{
public:
	class UEnvQueryGenerator*                          Generator;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UEnvQueryTest*>                       Tests;                                                     // 0x0020(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryOption");
		return ptr;
	}



};

// Class AIModule.EQSGameplayDebuggerObject
// 0x0028 (FullSize[0x008C] - InheritedSize[0x0064])
class UEQSGameplayDebuggerObject : public UGameplayDebuggerBaseObject
{
public:
	unsigned char                                      UnknownData_H7L9[0x28];                                    // 0x0064(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EQSGameplayDebuggerObject");
		return ptr;
	}



	void OnCycleDetailsView();
};

// Class AIModule.EQSRenderingComponent
// 0x0014 (FullSize[0x0440] - InheritedSize[0x042C])
class UEQSRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_HTRC[0x4];                                     // 0x042C(0x0004) Fix Super Size
	unsigned char                                      UnknownData_5E8E[0x10];                                    // 0x0430(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EQSRenderingComponent");
		return ptr;
	}



};

// Class AIModule.EQSTestingPawn
// 0x0044 (FullSize[0x0550] - InheritedSize[0x050C])
class AEQSTestingPawn : public ACharacter
{
public:
	class UEnvQuery*                                   QueryTemplate;                                             // 0x050C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEnvNamedValue>                      QueryParams;                                               // 0x0510(0x000C) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                               // 0x051C(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              TimeLimitPerStep;                                          // 0x0528(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StepToDebugDraw;                                           // 0x052C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvQueryHightlightMode>      HighlightMode;                                             // 0x0530(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7MRD[0x3];                                     // 0x0531(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bDrawLabels : 1;                                           // 0x0534(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawFailedItems : 1;                                      // 0x0534(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bReRunQueryOnlyOnFinishedMove : 1;                         // 0x0534(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bShouldBeVisibleInGame : 1;                                // 0x0534(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bTickDuringGame : 1;                                       // 0x0534(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UJ4R[0x3];                                     // 0x0535(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AIModule_EEnvQueryRunMode>             QueryingMode;                                              // 0x0538(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NXF7[0x17];                                    // 0x0539(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EQSTestingPawn");
		return ptr;
	}



};

// Class AIModule.NavMeshGameplayDebuggerObject
// 0x0004 (FullSize[0x0068] - InheritedSize[0x0064])
class UNavMeshGameplayDebuggerObject : public UGameplayDebuggerBaseObject
{
public:
	unsigned char                                      UnknownData_4TUH[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.NavMeshGameplayDebuggerObject");
		return ptr;
	}



	void ServerDiscardNavmeshData();
};

// Class AIModule.PawnAction_BlueprintBase
// 0x0000 (FullSize[0x0064] - InheritedSize[0x0064])
class UPawnAction_BlueprintBase : public UPawnAction
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnAction_BlueprintBase");
		return ptr;
	}



	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionPause(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<AIModule_EPawnActionResult> WithResult);
};

// Class AIModule.PawnAction_Repeat
// 0x0014 (FullSize[0x0078] - InheritedSize[0x0064])
class UPawnAction_Repeat : public UPawnAction
{
public:
	class UPawnAction*                                 ActionToRepeat;                                            // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawnAction*                                 RecentActionCopy;                                          // 0x0068(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EPawnActionFailHandling>      ChildFailureHandlingMode;                                  // 0x006C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D4VI[0xB];                                     // 0x006D(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnAction_Repeat");
		return ptr;
	}



};

// Class AIModule.PawnAction_Sequence
// 0x001C (FullSize[0x0080] - InheritedSize[0x0064])
class UPawnAction_Sequence : public UPawnAction
{
public:
	TArray<class UPawnAction*>                         ActionSequence;                                            // 0x0064(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EPawnActionFailHandling>      ChildFailureHandlingMode;                                  // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G5C3[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPawnAction*                                 RecentActionCopy;                                          // 0x0074(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IF1C[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnAction_Sequence");
		return ptr;
	}



};

// Class AIModule.PawnAction_Wait
// 0x000C (FullSize[0x0070] - InheritedSize[0x0064])
class UPawnAction_Wait : public UPawnAction
{
public:
	float                                              TimeToWait;                                                // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_57CL[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnAction_Wait");
		return ptr;
	}



};

// Class AIModule.PawnSensingComponent
// 0x003C (FullSize[0x00C8] - InheritedSize[0x008C])
class UPawnSensingComponent : public UActorComponent
{
public:
	float                                              HearingThreshold;                                          // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LOSHearingThreshold;                                       // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SightRadius;                                               // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SensingInterval;                                           // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HearingMaxSoundAge;                                        // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableSensingUpdates : 1;                                 // 0x00A0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bOnlySensePlayers : 1;                                     // 0x00A0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSeePawns : 1;                                             // 0x00A0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bHearNoises : 1;                                           // 0x00A0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RXS3[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSeePawn;                                                 // 0x00A8(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHearNoise;                                               // 0x00B4(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              PeripheralVisionAngle;                                     // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PeripheralVisionCosine;                                    // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnSensingComponent");
		return ptr;
	}



	void SetSensingUpdatesEnabled(bool bEnabled);
	void SetSensingInterval(float NewSensingInterval);
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
	void SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume);
	float GetPeripheralVisionCosine();
	float GetPeripheralVisionAngle();
};

// Class AIModule.PerceptionGameplayDebuggerObject
// 0x0024 (FullSize[0x0088] - InheritedSize[0x0064])
class UPerceptionGameplayDebuggerObject : public UGameplayDebuggerBaseObject
{
public:
	struct FVector                                     SensingComponentLocation;                                  // 0x0064(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FString                                     PerceptionLegend;                                          // 0x0070(0x000C) (Net, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DistanceFromPlayer;                                        // 0x007C(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DistanceFromSensor;                                        // 0x0080(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CTNC[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PerceptionGameplayDebuggerObject");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
