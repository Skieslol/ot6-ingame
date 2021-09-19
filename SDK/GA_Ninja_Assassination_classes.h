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

// BlueprintGeneratedClass GA_Ninja_Assassination.GA_Ninja_Assassination_C
// 0x00DC (FullSize[0x07B8] - InheritedSize[0x06DC])
class UGA_Ninja_Assassination_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                       TC_EdgedWeapons;                                           // 0x06E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEventData                          EventData;                                                 // 0x06F8(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventActivation;                                           // 0x0750(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                             // 0x0758(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Ninja_C*                         NinjaPawn;                                                 // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_Assassination;                                          // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_WindAndStorm;                                           // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_WindAndStorm;                                           // 0x076C(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_PainMastery;                                            // 0x0784(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_PainMastery;                                            // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_NinjaAbility;                                           // 0x07A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ninja_Assassination.GA_Ninja_Assassination_C");
		return ptr;
	}



	void ApplyStack(class APlayerPawn_Ninja_C* NinjaPawn);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Ninja_Assassination(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
