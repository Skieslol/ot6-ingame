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

// GameplayAbilityBlueprintGeneratedClass GAB_FlingerApplyFullBodyHit.GAB_FlingerApplyFullBodyHit_C
// 0x0014 (FullSize[0x071C] - InheritedSize[0x0708])
class UGAB_FlingerApplyFullBodyHit_C : public UGAB_GenericApplyFullBodyHit_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0708(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       HitReactBack;                                              // 0x070C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       HitReactSectionName;                                       // 0x0714(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GAB_FlingerApplyFullBodyHit.GAB_FlingerApplyFullBodyHit_C");
		return ptr;
	}



	void PickFullBodyHitMontageSection();
	void ExecuteUbergraph_GAB_FlingerApplyFullBodyHit(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
