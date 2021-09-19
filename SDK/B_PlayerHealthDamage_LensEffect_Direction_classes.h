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

// BlueprintGeneratedClass B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C
// 0x0004 (FullSize[0x02F4] - InheritedSize[0x02F0])
class AB_PlayerHealthDamage_LensEffect_Direction_C : public AFortEmitterCameraLensEffectDirectional
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C");
		return ptr;
	}



	void UserConstructionScript();
	void PassParticle_Parameter(float Health_Percent);
	void ExecuteUbergraph_B_PlayerHealthDamage_LensEffect_Direction(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
