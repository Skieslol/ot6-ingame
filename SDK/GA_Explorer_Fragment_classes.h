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

// BlueprintGeneratedClass GA_Explorer_Fragment.GA_Explorer_Fragment_C
// 0x0618 (FullSize[0x0CF4] - InheritedSize[0x06DC])
class UGA_Explorer_Fragment_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                       TC_HasBuff;                                                // 0x06E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_OffensiveBuff;                                          // 0x06F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_DefensiveBuff;                                          // 0x0710(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_SpecialityBuff;                                         // 0x0728(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                SpecialtyColor1;                                           // 0x0740(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                SpecialtyColor2;                                           // 0x0750(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Core_Index_1;                                              // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Core_Index_3;                                              // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Diamond_Index3;                                            // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Diamond_Index4;                                            // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Diamond_Index6;                                            // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Smoke_Index7;                                              // 0x0774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Sparkles_Index8;                                           // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                DefensiveColor2;                                           // 0x077C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                DefensiveColor1;                                           // 0x078C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                OffensiveColor1;                                           // 0x079C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                OffensiveColor2;                                           // 0x07AC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_ExplorerFragmentTypes_E_ExplorerFragmentTypes> FragType;                                                  // 0x07BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J6BK[0x3];                                     // 0x07BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       DummyContainer;                                            // 0x07C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    Diamond_Index5;                                            // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Core_Index_2;                                              // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Sparkles_Index9;                                           // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Execute_Offence;                                           // 0x07E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F7EJ[0x3];                                     // 0x07E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayEventData                          EventData;                                                 // 0x07E8(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventActivation;                                           // 0x0840(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             PlayerPawn;                                                // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AFortPlayerPawn*                             ClassPawn;                                                 // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList> ClassType;                                                 // 0x0850(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RNIX[0x3];                                     // 0x0851(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                EventOffense;                                              // 0x0854(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventDefense;                                              // 0x085C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventSpecialty;                                            // 0x0864(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                ActivatedEvent;                                            // 0x086C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                             // 0x0874(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortFeedbackHandle                         Feedback_Offensive;                                        // 0x087C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      AOE_OffensiveFragment;                                     // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     SpawnLocation;                                             // 0x0890(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    SpawnRotation;                                             // 0x089C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_DefensiveFragment;                                      // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                GCN_ActivateFragment;                                      // 0x08AC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortFeedbackHandle                         Feedback_Defensive;                                        // 0x08B4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Target_OffensiveFragment;                                  // 0x08C4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Target_DefensiveFragment;                                  // 0x08CC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HasFragment;                                            // 0x08D4(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      Prop_SpecialtyFragment;                                    // 0x08EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FFortFeedbackHandle                         Feedback_Outlander_Specialty;                              // 0x08F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasDiamonds;                                               // 0x0900(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EE8S[0x3];                                     // 0x0901(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       TC_DiamondsInTheRough;                                     // 0x0904(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_OffensiveDamage;                                        // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_AntiMaterialResist;                                     // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                Target_Defensive_Diamonds;                                 // 0x0924(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 OffensiveBuffIcon;                                         // 0x092C(0x0074) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 DefensiveBuffIcon;                                         // 0x09A0(0x0074) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 SpecialtyBuffIcon;                                         // 0x0A14(0x0074) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayAbilityMontageInfo             SpecialtyMontage;                                          // 0x0A88(0x0044) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                M_GrenadeThrow;                                            // 0x0ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      OrbProjectile;                                             // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U85J[0xC];                                     // 0x0AD4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  SpawnTransform;                                            // 0x0AE0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AFortAbilityDecoTool*                        DecoTool;                                                  // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FAbilityToolSpawnParameters                 SpawnParameters;                                           // 0x0B14(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      BearFragment;                                              // 0x0B34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_DefensiveFragmentDeco;                                  // 0x0B38(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bShouldUseDecoWeapon;                                      // 0x0B50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N9JQ[0x3];                                     // 0x0B51(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    Spawn_Direction;                                           // 0x0B54(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_PhaseShift;                                             // 0x0B60(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 Phase_Shift_Icon;                                          // 0x0B78(0x0074) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventTriggerPhaseShift;                                    // 0x0BEC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_PhaseShiftCooldown;                                     // 0x0BF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DefensivePurge;                                            // 0x0BF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4UKY[0x3];                                     // 0x0BF9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      GE_DefensivePurge;                                         // 0x0BFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_ImpossibilityMatrix;                                    // 0x0C00(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_ImpossibleOffense;                                      // 0x0C18(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_EffectCounter;                                          // 0x0C30(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_ActivatedFragment;                                      // 0x0C48(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_EffectCount;                                            // 0x0C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ImpossibilityMatrix;                                       // 0x0C64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7O2X[0x3];                                     // 0x0C65(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       TC_StoredFragment;                                         // 0x0C68(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_ImpossibleDefense;                                      // 0x0C80(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_ImpossibleSpecialty;                                    // 0x0C98(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       ErrorNotEnoughStamina;                                     // 0x0CB0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ShieldPercent;                                             // 0x0CC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      NewVar_1;                                                  // 0x0CCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DiamondsShield;                                            // 0x0CD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_Bearricade;                                             // 0x0CD4(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_DiamondsBear;                                           // 0x0CEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_StatBuff;                                               // 0x0CF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Explorer_Fragment.GA_Explorer_Fragment_C");
		return ptr;
	}



	void ApplyStatScaling(class AB_BGA_Explorer_OutlanderFragmentBear_C* BearReference);
	void DarkHackyMath(class AFortPlayerPawn* HitTarget, float* SetByCallerValue);
	bool K2_ShouldUseDecoTool(const struct FGameplayAbilityActorInfo& ActorInfo);
	bool SetupIconOverride();
	void K2_GetIconOverride();
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void SpecialtyFragment(TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList> ClassType);
	void DefensiveFragment(TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList> ClassType, const struct FGameplayAbilityTargetDataHandle& Target_Data, const struct FGameplayTag& Application_Tag);
	void ClassSelection(class AFortPlayerPawn* PlayerPawn, class AFortPlayerPawn** ClassPawn, TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList>* SelectedClass, bool* EndAbility);
	void ActivateFragment(TEnumAsByte<E_ExplorerFragmentTypes_E_ExplorerFragmentTypes>* FragmentType, TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList>* ClassType, struct FGameplayTag* ActivateEvent, bool* EndAbility);
	void OffensiveFragment(TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList> ClassType, const struct FGameplayAbilityTargetDataHandle& TargetData);
	void Cancelled_AB9C57344D21682887FAA6B895FA1C6D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_AB9C57344D21682887FAA6B895FA1C6D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_0DCC89D649F1683B5F78AC9AEEA4CBBB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_0DCC89D649F1683B5F78AC9AEEA4CBBB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_D9A99A8E430AA4101B325597D2C21C37(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_D9A99A8E430AA4101B325597D2C21C37(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnCancelled_AEBC8CA9454DB4A76A8336BD4EE30254();
	void OnInterrupted_AEBC8CA9454DB4A76A8336BD4EE30254();
	void OnComplete_AEBC8CA9454DB4A76A8336BD4EE30254();
	void Destroyed_56D0E8B74E6D3560ABB4BF82A5A31928(const struct FProjectileEventData& ProjectileData);
	void Exploded_56D0E8B74E6D3560ABB4BF82A5A31928(const struct FProjectileEventData& ProjectileData);
	void Stopped_56D0E8B74E6D3560ABB4BF82A5A31928(const struct FProjectileEventData& ProjectileData);
	void Bounced_56D0E8B74E6D3560ABB4BF82A5A31928(const struct FProjectileEventData& ProjectileData);
	void Touched_56D0E8B74E6D3560ABB4BF82A5A31928(const struct FProjectileEventData& ProjectileData);
	void Created_56D0E8B74E6D3560ABB4BF82A5A31928(const struct FProjectileEventData& ProjectileData);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Explorer_Fragment(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
