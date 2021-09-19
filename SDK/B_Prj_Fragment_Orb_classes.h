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

// BlueprintGeneratedClass B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C
// 0x0008 (FullSize[0x0420] - InheritedSize[0x0418])
class AB_Prj_Fragment_Orb_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0418(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Orb_Mesh;                                                  // 0x041C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnStop(const struct FHitResult& Hit);
	void OnBounce(const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Prj_Fragment_Orb(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
