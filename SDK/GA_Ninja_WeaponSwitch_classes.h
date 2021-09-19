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

// BlueprintGeneratedClass GA_Ninja_WeaponSwitch.GA_Ninja_WeaponSwitch_C
// 0x0034 (FullSize[0x0710] - InheritedSize[0x06DC])
class UGA_Ninja_WeaponSwitch_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                       TC_IsEdged;                                                // 0x06E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_IsAssassinate;                                          // 0x06F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ninja_WeaponSwitch.GA_Ninja_WeaponSwitch_C");
		return ptr;
	}



	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Ninja_WeaponSwitch(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
