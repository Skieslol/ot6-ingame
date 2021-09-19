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

// BlueprintGeneratedClass ImpactNumbers.ImpactNumbers_C
// 0x0068 (FullSize[0x030C] - InheritedSize[0x02A4])
class AImpactNumbers_C : public AFortDamageNumbersActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x02A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              Spacing_percentage_for_1s;                                 // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              FontYSize;                                                 // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              FontXSize;                                                 // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              FontSizeScaleMaxPerc;                                      // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Standard_Hit_Color;                                        // 0x02BC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Critical_Wall_Hit_Color;                                   // 0x02CC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Player_Damage_Color;                                       // 0x02DC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Number_Spacing_Multiplier;                                 // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Number_of_number_rotations;                                // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Critical_Hit_Multiplier;                                   // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Distance_from_Camera_Before_Doubling_Size;                 // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Critical_Enemy_Hit_Color;                                  // 0x02FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ImpactNumbers.ImpactNumbers_C");
		return ptr;
	}



	void Set_Material_Pararmeters(struct FFortDamageNumberInfo* NewDamageHitInfoStruct, const struct FTransform& CameraTransform, const struct FVector& NumberLocation);
	void init_a_new_number_set(struct FFortDamageNumberInfo* NewDamageHitInfoStruct, struct FTransform* OutCameraTransform, struct FVector* OutNumberLocation);
	void UserConstructionScript();
	void OnNewDamageNumber(const struct FFortDamageNumberInfo& NewDamageNumberInfo);
	void ExecuteUbergraph_ImpactNumbers(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
