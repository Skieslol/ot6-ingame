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

// BlueprintGeneratedClass InterfaceAIStates.InterfaceAIStates_C
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UInterfaceAIStates_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass InterfaceAIStates.InterfaceAIStates_C");
		return ptr;
	}



	void PortalCollision(bool Collide_);
	void PortalFX();
	void PortalGet(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>* BuildingActorList, class AActor* BT);
	void TakerSoulSuckInterrupted();
	void PortalClear();
	void PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>* BuildingActorList);
	void TakerSoulSuckSoundEnd();
	void TakerSoulSuckSoundBegin(bool Success);
	void TakerAttackFSM(bool SuccessfulHit);
	void IsTakerWallPortalAvailable(bool Portal_Available_);
	void TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug);
	void EndTakerSwoopAttack();
	void BeginTakerSwoopAttack();
	void ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal);
	void VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal);
	void HuskEvadeStart();
	void MantleEnd();
	void MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
