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

// BlueprintGeneratedClass UseableWeaponsObject.UseableWeaponsObject_C
// 0x0010 (FullSize[0x002C] - InheritedSize[0x001C])
class UUseableWeaponsObject_C : public UObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x001C(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<TAssetPtr<class UClass>>                    UseableWeaponsArray;                                       // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass UseableWeaponsObject.UseableWeaponsObject_C");
		return ptr;
	}



	void ExecuteUbergraph_UseableWeaponsObject(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
