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

// AnimBlueprintGeneratedClass BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C
// 0x0098 (FullSize[0x03A8] - InheritedSize[0x0310])
class UBP_AssaultRifle_FrontClip_SideAction_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0310(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BA9A03134DBA089D49100DBE71EF86F5;       // 0x0314(0x002C)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4E27AC5C48BE291AEB818BA0DAEA04EB;       // 0x0340(0x0044)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_B63DE5144515FA5CE71B26B8581D7149; // 0x0384(0x0024)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C");
		return ptr;
	}



	void ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
