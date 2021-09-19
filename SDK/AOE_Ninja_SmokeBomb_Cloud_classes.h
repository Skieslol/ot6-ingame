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

// BlueprintGeneratedClass AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C
// 0x0044 (FullSize[0x03D4] - InheritedSize[0x0390])
class AAOE_Ninja_SmokeBomb_Cloud_C : public AFortAreaOfEffectCloud
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0390(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       SmokePP;                                                   // 0x0394(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    SmokePersist;                                              // 0x0398(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UCapsuleComponent*                           Capsule1;                                                  // 0x039C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              FadeIn_Alpha_9E8A507645603872B5DEF2BFE57392D1;             // 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             FadeIn__Direction_9E8A507645603872B5DEF2BFE57392D1;        // 0x03A4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_220C[0x3];                                     // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FadeIn;                                                    // 0x03A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PPFade_PPWeight_A4DD1BCE429C2F31EB8EB5856B27E063;          // 0x03AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             PPFade__Direction_A4DD1BCE429C2F31EB8EB5856B27E063;        // 0x03B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OKHO[0x3];                                     // 0x03B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          PPFade;                                                    // 0x03B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     TX_Size;                                                   // 0x03B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              FadeInTime;                                                // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              FadeOutTime;                                               // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FadingInOrOut_;                                            // 0x03CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5FOC[0x3];                                     // 0x03CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AOELifespan;                                               // 0x03D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C");
		return ptr;
	}



	void OnRep_AOELifespan();
	void OnRep_Lifespan();
	void UserConstructionScript();
	void FadeIn__FinishedFunc();
	void FadeIn__UpdateFunc();
	void PPFade__FinishedFunc();
	void PPFade__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__Capsule1_K2Node_ComponentBoundEvent_425_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Capsule1_K2Node_ComponentBoundEvent_445_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExtraLifespan(float AOELifespan);
	void ExecuteUbergraph_AOE_Ninja_SmokeBomb_Cloud(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
