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

// BlueprintGeneratedClass HB_RoadManager.HB_RoadManager_C
// 0x0050 (FullSize[0x0290] - InheritedSize[0x0240])
class AHB_RoadManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard1;                                                // 0x0244(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              UpgradeTimeline_Value_5B44A914459EF36B289CBE91AAD4022E;    // 0x0248(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             UpgradeTimeline__Direction_5B44A914459EF36B289CBE91AAD4022E; // 0x024C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LKDY[0x3];                                     // 0x024D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          UpgradeTimeline;                                           // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FPath>                               UpgradePaths;                                              // 0x0254(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      UpgradePathProgression;                                    // 0x0260(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               DisplayAllRoads;                                           // 0x026C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WDPM[0x3];                                     // 0x026D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GlobalRoadDebug;                                           // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<int>                                        UpgradeBuildingID;                                         // 0x0274(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              TempProgressionValue;                                      // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<int>                                        CurrentPathIndices;                                        // 0x0284(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HB_RoadManager.HB_RoadManager_C");
		return ptr;
	}



	void FindAllPaths(int ID, TArray<int>* IndexArray);
	void ResetAllPaths();
	void Set_Path(float ProgressValue, int INDEX);
	void DebugAllRoads();
	void UpgradePath(int INDEX);
	void UserConstructionScript();
	void UpgradeTimeline__FinishedFunc();
	void UpgradeTimeline__UpdateFunc();
	void StartPathUpgradeAnimation(int ID, float ProgressValue);
	void SetPathProgression(int ID, float ProgressionValue);
	void ExecuteUbergraph_HB_RoadManager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
