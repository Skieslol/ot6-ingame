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

// Function BannerGATooltip.BannerGATooltip_C.GetTextForTokenFromAbilitySpecInternal
struct UBannerGATooltip_C_GetTextForTokenFromAbilitySpecInternal_Params
{
	struct FGameplayAbilitySpec                        Spec;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                Tag;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	class UFortTooltipContext*                         Context;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Token;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FText                                       OutText;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BannerGATooltip.BannerGATooltip_C.GetTextForTokenInternal
struct UBannerGATooltip_C_GetTextForTokenInternal_Params
{
	class UObject*                                     ObjectToDescribe;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                Tag;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	class UFortTooltipContext*                         Context;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Token;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FText                                       OutText;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
