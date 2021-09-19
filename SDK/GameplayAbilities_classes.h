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

// Class GameplayAbilities.AttributeSet
// 0x0004 (FullSize[0x0020] - InheritedSize[0x001C])
class UAttributeSet : public UObject
{
public:
	unsigned char                                      UnknownData_T7N2[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AttributeSet");
		return ptr;
	}



};

// Class GameplayAbilities.AbilitySystemComponent
// 0x0938 (FullSize[0x0A08] - InheritedSize[0x00D0])
class UAbilitySystemComponent : public UGameplayTasksComponent
{
public:
	unsigned char                                      UnknownData_E57W[0x4];                                     // 0x00D0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAttributeDefaults>                  DefaultStartingData;                                       // 0x00D4(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAttributeSet*>                       SpawnedAttributes;                                         // 0x00E0(0x000C) (ExportObject, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FPredictionKey                              ReplicatedPredictionKey;                                   // 0x00EC(0x000C) (Net, RepNotify, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H37A[0xA0];                                    // 0x00F8(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OutgoingDuration;                                          // 0x0198(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IncomingDuration;                                          // 0x019C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecContainer               ActivatableAbilities;                                      // 0x01A0(0x0090) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9IWA[0x3C];                                    // 0x0230(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UGameplayAbility*>                    AllReplicatedInstancedAbilities;                           // 0x026C(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EACZ[0x1B0];                                   // 0x0278(0x01B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AGameplayAbilityTargetActor*>         SpawnedTargetActors;                                       // 0x0428(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayAbilityRepAnimMontage              RepAnimMontageInfo;                                        // 0x0434(0x0020) (Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	struct FGameplayAbilityLocalAnimMontage            LocalAnimMontageInfo;                                      // 0x0454(0x0018) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_23WL[0x78];                                    // 0x046C(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      OwnerActor;                                                // 0x04E4(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      AvatarActor;                                               // 0x04E8(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JA1E[0x8];                                     // 0x04EC(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FActiveGameplayEffectsContainer             ActiveGameplayEffects;                                     // 0x04F4(0x029C) (Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	struct FActiveGameplayCueContainer                 ActiveGameplayCues;                                        // 0x0790(0x0090) (Net, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XE2Y[0xE8];                                    // 0x0820(0x00E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              BlockedAbilityBindings;                                    // 0x0908(0x000C) (Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4DJ3[0xF4];                                    // 0x0914(0x00F4) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemComponent");
		return ptr;
	}



	bool TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation);
	bool TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);
	void TargetConfirm();
	void TargetCancel();
	void SetUserAbilityActivationInhibited(bool NewInhibit);
	void SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int NewLevel);
	void ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey);
	void ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedEventWithPayload(TEnumAsByte<GameplayAbilities_EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey, const struct FVector_NetQuantize100& VectorPayload);
	void ServerSetReplicatedEvent(TEnumAsByte<GameplayAbilities_EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerPrintDebug_Request();
	void ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey);
	void ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate);
	void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, const struct FName& SectionName, const struct FName& NextSectionName);
	void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, const struct FName& SectionName);
	void ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int StacksToRemove);
	bool RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove);
	void RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags);
	void RemoveActiveEffectsWithSourceTags(const struct FGameplayTagContainer& Tags);
	void RemoveActiveEffectsWithGrantedTags(const struct FGameplayTagContainer& Tags);
	void RemoveActiveEffectsWithAppliedTags(const struct FGameplayTagContainer& Tags);
	void OnRep_ReplicatedAnimMontage();
	void OnRep_PredictionKey();
	void OnRep_OwningActor();
	void OnRep_GameplayEffects();
	void OnRep_ActivateAbilities();
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FGameplayEffectContextHandle MakeEffectContext();
	void K2_InitStats(class UClass* Attributes, class UDataTable* DataTable);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectToTarget(class UGameplayEffect* GameplayEffect, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectToSelf(class UGameplayEffect* GameplayEffect, float Level, const struct FGameplayEffectContextHandle& EffectContext);
	bool IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag);
	bool GetUserAbilityActivationInhibited();
	struct FGameplayEffectSpecHandle GetOutgoingSpec(class UGameplayEffect* GameplayEffect, float Level);
	float GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute);
	int GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
	void ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate);
	void ClientSetReplicatedEvent(TEnumAsByte<GameplayAbilities_EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey);
	void ClientPrintDebug_Response(TArray<struct FString> Strings);
	void ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey);
	void ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16_t PredictionKey);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle* SpecHandle, class UAbilitySystemComponent* Target);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle* SpecHandle);
	void AbilityConfirmOrCancel__DelegateSignature();
	void AbilityAbilityKey__DelegateSignature(int InputID);
};

// Class GameplayAbilities.AbilitySystemGlobals
// 0x00EC (FullSize[0x0108] - InheritedSize[0x001C])
class UAbilitySystemGlobals : public UObject
{
public:
	struct FStringClassReference                       AbilitySystemGlobalsClassName;                             // 0x001C(0x000C) (ZeroConstructor, Config, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6BVG[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                ActivateFailCooldownTag;                                   // 0x0050(0x0008) (NativeAccessSpecifierPublic)
	struct FName                                       ActivateFailCooldownName;                                  // 0x0058(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ActivateFailCostTag;                                       // 0x0060(0x0008) (NativeAccessSpecifierPublic)
	struct FName                                       ActivateFailCostName;                                      // 0x0068(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ActivateFailTagsBlockedTag;                                // 0x0070(0x0008) (NativeAccessSpecifierPublic)
	struct FName                                       ActivateFailTagsBlockedName;                               // 0x0078(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ActivateFailTagsMissingTag;                                // 0x0080(0x0008) (NativeAccessSpecifierPublic)
	struct FName                                       ActivateFailTagsMissingName;                               // 0x0088(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ActivateFailNetworkingTag;                                 // 0x0090(0x0008) (NativeAccessSpecifierPublic)
	struct FName                                       ActivateFailNetworkingName;                                // 0x0098(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GlobalCurveTableName;                                      // 0x00A0(0x000C) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     GlobalAttributeMetaDataTableName;                          // 0x00AC(0x000C) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     GlobalAttributeSetDefaultsTableName;                       // 0x00B8(0x000C) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FStringAssetReference                       GlobalGameplayCueManagerName;                              // 0x00C4(0x000C) (ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct FString>                             GameplayCueNotifyPaths;                                    // 0x00D0(0x000C) (ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	struct FStringAssetReference                       GameplayTagResponseTableName;                              // 0x00DC(0x000C) (ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	class UGameplayTagReponseTable*                    GameplayTagResponseTable;                                  // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               PredictTargetGameplayEffects;                              // 0x00EC(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RN02[0x3];                                     // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveTable*                                 GlobalCurveTable;                                          // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveTable*                                 GlobalAttributeDefaultsTable;                              // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataTable*                                  GlobalAttributeMetaDataTable;                              // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameplayCueManager*                         GlobalGameplayCueManager;                                  // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VPTK[0x8];                                     // 0x0100(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemGlobals");
		return ptr;
	}



	void ToggleIgnoreAbilitySystemCosts();
	void ToggleIgnoreAbilitySystemCooldowns();
};

