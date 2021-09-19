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

// Function ErrorDialogBP.ErrorDialogBP_C.KillErrorsDisplayed
struct UErrorDialogBP_C_KillErrorsDisplayed_Params
{
};

// Function ErrorDialogBP.ErrorDialogBP_C.OnHandleAction
struct UErrorDialogBP_C_OnHandleAction_Params
{
	struct FEventReply                                 Result;                                                    // (Parm, OutParm)
	bool                                               bPassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ErrorDialogBP.ErrorDialogBP_C.Deactivate
struct UErrorDialogBP_C_Deactivate_Params
{
};

// Function ErrorDialogBP.ErrorDialogBP_C.BindDelegates
struct UErrorDialogBP_C_BindDelegates_Params
{
};

// Function ErrorDialogBP.ErrorDialogBP_C.Construct
struct UErrorDialogBP_C_Construct_Params
{
};

// Function ErrorDialogBP.ErrorDialogBP_C.OnRebuildDialog
struct UErrorDialogBP_C_OnRebuildDialog_Params
{
	int                                                NewIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ErrorDialogBP.ErrorDialogBP_C.PartyContextBasicError
struct UErrorDialogBP_C_PartyContextBasicError_Params
{
	struct FText                                       Message;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ErrorCode;                                                 // (Parm, ZeroConstructor)
};

// Function ErrorDialogBP.ErrorDialogBP_C.OnNetworkError
struct UErrorDialogBP_C_OnNetworkError_Params
{
	struct FText                                       NetworkErrorMessage;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ErrorDialogBP.ErrorDialogBP_C.BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_264_FortBaseButtonClicked__DelegateSignature
struct UErrorDialogBP_C_BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_264_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ErrorDialogBP.ErrorDialogBP_C.ExecuteUbergraph_ErrorDialogBP
struct UErrorDialogBP_C_ExecuteUbergraph_ErrorDialogBP_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
