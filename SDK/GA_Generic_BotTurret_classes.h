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

// BlueprintGeneratedClass GA_Generic_BotTurret.GA_Generic_BotTurret_C
// 0x00EC (FullSize[0x082C] - InheritedSize[0x0740])
class UGA_Generic_BotTurret_C : public UGAT_GenericActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0740(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                EventActivate;                                             // 0x0744(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventDeactivate;                                           // 0x074C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayAbilityMontageInfo             Montage_Info;                                              // 0x0754(0x0044) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      BGA_BotTurret;                                             // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      EnergyDamage;                                              // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              TurretDuration;                                            // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     SpawnTurretLoc;                                            // 0x07A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    SpawnTurretRot;                                            // 0x07B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AActor*                                      ActiveTurret;                                              // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShouldBounce;                                              // 0x07C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BD29[0x3];                                     // 0x07C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayAttribute                          DroneSubBuilding3;                                         // 0x07C4(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABuildingGameplayActor*                      Bot_Reference;                                             // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Turret_Duration_Lv1;                                       // 0x07CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Turret_Duration_Lv2;                                       // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Turret_Duration_Lv3;                                       // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Turret_Duration_Lv4;                                       // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Turret_Duration_Lv5;                                       // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FireRate;                                                  // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Fire_Rate_Lv1;                                             // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Fire_Rate_Lv2;                                             // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Fire_Rate_Lv3;                                             // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Fire_Rate_Lv4;                                             // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Fire_Rate_Lv5;                                             // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Range;                                                     // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Range_Lv1;                                                 // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Range_Lv2;                                                 // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Range_Lv3;                                                 // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Range_Lv4;                                                 // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Range_Lv5;                                                 // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              WarmUpDelay;                                               // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              WarmUpDelay_Lv1;                                           // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              WarmUpDelay_Lv2;                                           // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              WarmUpDelay_Lv3;                                           // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              WarmUpDelay_Lv4;                                           // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              WarmUpDelay_Lv5;                                           // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_BGABuff;                                                // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Generic_BotTurret.GA_Generic_BotTurret_C");
		return ptr;
	}



	void ApplyStatScaling(class AB_BGA_BotTurret_C* BotReference);
	void SetLevelUpgrades();
	void SetUpBot(class AFortPlayerPawn** PlayerPawn, struct FVector* SpawnLocation, struct FRotator* SpawnRotation, class UClass** BGATurret);
	void Completed_3A74E5BE4F4D85991B8887A89A2350CB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_3A74E5BE4F4D85991B8887A89A2350CB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_3A74E5BE4F4D85991B8887A89A2350CB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Generic_BotTurret(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
