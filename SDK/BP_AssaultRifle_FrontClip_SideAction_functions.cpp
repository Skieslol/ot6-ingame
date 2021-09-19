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

// Function BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C.ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_AssaultRifle_FrontClip_SideAction_C::ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C.ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction");

	UBP_AssaultRifle_FrontClip_SideAction_C_ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
