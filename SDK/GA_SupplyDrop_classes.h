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

// GameplayAbilityBlueprintGeneratedClass GA_SupplyDrop.GA_SupplyDrop_C
// 0x00CC (FullSize[0x07A8] - InheritedSize[0x06DC])
class UGA_SupplyDrop_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             Fort_Player_Pawn;                                          // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EventComplete;                                             // 0x06E4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventActivation;                                           // 0x06EC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortAbilityTargetSelection                 T_Explosion;                                               // 0x06F4(0x004C) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  ActivationSound;                                           // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayEventData                          EventData;                                                 // 0x0744(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AbilityMultiplier;                                         // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayAttribute                          ExplorersGuildBuilding3;                                   // 0x07A0(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                PowerLevel;                                                // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_SupplyDrop.GA_SupplyDrop_C");
		return ptr;
	}



	void GetAttributeValue();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_SupplyDrop(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
