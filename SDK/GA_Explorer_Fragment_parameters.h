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

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.ApplyStatScaling
struct UGA_Explorer_Fragment_C_ApplyStatScaling_Params
{
	class AB_BGA_Explorer_OutlanderFragmentBear_C*     BearReference;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.DarkHackyMath
struct UGA_Explorer_Fragment_C_DarkHackyMath_Params
{
	class AFortPlayerPawn*                             HitTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SetByCallerValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.K2_ShouldUseDecoTool
struct UGA_Explorer_Fragment_C_K2_ShouldUseDecoTool_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                 // (Parm, ContainsInstancedReference)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.SetupIconOverride
struct UGA_Explorer_Fragment_C_SetupIconOverride_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.K2_GetIconOverride
struct UGA_Explorer_Fragment_C_K2_GetIconOverride_Params
{
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.K2_CanActivateAbility
struct UGA_Explorer_Fragment_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                 // (Parm, ContainsInstancedReference)
	struct FGameplayTagContainer                       RelevantTags;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.SpecialtyFragment
struct UGA_Explorer_Fragment_C_SpecialtyFragment_Params
{
	TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList> ClassType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.DefensiveFragment
struct UGA_Explorer_Fragment_C_DefensiveFragment_Params
{
	TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList> ClassType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayAbilityTargetDataHandle            Target_Data;                                               // (Parm)
	struct FGameplayTag                                Application_Tag;                                           // (Parm)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.ClassSelection
struct UGA_Explorer_Fragment_C_ClassSelection_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPlayerPawn*                             ClassPawn;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList> SelectedClass;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               EndAbility;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.ActivateFragment
struct UGA_Explorer_Fragment_C_ActivateFragment_Params
{
	TEnumAsByte<E_ExplorerFragmentTypes_E_ExplorerFragmentTypes> FragmentType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList> ClassType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                ActivateEvent;                                             // (Parm, OutParm)
	bool                                               EndAbility;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.OffensiveFragment
struct UGA_Explorer_Fragment_C_OffensiveFragment_Params
{
	TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList> ClassType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (Parm)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Cancelled_AB9C57344D21682887FAA6B895FA1C6D
struct UGA_Explorer_Fragment_C_Cancelled_AB9C57344D21682887FAA6B895FA1C6D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Targeted_AB9C57344D21682887FAA6B895FA1C6D
struct UGA_Explorer_Fragment_C_Targeted_AB9C57344D21682887FAA6B895FA1C6D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Cancelled_0DCC89D649F1683B5F78AC9AEEA4CBBB
struct UGA_Explorer_Fragment_C_Cancelled_0DCC89D649F1683B5F78AC9AEEA4CBBB_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Targeted_0DCC89D649F1683B5F78AC9AEEA4CBBB
struct UGA_Explorer_Fragment_C_Targeted_0DCC89D649F1683B5F78AC9AEEA4CBBB_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Cancelled_D9A99A8E430AA4101B325597D2C21C37
struct UGA_Explorer_Fragment_C_Cancelled_D9A99A8E430AA4101B325597D2C21C37_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Targeted_D9A99A8E430AA4101B325597D2C21C37
struct UGA_Explorer_Fragment_C_Targeted_D9A99A8E430AA4101B325597D2C21C37_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.OnCancelled_AEBC8CA9454DB4A76A8336BD4EE30254
struct UGA_Explorer_Fragment_C_OnCancelled_AEBC8CA9454DB4A76A8336BD4EE30254_Params
{
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.OnInterrupted_AEBC8CA9454DB4A76A8336BD4EE30254
struct UGA_Explorer_Fragment_C_OnInterrupted_AEBC8CA9454DB4A76A8336BD4EE30254_Params
{
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.OnComplete_AEBC8CA9454DB4A76A8336BD4EE30254
struct UGA_Explorer_Fragment_C_OnComplete_AEBC8CA9454DB4A76A8336BD4EE30254_Params
{
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Destroyed_56D0E8B74E6D3560ABB4BF82A5A31928
struct UGA_Explorer_Fragment_C_Destroyed_56D0E8B74E6D3560ABB4BF82A5A31928_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Exploded_56D0E8B74E6D3560ABB4BF82A5A31928
struct UGA_Explorer_Fragment_C_Exploded_56D0E8B74E6D3560ABB4BF82A5A31928_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Stopped_56D0E8B74E6D3560ABB4BF82A5A31928
struct UGA_Explorer_Fragment_C_Stopped_56D0E8B74E6D3560ABB4BF82A5A31928_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Bounced_56D0E8B74E6D3560ABB4BF82A5A31928
struct UGA_Explorer_Fragment_C_Bounced_56D0E8B74E6D3560ABB4BF82A5A31928_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Touched_56D0E8B74E6D3560ABB4BF82A5A31928
struct UGA_Explorer_Fragment_C_Touched_56D0E8B74E6D3560ABB4BF82A5A31928_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Created_56D0E8B74E6D3560ABB4BF82A5A31928
struct UGA_Explorer_Fragment_C_Created_56D0E8B74E6D3560ABB4BF82A5A31928_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.K2_ActivateAbility
struct UGA_Explorer_Fragment_C_K2_ActivateAbility_Params
{
};

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.ExecuteUbergraph_GA_Explorer_Fragment
struct UGA_Explorer_Fragment_C_ExecuteUbergraph_GA_Explorer_Fragment_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
