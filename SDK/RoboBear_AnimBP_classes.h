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

// AnimBlueprintGeneratedClass RoboBear_AnimBP.RoboBear_AnimBP_C
// 0x0254 (FullSize[0x0690] - InheritedSize[0x043C])
class URoboBear_AnimBP_C : public UFortAnimInstance
{
public:
	unsigned char                                      UnknownData_0M5P[0x4];                                     // 0x043C(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0440(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_94A5640D46AA80EE3A525181A40E89FB;       // 0x0444(0x002C)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8FC73BE849B7182366D0C69D3B182E6A; // 0x0470(0x002C)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_46A72CBF4D105A71E6DE649812CC6D5B; // 0x049C(0x0094)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_929212094C7DC2D4ED970EAEFEDF8C12; // 0x0530(0x0080)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9EB9EC34459C844B0FE0BA8E435EFF6F; // 0x05B0(0x002C)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_03791F914454ADFD2E1913880C785340; // 0x05DC(0x002C)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2628A2884DFA7E07F877E392C1D6D0B0; // 0x0608(0x0080)
	float                                              BearYaw;                                                   // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              BearPitch;                                                 // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass RoboBear_AnimBP.RoboBear_AnimBP_C");
		return ptr;
	}



	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoboBear_AnimBP_AnimGraphNode_ModifyBone_929212094C7DC2D4ED970EAEFEDF8C12();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoboBear_AnimBP_AnimGraphNode_ModifyBone_2628A2884DFA7E07F877E392C1D6D0B0();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_RoboBear_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
