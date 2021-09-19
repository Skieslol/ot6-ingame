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

// BlueprintGeneratedClass GA_Commando_GoinCommando.GA_Commando_GoinCommando_C
// 0x0060 (FullSize[0x07A0] - InheritedSize[0x0740])
class UGA_Commando_GoinCommando_C : public UGAT_CommandoActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0740(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                EventActivation;                                           // 0x0744(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                M_Activation;                                              // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                Event_Complete;                                            // 0x0750(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              AbilityDuration;                                           // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UFortWeaponItemDefinition*                   WeaponDef;                                                 // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_AintDoneYet;                                            // 0x0760(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              UpgradeDuration;                                           // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_BoomStick;                                              // 0x077C(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_GoinCommandoSnare;                                      // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_GoinCommandoActive;                                     // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_TempDealEnergyDamage;                                   // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Commando_GoinCommando.GA_Commando_GoinCommando_C");
		return ptr;
	}



	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Commando_GoinCommando(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
