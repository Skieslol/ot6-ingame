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

// GameplayAbilityBlueprintGeneratedClass GAB_ATLASZap.GAB_ATLASZap_C
// 0x000C (FullSize[0x06E8] - InheritedSize[0x06DC])
class UGAB_ATLASZap_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                TC_GameplayEffectInstantDeath;                             // 0x06E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GAB_ATLASZap.GAB_ATLASZap_C");
		return ptr;
	}



	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_ATLASZap(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
