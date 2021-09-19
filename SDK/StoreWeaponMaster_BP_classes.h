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

// BlueprintGeneratedClass StoreWeaponMaster_BP.StoreWeaponMaster_BP_C
// 0x00FC (FullSize[0x033C] - InheritedSize[0x0240])
class AStoreWeaponMaster_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        WeaponHiddenLocation;                                      // 0x0244(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      SKMeleeWeapon;                                             // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        MeleeWeaponDefaultPosition;                                // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        WeaponRoot;                                                // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             PinataSceneRoot;                                           // 0x0254(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FVector                                     MeleeWeaponEquipLoc;                                       // 0x0258(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     SKMeleeLocation;                                           // 0x0264(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    SKMeleeRotation;                                           // 0x0270(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     MeleeWeaponDownLoc;                                        // 0x027C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    MeleeWeaponEquipRot;                                       // 0x0288(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TAssetPtr<class USoundBase>                        SoundWeaponReady;                                          // 0x0294(0x0018) (Edit, BlueprintVisible)
	class USoundBase*                                  SoundCurrentWeaponReady;                                   // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TAssetPtr<class USoundBase>                        SoundWeaponSwing;                                          // 0x02B0(0x0018) (Edit, BlueprintVisible)
	class USoundBase*                                  SoundCurrentWeaponSwing;                                   // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TAssetPtr<class USoundBase>                        SoundWeaponImpact;                                         // 0x02CC(0x0018) (Edit, BlueprintVisible)
	class USoundBase*                                  SoundCurrentWeaponImpact;                                  // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TAssetPtr<class USoundBase>                        SoundWeaponGreet;                                          // 0x02E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  SoundCurrentWeaponGreet;                                   // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USkeletalMeshComponent*                      WeaponObject;                                              // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TAssetPtr<class USkeletalMesh>                     WeaponAssetID;                                             // 0x0308(0x0018) (Edit, BlueprintVisible)
	bool                                               Debug;                                                     // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N9U1[0x3];                                     // 0x0321(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     WeaponOffsetLoc;                                           // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    WeaponOffsetRot;                                           // 0x0330(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass StoreWeaponMaster_BP.StoreWeaponMaster_BP_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_StoreWeaponMaster_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
