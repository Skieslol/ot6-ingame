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

// BlueprintGeneratedClass GAT_GenericActiveAbility.GAT_GenericActiveAbility_C
// 0x0060 (FullSize[0x0740] - InheritedSize[0x06E0])
class UGAT_GenericActiveAbility_C : public UGAT_ActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                          EventData;                                                 // 0x06E4(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             FortPlayerPawn;                                            // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GAT_GenericActiveAbility.GAT_GenericActiveAbility_C");
		return ptr;
	}



	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_GenericActiveAbility(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
