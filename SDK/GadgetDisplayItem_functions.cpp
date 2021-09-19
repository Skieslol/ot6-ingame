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

// Function GadgetDisplayItem.GadgetDisplayItem_C.SetGadgetItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               GadgetItem                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGadgetDisplayItem_C::SetGadgetItemData(class UFortItem* GadgetItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetDisplayItem.GadgetDisplayItem_C.SetGadgetItemData");

	UGadgetDisplayItem_C_SetGadgetItemData_Params params;
	params.GadgetItem = GadgetItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
