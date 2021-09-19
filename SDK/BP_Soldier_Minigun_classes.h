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

// AnimBlueprintGeneratedClass BP_Soldier_Minigun.BP_Soldier_Minigun_C
// 0x0178 (FullSize[0x0488] - InheritedSize[0x0310])
class UBP_Soldier_Minigun_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0310(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5BEDD1AF46E640F37CCC9FAA8DF7F6DC;       // 0x0314(0x002C)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_15839C374918416DF8289BAE7466DE11;       // 0x0340(0x0044)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2EBCC5E14721752B867C05844909B58B; // 0x0384(0x0024)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CDE861E049ED25F9468E1596307CE0F7; // 0x03A8(0x0080)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2E6915294401BD03648F4689C8817592; // 0x0428(0x002C)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_580B6AC241C93B1B43A2A4ACEF5528AD; // 0x0454(0x002C)
	float                                              MinigunRotation;                                           // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MaxMinigunRotSpeed;                                        // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Soldier_Minigun.BP_Soldier_Minigun_C");
		return ptr;
	}



	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Soldier_Minigun_AnimGraphNode_ModifyBone_CDE861E049ED25F9468E1596307CE0F7();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_BP_Soldier_Minigun(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