// Class GameplayAbilities.AbilityTask
// 0x000C (FullSize[0x0050] - InheritedSize[0x0044])
class UAbilityTask : public UGameplayTask
{
public:
	class UGameplayAbility*                            Ability;                                                   // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // 0x0048(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P6XM[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbility
// 0x02F0 (FullSize[0x030C] - InheritedSize[0x001C])
class UGameplayAbility : public UObject
{
public:
	unsigned char                                      UnknownData_A5WS[0x58];                                    // 0x001C(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       AbilityTags;                                               // 0x0074(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WZYQ[0x1C];                                    // 0x008C(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bReplicateInputDirectly;                                   // 0x00A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W0IU[0x20];                                    // 0x00A9(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<GameplayAbilities_EGameplayAbilityReplicationPolicy> ReplicationPolicy;                                         // 0x00C9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<GameplayAbilities_EGameplayAbilityInstancingPolicy> InstancingPolicy;                                          // 0x00CA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bServerRespectsRemoteAbilityCancellation;                  // 0x00CB(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bRetriggerInstancedAbility;                                // 0x00CC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_934Y[0x3];                                     // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayAbilityActivationInfo              CurrentActivationInfo;                                     // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FGameplayEventData                          CurrentEventData;                                          // 0x00E0(0x0058) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<GameplayAbilities_EGameplayAbilityNetExecutionPolicy> NetExecutionPolicy;                                        // 0x0138(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WHIK[0x3];                                     // 0x0139(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CostGameplayEffectClass;                                   // 0x013C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayEffect*                             CostGameplayEffect;                                        // 0x0140(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAbilityTriggerData>                 AbilityTriggers;                                           // 0x0144(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      CooldownGameplayEffectClass;                               // 0x0150(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayEffect*                             CooldownGameplayEffect;                                    // 0x0154(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                           CancelAbilitiesMatchingTagQuery;                           // 0x0158(0x0034) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                           ConstTagQuery;                                             // 0x018C(0x0034) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       CancelAbilitiesWithTag;                                    // 0x01C0(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       BlockAbilitiesWithTag;                                     // 0x01D8(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       ActivationOwnedTags;                                       // 0x01F0(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       ActivationRequiredTags;                                    // 0x0208(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       ActivationBlockedTags;                                     // 0x0220(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       SourceRequiredTags;                                        // 0x0238(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       SourceBlockedTags;                                         // 0x0250(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       TargetRequiredTags;                                        // 0x0268(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       TargetBlockedTags;                                         // 0x0280(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<class UGameplayTask*>                       ActiveTasks;                                               // 0x0298(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PB96[0x50];                                    // 0x02A4(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                CurrentMontage;                                            // 0x02F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsActive;                                                 // 0x02F8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bIsCancelable;                                             // 0x02F9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TV4B[0xE];                                     // 0x02FA(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsBlockingOtherAbilities;                                 // 0x0308(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_O1O7[0x3];                                     // 0x0309(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility");
		return ptr;
	}



	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
	void SetCanBeCanceled(bool bCanBeCanceled);
	void SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
	void RemoveGrantedByEffect();
	void MontageStop(float OverrideBlendOutTime);
	void MontageSetNextSectionName(const struct FName& FromSectionName, const struct FName& ToSectionName);
	void MontageJumpToSection(const struct FName& SectionName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(const struct FName& SocketName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag);
	void K2_OnEndAbility();
	void K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
	void K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context);
	void K2_EndAbility();
	void K2_CommitExecute();
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);
	bool K2_CommitAbility();
	bool K2_CheckAbilityCost();
	bool K2_CheckAbilityCooldown();
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
	TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UGameplayEffect* GameplayEffect, int GameplayEffectLevel, int Stacks);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectToOwner(class UGameplayEffect* GameplayEffect, int GameplayEffectLevel, int Stacks);
	TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle);
	void K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_ActivateAbility();
	class USkeletalMeshComponent* GetOwningComponentFromActorInfo();
	class AActor* GetOwningActorFromActorInfo();
	struct FGameplayEffectSpecHandle GetOutgoingGameplayEffectSpec(class UGameplayEffect* GameplayEffect, float Level);
	struct FGameplayEffectContextHandle GetGrantedByEffectContext();
	class UObject* GetCurrentSourceObject();
	class UAnimMontage* GetCurrentMontage();
	float GetCoolDownTimeRemaining();
	struct FGameplayEffectContextHandle GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData);
	class AActor* GetAvatarActorFromActorInfo();
	struct FGameplayAbilityActorInfo GetActorInfo();
	int GetAbilityLevel();
	void EndTaskByInstanceName(const struct FName& InstanceName);
	void EndAbilityState(const struct FName& OptionalStateNameToEnd);
	void ConfirmTaskByInstanceName(const struct FName& InstanceName, bool bEndTask);
	void CancelTaskByInstanceName(const struct FName& InstanceName);
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int StacksToRemove);
	TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* GameplayEffectClass, int GameplayEffectLevel, int Stacks);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int GameplayEffectLevel, int Stacks);
};

