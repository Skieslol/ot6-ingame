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

// BlueprintGeneratedClass GA_Commando_AmmoGeneration.GA_Commando_AmmoGeneration_C
// 0x0024 (FullSize[0x0764] - InheritedSize[0x0740])
class UGA_Commando_AmmoGeneration_C : public UGAT_CommandoTriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0740(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                TC_IsAssaultRifle;                                         // 0x0744(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventActivation;                                           // 0x074C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                             // 0x0754(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AmountGiven;                                               // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                UpgradedAmmoAmount;                                        // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Commando_AmmoGeneration.GA_Commando_AmmoGeneration_C");
		return ptr;
	}



	void SetupVariables();
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Commando_AmmoGeneration(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
