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

// BlueprintGeneratedClass AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C
// 0x0008 (FullSize[0x0648] - InheritedSize[0x0640])
class AAbilityDecoTool_SupplyDrop_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0640(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      NewVar_1;                                                  // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C");
		return ptr;
	}



	void UserConstructionScript();
	void BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void ExecuteUbergraph_AbilityDecoTool_SupplyDrop(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
