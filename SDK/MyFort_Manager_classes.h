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

// BlueprintGeneratedClass MyFort_Manager.MyFort_Manager_C
// 0x00A8 (FullSize[0x0398] - InheritedSize[0x02F0])
class AMyFort_Manager_C : public AMyTownActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Root;                                                      // 0x02F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	TArray<struct FTransform>                          SlotCoordinates;                                           // 0x02F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FMyTown_BuildingGroups>              BuildingListStruct;                                        // 0x0304(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                numBuildings;                                              // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class AMyTownBuildingActor*>                BuildingGroups;                                            // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               HideBuilding;                                              // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Start_Hidden;                                              // 0x0321(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R1MY[0x2];                                     // 0x0322(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UStaticMeshComponent*>                BaseMeshArray;                                             // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       MaterialBannerParam;                                       // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class AActor*>                              BuildingPlacement;                                         // 0x0338(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class AHB_RoadManager_C*                           RoadManager;                                               // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            BuildingMID;                                               // 0x0348(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          UnbuiltOldMaterial;                                        // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     SphereCollisionScale;                                      // 0x0358(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     OpenedMenuString;                                          // 0x0364(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               PanelOpened;                                               // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9OIK[0x3];                                     // 0x0371(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OpenedSavedBuildingTemplate;                               // 0x0374(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               PanelIsOpen;                                               // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NFMS[0x3];                                     // 0x0381(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMyTownBuildingActor*                        OpenSavedBuilding;                                         // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AMyTown_Building_Master_C*                   MyTown_Building_Master;                                    // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AS_HB_OnboardingCloudCover_C*                CloudCover;                                                // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bTutorialVisualsInitialized;                               // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YVOR[0x3];                                     // 0x0391(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  UITextures;                                                // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MyFort_Manager.MyFort_Manager_C");
		return ptr;
	}



	void ShouldCreateBuilding(class UMyTownBuildingDefinitionData* Building_Definition, bool* Allow_Create);
	void MouseOverBuildingState(int Building_ID, class AMyTownBuildingActor** Building, class USphereComponent** CollisionComponent, class UStaticMeshComponent** Building_Mesh);
	bool FindBuildingID(const struct FString& A, class AMyTownBuildingActor** Item);
	void SmallWorldCollision(const struct FVector& InitialBuildingLocation, const struct FVector& CameraLocation, class USphereComponent* Collision, float DistanceOffset);
	void UpdateRoads();
	void SaveBuildingPosition();
	void Initialize_Array();
	void UserConstructionScript();
	void OnMyTownBuildingWorkersChanged_Event_0_Copy(const struct FString& BuildingTemplateId);
	void ChangeWorker();
	void HandleClientEvent_OnboardingInitializeVisuals(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void ReceiveBeginPlay();
	void OnMyTownInitialized_Event();
	void OnMyTownBannerColorChanged_Event(const struct FLinearColor& NewColor);
	void SpawnBuildings();
	void FindNumberofBuildings();
	void PositioningActors();
	void BannerColors();
	void ExecuteUbergraph_MyFort_Manager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
