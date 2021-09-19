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

// BlueprintGeneratedClass AOE_Ninja_DragonSlashTrail.AOE_Ninja_DragonSlashTrail_C
// 0x002C (FullSize[0x03BC] - InheritedSize[0x0390])
class AAOE_Ninja_DragonSlashTrail_C : public AFortAreaOfEffectCloud
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0390(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio1;                                                    // 0x0394(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    DamageAreaFX;                                              // 0x0398(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBoxComponent*                               DamageArea;                                                // 0x039C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              AOEExtentXY;                                               // 0x03A0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	float                                              AOEFXFadeTime;                                             // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                TC_InsideTail;                                             // 0x03A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_TailAOE2;                                               // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_TailAOE3;                                               // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_TailAOE4;                                               // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AOE_Ninja_DragonSlashTrail.AOE_Ninja_DragonSlashTrail_C");
		return ptr;
	}



	void OnSetAOEExtentXY();
	void OnRep_AOEExtentXY();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void EndAOE();
	void BndEvt__BeeArea_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExecuteUbergraph_AOE_Ninja_DragonSlashTrail(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
