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

// BlueprintGeneratedClass ProjectileHuskRanged.ProjectileHuskRanged_C
// 0x0010 (FullSize[0x0428] - InheritedSize[0x0418])
class AProjectileHuskRanged_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0418(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Ranged_Projectile_Sound;                                   // 0x041C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    ProjectileParticleSystem;                                  // 0x0420(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class AActor*                                      GoalActor;                                                 // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ProjectileHuskRanged.ProjectileHuskRanged_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void ProjectileCheck();
	void StopHoming();
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void ExecuteUbergraph_ProjectileHuskRanged(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
