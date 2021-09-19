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

// GameplayAbilityBlueprintGeneratedClass GAB_FlingerRanged.GAB_FlingerRanged_C
// 0x0020 (FullSize[0x070C] - InheritedSize[0x06EC])
class UGAB_FlingerRanged_C : public UGAB_AIBaseRanged_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ThrowFX;                                                   // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             ThrowFXTemplate;                                           // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USkeletalMeshComponent*                      FlingerMesh;                                               // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                GC_NPCRangedGrab;                                          // 0x06FC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_NPCRangedThrow;                                         // 0x0704(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GAB_FlingerRanged.GAB_FlingerRanged_C");
		return ptr;
	}



	void K2_ActivateAbility();
	void SpawnFX();
	void StopFX();
	void K2_OnEndAbility();
	void ExecuteUbergraph_GAB_FlingerRanged(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
