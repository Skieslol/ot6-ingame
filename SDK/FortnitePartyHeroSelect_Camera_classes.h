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

// BlueprintGeneratedClass FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C
// 0x0010 (FullSize[0x0618] - InheritedSize[0x0608])
class AFortnitePartyHeroSelect_Camera_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0608(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            CameraActor_1;                                             // 0x060C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	bool                                               MouseDown;                                                 // 0x0610(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F7Z9[0x3];                                     // 0x0611(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AFortPlayerPawn*                             CachedPawn;                                                // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C");
		return ptr;
	}



	void HandleMousePress();
	void HandleMouseRelease();
	void UserConstructionScript();
	void InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_20(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_19(const struct FKey& Key);
	void InpActEvt_RightMouseButton_UniqueObjectNameForCooking_18(const struct FKey& Key);
	void InpActEvt_RightMouseButton_UniqueObjectNameForCooking_17(const struct FKey& Key);
	void OnActivated();
	void OnDeactivated();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_FortnitePartyHeroSelect_Camera(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
