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

// Function B_Ranged_Generic.B_Ranged_Generic_C.IsUsingFirstPersonCamera
struct AB_Ranged_Generic_C_IsUsingFirstPersonCamera_Params
{
	bool                                               UsingFirstPerson;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.Shell FX On Fire Update
struct AB_Ranged_Generic_C_Shell_FX_On_Fire_Update_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.IsUsingScope
struct AB_Ranged_Generic_C_IsUsingScope_Params
{
	bool                                               UsingScope;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.GetMuzzleLocation
struct AB_Ranged_Generic_C_GetMuzzleLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX
struct AB_Ranged_Generic_C_Muzzle_Play_Reload_FX_Params
{
	TEnumAsByte<FortniteGame_EFortReloadFXState>       Selection;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX
struct AB_Ranged_Generic_C_Muzzle_Flash_FX_Params
{
	bool                                               Condition;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity
struct AB_Ranged_Generic_C_SetWpnRarity_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.AddRandomScale
struct AB_Ranged_Generic_C_AddRandomScale_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript
struct AB_Ranged_Generic_C_UserConstructionScript_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc
struct AB_Ranged_Generic_C_AnimateScopePostProcess__FinishedFunc_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc
struct AB_Ranged_Generic_C_AnimateScopePostProcess__UpdateFunc_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX
struct AB_Ranged_Generic_C_OnPlayWeaponFireFX_Params
{
	bool                                               bPersistentFire;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX
struct AB_Ranged_Generic_C_OnStopWeaponFireFX_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.GameplayCue.Impact
struct AB_Ranged_Generic_C_GameplayCue_Impact_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX
struct AB_Ranged_Generic_C_OnPlayReloadFX_Params
{
	TEnumAsByte<FortniteGame_EFortReloadFXState>       ReloadStage;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onFire)
struct AB_Ranged_Generic_C_ShellsON__onFire__Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ShellsOFF_(onFire)
struct AB_Ranged_Generic_C_ShellsOFF__onFire__Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting
struct AB_Ranged_Generic_C_OnSetTargeting_Params
{
	bool                                               bNewIsTargeting;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip
struct AB_Ranged_Generic_C_K2_OnUnEquip_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables
struct AB_Ranged_Generic_C_InitializeScopeVariables_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths
struct AB_Ranged_Generic_C_Update_Enemy_Custom_Depths_Params
{
	bool                                               Enable_Or_Disable;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                StencilBufferValue;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayImpactFX
struct AB_Ranged_Generic_C_OnPlayImpactFX_Params
{
	struct FHitResult                                  HitResult;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TEnumAsByte<Engine_EPhysicalSurface>               ImpactPhysicalSurface;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*                    SpawnedPSC;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnAmmoCountChanged
struct AB_Ranged_Generic_C_OnAmmoCountChanged_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached
struct AB_Ranged_Generic_C_OnWeaponAttached_Params
{
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration
struct AB_Ranged_Generic_C_OnInitAlteration_Params
{
	class UFortAlterationItemDefinition*               NewAlteration;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations
struct AB_Ranged_Generic_C_OnInitCosmeticAlterations_Params
{
	struct FFortCosmeticModification                   CosmeticMod;                                               // (Parm)
	class UMaterialInstanceDynamic*                    DynamicMaterialInstance;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic
struct AB_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
