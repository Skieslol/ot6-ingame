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

// BlueprintGeneratedClass HB_RoadSpline.HB_RoadSpline_C
// 0x00D4 (FullSize[0x0314] - InheritedSize[0x0240])
class AHB_RoadSpline_C : public AActor
{
public:
	class USplineMeshComponent*                        SplineMesh1;                                               // 0x0240(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        StaticMesh1;                                               // 0x0244(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBillboardComponent*                         Billboard1;                                                // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	bool                                               IsAnchorPoint;                                             // 0x024C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W37H[0x3];                                     // 0x024D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 Mesh;                                                      // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AHB_RoadSpline_C*                            StartRoadConnection;                                       // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AHB_RoadSpline_C*                            EndRoadConnection;                                         // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     Start;                                                     // 0x025C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     StartTangent;                                              // 0x0268(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     End;                                                       // 0x0274(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     EndTangent;                                                // 0x0280(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<RoadConnections_ERoadConnections>      StartConnectionSocket;                                     // 0x028C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<RoadConnections_ERoadConnections>      EndConnectionSocket;                                       // 0x028D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E9JD[0x2];                                     // 0x028E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Tension;                                                   // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      StartRoadActor;                                            // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	class AActor*                                      EndRoadActor;                                              // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	class AActor*                                      DependingActorStart;                                       // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	class AActor*                                      DependentActorEnd;                                         // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	class AActor*                                      DependentActorLeft;                                        // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	class AActor*                                      DependentActorRight;                                       // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	float                                              StartScale;                                                // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              EndScale;                                                  // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ActorScale;                                                // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              BlendAsphalt;                                              // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Material;                                                  // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsBuildingFoundation;                                      // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9BSC[0x3];                                     // 0x02C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              DependentActors;                                           // 0x02C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<TEnumAsByte<RoadConnections_ERoadConnections>> DepentendActorsSockets;                                    // 0x02D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              UpgradeBuildings;                                          // 0x02DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FPath>                               UpgradePaths;                                              // 0x02E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      UpgradePathProgression;                                    // 0x02F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               NewVar;                                                    // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BC0E[0x3];                                     // 0x0301(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StarttoEnd;                                                // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              StreetBlendEndtoStart;                                     // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              StreetBlendLefttoRight;                                    // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              NewVar0;                                                   // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HB_RoadSpline.HB_RoadSpline_C");
		return ptr;
	}



	void AddPath(TEnumAsByte<RoadPathConnections_ERoadPathConnections> Connection, float GravelValue, float StreetValue);
	void SetPath(TEnumAsByte<RoadPathConnections_ERoadPathConnections> Connection, float Value);
	void UpgradePath(class AActor* UpgradeBuilding);
	void ClearDependentActors();
	void Set_Dependent_ActorsforSpline();
	void Make_Dynamic_Material(class UMeshComponent* Mesh);
	void UpdateDependentActors();
	void SetDependentActor(class AActor* Actor, TEnumAsByte<RoadConnections_ERoadConnections> RoadConnection);
	void UpdateSplineRoadConectionEnd();
	void UpdateSpline_Road_Connection_Start();
	void SetSplineVaribles();
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
