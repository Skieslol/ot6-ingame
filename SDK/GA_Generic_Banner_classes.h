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

// BlueprintGeneratedClass GA_Generic_Banner.GA_Generic_Banner_C
// 0x017C (FullSize[0x0858] - InheritedSize[0x06DC])
class UGA_Generic_Banner_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                          EventData;                                                 // 0x06E0(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             FortPlayerPawn;                                            // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EventActivation;                                           // 0x073C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                             // 0x0744(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     BannerLocation;                                            // 0x074C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                Event_BuildingSelect;                                      // 0x0758(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayAbilityMontageInfo             Montage;                                                   // 0x0760(0x0044) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RepairRadius;                                              // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RepairWaveIncrement;                                       // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                RepairWaveCounter;                                         // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class ABuildingActor*>                      BuildingsToRepair;                                         // 0x07B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayAttribute                          EngineeringSchoolSubBuilding3;                             // 0x07BC(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                AOETarget2;                                                // 0x07C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                AOETarget3;                                                // 0x07C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              HitActors;                                                 // 0x07D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              RepairRadius_Lv1;                                          // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RepairRadius_Lv2;                                          // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RepairRadius_Lv3;                                          // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RepairRadius_Lv4;                                          // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RepairRadius_Lv5;                                          // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Shockwave;                                                 // 0x07F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Shockwave_Lv1;                                             // 0x07F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Shockwave_Lv2;                                             // 0x07F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Shockwave_Lv3;                                             // 0x07F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Shockwave_Lv4;                                             // 0x07F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Shockwave_Lv5;                                             // 0x07F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4YJY[0x2];                                     // 0x07F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BuildingUpgradeTier;                                       // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                BuildingUpgradeTier_Lv1;                                   // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                BuildingUpgradeTier_Lv2;                                   // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                BuildingUpgradeTier_Lv3;                                   // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                BuildingUpgradeTier_Lv4;                                   // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                BuildingUpgradeTier_Lv5;                                   // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RepairWaveDelay;                                           // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RepairWaveDelay_Lv1;                                       // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RepairWaveDelay_Lv2;                                       // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RepairWaveDelay_Lv3;                                       // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RepairWaveDelay_Lv4;                                       // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RepairWaveDelay_Lv5;                                       // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                AOE_ShockWave;                                             // 0x0828(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                AOE_ShockWave_Lv1;                                         // 0x0830(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                AOE_ShockWave_Lv2;                                         // 0x0838(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                AOE_ShockWave_Lv3;                                         // 0x0840(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                AOE_ShockWave_Lv4;                                         // 0x0848(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                AOE_ShockWave_Lv5;                                         // 0x0850(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Generic_Banner.GA_Generic_Banner_C");
		return ptr;
	}



	void SetupLevelVarsInternal(class UAbilitySystemComponent* AbilitySystemComponent);
	struct FTransform GetCustomAbilitySourceTransform();
	void Initialize();
	void SetupLevelVars();
	void BuildingRepairWave(float RepairWaveRadius);
	void Completed_B223ACB541DAF6B70FE5BCB12C3C66E1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_B223ACB541DAF6B70FE5BCB12C3C66E1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_B223ACB541DAF6B70FE5BCB12C3C66E1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_3D9DDD20491DEED5A55268A060EC3B66(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_3D9DDD20491DEED5A55268A060EC3B66(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void DoBuildingRepair();
	void ExecuteUbergraph_GA_Generic_Banner(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
