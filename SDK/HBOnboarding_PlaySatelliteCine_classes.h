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

// BlueprintGeneratedClass HBOnboarding_PlaySatelliteCine.HBOnboarding_PlaySatelliteCine_C
// 0x0010 (FullSize[0x05EC] - InheritedSize[0x05DC])
class AHBOnboarding_PlaySatelliteCine_C : public AFortTutorialNotification
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x05E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	bool                                               AllowSkip;                                                 // 0x05E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3I2V[0x3];                                     // 0x05E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMatineeActor*                               CurrentMatineeActor;                                       // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HBOnboarding_PlaySatelliteCine.HBOnboarding_PlaySatelliteCine_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnNotificationStart();
	void OnCinematicStop();
	void canskip();
	void OnPlayerSkippedCutscene_Copy();
	void ExecuteUbergraph_HBOnboarding_PlaySatelliteCine(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
