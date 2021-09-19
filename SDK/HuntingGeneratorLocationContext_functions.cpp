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

// Function HuntingGeneratorLocationContext.HuntingGeneratorLocationContext_C.ProvideSingleLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 ResultingLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHuntingGeneratorLocationContext_C::ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuntingGeneratorLocationContext.HuntingGeneratorLocationContext_C.ProvideSingleLocation");

	UHuntingGeneratorLocationContext_C_ProvideSingleLocation_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultingLocation != nullptr)
		*ResultingLocation = params.ResultingLocation;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
