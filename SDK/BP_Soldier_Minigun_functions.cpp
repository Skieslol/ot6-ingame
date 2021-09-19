// Name: Fortnite, Version: OT-6_5

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_Soldier_Minigun.BP_Soldier_Minigun_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Soldier_Minigun_AnimGraphNode_ModifyBone_CDE861E049ED25F9468E1596307CE0F7
// (BlueprintEvent)
void UBP_Soldier_Minigun_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Soldier_Minigun_AnimGraphNode_ModifyBone_CDE861E049ED25F9468E1596307CE0F7()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Soldier_Minigun.BP_Soldier_Minigun_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Soldier_Minigun_AnimGraphNode_ModifyBone_CDE861E049ED25F9468E1596307CE0F7");

	UBP_Soldier_Minigun_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Soldier_Minigun_AnimGraphNode_ModifyBone_CDE861E049ED25F9468E1596307CE0F7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Soldier_Minigun.BP_Soldier_Minigun_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Soldier_Minigun_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Soldier_Minigun.BP_Soldier_Minigun_C.BlueprintUpdateAnimation");

	UBP_Soldier_Minigun_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Soldier_Minigun.BP_Soldier_Minigun_C.ExecuteUbergraph_BP_Soldier_Minigun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Soldier_Minigun_C::ExecuteUbergraph_BP_Soldier_Minigun(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Soldier_Minigun.BP_Soldier_Minigun_C.ExecuteUbergraph_BP_Soldier_Minigun");

	UBP_Soldier_Minigun_C_ExecuteUbergraph_BP_Soldier_Minigun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
