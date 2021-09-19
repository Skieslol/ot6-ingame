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

// BlueprintGeneratedClass Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C
// 0x0004 (FullSize[0x0948] - InheritedSize[0x0944])
class APlacement_Outlander_SpecialFragment_Llama_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0944(0x0004) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C");
		return ptr;
	}



	bool IsAcceptablePositionForPlacement(const struct FVector& InLocation, const struct FRotator& InRotation, class AFortDecoTool* DecoTool, bool bIsCDO, struct FText* OutFailureReason);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PlacedByPlacementTool();
	void ExecuteUbergraph_Placement_Outlander_SpecialFragment_Llama(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
