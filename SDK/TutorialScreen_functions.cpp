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

// Function TutorialScreen.TutorialScreen_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UTutorialScreen_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TutorialScreen.TutorialScreen_C.OnMouseButtonDown_1");

	UTutorialScreen_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;


	return params.ReturnValue;
}


// Function TutorialScreen.TutorialScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTutorialScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TutorialScreen.TutorialScreen_C.Construct");

	UTutorialScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TutorialScreen.TutorialScreen_C.OnShowTutorialScreen
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTutorialScreen_C::OnShowTutorialScreen(class UTexture2D* Image)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TutorialScreen.TutorialScreen_C.OnShowTutorialScreen");

	UTutorialScreen_C_OnShowTutorialScreen_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TutorialScreen.TutorialScreen_C.OnHideTutorialScreen
// (Event, Public, BlueprintEvent)
void UTutorialScreen_C::OnHideTutorialScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TutorialScreen.TutorialScreen_C.OnHideTutorialScreen");

	UTutorialScreen_C_OnHideTutorialScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TutorialScreen.TutorialScreen_C.ExecuteUbergraph_TutorialScreen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTutorialScreen_C::ExecuteUbergraph_TutorialScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TutorialScreen.TutorialScreen_C.ExecuteUbergraph_TutorialScreen");

	UTutorialScreen_C_ExecuteUbergraph_TutorialScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
