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

// BlueprintGeneratedClass PlayerPawn_Commando.PlayerPawn_Commando_C
// 0x00AC (FullSize[0x0FEC] - InheritedSize[0x0F40])
class APlayerPawn_Commando_C : public APlayerPawn_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0F40(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      TargetHead;                                                // 0x0F44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USkeletalMeshComponent*                      TargetBody;                                                // 0x0F48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInterface*>                  PawnHeadMaterials_1;                                       // 0x0F4C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  PawnBodyMaterials_1;                                       // 0x0F58(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             P_IncendiaryRound;                                         // 0x0F64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_MakeItRain;                                              // 0x0F68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_FlakVest;                                               // 0x0F6C(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEventData                          Event_Data;                                                // 0x0F84(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventSpawnEffect;                                          // 0x0FDC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ShockwaveRefractionRingHeight;                             // 0x0FE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_Shockwave;                                               // 0x0FE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Commando.PlayerPawn_Commando_C");
		return ptr;
	}



	void UserConstructionScript();
	void GameplayCue_Abilities_Applied_Commando_IncendiaryRounds(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Applied_Commando_MakeItRain(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ReceivePossessed(class AController* NewController);
	void GameplayCue_Abilities_Activation_Commando_Shockwave(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_PlayerPawn_Commando(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
