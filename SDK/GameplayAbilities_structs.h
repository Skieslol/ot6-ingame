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

// Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
enum class GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
	EGameplayEffectGrantedAbilityRemovePolicy__CancelAbilityImmediately = 0,
	EGameplayEffectGrantedAbilityRemovePolicy__RemoveAbilityOnEnd = 1,
	EGameplayEffectGrantedAbilityRemovePolicy__DoNothing = 2,
	EGameplayEffectGrantedAbilityRemovePolicy__EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3,

};

// Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class GameplayAbilities_EGameplayEffectAttributeCaptureSource : uint8_t
{
	EGameplayEffectAttributeCaptureSource__Source = 0,
	EGameplayEffectAttributeCaptureSource__Target = 1,
	EGameplayEffectAttributeCaptureSource__EGameplayEffectAttributeCaptureSource_MAX = 2,

};

// Enum GameplayAbilities.EGameplayAbilityActivationMode
enum class GameplayAbilities_EGameplayAbilityActivationMode : uint8_t
{
	EGameplayAbilityActivationMode__Authority = 0,
	EGameplayAbilityActivationMode__NonAuthority = 1,
	EGameplayAbilityActivationMode__Predicting = 2,
	EGameplayAbilityActivationMode__Confirmed = 3,
	EGameplayAbilityActivationMode__EGameplayAbilityActivationMode_MAX = 4,

};

// Enum GameplayAbilities.EAbilityGenericReplicatedEvent
enum class GameplayAbilities_EAbilityGenericReplicatedEvent : uint8_t
{
	EAbilityGenericReplicatedEvent__GenericConfirm = 0,
	EAbilityGenericReplicatedEvent__GenericCancel = 1,
	EAbilityGenericReplicatedEvent__InputPressed = 2,
	EAbilityGenericReplicatedEvent__InputReleased = 3,
	EAbilityGenericReplicatedEvent__GenericSignalFromClient = 4,
	EAbilityGenericReplicatedEvent__GenericSignalFromServer = 5,
	EAbilityGenericReplicatedEvent__GameCustom1 = 6,
	EAbilityGenericReplicatedEvent__GameCustom2 = 7,
	EAbilityGenericReplicatedEvent__GameCustom3 = 8,
	EAbilityGenericReplicatedEvent__GameCustom4 = 9,
	EAbilityGenericReplicatedEvent__GameCustom5 = 10,
	EAbilityGenericReplicatedEvent__MAX = 11,
	EAbilityGenericReplicatedEvent__EAbilityGenericReplicatedEvent_MAX = 12,

};

// Enum GameplayAbilities.EGameplayTagEventType
enum class GameplayAbilities_EGameplayTagEventType : uint8_t
{
	EGameplayTagEventType__NewOrRemoved = 0,
	EGameplayTagEventType__AnyCountChange = 1,
	EGameplayTagEventType__EGameplayTagEventType_MAX = 2,

};

// Enum GameplayAbilities.EGameplayCueEvent
enum class GameplayAbilities_EGameplayCueEvent : uint8_t
{
	EGameplayCueEvent__OnActive    = 0,
	EGameplayCueEvent__WhileActive = 1,
	EGameplayCueEvent__Executed    = 2,
	EGameplayCueEvent__Removed     = 3,
	EGameplayCueEvent__EGameplayCueEvent_MAX = 4,

};

// Enum GameplayAbilities.EGameplayEffectStackingType
enum class GameplayAbilities_EGameplayEffectStackingType : uint8_t
{
	EGameplayEffectStackingType__None = 0,
	EGameplayEffectStackingType__AggregateBySource = 1,
	EGameplayEffectStackingType__AggregateByTarget = 2,
	EGameplayEffectStackingType__EGameplayEffectStackingType_MAX = 3,

};

// Enum GameplayAbilities.EGameplayModOp
enum class GameplayAbilities_EGameplayModOp : uint8_t
{
	EGameplayModOp__Additive       = 0,
	EGameplayModOp__Multiplicitive = 1,
	EGameplayModOp__Division       = 2,
	EGameplayModOp__Override       = 3,
	EGameplayModOp__Max            = 4,
	EGameplayModOp__EGameplayModOp_MAX = 5,

};

// Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
enum class GameplayAbilities_EGameplayAbilityTargetingLocationType : uint8_t
{
	EGameplayAbilityTargetingLocationType__LiteralTransform = 0,
	EGameplayAbilityTargetingLocationType__ActorTransform = 1,
	EGameplayAbilityTargetingLocationType__SocketTransform = 2,
	EGameplayAbilityTargetingLocationType__EGameplayAbilityTargetingLocationType_MAX = 3,

};

