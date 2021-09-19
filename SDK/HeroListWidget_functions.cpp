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

// Function HeroListWidget.HeroListWidget_C.On Hero Deleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHeroListWidget_C::On_Hero_Deleted(bool Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroListWidget.HeroListWidget_C.On Hero Deleted");

	UHeroListWidget_C_On_Hero_Deleted_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroListWidget.HeroListWidget_C.On Hero Created
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHeroListWidget_C::On_Hero_Created(bool Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroListWidget.HeroListWidget_C.On Hero Created");

	UHeroListWidget_C_On_Hero_Created_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroListWidget.HeroListWidget_C.Set Tab Group Name
// (Public, BlueprintCallable, BlueprintEvent)
void UHeroListWidget_C::Set_Tab_Group_Name()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroListWidget.HeroListWidget_C.Set Tab Group Name");

	UHeroListWidget_C_Set_Tab_Group_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroListWidget.HeroListWidget_C.Refresh Hero List
// (Public, BlueprintCallable, BlueprintEvent)
void UHeroListWidget_C::Refresh_Hero_List()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroListWidget.HeroListWidget_C.Refresh Hero List");

	UHeroListWidget_C_Refresh_Hero_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroListWidget.HeroListWidget_C.Update Hero List
// (Public, BlueprintCallable, BlueprintEvent)
void UHeroListWidget_C::Update_Hero_List()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroListWidget.HeroListWidget_C.Update Hero List");

	UHeroListWidget_C_Update_Hero_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroListWidget.HeroListWidget_C.On Hero Selected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Hero_List_Item                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SELECTED                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHeroListWidget_C::On_Hero_Selected(class UFortBaseButton* Hero_List_Item, bool SELECTED)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroListWidget.HeroListWidget_C.On Hero Selected");

	UHeroListWidget_C_On_Hero_Selected_Params params;
	params.Hero_List_Item = Hero_List_Item;
	params.SELECTED = SELECTED;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroListWidget.HeroListWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UHeroListWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroListWidget.HeroListWidget_C.Construct");

	UHeroListWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroListWidget.HeroListWidget_C.ExecuteUbergraph_HeroListWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHeroListWidget_C::ExecuteUbergraph_HeroListWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroListWidget.HeroListWidget_C.ExecuteUbergraph_HeroListWidget");

	UHeroListWidget_C_ExecuteUbergraph_HeroListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
