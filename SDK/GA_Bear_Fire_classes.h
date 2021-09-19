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

// GameplayAbilityBlueprintGeneratedClass GA_Bear_Fire.GA_Bear_Fire_C
// 0x0004 (FullSize[0x06E0] - InheritedSize[0x06DC])
class UGA_Bear_Fire_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_Bear_Fire.GA_Bear_Fire_C");
		return ptr;
	}



	void Cancelled_0B48E8B547027954C37AA1BF4D77BE31(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_0B48E8B547027954C37AA1BF4D77BE31(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Bear_Fire(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
