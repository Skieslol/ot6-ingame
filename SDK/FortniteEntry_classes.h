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

// BlueprintGeneratedClass FortniteEntry.FortniteEntry_C
// 0x000C (FullSize[0x0258] - InheritedSize[0x024C])
class AFortniteEntry_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x024C(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bStartedTutorial;                                          // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GWOZ[0x3];                                     // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHBOnboardingFlow_C*                         HBOnboardingFlow_55_ExecuteUbergraph_FortniteEntry_RefProperty; // 0x0254(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FortniteEntry.FortniteEntry_C");
		return ptr;
	}



	void OnMatchStarted();
	void EnableTutorial();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_FortniteEntry(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
