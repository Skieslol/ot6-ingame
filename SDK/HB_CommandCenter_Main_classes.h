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

// BlueprintGeneratedClass HB_CommandCenter_Main.HB_CommandCenter_Main_C
// 0x000C (FullSize[0x051C] - InheritedSize[0x0510])
class AHB_CommandCenter_Main_C : public AMyTown_Building_Master_C
{
public:
	class UAudioComponent*                             Building_Ambience_Sound;                                   // 0x0510(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      HomebaseAtlas;                                             // 0x0514(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMesh*                               HomebaseAtlasMesh;                                         // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HB_CommandCenter_Main.HB_CommandCenter_Main_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
