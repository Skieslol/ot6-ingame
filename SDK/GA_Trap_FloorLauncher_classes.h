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

// BlueprintGeneratedClass GA_Trap_FloorLauncher.GA_Trap_FloorLauncher_C
// 0x000C (FullSize[0x0700] - InheritedSize[0x06F4])
class UGA_Trap_FloorLauncher_C : public UGA_TrapGeneric_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              LaunchStrength;                                            // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Mass_Benchmark;                                            // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Trap_FloorLauncher.GA_Trap_FloorLauncher_C");
		return ptr;
	}



	void OnApplied_A7A2BC074785D273036EA19D186AC748(class AActor* Target, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Trap_FloorLauncher(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
