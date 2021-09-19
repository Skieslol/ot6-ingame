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

// BlueprintGeneratedClass B_FDP_SentryGun.B_FDP_SentryGun_C
// 0x0014 (FullSize[0x0370] - InheritedSize[0x035C])
class AB_FDP_SentryGun_C : public AFortDecoPreview
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x035C(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        AmmoMesh;                                                  // 0x0360(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Gun;                                                       // 0x0364(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Base;                                                      // 0x0368(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UCapsuleComponent*                           CollisionCapsule;                                          // 0x036C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass B_FDP_SentryGun.B_FDP_SentryGun_C");
		return ptr;
	}



	void SetupMIDForMeshComponent(class UStaticMeshComponent* MeshComp);
	void UserConstructionScript();
	void OnInitializeDecoPreview(class ABuildingActor* NewBuildingActor, class UFortDecoItemDefinition* NewDecoItemDefinition);
	void ExecuteUbergraph_B_FDP_SentryGun(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
