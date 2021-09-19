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

// Function ItemCooldownMeter.ItemCooldownMeter_C.GetSecondsCorrectedMinutes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Minutes                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Seconds                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
int UItemCooldownMeter_C::GetSecondsCorrectedMinutes(int Minutes, int Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemCooldownMeter.ItemCooldownMeter_C.GetSecondsCorrectedMinutes");

	UItemCooldownMeter_C_GetSecondsCorrectedMinutes_Params params;
	params.Minutes = Minutes;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ItemCooldownMeter.ItemCooldownMeter_C.Set Cooldown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan               Time_Left                      (Parm, ZeroConstructor)
// float                          Percentage                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemCooldownMeter_C::Set_Cooldown(const struct FTimespan& Time_Left, float Percentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemCooldownMeter.ItemCooldownMeter_C.Set Cooldown");

	UItemCooldownMeter_C_Set_Cooldown_Params params;
	params.Time_Left = Time_Left;
	params.Percentage = Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemCooldownMeter.ItemCooldownMeter_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimespan               Time_Left                      (Parm, ZeroConstructor)
// float                          Percentage                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemCooldownMeter_C::Update(TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size, const struct FTimespan& Time_Left, float Percentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemCooldownMeter.ItemCooldownMeter_C.Update");

	UItemCooldownMeter_C_Update_Params params;
	params.Brush_Size = Brush_Size;
	params.Time_Left = Time_Left;
	params.Percentage = Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
