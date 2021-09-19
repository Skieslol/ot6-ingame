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

// BlueprintGeneratedClass B_Melee_Generic.B_Melee_Generic_C
// 0x0070 (FullSize[0x0664] - InheritedSize[0x05F4])
class AB_Melee_Generic_C : public AFortWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        Light_Melee;                                               // 0x05F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Rocket_Hammer_Idle_Effect;                                 // 0x05FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Laser_Axe_Idle_Effect;                                     // 0x0600(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBoxComponent*                               Box1;                                                      // 0x0604(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	bool                                               Has_Idle_Effect;                                           // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4NIJ[0x3];                                     // 0x0609(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             Idle_Effect;                                               // 0x060C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     Effects_Color_Level;                                       // 0x0610(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Has_Swing_Effect;                                          // 0x061C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MRHA[0x3];                                     // 0x061D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             Swing_Effect;                                              // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Use_Effect_Color_Override;                                 // 0x0624(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VO26[0x3];                                     // 0x0625(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                Main_Effects_Color_Lv;                                     // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Lv2_wpn;                                                   // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Lv3_Wpn;                                                   // 0x0639(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5NJX[0x2];                                     // 0x063A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                Main_Effects_Color2_Lv;                                    // 0x063C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*                    AnimTrail_PSC;                                             // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             AnimTrail_ParticleSystem;                                  // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*                    MeleeHeavy_PSC;                                            // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             MeleeHeavy_ParticleSystem;                                 // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NewVar;                                                    // 0x065C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_75Y5[0x3];                                     // 0x065D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    AnimTrailMaterial;                                         // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass B_Melee_Generic.B_Melee_Generic_C");
		return ptr;
	}



	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void SetWpnRarity();
	void UserConstructionScript();
	void MeleeSwingRight();
	void MeleeSwingLeft();
	void FootStepLeft();
	void FootStepRight();
	void ReceiveBeginPlay();
	void OnPlayWeaponFireFX(bool bPersistentFire);
	void PlayRClickImpacts();
	void ExecuteUbergraph_B_Melee_Generic(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
