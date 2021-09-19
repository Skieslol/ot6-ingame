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

// Function BannerGATooltip.BannerGATooltip_C.GetTextForTokenFromAbilitySpecInternal
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilitySpec    Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            Tag                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UFortTooltipContext*     Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   Token                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FText                   OutText                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBannerGATooltip_C::GetTextForTokenFromAbilitySpecInternal(const struct FGameplayAbilitySpec& Spec, const struct FGameplayTag& Tag, class UFortTooltipContext* Context, const struct FName& Token, struct FText* OutText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BannerGATooltip.BannerGATooltip_C.GetTextForTokenFromAbilitySpecInternal");

	UBannerGATooltip_C_GetTextForTokenFromAbilitySpecInternal_Params params;
	params.Spec = Spec;
	params.Tag = Tag;
	params.Context = Context;
	params.Token = Token;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;


	return params.ReturnValue;
}


// Function BannerGATooltip.BannerGATooltip_C.GetTextForTokenInternal
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                 ObjectToDescribe               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag            Tag                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UFortTooltipContext*     Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   Token                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FText                   OutText                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBannerGATooltip_C::GetTextForTokenInternal(class UObject* ObjectToDescribe, const struct FGameplayTag& Tag, class UFortTooltipContext* Context, const struct FName& Token, struct FText* OutText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BannerGATooltip.BannerGATooltip_C.GetTextForTokenInternal");

	UBannerGATooltip_C_GetTextForTokenInternal_Params params;
	params.ObjectToDescribe = ObjectToDescribe;
	params.Tag = Tag;
	params.Context = Context;
	params.Token = Token;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
