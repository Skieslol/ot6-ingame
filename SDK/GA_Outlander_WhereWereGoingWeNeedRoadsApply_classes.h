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

// BlueprintGeneratedClass GA_Outlander_WhereWereGoingWeNeedRoadsApply.GA_Outlander_WhereWereGoingWeNeedRoadsApply_C
// 0x0034 (FullSize[0x0774] - InheritedSize[0x0740])
class UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C : public UGAT_OutlanderTriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0740(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                EventActivation;                                           // 0x0744(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_RoadsSpeed;                                             // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_RoadsUpgrade;                                           // 0x0750(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              SpeedBonus;                                                // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              UpgradedSpeed;                                             // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              BaseSpeedBonus;                                            // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Outlander_WhereWereGoingWeNeedRoadsApply.GA_Outlander_WhereWereGoingWeNeedRoadsApply_C");
		return ptr;
	}



	void SetVariables(struct FGameplayEffectSpecHandle* GameplaySpec);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Outlander_WhereWereGoingWeNeedRoadsApply(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
