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

// BlueprintGeneratedClass AOE_Explorer_OffensiveFragment.AOE_Explorer_OffensiveFragment_C
// 0x0020 (FullSize[0x03B0] - InheritedSize[0x0390])
class AAOE_Explorer_OffensiveFragment_C : public AFortAreaOfEffectCloud
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0390(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Persist_Area;                                              // 0x0394(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Area_Buff_Sound;                                           // 0x0398(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    BoundaryFX;                                                // 0x039C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UCapsuleComponent*                           CapsuleComponent;                                          // 0x03A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FVector                                     TX_Size;                                                   // 0x03A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AOE_Explorer_OffensiveFragment.AOE_Explorer_OffensiveFragment_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void DiamondsFragment();
	void ExecuteUbergraph_AOE_Explorer_OffensiveFragment(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
