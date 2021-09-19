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
// Parameters
//---------------------------------------------------------------------------

// Function TutorialScreen.TutorialScreen_C.OnMouseButtonDown_1
struct UTutorialScreen_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function TutorialScreen.TutorialScreen_C.Construct
struct UTutorialScreen_C_Construct_Params
{
};

// Function TutorialScreen.TutorialScreen_C.OnShowTutorialScreen
struct UTutorialScreen_C_OnShowTutorialScreen_Params
{
	class UTexture2D*                                  Image;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TutorialScreen.TutorialScreen_C.OnHideTutorialScreen
struct UTutorialScreen_C_OnHideTutorialScreen_Params
{
};

// Function TutorialScreen.TutorialScreen_C.ExecuteUbergraph_TutorialScreen
struct UTutorialScreen_C_ExecuteUbergraph_TutorialScreen_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