// Class GameplayAbilities.GameplayCueManager
// 0x0150 (FullSize[0x016C] - InheritedSize[0x001C])
class UGameplayCueManager : public UDataAsset
{
public:
	class UGameplayCueSet*                             GlobalCueSet;                                              // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObjectLibrary*                              GameplayCueNotifyActorObjectLibrary;                       // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObjectLibrary*                              GameplayCueNotifyStaticObjectLibrary;                      // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStreamableManager                          StreamableManager;                                         // 0x0028(0x0078) (Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8MW2[0x3C];                                    // 0x00A0(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              LoadedGameplayCueNotifyClasses;                            // 0x00DC(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class AGameplayCueNotify_Actor*>            GameplayCueClassesForPreallocation;                        // 0x00E8(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L8V5[0xC];                                     // 0x00F4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayCuePendingExecute>          PendingExecuteCues;                                        // 0x0100(0x000C) (ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	int                                                GameplayCueSendContextCount;                               // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PM6C[0x4];                                     // 0x0110(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPreallocationInfo>                  PreallocationInfoList_Internal;                            // 0x0114(0x000C) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FPreallocationInfo                          PreallocationInfo_Internal;                                // 0x0120(0x004C) (Transient, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueManager");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayCueNotify_Actor
// 0x0048 (FullSize[0x0288] - InheritedSize[0x0240])
class AGameplayCueNotify_Actor : public AActor
{
public:
	struct FGameplayTag                                GameplayCueTag;                                            // 0x0240(0x0008) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FName                                       GameplayCueName;                                           // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoDestroyOnRemove;                                      // 0x0250(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FVZZ[0x3];                                     // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AutoDestroyDelay;                                          // 0x0254(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOverride;                                                // 0x0258(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUniqueInstancePerInstigator;                              // 0x0259(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUniqueInstancePerSourceObject;                            // 0x025A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8WLJ[0x1];                                     // 0x025B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumPreallocatedInstances;                                  // 0x025C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E8DN[0x28];                                    // 0x0260(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_Actor");
		return ptr;
	}



	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnOwnerDestroyed();
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
};

// Class GameplayAbilities.GameplayCueNotify_Static
// 0x0014 (FullSize[0x0030] - InheritedSize[0x001C])
class UGameplayCueNotify_Static : public UObject
{
public:
	struct FGameplayTag                                GameplayCueTag;                                            // 0x001C(0x0008) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FName                                       GameplayCueName;                                           // 0x0024(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOverride;                                                // 0x002C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U62N[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_Static");
		return ptr;
	}



	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
};

// Class GameplayAbilities.GameplayEffectCalculation
// 0x000C (FullSize[0x0028] - InheritedSize[0x001C])
class UGameplayEffectCalculation : public UObject
{
public:
	TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture;                               // 0x001C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectCalculation");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayEffectExecutionCalculation
// 0x0004 (FullSize[0x002C] - InheritedSize[0x0028])
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{
public:
	bool                                               bRequiresPassedInTags;                                     // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IUTM[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExecutionCalculation");
		return ptr;
	}



	void Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput);
};

// Class GameplayAbilities.GameplayEffectUIData
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UGameplayEffectUIData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectUIData");
		return ptr;
	}



};

// Class GameplayAbilities.AbilitiesGameplayDebuggerObject
// 0x0010 (FullSize[0x0074] - InheritedSize[0x0064])
class UAbilitiesGameplayDebuggerObject : public UGameplayDebuggerBaseObject
{
public:
	struct FString                                     AbilityInfo;                                               // 0x0064(0x000C) (Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsUsingAbilities : 1;                                     // 0x0070(0x0001) BIT_FIELD (Net, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HDT6[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilitiesGameplayDebuggerObject");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayEffect
// 0x034C (FullSize[0x0368] - InheritedSize[0x001C])
class UGameplayEffect : public UObject
{
public:
	unsigned char                                      UnknownData_R9BA[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<GameplayAbilities_EGameplayEffectDurationType> DurationPolicy;                                            // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HWEM[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayEffectModifierMagnitude            DurationMagnitude;                                         // 0x0024(0x00E4) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                              Period;                                                    // 0x0108(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bExecutePeriodicEffectOnApplication;                       // 0x011C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6X2Z[0x3];                                     // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayModifierInfo>               Modifiers;                                                 // 0x0120(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectExecutionDefinition>  Executions;                                                // 0x012C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                              ChanceToApplyToTarget;                                     // 0x0138(0x0014) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              TargetEffectClasses;                                       // 0x014C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UGameplayEffect*>                     TargetEffects;                                             // 0x0158(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              OverflowEffects;                                           // 0x0164(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                               bDenyOverflowApplication;                                  // 0x0170(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bClearStackOnOverflow;                                     // 0x0171(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DXKM[0x2];                                     // 0x0172(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              PrematureExpirationEffectClasses;                          // 0x0174(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              RoutineExpirationEffectClasses;                            // 0x0180(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                               bRequireModifierSuccessToTriggerCues;                      // 0x018C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F58G[0x3];                                     // 0x018D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayEffectCue>                  GameplayCues;                                              // 0x0190(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UGameplayEffectUIData*                       UIData;                                                    // 0x019C(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInheritedTagContainer                      InheritableGameplayEffectTags;                             // 0x01A0(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       GameplayEffectTags;                                        // 0x01E8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FInheritedTagContainer                      InheritableOwnedTagsContainer;                             // 0x0200(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       OwnedTagsContainer;                                        // 0x0248(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements                    OngoingTagRequirements;                                    // 0x0260(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements                    ApplicationTagRequirements;                                // 0x0290(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FInheritedTagContainer                      RemoveGameplayEffectsWithTags;                             // 0x02C0(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ClearTagsContainer;                                        // 0x0308(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements                    GrantedApplicationImmunityTags;                            // 0x0320(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TEnumAsByte<GameplayAbilities_EGameplayEffectStackingType> StackingType;                                              // 0x0350(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IJVF[0x3];                                     // 0x0351(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StackLimitCount;                                           // 0x0354(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GameplayAbilities_EGameplayEffectStackingDurationPolicy> StackDurationRefreshPolicy;                                // 0x0358(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GameplayAbilities_EGameplayEffectStackingPeriodPolicy> StackPeriodResetPolicy;                                    // 0x0359(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<GameplayAbilities_EGameplayEffectStackingExpirationPolicy> StackExpirationPolicy;                                     // 0x035A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HF99[0x1];                                     // 0x035B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayAbilitySpecDef>             GrantedAbilities;                                          // 0x035C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffect");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayCueInterface
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UGameplayCueInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueInterface");
		return ptr;
	}



