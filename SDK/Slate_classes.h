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

// Class Slate.ButtonWidgetStyle
// 0x022C (FullSize[0x024C] - InheritedSize[0x0020])
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                                ButtonStyle;                                               // 0x0020(0x022C) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.ButtonWidgetStyle");
		return ptr;
	}



};

// Class Slate.CheckBoxWidgetStyle
// 0x04B8 (FullSize[0x04D8] - InheritedSize[0x0020])
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                              CheckBoxStyle;                                             // 0x0020(0x04B8) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.CheckBoxWidgetStyle");
		return ptr;
	}



};

// Class Slate.ComboBoxWidgetStyle
// 0x0364 (FullSize[0x0384] - InheritedSize[0x0020])
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                              ComboBoxStyle;                                             // 0x0020(0x0364) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.ComboBoxWidgetStyle");
		return ptr;
	}



};

// Class Slate.ComboButtonWidgetStyle
// 0x0328 (FullSize[0x0348] - InheritedSize[0x0020])
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                           ComboButtonStyle;                                          // 0x0020(0x0328) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.ComboButtonWidgetStyle");
		return ptr;
	}



};

// Class Slate.EditableTextBoxWidgetStyle
// 0x0698 (FullSize[0x06B8] - InheritedSize[0x0020])
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                      // 0x0020(0x0698) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.EditableTextBoxWidgetStyle");
		return ptr;
	}



};

// Class Slate.EditableTextWidgetStyle
// 0x01A4 (FullSize[0x01C4] - InheritedSize[0x0020])
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                          EditableTextStyle;                                         // 0x0020(0x01A4) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.EditableTextWidgetStyle");
		return ptr;
	}



};

// Class Slate.ProgressWidgetStyle
// 0x0160 (FullSize[0x0180] - InheritedSize[0x0020])
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                           ProgressBarStyle;                                          // 0x0020(0x0160) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.ProgressWidgetStyle");
		return ptr;
	}



};

// Class Slate.ScrollBarWidgetStyle
// 0x0418 (FullSize[0x0438] - InheritedSize[0x0020])
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                             ScrollBarStyle;                                            // 0x0020(0x0418) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.ScrollBarWidgetStyle");
		return ptr;
	}



};

// Class Slate.ScrollBoxWidgetStyle
// 0x01D4 (FullSize[0x01F4] - InheritedSize[0x0020])
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                             ScrollBoxStyle;                                            // 0x0020(0x01D4) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.ScrollBoxWidgetStyle");
		return ptr;
	}



};

// Class Slate.SpinBoxWidgetStyle
// 0x0274 (FullSize[0x0294] - InheritedSize[0x0020])
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                               SpinBoxStyle;                                              // 0x0020(0x0274) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.SpinBoxWidgetStyle");
		return ptr;
	}



};

// Class Slate.TextBlockWidgetStyle
// 0x0100 (FullSize[0x0120] - InheritedSize[0x0020])
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                             TextBlockStyle;                                            // 0x0020(0x0100) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Slate.TextBlockWidgetStyle");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
