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

// BlueprintGeneratedClass HuskPawn_Bombshell.HuskPawn_Bombshell_C
// 0x0018 (FullSize[0x1094] - InheritedSize[0x107C])
class AHuskPawn_Bombshell_C : public AHuskPawn_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x107C(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystem*                             Effect_Head_Fire;                                          // 0x1080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*                    Effect_Head_Fire_Emitter;                                  // 0x1084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceConstant*>           FemaleMaterialVariants;                                    // 0x1088(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HuskPawn_Bombshell.HuskPawn_Bombshell_C");
		return ptr;
	}



	void UserConstructionScript();
	void PawnUniqueIDSet();
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_HuskPawn_Bombshell(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
