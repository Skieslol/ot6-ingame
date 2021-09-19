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

// BlueprintGeneratedClass B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C
// 0x0058 (FullSize[0x0470] - InheritedSize[0x0418])
class AB_Prj_AdrenalineRush_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0418(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_AdrenalineRush_HealingSparkleInit_01;                    // 0x041C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UPostProcessComponent*                       ShockwavePostProcess;                                      // 0x0420(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Shockwave;                                                 // 0x0424(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              PP_Shockwave_Transition_9A3E45BA49610747DB8700A8BAA24ED4;  // 0x0428(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PP_Shockwave_Fader_9A3E45BA49610747DB8700A8BAA24ED4;       // 0x042C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             PP_Shockwave__Direction_9A3E45BA49610747DB8700A8BAA24ED4;  // 0x0430(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OAAV[0x3];                                     // 0x0431(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          PP_Shockwave;                                              // 0x0434(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Shockwave_Ring_Size_Z;                                     // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UPostProcessComponent*                       ShockwavePP;                                               // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<float>                                      PP_Shockwave_PlayRate;                                     // 0x0440(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Minimum_Level_To_Cast_Shockwave_Particles;                 // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<float>                                      PP_Shockwave_SpawnRate;                                    // 0x0450(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Minimum_Level_To_Cast_Shockwave_Post_Process;              // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Shockwave_Particle_Max_Radius_Clamp;                       // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_AdrenalineRush_Start;                                // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_AdrenalineShockWave_FP;                              // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_AdrenalineShockWave_TP;                              // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_AdrenalineRush.B_Prj_AdrenalineRush_C");
		return ptr;
	}



	void DestroyPP();
	void UserConstructionScript();
	void PP_Shockwave__FinishedFunc();
	void PP_Shockwave__UpdateFunc();
	void PassInfo(float Radius, class AFortPlayerPawn* Owner, int Level);
	void ExecuteUbergraph_B_Prj_AdrenalineRush(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