// Enum GameplayAbilities.EGameplayTargetingConfirmation
enum class GameplayAbilities_EGameplayTargetingConfirmation : uint8_t
{
	EGameplayTargetingConfirmation__Instant = 0,
	EGameplayTargetingConfirmation__UserConfirmed = 1,
	EGameplayTargetingConfirmation__Custom = 2,
	EGameplayTargetingConfirmation__CustomMulti = 3,
	EGameplayTargetingConfirmation__EGameplayTargetingConfirmation_MAX = 4,

};

// Enum GameplayAbilities.EGameplayEffectStackingExpirationPolicy
enum class GameplayAbilities_EGameplayEffectStackingExpirationPolicy : uint8_t
{
	EGameplayEffectStackingExpirationPolicy__ClearEntireStack = 0,
	EGameplayEffectStackingExpirationPolicy__RemoveSingleStackAndRefreshDuration = 1,
	EGameplayEffectStackingExpirationPolicy__RefreshDuration = 2,
	EGameplayEffectStackingExpirationPolicy__EGameplayEffectStackingExpirationPolicy_MAX = 3,

};

// Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
enum class GameplayAbilities_EGameplayEffectStackingPeriodPolicy : uint8_t
{
	EGameplayEffectStackingPeriodPolicy__ResetOnSuccessfulApplication = 0,
	EGameplayEffectStackingPeriodPolicy__NeverReset = 1,
	EGameplayEffectStackingPeriodPolicy__EGameplayEffectStackingPeriodPolicy_MAX = 2,

};

// Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
enum class GameplayAbilities_EGameplayEffectStackingDurationPolicy : uint8_t
{
	EGameplayEffectStackingDurationPolicy__RefreshOnSuccessfulApplication = 0,
	EGameplayEffectStackingDurationPolicy__NeverRefresh = 1,
	EGameplayEffectStackingDurationPolicy__EGameplayEffectStackingDurationPolicy_MAX = 2,

};

// Enum GameplayAbilities.EGameplayEffectDurationType
enum class GameplayAbilities_EGameplayEffectDurationType : uint8_t
{
	EGameplayEffectDurationType__Instant = 0,
	EGameplayEffectDurationType__Infinite = 1,
	EGameplayEffectDurationType__HasDuration = 2,
	EGameplayEffectDurationType__EGameplayEffectDurationType_MAX = 3,

};

// Enum GameplayAbilities.EAttributeBasedFloatCalculationType
enum class GameplayAbilities_EAttributeBasedFloatCalculationType : uint8_t
{
	EAttributeBasedFloatCalculationType__AttributeMagnitude = 0,
	EAttributeBasedFloatCalculationType__AttributeBaseValue = 1,
	EAttributeBasedFloatCalculationType__AttributeBonusMagnitude = 2,
	EAttributeBasedFloatCalculationType__EAttributeBasedFloatCalculationType_MAX = 3,

};

// Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class GameplayAbilities_EGameplayEffectMagnitudeCalculation : uint8_t
{
	EGameplayEffectMagnitudeCalculation__ScalableFloat = 0,
	EGameplayEffectMagnitudeCalculation__AttributeBased = 1,
	EGameplayEffectMagnitudeCalculation__CustomCalculationClass = 2,
	EGameplayEffectMagnitudeCalculation__SetByCaller = 3,
	EGameplayEffectMagnitudeCalculation__EGameplayEffectMagnitudeCalculation_MAX = 4,

};

// Enum GameplayAbilities.EGameplayAbilityTriggerSource
enum class GameplayAbilities_EGameplayAbilityTriggerSource : uint8_t
{
	EGameplayAbilityTriggerSource__GameplayEvent = 0,
	EGameplayAbilityTriggerSource__OwnedTagAdded = 1,
	EGameplayAbilityTriggerSource__OwnedTagPresent = 2,
	EGameplayAbilityTriggerSource__EGameplayAbilityTriggerSource_MAX = 3,

};

// Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
enum class GameplayAbilities_EGameplayAbilityReplicationPolicy : uint8_t
{
	EGameplayAbilityReplicationPolicy__ReplicateNo = 0,
	EGameplayAbilityReplicationPolicy__ReplicateYes = 1,
	EGameplayAbilityReplicationPolicy__EGameplayAbilityReplicationPolicy_MAX = 2,

};

// Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class GameplayAbilities_EGameplayAbilityNetExecutionPolicy : uint8_t
{
	EGameplayAbilityNetExecutionPolicy__LocalPredicted = 0,
	EGameplayAbilityNetExecutionPolicy__LocalOnly = 1,
	EGameplayAbilityNetExecutionPolicy__ServerInitiated = 2,
	EGameplayAbilityNetExecutionPolicy__ServerOnly = 3,
	EGameplayAbilityNetExecutionPolicy__EGameplayAbilityNetExecutionPolicy_MAX = 4,

};

// Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
enum class GameplayAbilities_EGameplayAbilityInstancingPolicy : uint8_t
{
	EGameplayAbilityInstancingPolicy__NonInstanced = 0,
	EGameplayAbilityInstancingPolicy__InstancedPerActor = 1,
	EGameplayAbilityInstancingPolicy__InstancedPerExecution = 2,
	EGameplayAbilityInstancingPolicy__EGameplayAbilityInstancingPolicy_MAX = 3,

};

// Enum GameplayAbilities.ETargetDataFilterSelf
enum class GameplayAbilities_ETargetDataFilterSelf : uint8_t
{
	ETargetDataFilterSelf__TDFS_Any = 0,
	ETargetDataFilterSelf__TDFS_NoSelf = 1,
	ETargetDataFilterSelf__TDFS_NoOthers = 2,
	ETargetDataFilterSelf__TDFS_MAX = 3,

};

// Enum GameplayAbilities.EAbilityTaskWaitState
enum class GameplayAbilities_EAbilityTaskWaitState : uint8_t
{
	EAbilityTaskWaitState__WaitingOnGame = 0,
	EAbilityTaskWaitState__WaitingOnUser = 1,
	EAbilityTaskWaitState__EAbilityTaskWaitState_MAX = 2,

};

// Enum GameplayAbilities.EAbilityTaskNetSyncType
enum class GameplayAbilities_EAbilityTaskNetSyncType : uint8_t
{
	EAbilityTaskNetSyncType__BothWait = 0,
	EAbilityTaskNetSyncType__OnlyServerWait = 1,
	EAbilityTaskNetSyncType__OnlyClientWait = 2,
	EAbilityTaskNetSyncType__EAbilityTaskNetSyncType_MAX = 3,

};

// Enum GameplayAbilities.EWaitAttributeChangeComparison
enum class GameplayAbilities_EWaitAttributeChangeComparison : uint8_t
{
	EWaitAttributeChangeComparison__None = 0,
	EWaitAttributeChangeComparison__GreaterThan = 1,
	EWaitAttributeChangeComparison__LessThan = 2,
	EWaitAttributeChangeComparison__GreaterThanOrEqualTo = 3,
	EWaitAttributeChangeComparison__LessThanOrEqualTo = 4,
	EWaitAttributeChangeComparison__NotEqualTo = 5,
	EWaitAttributeChangeComparison__ExactlyEqualTo = 6,
	EWaitAttributeChangeComparison__MAX = 7,
	EWaitAttributeChangeComparison__EWaitAttributeChangeComparison_MAX = 8,

};

// Enum GameplayAbilities.EGameplayAbilityInputBinds
enum class GameplayAbilities_EGameplayAbilityInputBinds : uint8_t
{
	EGameplayAbilityInputBinds__Ability1 = 0,
	EGameplayAbilityInputBinds__Ability2 = 1,
	EGameplayAbilityInputBinds__Ability3 = 2,
	EGameplayAbilityInputBinds__Ability4 = 3,
	EGameplayAbilityInputBinds__Ability5 = 4,
	EGameplayAbilityInputBinds__Ability6 = 5,
	EGameplayAbilityInputBinds__Ability7 = 6,
	EGameplayAbilityInputBinds__Ability8 = 7,
	EGameplayAbilityInputBinds__Ability9 = 8,
	EGameplayAbilityInputBinds__EGameplayAbilityInputBinds_MAX = 9,

};

// Enum GameplayAbilities.ETargetAbilitySelfSelection
enum class GameplayAbilities_ETargetAbilitySelfSelection : uint8_t
{
	ETargetAbilitySelfSelection__TASS_Permit = 0,
	ETargetAbilitySelfSelection__TASS_Forbid = 1,
	ETargetAbilitySelfSelection__TASS_Require = 2,
	ETargetAbilitySelfSelection__TASS_MAX = 3,

};

