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

// GameplayAbilityBlueprintGeneratedClass GAB_FlingerRoar.GAB_FlingerRoar_C
// 0x0004 (FullSize[0x06E0] - InheritedSize[0x06DC])
class UGAB_FlingerRoar_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GAB_FlingerRoar.GAB_FlingerRoar_C");
		return ptr;
	}



	void OnCancelled_AD410E224F398036F9E428A39B02B87C();
	void OnInterrupted_AD410E224F398036F9E428A39B02B87C();
	void OnComplete_AD410E224F398036F9E428A39B02B87C();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_FlingerRoar(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
