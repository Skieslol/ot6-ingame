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

// GameplayAbilityBlueprintGeneratedClass GA_Teleporter.GA_Teleporter_C
// 0x0058 (FullSize[0x0734] - InheritedSize[0x06DC])
class UGA_Teleporter_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      TeleporterClass;                                           // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AFortPlayerPawn*                             PlayerPawn;                                                // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AFortAbilityDecoTool*                        DecoTool;                                                  // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayAttribute                          BuildingAttribute;                                         // 0x06EC(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                      UpgradeMaxRange;                                           // 0x06F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      UpgradeRechargeDecay;                                      // 0x06FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        PlayerColors;                                              // 0x0708(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FAbilityToolSpawnParameters                 SpawnParameters;                                           // 0x0714(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_Teleporter.GA_Teleporter_C");
		return ptr;
	}



	void GetSecondTeleporterSpawnLoc(class AActor* FirstTeleporter, struct FTransform* SpawnTransform);
	void InitPortalAndSpawnTargetTeleporter(class AB_Teleporter_C* NewTeleporter);
	void DestroyExistingPortalsForPlayer(class AController* Controller);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Teleporter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
