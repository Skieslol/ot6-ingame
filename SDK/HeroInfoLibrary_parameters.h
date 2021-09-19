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

// Function HeroInfoLibrary.HeroInfoLibrary_C.Get Core Stat By Hero ID
struct UHeroInfoLibrary_C_Get_Core_Stat_By_Hero_ID_Params
{
	struct FString                                     Hero_ID;                                                   // (Parm, ZeroConstructor)
	struct FGameplayAttribute                          Attribute;                                                 // (Parm)
	struct FHeroCoreStatSet                            UI_Data;                                                   // (Parm)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHeroCoreStat                               Stat;                                                      // (Parm, OutParm)
	float                                              Value;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HeroInfoLibrary.HeroInfoLibrary_C.Get Current Hero Core Stats
struct UHeroInfoLibrary_C_Get_Current_Hero_Core_Stats_Params
{
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FHeroCoreStat>                       Data;                                                      // (Parm, OutParm, ZeroConstructor)
	TArray<float>                                      Values;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function HeroInfoLibrary.HeroInfoLibrary_C.Get Core Stats By Hero ID
struct UHeroInfoLibrary_C_Get_Core_Stats_By_Hero_ID_Params
{
	struct FString                                     Hero_ID;                                                   // (Parm, ZeroConstructor)
	struct FHeroCoreStatSet                            UI_Data;                                                   // (Parm)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FHeroCoreStat>                       Data;                                                      // (Parm, OutParm, ZeroConstructor)
	TArray<float>                                      Values;                                                    // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
