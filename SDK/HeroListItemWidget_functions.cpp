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

// Function HeroListItemWidget.HeroListItemWidget_C.Set Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SELECTED                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHeroListItemWidget_C::Set_Selected(bool SELECTED)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroListItemWidget.HeroListItemWidget_C.Set Selected");

	UHeroListItemWidget_C_Set_Selected_Params params;
	params.SELECTED = SELECTED;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroListItemWidget.HeroListItemWidget_C.Init Selected
// (Public, BlueprintCallable, BlueprintEvent)
void UHeroListItemWidget_C::Init_Selected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroListItemWidget.HeroListItemWidget_C.Init Selected");

	UHeroListItemWidget_C_Init_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroListItemWidget.HeroListItemWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UHeroListItemWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroListItemWidget.HeroListItemWidget_C.Construct");

	UHeroListItemWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroListItemWidget.HeroListItemWidget_C.On Hero Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SELECTED                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHeroListItemWidget_C::On_Hero_Selected(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroListItemWidget.HeroListItemWidget_C.On Hero Selected");

	UHeroListItemWidget_C_On_Hero_Selected_Params params;
	params.Button = Button;
	params.SELECTED = SELECTED;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroListItemWidget.HeroListItemWidget_C.ExecuteUbergraph_HeroListItemWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHeroListItemWidget_C::ExecuteUbergraph_HeroListItemWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroListItemWidget.HeroListItemWidget_C.ExecuteUbergraph_HeroListItemWidget");

	UHeroListItemWidget_C_ExecuteUbergraph_HeroListItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroListItemWidget.HeroListItemWidget_C.HeroSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Hero_ID                        (Parm, ZeroConstructor)
void UHeroListItemWidget_C::HeroSelected__DelegateSignature(const struct FString& Hero_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroListItemWidget.HeroListItemWidget_C.HeroSelected__DelegateSignature");

	UHeroListItemWidget_C_HeroSelected__DelegateSignature_Params params;
	params.Hero_ID = Hero_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
