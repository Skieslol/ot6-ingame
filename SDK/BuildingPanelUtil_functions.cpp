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

// Function BuildingPanelUtil.BuildingPanelUtil_C.Get Attribute Modifier Header Text
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortAttributeInfo      Attribute_Info                 (Parm)
// struct FGameplayTagContainer   Required_Tags                  (Parm)
// struct FText                   Required_Gameplay_Tags_Description (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UBuildingPanelUtil_C::STATIC_Get_Attribute_Modifier_Header_Text(const struct FFortAttributeInfo& Attribute_Info, const struct FGameplayTagContainer& Required_Tags, const struct FText& Required_Gameplay_Tags_Description, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuildingPanelUtil.BuildingPanelUtil_C.Get Attribute Modifier Header Text");

	UBuildingPanelUtil_C_Get_Attribute_Modifier_Header_Text_Params params;
	params.Attribute_Info = Attribute_Info;
	params.Required_Tags = Required_Tags;
	params.Required_Gameplay_Tags_Description = Required_Gameplay_Tags_Description;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BuildingPanelUtil.BuildingPanelUtil_C.Create Attribute Modifier Tool Tip
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Owning_Player                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortAttributeInfo      Attribute_Info                 (Parm)
// struct FGameplayTagContainer   Required_Gameplay_Tags         (Parm)
// struct FText                   Required_Gameplay_Tags_Description (Parm)
// struct FText                   Modifier_Source                (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                 Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBuildingPanelUtil_C::STATIC_Create_Attribute_Modifier_Tool_Tip(class APlayerController* Owning_Player, const struct FFortAttributeInfo& Attribute_Info, const struct FGameplayTagContainer& Required_Gameplay_Tags, const struct FText& Required_Gameplay_Tags_Description, const struct FText& Modifier_Source, class UObject* __WorldContext, class UWidget** Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuildingPanelUtil.BuildingPanelUtil_C.Create Attribute Modifier Tool Tip");

	UBuildingPanelUtil_C_Create_Attribute_Modifier_Tool_Tip_Params params;
	params.Owning_Player = Owning_Player;
	params.Attribute_Info = Attribute_Info;
	params.Required_Gameplay_Tags = Required_Gameplay_Tags;
	params.Required_Gameplay_Tags_Description = Required_Gameplay_Tags_Description;
	params.Modifier_Source = Modifier_Source;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function BuildingPanelUtil.BuildingPanelUtil_C.Get Traits Of Workers
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UFortWorker*>     Workers                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   Chief_Personality              (Parm, OutParm)
// struct FGameplayTagContainer   Crew_Personalities             (Parm, OutParm)
// struct FGameplayTagContainer   Crew_Set_Bonuses               (Parm, OutParm)
void UBuildingPanelUtil_C::STATIC_Get_Traits_Of_Workers(TArray<class UFortWorker*>* Workers, class UObject* __WorldContext, struct FGameplayTagContainer* Chief_Personality, struct FGameplayTagContainer* Crew_Personalities, struct FGameplayTagContainer* Crew_Set_Bonuses)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuildingPanelUtil.BuildingPanelUtil_C.Get Traits Of Workers");

	UBuildingPanelUtil_C_Get_Traits_Of_Workers_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Workers != nullptr)
		*Workers = params.Workers;
	if (Chief_Personality != nullptr)
		*Chief_Personality = params.Chief_Personality;
	if (Crew_Personalities != nullptr)
		*Crew_Personalities = params.Crew_Personalities;
	if (Crew_Set_Bonuses != nullptr)
		*Crew_Set_Bonuses = params.Crew_Set_Bonuses;

}


// Function BuildingPanelUtil.BuildingPanelUtil_C.Calculate Current Pulsing Highlight Color
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            Base_Color                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Hightlight_Color               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Current_Color                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBuildingPanelUtil_C::STATIC_Calculate_Current_Pulsing_Highlight_Color(const struct FLinearColor& Base_Color, const struct FLinearColor& Hightlight_Color, class UObject* __WorldContext, struct FLinearColor* Current_Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuildingPanelUtil.BuildingPanelUtil_C.Calculate Current Pulsing Highlight Color");

	UBuildingPanelUtil_C_Calculate_Current_Pulsing_Highlight_Color_Params params;
	params.Base_Color = Base_Color;
	params.Hightlight_Color = Hightlight_Color;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Current_Color != nullptr)
		*Current_Color = params.Current_Color;

}


// Function BuildingPanelUtil.BuildingPanelUtil_C.Get Worker Bonus Text
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHomeBaseWorker*         Worker                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Bonus_Text                     (Parm, OutParm)
void UBuildingPanelUtil_C::STATIC_Get_Worker_Bonus_Text(class UHomeBaseWorker* Worker, class UObject* __WorldContext, struct FText* Bonus_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuildingPanelUtil.BuildingPanelUtil_C.Get Worker Bonus Text");

	UBuildingPanelUtil_C_Get_Worker_Bonus_Text_Params params;
	params.Worker = Worker;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Bonus_Text != nullptr)
		*Bonus_Text = params.Bonus_Text;

}


// Function BuildingPanelUtil.BuildingPanelUtil_C.EnsureIconBrush
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortMultiSizeBrush     Multi_size_Brush               (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush             Brush                          (Parm, OutParm)
void UBuildingPanelUtil_C::STATIC_EnsureIconBrush(const struct FFortMultiSizeBrush& Multi_size_Brush, class UObject* __WorldContext, struct FSlateBrush* Brush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuildingPanelUtil.BuildingPanelUtil_C.EnsureIconBrush");

	UBuildingPanelUtil_C_EnsureIconBrush_Params params;
	params.Multi_size_Brush = Multi_size_Brush;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;

}


// Function BuildingPanelUtil.BuildingPanelUtil_C.InitItemWidget
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemWidget*         Widget                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBuildingPanelUtil_C::STATIC_InitItemWidget(class UFortItemWidget* Widget, class UFortItem* Item, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuildingPanelUtil.BuildingPanelUtil_C.InitItemWidget");

	UBuildingPanelUtil_C_InitItemWidget_Params params;
	params.Widget = Widget;
	params.Item = Item;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
