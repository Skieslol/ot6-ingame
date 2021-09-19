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

// BlueprintGeneratedClass GA_TrapGeneric.GA_TrapGeneric_C
// 0x0018 (FullSize[0x06F4] - InheritedSize[0x06DC])
class UGA_TrapGeneric_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FFortTargetFilter                           DamageTargetFilter;                                        // 0x06E0(0x0014) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_TrapGeneric.GA_TrapGeneric_C");
		return ptr;
	}



	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_TrapGeneric(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
