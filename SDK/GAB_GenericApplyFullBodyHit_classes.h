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

// GameplayAbilityBlueprintGeneratedClass GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C
// 0x002C (FullSize[0x0708] - InheritedSize[0x06DC])
class UGAB_GenericApplyFullBodyHit_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      FullBodyHitTransferEffect;                                 // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      FullBodyHitActiveEffect;                                   // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAnimMontage*                                FullBodyHitMontage;                                        // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       FullBodyHitMontageSection;                                 // 0x06EC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     HitImpulse;                                                // 0x06F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              PushDuration;                                              // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PushMagnitude;                                             // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C");
		return ptr;
	}



	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void OnCancelled_25E5E66442E815EB40A6DB8205FE0D98();
	void OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98();
	void OnComplete_25E5E66442E815EB40A6DB8205FE0D98();
	void K2_OnEndAbility();
	void OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void PickFullBodyHitMontageSection();
	void ApplyPushMomentum();
	void ExecuteUbergraph_GAB_GenericApplyFullBodyHit(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
