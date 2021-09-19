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

// BlueprintGeneratedClass VaultCamera_Blueprint.VaultCamera_Blueprint_C
// 0x001C (FullSize[0x0624] - InheritedSize[0x0608])
class AVaultCamera_Blueprint_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0608(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class APartyCharacterPlacementHelper_C*            CachedPawn;                                                // 0x060C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               MouseDown;                                                 // 0x0610(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WH0F[0x3];                                     // 0x0611(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AVaultCamera_Blueprint_C*                    VaultActor;                                                // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AB_Pickups_C*                                VaultMesh;                                                 // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              OldTimeofDay;                                              // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              OldTimeofDaySpeed;                                         // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass VaultCamera_Blueprint.VaultCamera_Blueprint_C");
		return ptr;
	}



	void UserConstructionScript();
	void InpActEvt_RightMouseButton_UniqueObjectNameForCooking_40(const struct FKey& Key);
	void InpActEvt_RightMouseButton_UniqueObjectNameForCooking_39(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_38(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_37(const struct FKey& Key);
	void ReceiveTick(float DeltaSeconds);
	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_VaultCamera_Blueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
