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

// BlueprintGeneratedClass GA_Commando_IfItBleeds.GA_Commando_IfItBleeds_C
// 0x0038 (FullSize[0x0778] - InheritedSize[0x0740])
class UGA_Commando_IfItBleeds_C : public UGAT_CommandoTriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0740(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                       TC_GoinCommandoActive;                                     // 0x0744(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       NewVar_1;                                                  // 0x075C(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_IfItBleedsDamage;                                       // 0x0774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Commando_IfItBleeds.GA_Commando_IfItBleeds_C");
		return ptr;
	}



	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Commando_IfItBleeds(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
