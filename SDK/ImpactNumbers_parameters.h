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

// Function ImpactNumbers.ImpactNumbers_C.Set Material Pararmeters
struct AImpactNumbers_C_Set_Material_Pararmeters_Params
{
	struct FFortDamageNumberInfo                       NewDamageHitInfoStruct;                                    // (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FTransform                                  CameraTransform;                                           // (Parm, IsPlainOldData, NoDestructor)
	struct FVector                                     NumberLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ImpactNumbers.ImpactNumbers_C.init a new number set
struct AImpactNumbers_C_init_a_new_number_set_Params
{
	struct FFortDamageNumberInfo                       NewDamageHitInfoStruct;                                    // (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FTransform                                  OutCameraTransform;                                        // (Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FVector                                     OutNumberLocation;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ImpactNumbers.ImpactNumbers_C.UserConstructionScript
struct AImpactNumbers_C_UserConstructionScript_Params
{
};

// Function ImpactNumbers.ImpactNumbers_C.OnNewDamageNumber
struct AImpactNumbers_C_OnNewDamageNumber_Params
{
	struct FFortDamageNumberInfo                       NewDamageNumberInfo;                                       // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function ImpactNumbers.ImpactNumbers_C.ExecuteUbergraph_ImpactNumbers
struct AImpactNumbers_C_ExecuteUbergraph_ImpactNumbers_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
