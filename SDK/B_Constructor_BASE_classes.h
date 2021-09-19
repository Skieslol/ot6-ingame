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

// BlueprintGeneratedClass B_Constructor_BASE.B_Constructor_BASE_C
// 0x02D0 (FullSize[0x0E50] - InheritedSize[0x0B80])
class AB_Constructor_BASE_C : public AFortConstructorBASE
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0B80(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                       // 0x0B84(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                            Sphere_Collision_For_Anim;                                 // 0x0B88(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      SK_Base_Device;                                            // 0x0B8C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UFortMiniMapComponent*                       FortMiniMap1;                                              // 0x0B90(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Workbench_Ticking;                                         // 0x0B94(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Screen_Lightbeam_01;                                       // 0x0B98(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    smoke_puff;                                                // 0x0B9C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    lightning2;                                                // 0x0BA0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    lightning1;                                                // 0x0BA4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             Root;                                                      // 0x0BA8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FGameplayTagContainer                       TC_BigBrother;                                             // 0x0BAC(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                BigBrotherAdditionalNodes;                                 // 0x0BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  MiniMapIcon;                                               // 0x0BC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Minimap_View_Distance;                                     // 0x0BCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_ContainmentUnit;                                        // 0x0BD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_Hyperthreading;                                         // 0x0BD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_Hyperthreading;                                         // 0x0BD8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_SubroutineOptimization;                                 // 0x0BF0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_SubroutineOptimization;                                 // 0x0C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_Recycling;                                              // 0x0C0C(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                ConnectedWood;                                             // 0x0C24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                ConnectedStone;                                            // 0x0C28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                ConnectedMetal;                                            // 0x0C2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UFortWorldItemDefinition*                    Wood;                                                      // 0x0C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UFortWorldItemDefinition*                    Stone;                                                     // 0x0C34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UFortWorldItemDefinition*                    Metal;                                                     // 0x0C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RecyclingMultiplier;                                       // 0x0C3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MinRandomVector;                                           // 0x0C40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MaxRandomVector;                                           // 0x0C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SpawnWood;                                                 // 0x0C48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SpawnStone;                                                // 0x0C49(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SpawnMetal;                                                // 0x0C4A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G52J[0x1];                                     // 0x0C4B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SpawnMax;                                                  // 0x0C4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              HyperThreadingMultiplier;                                  // 0x0C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_DefensiveIntegration;                                   // 0x0C54(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_DefensiveIntegration;                                   // 0x0C6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_AutomatedDefenses;                                      // 0x0C70(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AutomatedDefenses_Additional_Nodes;                        // 0x0C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_TotalIntegration;                                       // 0x0C8C(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_PowerModulation;                                        // 0x0CA4(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_PowerModulation;                                        // 0x0CBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_ExitPlan;                                               // 0x0CC0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                DefensiveIntegrationLevel;                                 // 0x0CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_LoftyArchitecture;                                      // 0x0CDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_LoftyArchitecture;                                      // 0x0CE0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       Safety_Protocols;                                          // 0x0CF8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_SafetyProtocols;                                        // 0x0D10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BaseIsPlaced;                                              // 0x0D14(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_ZC0J[0x3];                                     // 0x0D15(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumbPlayersNearBase;                                       // 0x0D18(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BaseStaticMeshArrays;                                      // 0x0D1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B23G[0x3];                                     // 0x0D1D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BasePowerLevel;                                            // 0x0D20(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              BaseAnimPlayRate;                                          // 0x0D24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                TotalResourcesSpawned;                                     // 0x0D28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                ResourceLimit;                                             // 0x0D2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_Overclocking;                                           // 0x0D30(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_UpgradedPowerModulation;                                // 0x0D48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_ElectrifiedFloors;                                      // 0x0D4C(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_SlowUnit;                                               // 0x0D64(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_SlowUnit;                                               // 0x0D7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_ContainmentUnit;                                        // 0x0D80(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_WallContainmentUnit;                                    // 0x0D98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_StrongerExit;                                           // 0x0D9C(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_StrongerExit;                                           // 0x0DB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_CardioFeedbackLoop;                                     // 0x0DB8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_ShieldCapacitor;                                        // 0x0DD0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_ShieldCapacitor;                                        // 0x0DE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FStructRecyclingResource                    StoredWood;                                                // 0x0DEC(0x0008) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FStructRecyclingResource                    StoredStone;                                               // 0x0DF4(0x0008) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FStructRecyclingResource                    StoredMetal;                                               // 0x0DFC(0x0008) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	int                                                HyperthreadingResourceLimit;                               // 0x0E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CollectResources;                                          // 0x0E08(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_ZLAV[0x3];                                     // 0x0E09(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CraneLv5AdditionalNodes;                                   // 0x0E0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_NeuroFeedbackLoop;                                      // 0x0E10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAbilitySystemComponent*                     ConstructorAbilitySystemComponent;                         // 0x0E14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_OutgoingDamageAmp;                                      // 0x0E18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DamageAmp;                                                 // 0x0E1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_FullyContained;                                         // 0x0E20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInterface*>                  Outer_MIDs;                                                // 0x0E24(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMeshComponent*                        Effect_Mesh_Comp;                                          // 0x0E30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInterface*>                  Inner_MIDs;                                                // 0x0E34(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMesh*>                         BASEMeshes;                                                // 0x0E40(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Transition_Start_Delay;                                    // 0x0E4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass B_Constructor_BASE.B_Constructor_BASE_C");
		return ptr;
	}



	void BaseSelfApplyGameplaySpec(const struct FGameplayEffectSpecHandle& GE_Spec);
	void SetBaseVisualGlow();
	void SetDamageMultiplier();
	void OnRep_CollectResources();
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn);
	void AddResourceToStack(const struct FStructRecyclingResource& RecyclingResource, int AmountToSpawn, class UFortWorldItemDefinition* Stored_Resource, struct FStructRecyclingResource* SetValue);
	void SpawnResourceForRecycling(class UFortWorldItemDefinition* ItemDefinition, int AmountToSpawn, TEnumAsByte<FortniteGame_EFortResourceType> ResourceType);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn);
	void AddGEToBaseArray(TArray<struct FBASEGameplayEffect>* BaseArray, class UClass* GameplayEffect, int LevelOverride);
	void OnRep_NumbPlayersNearBase();
	void OnRep_BaseIsPlaced();
	void RecycleResources();
	void SetupHostileEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* HostileEffects);
	void SetupFriendlyEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* FriendlyEffects);
	void SetupBuildingEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* BuildingEffects);
	void Setup_Base_Effect_Array(class UAbilitySystemComponent* Instigator_Ability_System, TArray<struct FBASEGameplayEffect>* BASEBuildingEffects, TArray<struct FBASEGameplayEffect>* BASEFriendlyEffects, TArray<struct FBASEGameplayEffect>* BASEHostileEffects);
	void SetupBaseDefaultValues(class UAbilitySystemComponent* Ability_System_Component, int* NodesToAffect);
	void UserConstructionScript();
	void OnPlaced(class UAbilitySystemComponent* InstigatorAbilitySystemComponent);
	void Recycling();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void AnimateLegs(bool LegsUp);
	void StartBuildingActorVisuals(class ABuildingSMActor* BuildingActor, class UStaticMeshComponent* EffectMeshComp);
	void StopBuildingActorVisuals(class ABuildingSMActor* BuildingActor, class UStaticMeshComponent* EffectMeshComp);
	void BlueprintOnInteract(class AFortPawn* InteractingPawn);
	void GetDamageAmp();
	void ResourcesCreated();
	void ExecuteUbergraph_B_Constructor_BASE(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
