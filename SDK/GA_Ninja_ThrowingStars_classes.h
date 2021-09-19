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

// BlueprintGeneratedClass GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C
// 0x0204 (FullSize[0x08E0] - InheritedSize[0x06DC])
class UGA_Ninja_ThrowingStars_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                AN_ThrowStars;                                             // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      Prj_ThrowingStar;                                          // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AFortPawn*                                   Ref_Instigator;                                            // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     TransformOffsetA1;                                         // 0x06EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     TransformOffsetB1;                                         // 0x06F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              NegHorizontalSpread1;                                      // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              PosHorizontalSpread1;                                      // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     StartLocation;                                             // 0x070C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              InitialSpeed;                                              // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ThrowingStarGravity;                                       // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    StartRotation;                                             // 0x0720(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     TransformOffsetC1;                                         // 0x072C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              NegHorizontalSpread2;                                      // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     TransformOffsetD1;                                         // 0x073C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              PosHorizontalSpread2;                                      // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     TransformOffsetE1;                                         // 0x074C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              NegHorizontalSpread3;                                      // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     TransformOffsetF1;                                         // 0x075C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              PosHorizontalSpread3;                                      // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_StarsUpgrade1;                                          // 0x076C(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_StarsUpgrade2;                                          // 0x0784(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                             // 0x079C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventActivation;                                           // 0x07A4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortAbilityTargetSelection                 T_Explosion;                                               // 0x07AC(0x004C) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  ActivationSound;                                           // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayEventData                          EventData;                                                 // 0x07FC(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayAttribute                          Att_TargetDummiesLevel;                                    // 0x0854(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      HomingTarget;                                              // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShouldHome;                                                // 0x085C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Cascade;                                                   // 0x085D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FWG2[0x2];                                     // 0x085E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                EC_StarDamage;                                             // 0x0860(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NinjaTraining2;                                         // 0x0868(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_AfflictionStar;                                         // 0x0880(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_RainOfDeath;                                            // 0x0888(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               RainOfDeath;                                               // 0x08A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_25Z3[0x3];                                     // 0x08A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ThrowNumber;                                               // 0x08A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsAuthority;                                               // 0x08A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4VFZ[0x3];                                     // 0x08A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       TC_Extra2Stars;                                            // 0x08AC(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ThrowLeftStar;                                             // 0x08C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ThrowRightStar;                                            // 0x08C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G1TN[0x2];                                     // 0x08C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       TC_Cascade;                                                // 0x08C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C");
		return ptr;
	}



	void SetupVariables();
	void ThrowCascade();
	void ThrowAdditionalStars();
	void Throw_Lv3_Stars();
	void Thow_Lv2_Stars();
	void ThrowBasicStars();
	void SpawnThrowingStar(const struct FVector& Transform_Offset, float Horizontal_Spread, class AActor* Homing_Target);
	void Cancelled_F7576E764ABBFFFBF1A6BE95A742E0A6(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_F7576E764ABBFFFBF1A6BE95A742E0A6(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_6FEC3EAA4C7675A1295702BBAE17678C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_6FEC3EAA4C7675A1295702BBAE17678C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_6FEC3EAA4C7675A1295702BBAE17678C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Ninja_ThrowingStars(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
