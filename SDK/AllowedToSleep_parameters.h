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
// Parameters
//---------------------------------------------------------------------------

// Function AllowedToSleep.AllowedToSleep_C.PerformConditionCheckAI
struct UAllowedToSleep_C_PerformConditionCheckAI_Params
{
	class AAIController*                               OwnerController;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APawn*                                       ControlledPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
