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

// BlueprintGeneratedClass HeroesCamera_Blueprint.HeroesCamera_Blueprint_C
// 0x000C (FullSize[0x0614] - InheritedSize[0x0608])
class AHeroesCamera_Blueprint_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0608(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               MouseDown;                                                 // 0x060C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4RHI[0x3];                                     // 0x060D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AFortPlayerPawn*                             Cached_Pawn;                                               // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HeroesCamera_Blueprint.HeroesCamera_Blueprint_C");
		return ptr;
	}



	void HandleMousePress();
	void HandleMouseRelease();
	void UserConstructionScript();
	void InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_28(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_27(const struct FKey& Key);
	void InpActEvt_RightMouseButton_UniqueObjectNameForCooking_26(const struct FKey& Key);
	void InpActEvt_RightMouseButton_UniqueObjectNameForCooking_25(const struct FKey& Key);
	void OnActivated();
	void OnDeactivated();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_HeroesCamera_Blueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
