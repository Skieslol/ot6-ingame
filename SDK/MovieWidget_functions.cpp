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

// Function MovieWidget.MovieWidget_C.StopPlaying
// (Public, BlueprintCallable, BlueprintEvent)
void UMovieWidget_C::StopPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.StopPlaying");

	UMovieWidget_C_StopPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieWidget.MovieWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaTexture*           inMediaTexture                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMovieWidget_C::Init(class UMediaTexture* inMediaTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.Init");

	UMovieWidget_C_Init_Params params;
	params.inMediaTexture = inMediaTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieWidget.MovieWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMovieWidget_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.Destruct");

	UMovieWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieWidget.MovieWidget_C.ExecuteUbergraph_MovieWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMovieWidget_C::ExecuteUbergraph_MovieWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.ExecuteUbergraph_MovieWidget");

	UMovieWidget_C_ExecuteUbergraph_MovieWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