// Enum GameplayAbilities.EGameplayCuePayloadType
enum class GameplayAbilities_EGameplayCuePayloadType : uint8_t
{
	EGameplayCuePayloadType__EffectContext = 0,
	EGameplayCuePayloadType__CueParameters = 1,
	EGameplayCuePayloadType__FromSpec = 2,
	EGameplayCuePayloadType__EGameplayCuePayloadType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayAbilities.AttributeDefaults
// 0x0008
struct FAttributeDefaults
{
	class UClass*                                      Attributes;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  DefaultStartingTable;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.PredictionKey
// 0x000C
struct FPredictionKey
{
	int16_t                                            Current;                                                   // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            Base;                                                      // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPackageMap*                                 PredictiveConnection;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsStale;                                                  // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsServerInitiated;                                        // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_THGE[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
// 0x0004
struct FGameplayAbilitySpecHandle
{
	int                                                Handle;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
// 0x0004
struct FActiveGameplayEffectHandle
{
	int                                                Handle;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct GameplayAbilities.GameplayAttribute
// 0x0004
struct FGameplayAttribute
{
	class UProperty*                                   Attribute;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct GameplayAbilities.ModifierSpec
// 0x0004
struct FModifierSpec
{
	float                                              EvaluatedMagnitude;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct GameplayAbilities.GameplayEffectContextHandle
// 0x000C
struct FGameplayEffectContextHandle
{
	unsigned char                                      UnknownData_V3JX[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
// 0x0014
struct FGameplayAbilityTargetDataHandle
{
	unsigned char                                      UnknownData_G9W4[0x14];                                    // 0x0000(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
// 0x000C
struct FGameplayEffectSpecHandle
{
	unsigned char                                      UnknownData_M2P4[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
// 0x0010
struct FGameplayAbilityActivationInfo
{
	TEnumAsByte<GameplayAbilities_EGameplayAbilityActivationMode> ActivationMode;                                            // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCanBeEndedByOtherInstance : 1;                            // 0x0001(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OYPW[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPredictionKey                              PredictionKeyWhenActivated;                                // 0x0004(0x000C) (NativeAccessSpecifierPrivate)

};

// ScriptStruct GameplayAbilities.GameplayAbilitySpec
// 0x0044 (0x0050 - 0x000C)
struct FGameplayAbilitySpec : public FFastArraySerializerItem
{
	struct FGameplayAbilitySpecHandle                  Handle;                                                    // 0x000C(0x0004) (NativeAccessSpecifierPublic)
	class UGameplayAbility*                            Ability;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InputID;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     SourceObject;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ActiveCount;                                               // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      InputPressed : 1;                                          // 0x0021(0x0001) BIT_FIELD (RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      RemoveAfterActivation : 1;                                 // 0x0021(0x0001) BIT_FIELD (RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      PendingRemove : 1;                                         // 0x0021(0x0001) BIT_FIELD (RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X4VK[0x2];                                     // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                            // 0x0024(0x0010) (RepSkip, NativeAccessSpecifierPublic)
	TArray<class UGameplayAbility*>                    NonReplicatedInstances;                                    // 0x0034(0x000C) (ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	TArray<class UGameplayAbility*>                    ReplicatedInstances;                                       // 0x0040(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle                 GameplayEffectHandle;                                      // 0x004C(0x0004) (RepSkip, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
// 0x0010 (0x0090 - 0x0080)
struct FGameplayAbilitySpecContainer : public FFastArraySerializer
{
	TArray<struct FGameplayAbilitySpec>                Items;                                                     // 0x0080(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_18RD[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
// 0x0008
struct FGameplayEffectModifiedAttribute
{
	struct FGameplayAttribute                          Attribute;                                                 // 0x0000(0x0004) (NativeAccessSpecifierPublic)
	float                                              TotalMagnitude;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayCueParameters
// 0x0084
struct FGameplayCueParameters
{
	float                                              NormalizedMagnitude;                                       // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RawMagnitude;                                              // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0008(0x000C) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FName                                       MatchedTagName;                                            // 0x0014(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                OriginalTag;                                               // 0x001C(0x0008) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AggregatedSourceTags;                                      // 0x0024(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AggregatedTargetTags;                                      // 0x003C(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       Location;                                                  // 0x0054(0x000C) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   Normal;                                                    // 0x0060(0x000C) (BlueprintVisible, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       Instigator;                                                // 0x006C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       EffectCauser;                                              // 0x0074(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                      SourceObject;                                              // 0x007C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayTagReponsePair
// 0x0010
struct FGameplayTagReponsePair
{
	struct FGameplayTag                                Tag;                                                       // 0x0000(0x0008) (Edit, NativeAccessSpecifierPublic)
	class UClass*                                      ResponseGameplayEffect;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SoftCountCap;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
// 0x0020
struct FGameplayTagResponseTableEntry
{
	struct FGameplayTagReponsePair                     Positive;                                                  // 0x0000(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagReponsePair                     Negative;                                                  // 0x0010(0x0010) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayEffectContext
// 0x0048
struct FGameplayEffectContext
{
	unsigned char                                      UnknownData_6VXF[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class AActor>                       Instigator;                                                // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                       EffectCauser;                                              // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObject>                      SourceObject;                                              // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UAbilitySystemComponent>      InstigatorAbilitySystemComponent;                          // 0x001C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class AActor>>               Actors;                                                    // 0x0024(0x000C) (ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R7YY[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     WorldOrigin;                                               // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bHasWorldOrigin;                                           // 0x0044(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XY4C[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.AttributeMetaData
// 0x001C
struct FAttributeMetaData : public FTableRowBase
{
	float                                              BaseValue;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinValue;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxValue;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DerivedAttributeInfo;                                      // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanStack;                                                 // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6SB0[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GlobalCurveDataOverride
// 0x000C
struct FGlobalCurveDataOverride
{
	unsigned char                                      UnknownData_VDMX[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData
// 0x0004
struct FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData_KPTG[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
// 0x0080 (0x0084 - 0x0004)
struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
{
	struct FHitResult                                  HitResult;                                                 // 0x0004(0x0080) (ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
// 0x0070
struct FGameplayAbilityTargetingLocationInfo
{
	unsigned char                                      UnknownData_7VAR[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<GameplayAbilities_EGameplayAbilityTargetingLocationType> LocationType;                                              // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CAKW[0xF];                                     // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  LiteralTransform;                                          // 0x0020(0x0030) (BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	class AActor*                                      SourceActor;                                               // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshComponent*                              SourceComponent;                                           // 0x0054(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                            SourceAbility;                                             // 0x0058(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SourceSocketName;                                          // 0x005C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FXF8[0xC];                                     // 0x0064(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
// 0x008C (0x0090 - 0x0004)
struct FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData_UJUF[0xC];                                     // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                            // 0x0010(0x0070) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class AActor>>               TargetActorArray;                                          // 0x0080(0x000C) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S85Z[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// 0x00EC (0x00F0 - 0x0004)
struct FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData_NMUO[0xC];                                     // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                            // 0x0010(0x0070) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetingLocationInfo       TargetLocation;                                            // 0x0080(0x0070) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
// 0x0030
struct FActiveGameplayEffectQuery
{
	unsigned char                                      UnknownData_FXZ2[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayEffectQuery
// 0x00CC
struct FGameplayEffectQuery
{
	unsigned char                                      UnknownData_2Q0L[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             CustomMatchDelegate_BP;                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                           OwningTagQuery;                                            // 0x0018(0x0034) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                           EffectTagQuery;                                            // 0x004C(0x0034) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                           SourceTagQuery;                                            // 0x0080(0x0034) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          ModifyingAttribute;                                        // 0x00B4(0x0004) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UObject*                                     EffectSource;                                              // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayEffect*                             EffectDefinition;                                          // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SGHI[0xC];                                     // 0x00C0(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.AbilityTaskDebugMessage
// 0x0010
struct FAbilityTaskDebugMessage
{
	class UGameplayTask*                               FromTask;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_53YO[0xC];                                     // 0x0004(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
// 0x0008
struct FGameplayAbilitySpecHandleAndPredictionKey
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                             // 0x0000(0x0004) (NativeAccessSpecifierPrivate)
	int                                                PredictionKeyAtCreation;                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct GameplayAbilities.GameplayCueTag
// 0x0008
struct FGameplayCueTag
{
	struct FGameplayTag                                GameplayCueTag;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
// 0x0018
struct FGameplayAbilityLocalAnimMontage
{
	class UAnimMontage*                                AnimMontage;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PlayBit;                                                   // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J80A[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPredictionKey                              PredictionKey;                                             // 0x0008(0x000C) (NativeAccessSpecifierPublic)
	class UGameplayAbility*                            AnimatingAbility;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
// 0x0020
struct FGameplayAbilityRepAnimMontage
{
	class UAnimMontage*                                AnimMontage;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Position;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendTime;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NextSectionID;                                             // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      IsStopped : 1;                                             // 0x0011(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      ForcePlayBit : 1;                                          // 0x0011(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NKHQ[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPredictionKey                              PredictionKey;                                             // 0x0014(0x000C) (NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.ScalableFloat
// 0x0014
struct FScalableFloat
{
	float                                              Value;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        Curve;                                                     // 0x0004(0x000C) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EECX[0x4];                                     // 0x0010(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// 0x0008
struct FGameplayEffectAttributeCaptureDefinition
{
	struct FGameplayAttribute                          AttributeToCapture;                                        // 0x0000(0x0004) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TEnumAsByte<GameplayAbilities_EGameplayEffectAttributeCaptureSource> AttributeSource;                                           // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapshot;                                                 // 0x0005(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4GYH[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.AttributeBasedFloat
// 0x0084
struct FAttributeBasedFloat
{
	struct FScalableFloat                              Coefficient;                                               // 0x0000(0x0014) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                              PreMultiplyAdditiveValue;                                  // 0x0014(0x0014) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                              PostMultiplyAdditiveValue;                                 // 0x0028(0x0014) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayEffectAttributeCaptureDefinition   BackingAttribute;                                          // 0x003C(0x0008) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        AttributeCurve;                                            // 0x0044(0x000C) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TEnumAsByte<GameplayAbilities_EAttributeBasedFloatCalculationType> AttributeCalculationType;                                  // 0x0050(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YO50[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       SourceTagFilter;                                           // 0x0054(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       TargetTagFilter;                                           // 0x006C(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
// 0x0040
struct FCustomCalculationBasedFloat
{
	class UClass*                                      CalculationClassMagnitude;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                              Coefficient;                                               // 0x0004(0x0014) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                              PreMultiplyAdditiveValue;                                  // 0x0018(0x0014) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                              PostMultiplyAdditiveValue;                                 // 0x002C(0x0014) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.SetByCallerFloat
// 0x0008
struct FSetByCallerFloat
{
	struct FName                                       DataName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// 0x00E4
struct FGameplayEffectModifierMagnitude
{
	TEnumAsByte<GameplayAbilities_EGameplayEffectMagnitudeCalculation> MagnitudeCalculationType;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DXHU[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScalableFloat                              ScalableFloatMagnitude;                                    // 0x0004(0x0014) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FAttributeBasedFloat                        AttributeBasedMagnitude;                                   // 0x0018(0x0084) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FCustomCalculationBasedFloat                CustomMagnitude;                                           // 0x009C(0x0040) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSetByCallerFloat                           SetByCallerMagnitude;                                      // 0x00DC(0x0008) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct GameplayAbilities.GameplayTagRequirements
// 0x0030
struct FGameplayTagRequirements
{
	struct FGameplayTagContainer                       RequireTags;                                               // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       IgnoreTags;                                                // 0x0018(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayModifierInfo
// 0x0160
struct FGameplayModifierInfo
{
	struct FGameplayAttribute                          Attribute;                                                 // 0x0000(0x0004) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TEnumAsByte<GameplayAbilities_EGameplayModOp>      ModifierOp;                                                // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7HZ9[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScalableFloat                              Magnitude;                                                 // 0x0008(0x0014) (NativeAccessSpecifierPublic)
	struct FGameplayEffectModifierMagnitude            ModifierMagnitude;                                         // 0x001C(0x00E4) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements                    SourceTags;                                                // 0x0100(0x0030) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements                    TargetTags;                                                // 0x0130(0x0030) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
// 0x0010
struct FGameplayEffectAttributeCaptureSpec
{
	struct FGameplayEffectAttributeCaptureDefinition   BackingDefinition;                                         // 0x0000(0x0008) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0149[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// 0x001C
struct FGameplayEffectAttributeCaptureSpecContainer
{
	TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes;                                          // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes;                                          // 0x000C(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                               bHasNonSnapshottedAttributes;                              // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HIGM[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.TagContainerAggregator
// 0x0064
struct FTagContainerAggregator
{
	struct FGameplayTagContainer                       CapturedActorTags;                                         // 0x0000(0x0018) (NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       CapturedSpecTags;                                          // 0x0018(0x0018) (NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       ScopedTags;                                                // 0x0030(0x0018) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HI65[0x1C];                                    // 0x0048(0x001C) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
// 0x002C
struct FGameplayAbilitySpecDef
{
	class UClass*                                      Ability;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                              LevelScalableFloat;                                        // 0x0008(0x0014) (Edit, DisableEditOnInstance, RepSkip, NativeAccessSpecifierPublic)
	int                                                InputID;                                                   // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy> RemovalPolicy;                                             // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QJFQ[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     SourceObject;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecHandle                  AssignedHandle;                                            // 0x0028(0x0004) (NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayEffectSpec
// 0x01A8
struct FGameplayEffectSpec
{
	class UGameplayEffect*                             Def;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectModifiedAttribute>    ModifiedAttributes;                                        // 0x0004(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes;                                // 0x0010(0x001C) (RepSkip, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LC4Y[0xC];                                     // 0x002C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Duration;                                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Period;                                                    // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChanceToApplyToTarget;                                     // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTagContainerAggregator                     CapturedSourceTags;                                        // 0x0044(0x0064) (RepSkip, NativeAccessSpecifierPublic)
	struct FTagContainerAggregator                     CapturedTargetTags;                                        // 0x00A8(0x0064) (RepSkip, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       DynamicGrantedTags;                                        // 0x010C(0x0018) (NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       DynamicAssetTags;                                          // 0x0124(0x0018) (NativeAccessSpecifierPublic)
	TArray<struct FModifierSpec>                       Modifiers;                                                 // 0x013C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                StackCount;                                                // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCompletedSourceAttributeCapture : 1;                      // 0x014C(0x0001) BIT_FIELD (RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bCompletedTargetAttributeCapture : 1;                      // 0x014C(0x0001) BIT_FIELD (RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bDurationLocked : 1;                                       // 0x014C(0x0001) BIT_FIELD (RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7FTC[0x3];                                     // 0x014D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayAbilitySpecDef>             GrantedAbilitySpecs;                                       // 0x0150(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6P0C[0x3C];                                    // 0x015C(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0198(0x000C) (NativeAccessSpecifierPrivate)
	float                                              Level;                                                     // 0x01A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct GameplayAbilities.ActiveGameplayEffect
// 0x020C (0x0218 - 0x000C)
struct FActiveGameplayEffect : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_QL5Z[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayEffectSpec                         Spec;                                                      // 0x0010(0x01A8) (NativeAccessSpecifierPublic)
	struct FPredictionKey                              PredictionKey;                                             // 0x01B8(0x000C) (NativeAccessSpecifierPublic)
	float                                              StartServerWorldTime;                                      // 0x01C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CachedStartServerWorldTime;                                // 0x01C8(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartWorldTime;                                            // 0x01CC(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsInhibited;                                              // 0x01D0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MSKH[0x47];                                    // 0x01D1(0x0047) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
// 0x021C (0x029C - 0x0080)
struct FActiveGameplayEffectsContainer : public FFastArraySerializer
{
	unsigned char                                      UnknownData_45NO[0x24];                                    // 0x0080(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FActiveGameplayEffect>               GameplayEffects_Internal;                                  // 0x00A4(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VDL0[0x1EC];                                   // 0x00B0(0x01EC) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.WorldReticleParameters
// 0x000C
struct FWorldReticleParameters
{
	struct FVector                                     AOEScale;                                                  // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.ActiveGameplayCue
// 0x0018 (0x0024 - 0x000C)
struct FActiveGameplayCue : public FFastArraySerializerItem
{
	struct FGameplayTag                                GameplayCueTag;                                            // 0x000C(0x0008) (NativeAccessSpecifierPublic)
	struct FPredictionKey                              PredictionKey;                                             // 0x0014(0x000C) (NativeAccessSpecifierPublic)
	bool                                               bPredictivelyRemoved;                                      // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CQ4V[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
// 0x0010 (0x0090 - 0x0080)
struct FActiveGameplayCueContainer : public FFastArraySerializer
{
	TArray<struct FActiveGameplayCue>                  GameplayCues;                                              // 0x0080(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*                     Owner;                                                     // 0x008C(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayEventData
// 0x0058
struct FGameplayEventData
{
	struct FGameplayTag                                EventTag;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     OptionalObject;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     OptionalObject2;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle                ContextHandle;                                             // 0x0018(0x000C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       InstigatorTags;                                            // 0x0024(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       TargetTags;                                                // 0x003C(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              EventMagnitude;                                            // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
// 0x0050
struct FGameplayEffectSpecForRPC
{
	class UGameplayEffect*                             Def;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectModifiedAttribute>    ModifiedAttributes;                                        // 0x0004(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0010(0x000C) (NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AggregatedSourceTags;                                      // 0x001C(0x0018) (NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AggregatedTargetTags;                                      // 0x0034(0x0018) (NativeAccessSpecifierPublic)
	float                                              Level;                                                     // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
// 0x0034
struct FGameplayAbilityActorInfo
{
	unsigned char                                      UnknownData_145K[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class AActor>                       OwnerActor;                                                // 0x0004(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       AvatarActor;                                               // 0x000C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APlayerController>            PlayerController;                                          // 0x0014(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UAbilitySystemComponent>      AbilitySystemComponent;                                    // 0x001C(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UAnimInstance>                AnimInstance;                                              // 0x0024(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UMovementComponent>           MovementComponent;                                         // 0x002C(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.AbilityTriggerData
// 0x000C
struct FAbilityTriggerData
{
	struct FGameplayTag                                TriggerTag;                                                // 0x0000(0x0008) (Edit, NativeAccessSpecifierPublic)
	TEnumAsByte<GameplayAbilities_EGameplayAbilityTriggerSource> TriggerSource;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SFRZ[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.PreallocationInfo
// 0x004C
struct FPreallocationInfo
{
	unsigned char                                      UnknownData_23FY[0x3C];                                    // 0x0000(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AGameplayCueNotify_Actor*>            ClassesNeedingPreallocation;                               // 0x003C(0x000C) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	class UWorld*                                      OwningWorld;                                               // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
// 0x0060
struct FGameplayEffectCustomExecutionParameters
{
	unsigned char                                      UnknownData_3E32[0x60];                                    // 0x0000(0x0060) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayCuePendingExecute
// 0x00F0
struct FGameplayCuePendingExecute
{
	struct FGameplayTag                                GameplayCueTag;                                            // 0x0000(0x0008) (NativeAccessSpecifierPublic)
	struct FPredictionKey                              PredictionKey;                                             // 0x0008(0x000C) (NativeAccessSpecifierPublic)
	TEnumAsByte<GameplayAbilities_EGameplayCuePayloadType> PayloadType;                                               // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M1DC[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAbilitySystemComponent*                     OwningComponent;                                           // 0x0018(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecForRPC                   FromSpec;                                                  // 0x001C(0x0050) (NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      CueParameters;                                             // 0x006C(0x0084) (NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
// 0x0014
struct FGameplayModifierEvaluatedData
{
	struct FGameplayAttribute                          Attribute;                                                 // 0x0000(0x0004) (NativeAccessSpecifierPublic)
	TEnumAsByte<GameplayAbilities_EGameplayModOp>      ModifierOp;                                                // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BL8V[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Magnitude;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle                 Handle;                                                    // 0x000C(0x0004) (NativeAccessSpecifierPublic)
	bool                                               IsValid;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3O08[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
// 0x0010
struct FGameplayEffectCustomExecutionOutput
{
	TArray<struct FGameplayModifierEvaluatedData>      OutputModifiers;                                           // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      bTriggerConditionalGameplayEffects : 1;                    // 0x000C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      bHandledStackCountManually : 1;                            // 0x000C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      bHandledGameplayCuesManually : 1;                          // 0x000C(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DPT5[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.InheritedTagContainer
// 0x0048
struct FInheritedTagContainer
{
	struct FGameplayTagContainer                       CombinedTags;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       Added;                                                     // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       Removed;                                                   // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilter
// 0x0014
struct FGameplayTargetDataFilter
{
	unsigned char                                      UnknownData_816N[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      SelfActor;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GameplayAbilities_ETargetDataFilterSelf> SelfFilter;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B89T[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      RequiredActorClass;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReverseFilter;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YXIL[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
// 0x0008
struct FGameplayTargetDataFilterHandle
{
	unsigned char                                      UnknownData_USM5[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
// 0x0008
struct FGameplayAbilityBindInfo
{
	TEnumAsByte<GameplayAbilities_EGameplayAbilityInputBinds> Command;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3R2Q[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      GameplayAbilityClass;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayCueNotifyData
// 0x001C
struct FGameplayCueNotifyData
{
	struct FGameplayTag                                GameplayCueTag;                                            // 0x0000(0x0008) (Edit, NativeAccessSpecifierPublic)
	struct FStringAssetReference                       GameplayCueNotifyObj;                                      // 0x0008(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      LoadedGameplayCueClass;                                    // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_84EI[0x4];                                     // 0x0018(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// 0x0150
struct FGameplayEffectExecutionScopedModifierInfo
{
	struct FGameplayEffectAttributeCaptureDefinition   CapturedAttribute;                                         // 0x0000(0x0008) (Edit, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TEnumAsByte<GameplayAbilities_EGameplayModOp>      ModifierOp;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q7BE[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayEffectModifierMagnitude            ModifierMagnitude;                                         // 0x000C(0x00E4) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements                    SourceTags;                                                // 0x00F0(0x0030) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements                    TargetTags;                                                // 0x0120(0x0030) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// 0x0034
struct FGameplayEffectExecutionDefinition
{
	class UClass*                                      CalculationClass;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       PassedInTags;                                              // 0x0004(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                                      // 0x001C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ConditionalGameplayEffectClasses;                          // 0x0028(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct GameplayAbilities.GameplayEffectCue
// 0x0024
struct FGameplayEffectCue
{
	struct FGameplayAttribute                          MagnitudeAttribute;                                        // 0x0000(0x0004) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              MinLevel;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLevel;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       GameplayCueTags;                                           // 0x000C(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
