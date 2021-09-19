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

// BlueprintGeneratedClass GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C
// 0x0008 (FullSize[0x06FC] - InheritedSize[0x06F4])
class UGA_Trap_FloorJumpPad_C : public UGA_TrapGeneric_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              LaunchStrength;                                            // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C");
		return ptr;
	}



	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Trap_FloorJumpPad(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
