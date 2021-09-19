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

// BlueprintGeneratedClass HB_CommandCenter_Warehouse.HB_CommandCenter_Warehouse_C
// 0x0000 (FullSize[0x0510] - InheritedSize[0x0510])
class AHB_CommandCenter_Warehouse_C : public AMyTown_Building_Master_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HB_CommandCenter_Warehouse.HB_CommandCenter_Warehouse_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
