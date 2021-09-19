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

// BlueprintGeneratedClass B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C
// 0x00DC (FullSize[0x04F4] - InheritedSize[0x0418])
class AB_Prj_Commando_FragGrenade_C : public AFortProj_M80
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0418(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Fuse_Particle;                                             // 0x041C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0420(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             GrenadeFuse_AudioComponent;                                // 0x0424(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Effect_Distance;                                           // 0x0428(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              Prj_Rotation_NewTrack_0_6A6D6ECD4380FB32CEB9EE9E659BA233;  // 0x042C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Prj_Rotation__Direction_6A6D6ECD4380FB32CEB9EE9E659BA233;  // 0x0430(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WZ9M[0x3];                                     // 0x0431(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Prj_Rotation;                                              // 0x0434(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ParticleGuide_Size;                                        // 0x0438(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Material_MID;                                              // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_Explosion;                                               // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     HitLocation;                                               // 0x044C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Cue_DistantSound;                                          // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Cue_CloseSound;                                            // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ExplosionRadius;                                           // 0x0460(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NumberOfBouncesTillExplode;                                // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                CurrentNumberOfBounces;                                    // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Cue_GrenadeFuseSound;                                      // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              BouncePawnAgainstPawnGravityScale;                         // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FHitResult                                  StoredHit;                                                 // 0x0474(0x0080) (Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C");
		return ptr;
	}



	void OnRep_StoredHit();
	void UserConstructionScript();
	void Prj_Rotation__FinishedFunc();
	void Prj_Rotation__UpdateFunc();
	void ReceiveBeginPlay();
	void OnStop(const struct FHitResult& Hit);
	void Stop_Rotation();
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnBounce(const struct FHitResult& Hit);
	void ExecuteUbergraph_B_Prj_Commando_FragGrenade(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
