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

// BlueprintGeneratedClass ThrowingStarTest.ThrowingStarTest_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UThrowingStarTest_C : public UGameplayCueNotify_Static
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ThrowingStarTest.ThrowingStarTest_C");
		return ptr;
	}



	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
