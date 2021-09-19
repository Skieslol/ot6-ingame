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

// BlueprintGeneratedClass GA_Ninja_ShadowStance.GA_Ninja_ShadowStance_C
// 0x00A4 (FullSize[0x0780] - InheritedSize[0x06DC])
class UGA_Ninja_ShadowStance_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                          EventPayload;                                              // 0x06E0(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventActivation;                                           // 0x0738(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                             // 0x0740(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Ninja_C*                         NinjaPawn;                                                 // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_ShadowStance;                                           // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_ShadowStanceActivate;                                   // 0x0750(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_EdgedWeapons;                                           // 0x0768(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ninja_ShadowStance.GA_Ninja_ShadowStance_C");
		return ptr;
	}



	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Ninja_ShadowStance(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
