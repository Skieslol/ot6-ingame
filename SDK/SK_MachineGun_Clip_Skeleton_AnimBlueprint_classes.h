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

// AnimBlueprintGeneratedClass SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C
// 0x0098 (FullSize[0x03A8] - InheritedSize[0x0310])
class USK_MachineGun_Clip_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0310(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3869FE004A7A40326F179A99947D40FD;       // 0x0314(0x002C)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_42C4DC6D490B221E6A9F9A92B3FEA82E;       // 0x0340(0x0044)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_844915D14C4D660AA45FB1B5C63743BF; // 0x0384(0x0024)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void ExecuteUbergraph_SK_MachineGun_Clip_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
