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

// BlueprintGeneratedClass B_Placement_Teleporter.B_Placement_Teleporter_C
// 0x0010 (FullSize[0x036C] - InheritedSize[0x035C])
class AB_Placement_Teleporter_C : public AFortDecoPreview
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x035C(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Placement_Audio;                                           // 0x0360(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBoxComponent*                               Box1;                                                      // 0x0364(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Good;                                                      // 0x0368(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass B_Placement_Teleporter.B_Placement_Teleporter_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnBounceMotionUpdate(float VectorScale);
	void OnInitializeDecoPreview(class ABuildingActor* NewBuildingActor, class UFortDecoItemDefinition* NewDecoItemDefinition);
	void OnUpdateScale(float Scale, const struct FVector& InWorldSpacePivot);
	void OnUpdateVisuals(float DeltaSeconds, bool bSafeToPlace);
	void SetScalarParameterValueOnAllPreviewMIDs(const struct FName& ParamName, float ParamValue);
	void SetVectorParameterValueOnAllPreviewMIDs(const struct FName& ParamName, const struct FLinearColor& ParamValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Placement_Teleporter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
