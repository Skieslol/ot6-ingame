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

// WidgetBlueprintGeneratedClass LoginScreen.LoginScreen_C
// 0x002C (FullSize[0x0294] - InheritedSize[0x0268])
class ULoginScreen_C : public UFortUIStateWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0268(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            QuitButtonEnter;                                           // 0x026C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                            LoginWindowFade_In;                                        // 0x0270(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class ULoginWindow_C*                              LoginWindow_C_2;                                           // 0x0274(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTopLevel_TabControls_C*                     TopLevel_TabControls;                                      // 0x0278(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UFortUIStateWidget*                          PreviousState;                                             // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Login_Clicked;                                       // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Login_Failed;                                        // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Login_Music;                                         // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Login_Quit;                                          // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AFort_Entry_Music_Controller_BP_C*           FrontEnd_Music_Controller;                                 // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoginScreen.LoginScreen_C");
		return ptr;
	}



	void OnEnterState(TEnumAsByte<FortniteUI_EFortUIState> PreviousUIState);
	void Construct();
	void OnExitState(TEnumAsByte<FortniteUI_EFortUIState> NextUIState);
	void ExecuteUbergraph_LoginScreen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
