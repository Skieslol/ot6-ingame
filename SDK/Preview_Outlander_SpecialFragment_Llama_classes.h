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

// BlueprintGeneratedClass Preview_Outlander_SpecialFragment_Llama.Preview_Outlander_SpecialFragment_Llama_C
// 0x0044 (FullSize[0x03A0] - InheritedSize[0x035C])
class APreview_Outlander_SpecialFragment_Llama_C : public AFortDecoPreview
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x035C(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0360(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0364(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              Timeline_0_NewTrack_0_BF02AA2F47C64B26C854B2989FE34226;    // 0x0368(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_BF02AA2F47C64B26C854B2989FE34226;    // 0x036C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5TBA[0x3];                                     // 0x036D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0370(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Line_MID;                                                  // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UFortSpline*                                 Fort_Spline;                                               // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UStaticMeshComponent*>                NewVar_1;                                                  // 0x037C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             PointArray;                                                // 0x0388(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AFortPlayerPawn*                             Instigating_Pawn;                                          // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USkeletalMeshComponent*                      Instigating_Pawn_Mesh_Component;                           // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              NewVar_2;                                                  // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Preview_Outlander_SpecialFragment_Llama.Preview_Outlander_SpecialFragment_Llama_C");
		return ptr;
	}



	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
