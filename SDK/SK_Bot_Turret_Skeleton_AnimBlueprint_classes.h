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

// AnimBlueprintGeneratedClass SK_Bot_Turret_Skeleton_AnimBlueprint.SK_Bot_Turret_Skeleton_AnimBlueprint_C
// 0x02D4 (FullSize[0x05E4] - InheritedSize[0x0310])
class USK_Bot_Turret_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0310(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B66ED3654939299B8B6BFC88FE2EDA22;       // 0x0314(0x002C)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E70B69C8439346561F4C9BB9406597CE; // 0x0340(0x0080)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5289A9754E383AB47D5DC790D1029DBA; // 0x03C0(0x002C)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_DF9CC6C34976799B060AC7BFF3113C78; // 0x03EC(0x002C)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F76F9D4649A5A4719779E3A33F340518; // 0x0418(0x002C)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_08C7298D417D4B0D8818A79F3B343F62; // 0x0444(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_13F6E49447AA511A3769DA8A9A521C0C; // 0x049C(0x002C)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_91E6AB0F48E94A8FA9470E8A1396029E; // 0x04C8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A6AB89FE43A66B90FD0D53ABA0FE6B77; // 0x0520(0x002C)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_98AFFA0F41EAF6A53D94109794438C88; // 0x054C(0x0094)
	float                                              BotPitch;                                                  // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Bot_Turret_Skeleton_AnimBlueprint.SK_Bot_Turret_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bot_Turret_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_E70B69C8439346561F4C9BB9406597CE();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_Bot_Turret_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
