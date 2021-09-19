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

// BlueprintGeneratedClass BPI_ShieldFlash.BPI_ShieldFlash_C
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UBPI_ShieldFlash_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ShieldFlash.BPI_ShieldFlash_C");
		return ptr;
	}



	void FlashShield();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
