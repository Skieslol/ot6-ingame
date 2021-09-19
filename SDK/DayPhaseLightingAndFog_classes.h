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

// BlueprintGeneratedClass DayPhaseLightingAndFog.DayPhaseLightingAndFog_C
// 0x007C (FullSize[0x09AC] - InheritedSize[0x0930])
class ADayPhaseLightingAndFog_C : public AFortDayNightLightingAndFog
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0930(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        BackgroundBox;                                             // 0x0934(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBillboardComponent*                         Component_container;                                       // 0x0938(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              New_Storm_Timeline_Wind_Strength_4A2EEAF540854C2F80980F8E37C7ADF3; // 0x093C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              New_Storm_Timeline_RainInt_4A2EEAF540854C2F80980F8E37C7ADF3; // 0x0940(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              New_Storm_Timeline_Lightning_Modulator_4A2EEAF540854C2F80980F8E37C7ADF3; // 0x0944(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              New_Storm_Timeline_Storm_Ramp_In_Value_4A2EEAF540854C2F80980F8E37C7ADF3; // 0x0948(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             New_Storm_Timeline__Direction_4A2EEAF540854C2F80980F8E37C7ADF3; // 0x094C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3ASF[0x3];                                     // 0x094D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          New_Storm_Timeline;                                        // 0x0950(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FlashLightning_lightning_alpha_0111C5F84B3EFF4A81A138BBC08CCD75; // 0x0954(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FlashLightning_Lightning_Intensity_0111C5F84B3EFF4A81A138BBC08CCD75; // 0x0958(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             FlashLightning__Direction_0111C5F84B3EFF4A81A138BBC08CCD75; // 0x095C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N2JY[0x3];                                     // 0x095D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FlashLightning;                                            // 0x0960(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              WindSpeed;                                                 // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RandomWeatherWaitTime;                                     // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              CurrentAmountOfRandomWeatherTimeLeft;                      // 0x096C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              NewWeatherLerpAmount;                                      // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              WindStrength;                                              // 0x0974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              FutureWindStrength;                                        // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              FutureWindSpeed;                                           // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bPickNewWindConditions;                                    // 0x0980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BG20[0x3];                                     // 0x0981(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LightningStrength;                                         // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ThreatCloudStormAmount;                                    // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseRainWithStorms;                                         // 0x098C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Play_a_Particle_Effect_Near_the_players_Feet;              // 0x098D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WindEffects_Should_be_Active;                              // 0x098E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LMRU[0x1];                                     // 0x098F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    Storm_Foot_Particle_Outdoor;                               // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             Storm_Foot_Particle_While_on_Terrain;                      // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*                    Storm_Foot_Particle_Indoor;                                // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             Storm_Foot_Particle_While_NOT_on_Terrain;                  // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Storm_Wind_Strength;                                       // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Generate_Foliage_Wind_Gusts;                               // 0x09A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A2FE[0x3];                                     // 0x09A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                LightningStrikeTimerHandle;                                // 0x09A8(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DayPhaseLightingAndFog.DayPhaseLightingAndFog_C");
		return ptr;
	}



	void UserConstructionScript();
	void New_Storm_Timeline__FinishedFunc();
	void New_Storm_Timeline__UpdateFunc();
	void New_Storm_Timeline__FireOffRain__EventFunc();
	void FlashLightning__FinishedFunc();
	void FlashLightning__UpdateFunc();
	void DisableLightAndFog(bool Enable);
	void StartStorm();
	void OnStormStart();
	void OnStormEnd();
	void LightningStrike();
	void ExecuteUbergraph_DayPhaseLightingAndFog(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
