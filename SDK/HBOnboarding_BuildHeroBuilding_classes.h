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

// BlueprintGeneratedClass HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C
// 0x0040 (FullSize[0x061C] - InheritedSize[0x05DC])
class AHBOnboarding_BuildHeroBuilding_C : public AFortTutorialNotification
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             onboarding_pulse_Cue;                                      // 0x05E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Ray_ONB_OutpostNew_420_Cue;                                // 0x05E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Ray_ONB_HomeBaseFlow_05_Cue;                               // 0x05E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Ray_ONB_HomeBaseFlow_06_Cue;                               // 0x05EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Ray_ONB_HomeBaseFlow_04_Cue;                               // 0x05F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x05F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	bool                                               WaitingForBuilding;                                        // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4W4X[0x3];                                     // 0x05F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMyTownBuildingDefinitionData*               SoldierBuilding;                                           // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMyTownBuildingDefinitionData*               ConstructorBuilding;                                       // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FText                                       Recruit;                                                   // 0x0604(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Home_Base_Intro;                                           // 0x0610(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnNotificationStart();
	void HandleClientEvent_OnboardingBuildingsStage2(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_BuildingSelected(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_HomebaseBuiltBuilding(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void finished();
	void ExecuteUbergraph_HBOnboarding_BuildHeroBuilding(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
