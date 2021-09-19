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

// GameplayAbilityBlueprintGeneratedClass GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C
// 0x000C (FullSize[0x06E8] - InheritedSize[0x06DC])
class UGAB_FlingerMeleeSwipe_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       MontageSectionToPlay;                                      // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C");
		return ptr;
	}



	void Completed_75D3277A479B3F48D2AD2889328C3F32(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_75D3277A479B3F48D2AD2889328C3F32(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_75D3277A479B3F48D2AD2889328C3F32(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_FlingerMeleeSwipe(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
