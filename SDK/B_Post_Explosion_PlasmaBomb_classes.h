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

// BlueprintGeneratedClass B_Post_Explosion_PlasmaBomb.B_Post_Explosion_PlasmaBomb_C
// 0x0010 (FullSize[0x05FC] - InheritedSize[0x05EC])
class AB_Post_Explosion_PlasmaBomb_C : public AB_Post_Explosion_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Timeline_0_BlendWeight_64EA2F03409D67812CF4F287A76739D4;   // 0x05F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_64EA2F03409D67812CF4F287A76739D4;    // 0x05F4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M2HJ[0x3];                                     // 0x05F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x05F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass B_Post_Explosion_PlasmaBomb.B_Post_Explosion_PlasmaBomb_C");
		return ptr;
	}



	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void SpawnPostFX(float PostFX_BoxScaleDyn, const struct FVector& PostFX_CamShakeLoc, bool PostFX_UseCamShake, float PostFX_DeactivateDelay);
	void ExecuteUbergraph_B_Post_Explosion_PlasmaBomb(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
