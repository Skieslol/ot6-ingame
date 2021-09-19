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

// BlueprintGeneratedClass GAB_HuskMelee.GAB_HuskMelee_C
// 0x0004 (FullSize[0x06EC] - InheritedSize[0x06E8])
class UGAB_HuskMelee_C : public UGAB_AIBaseMelee_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GAB_HuskMelee.GAB_HuskMelee_C");
		return ptr;
	}



	void Completed_39FC57D848D381E3A3C7E798E995ED9A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_39FC57D848D381E3A3C7E798E995ED9A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_39FC57D848D381E3A3C7E798E995ED9A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnCancelled_3012237E40D07AA69417C79DC2677F69();
	void OnInterrupted_3012237E40D07AA69417C79DC2677F69();
	void OnComplete_3012237E40D07AA69417C79DC2677F69();
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void MoveToLoop();
	void ExecuteUbergraph_GAB_HuskMelee(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
