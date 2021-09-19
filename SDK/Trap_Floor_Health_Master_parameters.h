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

// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.BP_ShouldTrigger
struct ATrap_Floor_Health_Master_C_BP_ShouldTrigger_Params
{
	TArray<class AActor*>                              TouchingActors;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.Active_FX
struct ATrap_Floor_Health_Master_C_Active_FX_Params
{
	bool                                               Active;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.OnRep_Charge_Value
struct ATrap_Floor_Health_Master_C_OnRep_Charge_Value_Params
{
};

// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.UserConstructionScript
struct ATrap_Floor_Health_Master_C_UserConstructionScript_Params
{
};

// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.OnReloadEnd
struct ATrap_Floor_Health_Master_C_OnReloadEnd_Params
{
};

// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.OnPlaced
struct ATrap_Floor_Health_Master_C_OnPlaced_Params
{
};

// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.OnFinishedBuilding
struct ATrap_Floor_Health_Master_C_OnFinishedBuilding_Params
{
};

// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin
struct ATrap_Floor_Health_Master_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
struct ATrap_Floor_Health_Master_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.OnOutOfDurability
struct ATrap_Floor_Health_Master_C_OnOutOfDurability_Params
{
};

// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_288_ComponentBeginOverlapSignature__DelegateSignature
struct ATrap_Floor_Health_Master_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_288_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_306_ComponentEndOverlapSignature__DelegateSignature
struct ATrap_Floor_Health_Master_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_306_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.OnDamaged_Event_1
struct ATrap_Floor_Health_Master_C_OnDamaged_Event_1_Params
{
	class AActor*                                      DamagedActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AController*                                 InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     HitLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         FHitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       BoneName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Trap_Floor_Health_Master.Trap_Floor_Health_Master_C.ExecuteUbergraph_Trap_Floor_Health_Master
struct ATrap_Floor_Health_Master_C_ExecuteUbergraph_Trap_Floor_Health_Master_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
