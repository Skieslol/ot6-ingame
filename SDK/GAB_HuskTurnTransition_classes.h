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

// BlueprintGeneratedClass GAB_HuskTurnTransition.GAB_HuskTurnTransition_C
// 0x0010 (FullSize[0x0708] - InheritedSize[0x06F8])
class UGAB_HuskTurnTransition_C : public UFortGameplayAbility_AITurnTransition
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FRotator                                    PriorPawnRotationRate;                                     // 0x06FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GAB_HuskTurnTransition.GAB_HuskTurnTransition_C");
		return ptr;
	}



	void OnCancelled_B51702764205E90DF617B6BDB1285CFF();
	void OnInterrupted_B51702764205E90DF617B6BDB1285CFF();
	void OnComplete_B51702764205E90DF617B6BDB1285CFF();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_HuskTurnTransition(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
