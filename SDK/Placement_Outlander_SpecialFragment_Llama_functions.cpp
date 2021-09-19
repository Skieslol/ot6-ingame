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

// Function Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C.IsAcceptablePositionForPlacement
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 InLocation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FRotator                InRotation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// class AFortDecoTool*           DecoTool                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bIsCDO                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   OutFailureReason               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool APlacement_Outlander_SpecialFragment_Llama_C::IsAcceptablePositionForPlacement(const struct FVector& InLocation, const struct FRotator& InRotation, class AFortDecoTool* DecoTool, bool bIsCDO, struct FText* OutFailureReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C.IsAcceptablePositionForPlacement");

	APlacement_Outlander_SpecialFragment_Llama_C_IsAcceptablePositionForPlacement_Params params;
	params.InLocation = InLocation;
	params.InRotation = InRotation;
	params.DecoTool = DecoTool;
	params.bIsCDO = bIsCDO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutFailureReason != nullptr)
		*OutFailureReason = params.OutFailureReason;


	return params.ReturnValue;
}


// Function Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void APlacement_Outlander_SpecialFragment_Llama_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C.UserConstructionScript");

	APlacement_Outlander_SpecialFragment_Llama_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void APlacement_Outlander_SpecialFragment_Llama_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C.ReceiveBeginPlay");

	APlacement_Outlander_SpecialFragment_Llama_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C.PlacedByPlacementTool
// (Event, Public, BlueprintEvent)
void APlacement_Outlander_SpecialFragment_Llama_C::PlacedByPlacementTool()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C.PlacedByPlacementTool");

	APlacement_Outlander_SpecialFragment_Llama_C_PlacedByPlacementTool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C.ExecuteUbergraph_Placement_Outlander_SpecialFragment_Llama
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlacement_Outlander_SpecialFragment_Llama_C::ExecuteUbergraph_Placement_Outlander_SpecialFragment_Llama(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Placement_Outlander_SpecialFragment_Llama.Placement_Outlander_SpecialFragment_Llama_C.ExecuteUbergraph_Placement_Outlander_SpecialFragment_Llama");

	APlacement_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Placement_Outlander_SpecialFragment_Llama_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