	void ForwardGameplayCueToParent();
	void BlueprintCustomHandler(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
};

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemBlueprintLibrary");
		return ptr;
	}



	bool STATIC_TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int INDEX);
	bool STATIC_TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int INDEX);
	bool STATIC_TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int INDEX);
	bool STATIC_TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int INDEX);
	struct FGameplayEffectSpecHandle STATIC_SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle);
	struct FGameplayEffectSpecHandle STATIC_SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int StackCount);
	struct FGameplayEffectSpecHandle STATIC_SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration);
	void STATIC_SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
	bool STATIC_NotEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
	struct FGameplayEffectSpecHandle STATIC_MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel);
	struct FGameplayTargetDataFilterHandle STATIC_MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor);
	bool STATIC_IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters);
	bool STATIC_IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters);
	bool STATIC_HasHitResult(const struct FGameplayCueParameters& Parameters);
	struct FTransform STATIC_GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int INDEX);
	struct FTransform STATIC_GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int INDEX);
	struct FVector STATIC_GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int INDEX);
	struct FVector STATIC_GetOrigin(const struct FGameplayCueParameters& Parameters);
	float STATIC_GetModifiedAttributeMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayAttribute& Attribute);
	struct FTransform STATIC_GetInstigatorTransform(const struct FGameplayCueParameters& Parameters);
	class AActor* STATIC_GetInstigatorActor(const struct FGameplayCueParameters& Parameters);
	struct FHitResult STATIC_GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int INDEX);
	struct FHitResult STATIC_GetHitResult(const struct FGameplayCueParameters& Parameters);
	bool STATIC_GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal);
	bool STATIC_GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction);
	float STATIC_GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float STATIC_GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	struct FGameplayEffectContextHandle STATIC_GetEffectContext(const struct FGameplayEffectSpecHandle& SpecHandle);
	int STATIC_GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData);
	TArray<class AActor*> STATIC_GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int INDEX);
	int STATIC_GetActorCount(const struct FGameplayCueParameters& Parameters);
	class AActor* STATIC_GetActorByIndex(const struct FGameplayCueParameters& Parameters, int INDEX);
	int STATIC_GetActiveGameplayEffectStackLimitCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	int STATIC_GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	struct FString STATIC_GetActiveGameplayEffectDebugString(const struct FActiveGameplayEffectHandle& ActiveHandle);
	class UAbilitySystemComponent* STATIC_GetAbilitySystemComponent(class AActor* Actor);
	void STATIC_ForwardGameplayCueToTarget(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	struct FGameplayAbilityTargetDataHandle STATIC_FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass);
	float STATIC_EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, bool* bSuccess);
	bool STATIC_EqualEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
	void STATIC_EffectContextSetOrigin(const struct FGameplayEffectContextHandle& EffectContext, const struct FVector& Origin);
	bool STATIC_EffectContextIsValid(const struct FGameplayEffectContextHandle& EffectContext);
	bool STATIC_EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext);
	bool STATIC_EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	class UObject* STATIC_EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* STATIC_EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	struct FVector STATIC_EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* STATIC_EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	struct FHitResult STATIC_EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* STATIC_EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext);
	bool STATIC_DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int INDEX, class AActor* Actor);
	bool STATIC_DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements* SourceTagReqs, struct FGameplayTagRequirements* TargetTagReqs);
	struct FGameplayEffectSpecHandle STATIC_AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FName& DataName, float Magnitude);
	struct FGameplayAbilityTargetDataHandle STATIC_AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd);
	struct FGameplayEffectSpecHandle STATIC_AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec);
	struct FGameplayEffectSpecHandle STATIC_AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	struct FGameplayEffectSpecHandle STATIC_AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	struct FGameplayEffectSpecHandle STATIC_AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	struct FGameplayEffectSpecHandle STATIC_AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation);
	struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromHitResult(const struct FHitResult& HitResult);
	struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromActorArray(TArray<class AActor*> ActorArray, bool OneTargetPerHandle);
	struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromActor(class AActor* Actor);
};

// Class GameplayAbilities.AbilitySystemDebugHUD
// 0x0000 (FullSize[0x02F4] - InheritedSize[0x02F4])
class AAbilitySystemDebugHUD : public AHUD
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemDebugHUD");
		return ptr;
	}



};

// Class GameplayAbilities.AbilitySystemInterface
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UAbilitySystemInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemInterface");
		return ptr;
	}



};

