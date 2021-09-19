#pragma once

// Name: Fortnite, Version: OT-6_5


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StyleLibrary.StyleLibrary_C
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UStyleLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass StyleLibrary.StyleLibrary_C");
		return ptr;
	}



	void STATIC_Get_Item_Size(const struct FFortUIStylesheet& Stylesheet, TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size, class UObject* __WorldContext, struct FVector2D* Item_Size);
	void STATIC_Get_Negative_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_Get_Additive_Color(const struct FFortUIStylesheet& Stylesheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_Get_Item_Icon_Size(const struct FFortUIStylesheet& Stylesheet, TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size, class UObject* __WorldContext, struct FVector2D* Icon_Size);
	void STATIC_Get_Standard_Icon_Size(const struct FFortUIStylesheet& Stylesheet, TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size, class UObject* __WorldContext, struct FVector2D* Icon_Size);
	void STATIC_Get_Theme(const struct FFortUIStylesheet& Stylesheet, TEnumAsByte<EFortUITheme_EFortUITheme> Theme_Type, class UObject* __WorldContext, struct FFortUITheme* Theme);
	void STATIC_Get_Theme_Color(const struct FFortUIStylesheet& Stylesheet, TEnumAsByte<EFortUITheme_EFortUITheme> Theme_Type, TEnumAsByte<EFortUIThemeColor_EFortUIThemeColor> Color_Type, class UObject* __WorldContext, struct FLinearColor* Theme_Color);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
