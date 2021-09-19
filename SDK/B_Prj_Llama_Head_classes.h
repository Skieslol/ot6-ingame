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

// BlueprintGeneratedClass B_Prj_Llama_Head.B_Prj_Llama_Head_C
// 0x0049 (FullSize[0x0461] - InheritedSize[0x0418])
class AB_Prj_Llama_Head_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0418(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        HeadMesh;                                                  // 0x041C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	TEnumAsByte<Engine_EPhysicalSurface>               WaterPhysMat;                                              // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GHZR[0x3];                                     // 0x0421(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             Bounce_WaterSplash_PS;                                     // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             Bounce_Generic_PS;                                         // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  BounceGenericSound;                                        // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  BounceWaterSound;                                          // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             SmokeTrailFX;                                              // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       AttachSocketName;                                          // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RotTickDelta;                                              // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShouldRotate;                                              // 0x0444(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V9PW[0x3];                                     // 0x0445(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    RelativeRotation;                                          // 0x0448(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             DeathExplodeFX;                                            // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  BounceSound;                                               // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  ExplodeHeadSound;                                          // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ProjectileActivated;                                       // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Llama_Head.B_Prj_Llama_Head_C");
		return ptr;
	}



	void SpawnBounceFX(struct FHitResult* Hit, struct FHitResult* HitResult, TEnumAsByte<Engine_EPhysicalSurface>* SurfaceType, struct FRotator* HitResultRotation);
	void UserConstructionScript();
	void OnBounce(const struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	void OnProjectileStop_Event_1(const struct FHitResult& ImpactResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Prj_Llama_Head(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
