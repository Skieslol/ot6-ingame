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

// BlueprintGeneratedClass PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C
// 0x0028 (FullSize[0x0268] - InheritedSize[0x0240])
class APartyCharacterPlacementHelper_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            HeroBasicInfo;                                             // 0x0244(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UWidgetComponent*                            GadgetSelector;                                            // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        CharacterPlacement;                                        // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             Root;                                                      // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	int                                                PlayerID;                                                  // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PreviewMesh;                                               // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1428[0x3];                                     // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 Mesh;                                                      // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UGadgetDisplayBar_C*                         HeroBasicInfoWidget;                                       // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UGadgetSelectBar_C*                          GadgetSelectorWidget;                                      // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C");
		return ptr;
	}



	void InitGadgetSelectorWidget();
	void InitWidgetComponents();
	void HandleFrontEndCameraChanged(TEnumAsByte<FortniteGame_EFrontEndCamera> InNewCamera, TEnumAsByte<FortniteGame_EFrontEndCamera> InOldCamera);
	void InitHeroBasicInfoWidget();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PartyCharacterPlacementHelper(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
