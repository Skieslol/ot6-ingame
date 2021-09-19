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

// BlueprintGeneratedClass GA_Outlander_InTheZoneSwitch.GA_Outlander_InTheZoneSwitch_C
// 0x0080 (FullSize[0x07C0] - InheritedSize[0x0740])
class UGA_Outlander_InTheZoneSwitch_C : public UGAT_OutlanderTriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0740(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                       TC_ImpactWeapon;                                           // 0x0744(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_InTheZone;                                              // 0x075C(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_LaserFocus;                                             // 0x0774(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_LaserFocus;                                             // 0x078C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_Melee_Weapon;                                           // 0x0790(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC__Ranged_Weapon;                                         // 0x07A8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Outlander_InTheZoneSwitch.GA_Outlander_InTheZoneSwitch_C");
		return ptr;
	}



	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void FadeOutPostProcess();
	void ExecuteUbergraph_GA_Outlander_InTheZoneSwitch(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
