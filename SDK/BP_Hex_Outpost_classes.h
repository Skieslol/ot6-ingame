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

// BlueprintGeneratedClass BP_Hex_Outpost.BP_Hex_Outpost_C
// 0x003C (FullSize[0x0728] - InheritedSize[0x06EC])
class ABP_Hex_Outpost_C : public ABP_Hex_PARENT_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        MeshFlagpole;                                              // 0x06F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        MeshCommandCenterFlag;                                     // 0x06F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        StaticMesh3;                                               // 0x06F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        StaticMesh2;                                               // 0x06FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        MeshTowerBall;                                             // 0x0700(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        TestProp_RadarTower;                                       // 0x0704(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SM_Outpost_StorageVault_None;                              // 0x0708(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        StaticMesh1_1;                                             // 0x070C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SM_Outpost_HarvestingOptimizer_None;                       // 0x0710(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SM_Outpost_Fabricator_None;                                // 0x0714(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SM_Outpost_CraftingTable_None;                             // 0x0718(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        StaticMesh_1;                                              // 0x071C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SM_Outpost_ShieldExtender;                                 // 0x0720(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SM_Outpost_Core;                                           // 0x0724(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hex_Outpost.BP_Hex_Outpost_C");
		return ptr;
	}



	void UserConstructionScript();
	void ActivateOutpost();
	void ExecuteUbergraph_BP_Hex_Outpost(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
