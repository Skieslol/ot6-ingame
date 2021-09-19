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

// BlueprintGeneratedClass GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C
// 0x016C (FullSize[0x08AC] - InheritedSize[0x0740])
class UGA_Outlander_KeenEyes_C : public UGAT_OutlanderTriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0740(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     V_SpawnColor;                                              // 0x0744(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     Uncommon_Color;                                            // 0x0750(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     Normal_Color;                                              // 0x075C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     Epic_Color;                                                // 0x0768(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_LootIcon;                                                // 0x0774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       SpawnColor;                                                // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     RareColor;                                                 // 0x0780(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EventActivation;                                           // 0x078C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              KeenEyesTimer;                                             // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_InTheZone;                                              // 0x0798(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AFortPawn*>                           Fort_Pawn_Array;                                           // 0x07B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               WithReachOfTreasure_CanPlay_;                              // 0x07BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GVGS[0x3];                                     // 0x07BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       TC_KeenerEyes;                                             // 0x07C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DefaultRadius;                                             // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              UpgradeRadius;                                             // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class ABuildingContainer*>                  BuildingContainer;                                         // 0x07E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FStructKeenEyesTargets>              KeenEyesTargets;                                           // 0x07EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FHitResult                                  EmptyHitResult;                                            // 0x07F8(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AFortPawn*>                           VisableActors;                                             // 0x0878(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               HasRevealPulse;                                            // 0x0884(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y4DG[0x3];                                     // 0x0885(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                Enemy_FX_Color;                                            // 0x0888(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Post_MID;                                                  // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Current_Radius;                                            // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ActivationTimestamp;                                       // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ActivationDeactivationAnimRate;                            // 0x08A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USphereComponent*                            Keen_Eyes_Sphere;                                          // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C");
		return ptr;
	}



	void Setup_Post_Fades(bool Activating__T__Or_Deactivating__F_);
	void Activate_Deactivate_Outline_Post_Process(float Outline_Weight);
	void Deactivate_Keen_Eye_Particles_as_Objects_Leave_the_Overlap_Region(class ABuildingContainer* Building_Container, class AFortPawn* Fort_Pawn, bool Fort_Pawn_True_Building_container_False);
	void Set_Or_Remove_Keen_Eyes_Custom_Depth(class AFortPawn* Character_Mesh, bool Render_CustomDepth);
	void GetNearbyLoot(class AActor* NewIncomingActor);
	void PulseKeenEyes();
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void OverlapTreasure(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void EndOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void K2_OnEndAbility();
	void TestTurnOffKeenEyes();
	void ExecuteUbergraph_GA_Outlander_KeenEyes(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
