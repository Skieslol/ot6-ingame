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

// BlueprintGeneratedClass GA_Outlander_OnDeathEffects.GA_Outlander_OnDeathEffects_C
// 0x0078 (FullSize[0x0754] - InheritedSize[0x06DC])
class UGA_Outlander_OnDeathEffects_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                          Event_Data;                                                // 0x06E0(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Outlander_C*                     Outlander_Pawn;                                            // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_InTheZone;                                              // 0x073C(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Outlander_OnDeathEffects.GA_Outlander_OnDeathEffects_C");
		return ptr;
	}



	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Outlander_OnDeathEffects(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
