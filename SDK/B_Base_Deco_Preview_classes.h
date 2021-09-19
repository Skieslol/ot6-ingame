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

// BlueprintGeneratedClass B_Base_Deco_Preview.B_Base_Deco_Preview_C
// 0x0014 (FullSize[0x0370] - InheritedSize[0x035C])
class AB_Base_Deco_Preview_C : public AFortDecoPreview
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x035C(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Base_Device;                                            // 0x0360(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBoxComponent*                               Box;                                                       // 0x0364(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0368(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UMaterialInstanceDynamic*                    NewMID;                                                    // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass B_Base_Deco_Preview.B_Base_Deco_Preview_C");
		return ptr;
	}



	void SetupMIDforMeshOverride();
	void UserConstructionScript();
	void OnUpdateVisuals(float DeltaSeconds, bool bSafeToPlace);
	void OnInitializeDecoPreview(class ABuildingActor* NewBuildingActor, class UFortDecoItemDefinition* NewDecoItemDefinition);
	void ExecuteUbergraph_B_Base_Deco_Preview(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
