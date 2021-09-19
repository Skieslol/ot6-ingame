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

// BlueprintGeneratedClass BTTask_GetSleepLocation.BTTask_GetSleepLocation_C
// 0x0024 (FullSize[0x0080] - InheritedSize[0x005C])
class UBTTask_GetSleepLocation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x005C(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      InterestLocationKey;                                       // 0x0060(0x0020) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_GetSleepLocation.BTTask_GetSleepLocation_C");
		return ptr;
	}



	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BTTask_GetSleepLocation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
