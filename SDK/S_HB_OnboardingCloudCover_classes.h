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

// BlueprintGeneratedClass S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C
// 0x0108 (FullSize[0x0348] - InheritedSize[0x0240])
class AS_HB_OnboardingCloudCover_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             StormSounds;                                               // 0x0244(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    SwirlPS;                                                   // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    ActivatePhase1;                                            // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    ActivatePhase2;                                            // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Lightning_05;                                              // 0x0254(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Lightning_04;                                              // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Lightning_03;                                              // 0x025C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Lightning_02;                                              // 0x0260(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Lightning_01;                                              // 0x0264(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                            HeroBuildingBCollision;                                    // 0x0268(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                            HeroBuildingACollision;                                    // 0x026C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                            Phase2_Collision;                                          // 0x0270(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                            Phase1_Collision;                                          // 0x0274(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SwirlEdge_Fade_04;                                         // 0x0278(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        EdgeFade_03;                                               // 0x027C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        EdgeFade_02;                                               // 0x0280(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        EdgeFade_01;                                               // 0x0284(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Swirl06_Phase02;                                           // 0x0288(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Swirl05_TOP_Phase02;                                       // 0x028C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Swirl04_Phase02;                                           // 0x0290(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Swirl03_Phase02;                                           // 0x0294(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Swirl02_Phase02;                                           // 0x0298(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Swirl01_TOP_Phase02;                                       // 0x029C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        CloudMajor;                                                // 0x02A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SwirldEdge;                                                // 0x02A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Swirl07_Phase01;                                           // 0x02A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Swirl03_Top_Phase01;                                       // 0x02AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Swirl01_Top_Phase01;                                       // 0x02B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        CloudHero;                                                 // 0x02B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             Scene1;                                                    // 0x02B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              Timeline_0_AtlasWarmup_732098ED4B33C11B4D86E0A29FB74A5E;   // 0x02BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_732098ED4B33C11B4D86E0A29FB74A5E;    // 0x02C0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FYKJ[0x3];                                     // 0x02C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x02C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Control_Clouds_Phase_01_AlphaScale_C48C72CA42026F0D8C3086BDF4C03DF2; // 0x02C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Control_Clouds_Phase_01_ErodeAlpha_C48C72CA42026F0D8C3086BDF4C03DF2; // 0x02CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Control_Clouds_Phase_01_ContrastLow_C48C72CA42026F0D8C3086BDF4C03DF2; // 0x02D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Control_Clouds_Phase_01__Direction_C48C72CA42026F0D8C3086BDF4C03DF2; // 0x02D4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NK4W[0x3];                                     // 0x02D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Control_Clouds_Phase_01;                                   // 0x02D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Control_Clouds_Phase02_ScaleNormal_875904894700C4C178BB4892C88FB0C4; // 0x02DC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Control_Clouds_Phase02_GlobalFade_875904894700C4C178BB4892C88FB0C4; // 0x02E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Control_Clouds_Phase02_AlphaScale_875904894700C4C178BB4892C88FB0C4; // 0x02EC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Control_Clouds_Phase02_Erode_Alpha_875904894700C4C178BB4892C88FB0C4; // 0x02F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Control_Clouds_Phase02_Swirl_05_Top_875904894700C4C178BB4892C88FB0C4; // 0x02F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Control_Clouds_Phase02_Swirl_01_Top_875904894700C4C178BB4892C88FB0C4; // 0x02F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Control_Clouds_Phase02_FadeSwirls_875904894700C4C178BB4892C88FB0C4; // 0x02FC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Control_Clouds_Phase02__Direction_875904894700C4C178BB4892C88FB0C4; // 0x0300(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IFUL[0x3];                                     // 0x0301(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Control_Clouds_Phase02;                                    // 0x0304(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Swirl03_Top_Phase01_MID;                                   // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Swirl01_Top_Phase01_MID;                                   // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Swirl07_Phase01_MID;                                       // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Swirl06_Phase02_MID;                                       // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Swirl05__TOP_Phase02_MID;                                  // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Swirl04_Phase02_MID;                                       // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Swirl03_Phase02_MID;                                       // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Swirl02_Phase02_MID;                                       // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Swirl01_TOP_Phase02_MID;                                   // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    CloudMajor_MID;                                            // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    CloudHero_MID;                                             // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    EdgeFade_01_MID;                                           // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    EdgeFade_02_MID;                                           // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    EdgeFade_03_MID;                                           // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    EdgeFade_04_MID;                                           // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    SwirlEdgeFade_MID;                                         // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C");
		return ptr;
	}



	void UserConstructionScript();
	void Control_Clouds_Phase_01__FinishedFunc();
	void Control_Clouds_Phase_01__UpdateFunc();
	void Control_Clouds_Phase02__FinishedFunc();
	void Control_Clouds_Phase02__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void HandleClientEvent_OnboardingBuildingsStage1(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_OnboardingRevealHeroBuildings(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_OnboardingBuildingsStage2(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_OnboardingRevealAllBuildings(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void BndEvt__Lightning_02_K2Node_ComponentBoundEvent_45_ParticleSpawnSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void BndEvt__Lightning_03_K2Node_ComponentBoundEvent_48_ParticleSpawnSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void BndEvt__Lightning_01_K2Node_ComponentBoundEvent_52_ParticleSpawnSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void BndEvt__Lightning_05_K2Node_ComponentBoundEvent_537_ParticleSpawnSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void ExecuteUbergraph_S_HB_OnboardingCloudCover(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
