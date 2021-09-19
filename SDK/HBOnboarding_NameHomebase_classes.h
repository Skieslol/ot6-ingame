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

// BlueprintGeneratedClass HBOnboarding_NameHomebase.HBOnboarding_NameHomebase_C
// 0x0038 (FullSize[0x0614] - InheritedSize[0x05DC])
class AHBOnboarding_NameHomebase_C : public AFortTutorialNotification
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Ray_ONB_HomeBaseFlow_03_Cue;                               // 0x05E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Ray_ONB_HomeBaseFlow_02_Cue;                               // 0x05E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Ray_ONB_HomeBaseFlow_01_Cue;                               // 0x05E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x05EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FText                                       Name_Home_Base_1;                                          // 0x05F0(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Name_Home_Base_2;                                          // 0x05FC(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Name_Home_Base_3;                                          // 0x0608(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HBOnboarding_NameHomebase.HBOnboarding_NameHomebase_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnNotificationStart();
	void ExecuteUbergraph_HBOnboarding_NameHomebase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