// Class GameplayAbilities.AbilitySystemTestPawn
// 0x0010 (FullSize[0x02AC] - InheritedSize[0x029C])
class AAbilitySystemTestPawn : public ADefaultPawn
{
public:
	unsigned char                                      UnknownData_Y49I[0xC];                                     // 0x029C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // 0x02A8(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemTestPawn");
		return ptr;
	}



};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// 0x003C (FullSize[0x008C] - InheritedSize[0x0050])
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                  // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FName                                       ForceName;                                                 // 0x005C(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     WorldDirection;                                            // 0x0064(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                              Strength;                                                  // 0x0070(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Duration;                                                  // 0x0074(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsAdditive;                                               // 0x0078(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bDisableImpartingVelocityOnRemoval;                        // 0x0079(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TOIO[0xE];                                     // 0x007A(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCharacterMovementComponent*                 MovementComponent;                                         // 0x0088(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce");
		return ptr;
	}



	class UAbilityTask_ApplyRootMotionConstantForce* STATIC_ApplyRootMotionConstantForce(class UObject* WorldContextObject, const struct FName& TaskInstanceName, const struct FVector& WorldDirection, float Strength, float Duration, bool bIsAdditive, bool bDisableImpartingVelocityOnRemoval);
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// 0x005C (FullSize[0x00AC] - InheritedSize[0x0050])
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                  // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLanded;                                                  // 0x005C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FName                                       ForceName;                                                 // 0x0068(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                                    Rotation;                                                  // 0x0070(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                              Distance;                                                  // 0x007C(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Height;                                                    // 0x0080(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Duration;                                                  // 0x0084(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinimumLandedTriggerTime;                                  // 0x0088(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bFinishOnLanded;                                           // 0x008C(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RTOQ[0x3];                                     // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveVector*                                PathOffsetCurve;                                           // 0x0090(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 TimeMappingCurve;                                          // 0x0094(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T3EU[0x10];                                    // 0x0098(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCharacterMovementComponent*                 MovementComponent;                                         // 0x00A8(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce");
		return ptr;
	}



	void OnLandedCallback(const struct FHitResult& Hit);
	void Finish();
	class UAbilityTask_ApplyRootMotionJumpForce* STATIC_ApplyRootMotionJumpForce(class UObject* WorldContextObject, const struct FName& TaskInstanceName, const struct FRotator& Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve);
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// 0x005C (FullSize[0x00AC] - InheritedSize[0x0050])
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnTimedOut;                                                // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTimedOutAndDestinationReached;                           // 0x005C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FName                                       ForceName;                                                 // 0x0068(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     StartLocation;                                             // 0x0070(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                                     TargetLocation;                                            // 0x007C(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                              Duration;                                                  // 0x0088(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSetNewMovementMode;                                       // 0x008C(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_EMovementMode>                  NewMovementMode;                                           // 0x008D(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRestrictSpeedToExpected;                                  // 0x008E(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZS8N[0x1];                                     // 0x008F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveVector*                                PathOffsetCurve;                                           // 0x0090(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LX09[0x14];                                    // 0x0094(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCharacterMovementComponent*                 MovementComponent;                                         // 0x00A8(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce");
		return ptr;
	}



	class UAbilityTask_ApplyRootMotionMoveToForce* STATIC_ApplyRootMotionMoveToForce(class UObject* WorldContextObject, const struct FName& TaskInstanceName, const struct FVector& TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<Engine_EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve);
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// 0x004C (FullSize[0x009C] - InheritedSize[0x0050])
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                  // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FName                                       ForceName;                                                 // 0x005C(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     Location;                                                  // 0x0064(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class AActor*                                      LocationActor;                                             // 0x0070(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Strength;                                                  // 0x0074(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Duration;                                                  // 0x0078(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Radius;                                                    // 0x007C(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsPush;                                                   // 0x0080(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bIsAdditive;                                               // 0x0081(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bNoZForce;                                                 // 0x0082(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8LGF[0x1];                                     // 0x0083(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 StrengthDistanceFalloff;                                   // 0x0084(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 StrengthOverTime;                                          // 0x0088(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PH9U[0xC];                                     // 0x008C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCharacterMovementComponent*                 MovementComponent;                                         // 0x0098(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce");
		return ptr;
	}



	class UAbilityTask_ApplyRootMotionRadialForce* STATIC_ApplyRootMotionRadialForce(class UObject* WorldContextObject, const struct FName& TaskInstanceName, const struct FVector& Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime);
};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// 0x003C (FullSize[0x008C] - InheritedSize[0x0050])
class UAbilityTask_MoveToLocation : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnTargetLocationReached;                                   // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FK0E[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     StartLocation;                                             // 0x0060(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                                     TargetLocation;                                            // 0x006C(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                              DurationOfMovement;                                        // 0x0078(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XP9H[0x8];                                     // 0x007C(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 LerpCurve;                                                 // 0x0084(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveVector*                                LerpCurveVector;                                           // 0x0088(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_MoveToLocation");
		return ptr;
	}



	class UAbilityTask_MoveToLocation* STATIC_MoveToLocation(class UObject* WorldContextObject, const struct FName& TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve);
};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// 0x0014 (FullSize[0x0064] - InheritedSize[0x0050])
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnSync;                                                    // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q57S[0x8];                                     // 0x005C(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_NetworkSyncPoint");
		return ptr;
	}



	class UAbilityTask_NetworkSyncPoint* STATIC_WaitNetSync(class UObject* WorldContextObject, TEnumAsByte<GameplayAbilities_EAbilityTaskNetSyncType> SyncType);
	void OnSignalCallback();
};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// 0x004C (FullSize[0x009C] - InheritedSize[0x0050])
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnComplete;                                                // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnInterrupted;                                             // 0x005C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCancelled;                                               // 0x0068(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OTCF[0x28];                                    // 0x0074(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_PlayMontageAndWait");
		return ptr;
	}



	void OnMontageInterrupted();
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	class UAbilityTask_PlayMontageAndWait* STATIC_CreatePlayMontageAndWaitProxy(class UObject* WorldContextObject, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const struct FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale);
};

// Class GameplayAbilities.AbilityTask_Repeat
// 0x0028 (FullSize[0x0078] - InheritedSize[0x0050])
class UAbilityTask_Repeat : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnPerformAction;                                           // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFinished;                                                // 0x005C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_18LH[0x10];                                    // 0x0068(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_Repeat");
		return ptr;
	}



	class UAbilityTask_Repeat* STATIC_RepeatAction(class UObject* WorldContextObject, float TimeBetweenActions, int TotalActionCount);
};

