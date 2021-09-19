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

// AnimBlueprintGeneratedClass Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
// 0x02E0 (FullSize[0x071C] - InheritedSize[0x043C])
class UBlueprint_Paper_VIM_C : public UFortAnimInstance
{
public:
	unsigned char                                      UnknownData_J8JR[0x4];                                     // 0x043C(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0440(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_985813CD40257121C24510B1EFA3045F; // 0x0444(0x0098)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_88B6F311437F6802F9D4E885AEBB612D; // 0x04DC(0x0098)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_62132DD84DE9792F6948379FF19FE9B0; // 0x0574(0x0098)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_D9C2507C414C01F7CECC0291267407DC; // 0x060C(0x0098)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_209BCB204FB8EDDD0FE0ECAF3A14490E; // 0x06A4(0x002C)
	struct FAnimNode_Root                              AnimGraphNode_Root_EAD8434D41BA827A02AADFB11592B5F7;       // 0x06D0(0x002C)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_12EF14484EC26A755A1F178B81B266BF; // 0x06FC(0x0020)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Blueprint_Paper_VIM.Blueprint_Paper_VIM_C");
		return ptr;
	}



	void ExecuteUbergraph_Blueprint_Paper_VIM(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
