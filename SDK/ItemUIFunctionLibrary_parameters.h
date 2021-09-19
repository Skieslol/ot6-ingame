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

// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.ParseLevelRequiredFromString
struct UItemUIFunctionLibrary_C_ParseLevelRequiredFromString_Params
{
	struct FString                                     InString;                                                  // (Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                outInt;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Add Alteration Widgets
struct UItemUIFunctionLibrary_C_Add_Alteration_Widgets_Params
{
	class UVerticalBox*                                Host_Widget;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortItem*                                   Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                PreviewLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowInVaultDetails;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