// Class GameplayAbilities.AbilityTask_SpawnActor
// 0x002C (FullSize[0x007C] - InheritedSize[0x0050])
class UAbilityTask_SpawnActor : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    Success;                                                   // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    DidNotSpawn;                                               // 0x005C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_781G[0x14];                                    // 0x0068(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_SpawnActor");
		return ptr;
	}



	class UAbilityTask_SpawnActor* STATIC_SpawnActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class);
	void FinishSpawningActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class, class AActor** SpawnedActor);
};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// 0x002C (FullSize[0x007C] - InheritedSize[0x0050])
class UAbilityTask_StartAbilityState : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnStateEnded;                                              // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnStateInterrupted;                                        // 0x005C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PFEL[0x14];                                    // 0x0068(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_StartAbilityState");
		return ptr;
	}



	class UAbilityTask_StartAbilityState* STATIC_StartAbilityState(class UObject* WorldContextObject, const struct FName& StateName, bool bEndCurrentState);
};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// 0x001C (FullSize[0x006C] - InheritedSize[0x0050])
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    TimeElapsed;                                               // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q8SN[0x10];                                    // 0x005C(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_VisualizeTargeting");
		return ptr;
	}



	class UAbilityTask_VisualizeTargeting* STATIC_VisualizeTargetingUsingActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* TargetActor, const struct FName& TaskInstanceName, float Duration);
	class UAbilityTask_VisualizeTargeting* STATIC_VisualizeTargeting(class UObject* WorldContextObject, class UClass* Class, const struct FName& TaskInstanceName, float Duration);
	void FinishSpawningActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// 0x0028 (FullSize[0x0078] - InheritedSize[0x0050])
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnActivate;                                                // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_04XS[0x1C];                                    // 0x005C(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAbilityActivate");
		return ptr;
	}



	class UAbilityTask_WaitAbilityActivate* STATIC_WaitForAbilityActivate(class UObject* WorldContextObject, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
	void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);
};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// 0x0028 (FullSize[0x0078] - InheritedSize[0x0050])
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCommit;                                                  // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9ZAB[0x1C];                                    // 0x005C(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAbilityCommit");
		return ptr;
	}



	class UAbilityTask_WaitAbilityCommit* STATIC_WaitForAbilityCommit(class UObject* WorldContextObject, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce);
	void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// 0x0034 (FullSize[0x0084] - InheritedSize[0x0050])
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                  // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M01E[0x28];                                    // 0x005C(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChange");
		return ptr;
	}



	class UAbilityTask_WaitAttributeChange* STATIC_WaitForAttributeChangeWithComparison(class UObject* WorldContextObject, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, TEnumAsByte<GameplayAbilities_EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce);
	class UAbilityTask_WaitAttributeChange* STATIC_WaitForAttributeChange(class UObject* WorldContextObject, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce);
};

// Class GameplayAbilities.AbilityTask_WaitCancel
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UAbilityTask_WaitCancel : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCancel;                                                  // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7EZR[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitCancel");
		return ptr;
	}



	class UAbilityTask_WaitCancel* STATIC_WaitCancel(class UObject* WorldContextObject);
	void OnLocalCancelCallback();
	void OnCancelCallback();
};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
class UAbilityTask_WaitConfirm : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnConfirm;                                                 // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W0UP[0xC];                                     // 0x005C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitConfirm");
		return ptr;
	}



	class UAbilityTask_WaitConfirm* STATIC_WaitConfirm(class UObject* WorldContextObject);
	void OnConfirmCallback(class UGameplayAbility* InAbility);
};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// 0x001C (FullSize[0x006C] - InheritedSize[0x0050])
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnConfirm;                                                 // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCancel;                                                  // 0x005C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YEM2[0x4];                                     // 0x0068(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitConfirmCancel");
		return ptr;
	}



	class UAbilityTask_WaitConfirmCancel* STATIC_WaitConfirmCancel(class UObject* WorldContextObject);
	void OnLocalConfirmCallback();
	void OnLocalCancelCallback();
	void OnConfirmCallback();
	void OnCancelCallback();
};

