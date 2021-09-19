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

// BlueprintGeneratedClass GAB_HuskPoisonLobberRanged.GAB_HuskPoisonLobberRanged_C
// 0x000C (FullSize[0x06F8] - InheritedSize[0x06EC])
class UGAB_HuskPoisonLobberRanged_C : public UGAB_AIBaseRanged_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                EC_NPCAbilityAttackAOE;                                    // 0x06F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GAB_HuskPoisonLobberRanged.GAB_HuskPoisonLobberRanged_C");
		return ptr;
	}



	void K2_TriggerFromAnimation(const struct FGameplayTag& ApplicationTag);
	void ExecuteUbergraph_GAB_HuskPoisonLobberRanged(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
