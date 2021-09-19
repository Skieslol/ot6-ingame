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

// Function NearestPlayerContext.NearestPlayerContext_C.ProvideSingleLocation
struct UNearestPlayerContext_C_ProvideSingleLocation_Params
{
	class UObject*                                     QuerierObject;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      QuerierActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ResultingLocation;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
