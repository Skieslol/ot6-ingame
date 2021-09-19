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

// AnimBlueprintGeneratedClass LlamaAnim_BP.LlamaAnim_BP_C
// 0x00DC (FullSize[0x03EC] - InheritedSize[0x0310])
class ULlamaAnim_BP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0310(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8ADDC02643B32A1F7CC89BB11903C1F2;       // 0x0314(0x002C)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C6CBF2C14D7E2661FA836083EBC21EC6;       // 0x0340(0x0044)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E380EEC3438D7B982F70B1B965A9BC1B; // 0x0384(0x0058)
	bool                                               readyToPop;                                                // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QY80[0x3];                                     // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AProp_Explorer_OutlanderFragment_Llama_C*    Owning_Llama_Fragment;                                     // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAnimMontage*                                LlamaMontage;                                              // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAnimMontage*                                LlamaMontage1;                                             // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass LlamaAnim_BP.LlamaAnim_BP_C");
		return ptr;
	}



	void AnimNotify_LlamaDeathAnimationCompleted();
	void Play_First_Explosion_Animation();
	void TheHeadProjectileHasSpawned();
	void AnimNotify_LlamasHeadIsReadyToBurst();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_LlamaAnim_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
