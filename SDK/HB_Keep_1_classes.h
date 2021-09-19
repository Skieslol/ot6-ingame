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

// BlueprintGeneratedClass HB_Keep_1.HB_Keep_0_C
// 0x0008 (FullSize[0x0518] - InheritedSize[0x0510])
class AHB_Keep_0_C : public AMyTown_Building_Master_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0510(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortSaveFileBuildingInstructionsHandler*    MiniatureHandler;                                          // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HB_Keep_1.HB_Keep_0_C");
		return ptr;
	}



	TArray<class ABuildingActor*> GetCustomDisplayActors();
	void Set_Unbuilt_Components_Hidden(bool Hidden);
	void Set_Custom_Display_Hidden_(bool Hidden);
	void IsKeepMiniatureBuilding(class ABuildingSMActor* Building, bool* Is_Miniature);
	void UserConstructionScript();
	void OnMyTownBuildingCustomDisplayChanged(TEnumAsByte<FortniteGame_EMyTownBuildingActorDisplayState> NewDisplayState);
	void ExecuteUbergraph_HB_Keep_1(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
