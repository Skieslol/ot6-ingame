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

// Function JournalProgressWidget.JournalProgressWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Required                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Achieved                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJournalProgressWidget_C::Update(int Required, int Achieved)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalProgressWidget.JournalProgressWidget_C.Update");

	UJournalProgressWidget_C_Update_Params params;
	params.Required = Required;
	params.Achieved = Achieved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
