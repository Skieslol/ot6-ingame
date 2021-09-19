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

// BlueprintGeneratedClass GA_CommandoFlakVest.GA_CommandoFlakVest_C
// 0x004C (FullSize[0x078C] - InheritedSize[0x0740])
class UGA_CommandoFlakVest_C : public UGAT_CommandoTriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0740(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                Event_Activation;                                          // 0x0744(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_FlakVest;                                               // 0x074C(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_FlakVest;                                               // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_SpawnEffect;                                            // 0x0768(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Disabled;                                                  // 0x0780(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W50D[0x3];                                     // 0x0781(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RearmTime;                                                 // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTimerHandle                                ActiveTimer;                                               // 0x0788(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_CommandoFlakVest.GA_CommandoFlakVest_C");
		return ptr;
	}



	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ReApplyShield();
	void ExecuteUbergraph_GA_CommandoFlakVest(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
