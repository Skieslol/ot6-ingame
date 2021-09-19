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

// Function BPI_ShieldFlash.BPI_ShieldFlash_C.FlashShield
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_ShieldFlash_C::FlashShield()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_ShieldFlash.BPI_ShieldFlash_C.FlashShield");

	UBPI_ShieldFlash_C_FlashShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
