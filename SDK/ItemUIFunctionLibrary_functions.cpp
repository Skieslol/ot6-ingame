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

// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.ParseLevelRequiredFromString
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InString                       (Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            outInt                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemUIFunctionLibrary_C::STATIC_ParseLevelRequiredFromString(const struct FString& InString, class UObject* __WorldContext, int* outInt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.ParseLevelRequiredFromString");

	UItemUIFunctionLibrary_C_ParseLevelRequiredFromString_Params params;
	params.InString = InString;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outInt != nullptr)
		*outInt = params.outInt;

}


// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Add Alteration Widgets
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*            Host_Widget                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            PreviewLevel                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowInVaultDetails             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemUIFunctionLibrary_C::STATIC_Add_Alteration_Widgets(class UVerticalBox* Host_Widget, class UFortItem* Item, int PreviewLevel, bool ShowInVaultDetails, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Add Alteration Widgets");

	UItemUIFunctionLibrary_C_Add_Alteration_Widgets_Params params;
	params.Host_Widget = Host_Widget;
	params.Item = Item;
	params.PreviewLevel = PreviewLevel;
	params.ShowInVaultDetails = ShowInVaultDetails;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
