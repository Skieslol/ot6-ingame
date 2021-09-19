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

// BlueprintGeneratedClass GA_ReflectDamageMelee.GA_ReflectDamageMelee_C
// 0x001C (FullSize[0x0718] - InheritedSize[0x06FC])
class UGA_ReflectDamageMelee_C : public UGA_ReflectDamage_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                       RequiredTags;                                              // 0x0700(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_ReflectDamageMelee.GA_ReflectDamageMelee_C");
		return ptr;
	}



	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_ReflectDamageMelee(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
