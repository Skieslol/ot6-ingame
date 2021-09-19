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

// AnimBlueprintGeneratedClass FlingerVimBlueprint_New.FlingerVimBlueprint_New_C
// 0x0324 (FullSize[0x0760] - InheritedSize[0x043C])
class UFlingerVimBlueprint_New_C : public UFortAnimInstance
{
public:
	unsigned char                                      UnknownData_FPWS[0x4];                                     // 0x043C(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0440(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C02B41E84C1D1B2E2F8EC1A98D330FF5;       // 0x0444(0x002C)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7C48D53B435A541611F7A589DD3A3C70;       // 0x0470(0x0044)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B604E6A34A70EDC8D9723C90CC8D6E54; // 0x04B4(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20F26FC34C1A4C759CD446A28102662F; // 0x050C(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B45DFAD64899DA849EC8F087F199AF38; // 0x0564(0x008C)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8F8829F54FD9DC3777837686B8E6717E; // 0x05F0(0x002C)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2A7BFDB941BD6352ED00A5993CA37132; // 0x061C(0x002C)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_CC3BA7AB46B7CC1F2BFC05B3DB295E1C;  // 0x0648(0x008C)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_AB38B6944E22B7240140AF80D483AAA6;  // 0x06D4(0x008C)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass FlingerVimBlueprint_New.FlingerVimBlueprint_New_C");
		return ptr;
	}



	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlingerVimBlueprint_New_AnimGraphNode_SequencePlayer_20F26FC34C1A4C759CD446A28102662F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlingerVimBlueprint_New_AnimGraphNode_BlendListByBool_B45DFAD64899DA849EC8F087F199AF38();
	void ExecuteUbergraph_FlingerVimBlueprint_New(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
