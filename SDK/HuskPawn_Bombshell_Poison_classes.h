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

// BlueprintGeneratedClass HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C
// 0x0004 (FullSize[0x1098] - InheritedSize[0x1094])
class AHuskPawn_Bombshell_Poison_C : public AHuskPawn_Bombshell_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1094(0x0004) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ExecuteUbergraph_HuskPawn_Bombshell_Poison(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
