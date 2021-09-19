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

// Function HeroInfoLibrary.HeroInfoLibrary_C.Get Core Stat By Hero ID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Hero_ID                        (Parm, ZeroConstructor)
// struct FGameplayAttribute      Attribute                      (Parm)
// struct FHeroCoreStatSet        UI_Data                        (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHeroCoreStat           Stat                           (Parm, OutParm)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHeroInfoLibrary_C::STATIC_Get_Core_Stat_By_Hero_ID(const struct FString& Hero_ID, const struct FGameplayAttribute& Attribute, const struct FHeroCoreStatSet& UI_Data, class UObject* __WorldContext, struct FHeroCoreStat* Stat, float* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroInfoLibrary.HeroInfoLibrary_C.Get Core Stat By Hero ID");

	UHeroInfoLibrary_C_Get_Core_Stat_By_Hero_ID_Params params;
	params.Hero_ID = Hero_ID;
	params.Attribute = Attribute;
	params.UI_Data = UI_Data;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Stat != nullptr)
		*Stat = params.Stat;
	if (Value != nullptr)
		*Value = params.Value;

}


// Function HeroInfoLibrary.HeroInfoLibrary_C.Get Current Hero Core Stats
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FHeroCoreStat>   Data                           (Parm, OutParm, ZeroConstructor)
// TArray<float>                  Values                         (Parm, OutParm, ZeroConstructor)
void UHeroInfoLibrary_C::STATIC_Get_Current_Hero_Core_Stats(class UObject* __WorldContext, TArray<struct FHeroCoreStat>* Data, TArray<float>* Values)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroInfoLibrary.HeroInfoLibrary_C.Get Current Hero Core Stats");

	UHeroInfoLibrary_C_Get_Current_Hero_Core_Stats_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
	if (Values != nullptr)
		*Values = params.Values;

}


// Function HeroInfoLibrary.HeroInfoLibrary_C.Get Core Stats By Hero ID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Hero_ID                        (Parm, ZeroConstructor)
// struct FHeroCoreStatSet        UI_Data                        (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FHeroCoreStat>   Data                           (Parm, OutParm, ZeroConstructor)
// TArray<float>                  Values                         (Parm, OutParm, ZeroConstructor)
void UHeroInfoLibrary_C::STATIC_Get_Core_Stats_By_Hero_ID(const struct FString& Hero_ID, const struct FHeroCoreStatSet& UI_Data, class UObject* __WorldContext, TArray<struct FHeroCoreStat>* Data, TArray<float>* Values)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroInfoLibrary.HeroInfoLibrary_C.Get Core Stats By Hero ID");

	UHeroInfoLibrary_C_Get_Core_Stats_By_Hero_ID_Params params;
	params.Hero_ID = Hero_ID;
	params.UI_Data = UI_Data;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
	if (Values != nullptr)
		*Values = params.Values;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