// Class GameplayAbilities.AbilityTask_WaitDelay
// 0x0014 (FullSize[0x0064] - InheritedSize[0x0050])
class UAbilityTask_WaitDelay : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                  // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A0RM[0x8];                                     // 0x005C(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitDelay");
		return ptr;
	}



	class UAbilityTask_WaitDelay* STATIC_WaitDelay(class UObject* WorldContextObject, float Time);
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// 0x0070 (FullSize[0x00C0] - InheritedSize[0x0050])
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{
public:
	unsigned char                                      UnknownData_DTOF[0x6C];                                    // 0x0050(0x006C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAbilitySystemComponent*                     ExternalOwner;                                             // 0x00BC(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied");
		return ptr;
	}



	void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle);
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// 0x001C (FullSize[0x00DC] - InheritedSize[0x00C0])
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	struct FScriptMulticastDelegate                    OnApplied;                                                 // 0x00C0(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TCEV[0x10];                                    // 0x00CC(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self");
		return ptr;
	}



	class UAbilityTask_WaitGameplayEffectApplied_Self* STATIC_WaitGameplayEffectAppliedToSelf(class UObject* WorldContextObject, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// 0x001C (FullSize[0x00DC] - InheritedSize[0x00C0])
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	struct FScriptMulticastDelegate                    OnApplied;                                                 // 0x00C0(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UFRJ[0x10];                                    // 0x00CC(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target");
		return ptr;
	}



	class UAbilityTask_WaitGameplayEffectApplied_Target* STATIC_WaitGameplayEffectAppliedToTarget(class UObject* WorldContextObject, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects);
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// 0x0028 (FullSize[0x0078] - InheritedSize[0x0050])
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnRemoved;                                                 // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    InvalidHandle;                                             // 0x005C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IGLG[0x10];                                    // 0x0068(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved");
		return ptr;
	}



	class UAbilityTask_WaitGameplayEffectRemoved* STATIC_WaitForGameplayEffectRemoved(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectRemoved();
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// 0x0028 (FullSize[0x0078] - InheritedSize[0x0050])
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                  // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    InvalidHandle;                                             // 0x005C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DYDN[0x10];                                    // 0x0068(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange");
		return ptr;
	}



	class UAbilityTask_WaitGameplayEffectStackChange* STATIC_WaitForGameplayEffectStackChange(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectStackChange(const struct FActiveGameplayEffectHandle& Handle, int NewCount, int OldCount);
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// 0x0024 (FullSize[0x0074] - InheritedSize[0x0050])
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    EventReceived;                                             // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M33A[0x8];                                     // 0x005C(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                    // 0x0064(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y4TR[0xC];                                     // 0x0068(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEvent");
		return ptr;
	}



	class UAbilityTask_WaitGameplayEvent* STATIC_WaitGameplayEvent(class UObject* WorldContextObject, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// 0x001C (FullSize[0x006C] - InheritedSize[0x0050])
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{
public:
	unsigned char                                      UnknownData_0GJ8[0xC];                                     // 0x0050(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                    // 0x005C(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BAS5[0xC];                                     // 0x0060(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTag");
		return ptr;
	}



	void GameplayTagCallback(const struct FGameplayTag& Tag, int NewCount);
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// 0x000C (FullSize[0x0078] - InheritedSize[0x006C])
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
public:
	struct FScriptMulticastDelegate                    Added;                                                     // 0x006C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded");
		return ptr;
	}



	class UAbilityTask_WaitGameplayTagAdded* STATIC_WaitGameplayTagAdd(class UObject* WorldContextObject, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// 0x000C (FullSize[0x0078] - InheritedSize[0x006C])
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
public:
	struct FScriptMulticastDelegate                    Removed;                                                   // 0x006C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved");
		return ptr;
	}



	class UAbilityTask_WaitGameplayTagRemoved* STATIC_WaitGameplayTagRemove(class UObject* WorldContextObject, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// 0x001C (FullSize[0x006C] - InheritedSize[0x0050])
class UAbilityTask_WaitInputPress : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnPress;                                                   // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VETN[0x10];                                    // 0x005C(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitInputPress");
		return ptr;
	}



	class UAbilityTask_WaitInputPress* STATIC_WaitInputPress(class UObject* WorldContextObject, bool bTestAlreadyPressed);
	void OnPressCallback();
};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// 0x001C (FullSize[0x006C] - InheritedSize[0x0050])
class UAbilityTask_WaitInputRelease : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnRelease;                                                 // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H1Y4[0x10];                                    // 0x005C(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitInputRelease");
		return ptr;
	}



	class UAbilityTask_WaitInputRelease* STATIC_WaitInputRelease(class UObject* WorldContextObject, bool bTestAlreadyReleased);
	void OnReleaseCallback();
};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                  // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MTZ6[0xC];                                     // 0x005C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitMovementModeChange");
		return ptr;
	}



	void OnMovementModeChange(class ACharacter* Character, TEnumAsByte<Engine_EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	class UAbilityTask_WaitMovementModeChange* STATIC_CreateWaitMovementModeChange(class UObject* WorldContextObject, TEnumAsByte<Engine_EMovementMode> NewMode);
};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// 0x000C (FullSize[0x005C] - InheritedSize[0x0050])
class UAbilityTask_WaitOverlap : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnOverlap;                                                 // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitOverlap");
		return ptr;
	}



	class UAbilityTask_WaitOverlap* STATIC_WaitForOverlap(class UObject* WorldContextObject);
	void OnOverlapCallback(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnHitCallback(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// 0x002C (FullSize[0x007C] - InheritedSize[0x0050])
class UAbilityTask_WaitTargetData : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    ValidData;                                                 // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    Cancelled;                                                 // 0x005C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UTT4[0x4];                                     // 0x0068(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AGameplayAbilityTargetActor*                 TargetActor;                                               // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L06E[0xC];                                     // 0x0070(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitTargetData");
		return ptr;
	}



	class UAbilityTask_WaitTargetData* STATIC_WaitTargetDataUsingActor(class UObject* WorldContextObject, const struct FName& TaskInstanceName, TEnumAsByte<GameplayAbilities_EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor);
	class UAbilityTask_WaitTargetData* STATIC_WaitTargetData(class UObject* WorldContextObject, const struct FName& TaskInstanceName, TEnumAsByte<GameplayAbilities_EGameplayTargetingConfirmation> ConfirmationType, class UClass* Class);
	void OnTargetDataReplicatedCancelledCallback();
	void OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);
	void OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data);
	void OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data);
	void FinishSpawningActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnVelocityChage;                                           // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMovementComponent*                          CachedMovementComponent;                                   // 0x005C(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UY0N[0x10];                                    // 0x0060(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitVelocityChange");
		return ptr;
	}



	class UAbilityTask_WaitVelocityChange* STATIC_CreateWaitVelocityChange(class UObject* WorldContextObject, const struct FVector& Direction, float MinimumMagnitude);
};

// Class GameplayAbilities.AbilitySystemTestAttributeSet
// 0x0040 (FullSize[0x0060] - InheritedSize[0x0020])
class UAbilitySystemTestAttributeSet : public UAttributeSet
{
public:
	float                                              MaxHealth;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Health;                                                    // 0x0024(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Mana;                                                      // 0x0028(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxMana;                                                   // 0x002C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpellDamage;                                               // 0x0034(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PhysicalDamage;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CritChance;                                                // 0x003C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CritMultiplier;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ArmorDamageReduction;                                      // 0x0044(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DodgeChance;                                               // 0x0048(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LifeSteal;                                                 // 0x004C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Strength;                                                  // 0x0050(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StackingAttribute1;                                        // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StackingAttribute2;                                        // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NoStackAttribute;                                          // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemTestAttributeSet");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbility_CharacterJump
// 0x0000 (FullSize[0x030C] - InheritedSize[0x030C])
class UGameplayAbility_CharacterJump : public UGameplayAbility
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility_CharacterJump");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbility_Montage
// 0x0028 (FullSize[0x0334] - InheritedSize[0x030C])
class UGameplayAbility_Montage : public UGameplayAbility
{
public:
	class UAnimMontage*                                MontageToPlay;                                             // 0x030C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x0310(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SectionName;                                               // 0x0314(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              GameplayEffectClassesWhileAnimating;                       // 0x031C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UGameplayEffect*>                     GameplayEffectsWhileAnimating;                             // 0x0328(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility_Montage");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbilityBlueprint
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UGameplayAbilityBlueprint : public UBlueprint
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityBlueprint");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbilityBlueprintGeneratedClass
// 0x0000 (FullSize[0x01CC] - InheritedSize[0x01CC])
class UGameplayAbilityBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityBlueprintGeneratedClass");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbilitySet
// 0x000C (FullSize[0x0028] - InheritedSize[0x001C])
class UGameplayAbilitySet : public UDataAsset
{
public:
	TArray<struct FGameplayAbilityBindInfo>            Abilities;                                                 // 0x001C(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilitySet");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// 0x0018 (FullSize[0x0258] - InheritedSize[0x0240])
class AGameplayAbilityWorldReticle : public AActor
{
public:
	struct FWorldReticleParameters                     Parameters;                                                // 0x0240(0x000C) (Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                               bFaceOwnerFlat;                                            // 0x024C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                               bSnapToTargetedActor;                                      // 0x024D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                               bIsTargetValid;                                            // 0x024E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bIsTargetAnActor;                                          // 0x024F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class APlayerController*                           MasterPC;                                                  // 0x0250(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      TargetingActor;                                            // 0x0254(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityWorldReticle");
		return ptr;
	}



