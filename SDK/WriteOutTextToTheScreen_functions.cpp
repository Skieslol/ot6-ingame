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

// Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.Line
// (Public, BlueprintCallable, BlueprintEvent)
void AWriteOutTextToTheScreen_C::Line()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.Line");

	AWriteOutTextToTheScreen_C_Line_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AWriteOutTextToTheScreen_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.UserConstructionScript");

	AWriteOutTextToTheScreen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AWriteOutTextToTheScreen_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.ReceiveTick");

	AWriteOutTextToTheScreen_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.WriteOutText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (Parm, ZeroConstructor)
// float                          TimePerCharacter               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Anim_Start_String_Index__Length_Based_ (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Anim_End_String_Index__default_=_length_ (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Init_New_Line_                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Bold_                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            AdditionalLines                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AWriteOutTextToTheScreen_C::WriteOutText(const struct FString& String, float TimePerCharacter, int Anim_Start_String_Index__Length_Based_, int Anim_End_String_Index__default_=_length_, bool Init_New_Line_, const struct FLinearColor& Color, bool Bold_, int AdditionalLines)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.WriteOutText");

	AWriteOutTextToTheScreen_C_WriteOutText_Params params;
	params.String = String;
	params.TimePerCharacter = TimePerCharacter;
	params.Anim_Start_String_Index__Length_Based_ = Anim_Start_String_Index__Length_Based_;
	params.Anim_End_String_Index__default_=_length_ = Anim_End_String_Index__default_=_length_;
	params.Init_New_Line_ = Init_New_Line_;
	params.Color = Color;
	params.Bold_ = Bold_;
	params.AdditionalLines = AdditionalLines;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AWriteOutTextToTheScreen_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.ReceiveBeginPlay");

	AWriteOutTextToTheScreen_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.ErasePage
// (BlueprintCallable, BlueprintEvent)
void AWriteOutTextToTheScreen_C::ErasePage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.ErasePage");

	AWriteOutTextToTheScreen_C_ErasePage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.MoveText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewHeight                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AWriteOutTextToTheScreen_C::MoveText(float NewHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.MoveText");

	AWriteOutTextToTheScreen_C_MoveText_Params params;
	params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.ExecuteUbergraph_WriteOutTextToTheScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AWriteOutTextToTheScreen_C::ExecuteUbergraph_WriteOutTextToTheScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.ExecuteUbergraph_WriteOutTextToTheScreen");

	AWriteOutTextToTheScreen_C_ExecuteUbergraph_WriteOutTextToTheScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
