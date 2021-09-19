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

// BlueprintGeneratedClass InterfacePlayerPawn.InterfacePlayerPawn_C
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UInterfacePlayerPawn_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass InterfacePlayerPawn.InterfacePlayerPawn_C");
		return ptr;
	}



	void FootStepRight();
	void FootStepLeft();
	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void MeleeSwingLeft();
	void MeleeSwingRight();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