	void SetReticleMaterialParamVector(const struct FName& ParamName, const struct FVector& Value);
	void SetReticleMaterialParamFloat(const struct FName& ParamName, float Value);
	void OnValidTargetChanged(bool bNewValue);
	void OnTargetingAnActor(bool bNewValue);
	void OnParametersInitialized();
	void FaceTowardSource(bool bFaceIn2D);
};

// Class GameplayAbilities.GameplayAbilityTargetActor
// 0x00FC (FullSize[0x033C] - InheritedSize[0x0240])
class AGameplayAbilityTargetActor : public AActor
{
public:
	bool                                               ShouldProduceTargetDataOnServer;                           // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6OHU[0xF];                                     // 0x0241(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayAbilityTargetingLocationInfo       StartLocation;                                             // 0x0250(0x0070) (BlueprintVisible, BlueprintReadOnly, Net, ContainsInstancedReference, ExposeOnSpawn, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AUF9[0x38];                                    // 0x02C0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APlayerController*                           MasterPC;                                                  // 0x02F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                            OwningAbility;                                             // 0x02FC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDestroyOnConfirmation;                                    // 0x0300(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2F4P[0x3];                                     // 0x0301(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      SourceActor;                                               // 0x0304(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWorldReticleParameters                     ReticleParams;                                             // 0x0308(0x000C) (BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	class UClass*                                      ReticleClass;                                              // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle             Filter;                                                    // 0x0318(0x0008) (BlueprintVisible, Net, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                               bDebug;                                                    // 0x0320(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PYA9[0x13];                                    // 0x0321(0x0013) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAbilitySystemComponent*                     GenericDelegateBoundASC;                                   // 0x0334(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O93U[0x4];                                     // 0x0338(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor");
		return ptr;
	}



	void ConfirmTargeting();
	void CancelTargeting();
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// 0x0004 (FullSize[0x0340] - InheritedSize[0x033C])
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{
public:
	unsigned char                                      UnknownData_SIZJ[0x4];                                     // 0x033C(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_Radius");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// 0x0014 (FullSize[0x0350] - InheritedSize[0x033C])
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
public:
	struct FCollisionProfileName                       TraceProfile;                                              // 0x033C(0x0008) (Edit, BlueprintVisible, Config, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                               bTraceAffectsAimPitch;                                     // 0x0344(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UW7Y[0xB];                                     // 0x0345(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_Trace");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// 0x0020 (FullSize[0x0370] - InheritedSize[0x0350])
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	float                                              CollisionRadius;                                           // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionHeight;                                           // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BXO9[0x18];                                    // 0x0358(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{
public:
	class UCapsuleComponent*                           CollisionComponent;                                        // 0x0258(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UActorComponent*>                     VisualizationComponents;                                   // 0x025C(0x000C) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// 0x0010 (FullSize[0x0380] - InheritedSize[0x0370])
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{
public:
	class UClass*                                      PlacedActorClass;                                          // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          PlacedActorMaterial;                                       // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BNZ8[0x8];                                     // 0x0378(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayCueNotify_HitImpact
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{
public:
	class USoundBase*                                  Sound;                                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ParticleSystem;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_HitImpact");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayCueSet
// 0x0048 (FullSize[0x0064] - InheritedSize[0x001C])
class UGameplayCueSet : public UDataAsset
{
public:
	TArray<struct FGameplayCueNotifyData>              GameplayCueData;                                           // 0x001C(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JP3I[0x3C];                                    // 0x0028(0x003C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueSet");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayEffectTemplate
// 0x0000 (FullSize[0x0368] - InheritedSize[0x0368])
class UGameplayEffectTemplate : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectTemplate");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayModMagnitudeCalculation
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayModMagnitudeCalculation");
		return ptr;
	}



	float CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec);
};

// Class GameplayAbilities.GameplayEffectExtension
// 0x0018 (FullSize[0x0034] - InheritedSize[0x001C])
class UGameplayEffectExtension : public UObject
{
public:
	TArray<struct FGameplayAttribute>                  RelevantSourceAttributes;                                  // 0x001C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGameplayAttribute>                  RelevantTargetAttributes;                                  // 0x0028(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExtension");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayEffectExtension_LifestealTest
// 0x0004 (FullSize[0x0038] - InheritedSize[0x0034])
class UGameplayEffectExtension_LifestealTest : public UGameplayEffectExtension
{
public:
	class UGameplayEffect*                             HealthRestoreGameplayEffect;                               // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExtension_LifestealTest");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayEffectExtension_ShieldTest
// 0x0004 (FullSize[0x0038] - InheritedSize[0x0034])
class UGameplayEffectExtension_ShieldTest : public UGameplayEffectExtension
{
public:
	class UGameplayEffect*                             ShieldRemoveGameplayEffect;                                // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExtension_ShieldTest");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// 0x000C (FullSize[0x0028] - InheritedSize[0x001C])
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{
public:
	struct FText                                       Description;                                               // 0x001C(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectUIData_TextOnly");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayTagReponseTable
// 0x0114 (FullSize[0x0130] - InheritedSize[0x001C])
class UGameplayTagReponseTable : public UDataAsset
{
public:
	TArray<struct FGameplayTagResponseTableEntry>      Entries;                                                   // 0x001C(0x000C) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0D4S[0x108];                                   // 0x0028(0x0108) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.GameplayTagReponseTable");
		return ptr;
	}



	void TagResponseEvent(const struct FGameplayTag& Tag, int NewCount, class UAbilitySystemComponent* ASC, int Idx);
};

// Class GameplayAbilities.TickableAttributeSetInterface
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UTickableAttributeSetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayAbilities.TickableAttributeSetInterface");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
