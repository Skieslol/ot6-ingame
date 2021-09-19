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

// BlueprintGeneratedClass FlingerInterface.FlingerInterface_C
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UFlingerInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FlingerInterface.FlingerInterface_C");
		return ptr;
	}



	void FlingerEnemyDied(class APawn* PawnThatDied);
	void AlertEnemySpawnedByFlinger(const struct FVector& PushMomentum, float PushDuration, class APawn* OwningFlinger);
	void FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile);
	void FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile);
	void FlingerCantSpawnAnEnemy();
	void FlingerCanSpawnAnEnemy();
	void CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked);
	void FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
