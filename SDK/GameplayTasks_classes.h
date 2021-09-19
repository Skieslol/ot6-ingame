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

// Class GameplayTasks.GameplayTasksComponent
// 0x0044 (FullSize[0x00D0] - InheritedSize[0x008C])
class UGameplayTasksComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_243A[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UGameplayTask*>                       SimulatedTasks;                                            // 0x0090(0x000C) (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<class UGameplayTask*>                       TaskPriorityQueue;                                         // 0x009C(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_V8SF[0xC];                                     // 0x00A8(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UGameplayTask*>                       TickingTasks;                                              // 0x00B4(0x000C) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5QL0[0x4];                                     // 0x00C0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnClaimedResourcesChange;                                  // 0x00C4(0x0010) ELEMENT_SIZE_MISMATCH (BlueprintVisible, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTasks.GameplayTasksComponent");
		return ptr;
	}



	void OnRep_SimulatedTasks();
	TEnumAsByte<GameplayTasks_EGameplayTaskRunResult> STATIC_K2_RunGameplayTask(class UGameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources);
};

// Class GameplayTasks.GameplayTask
// 0x0028 (FullSize[0x0044] - InheritedSize[0x001C])
class UGameplayTask : public UObject
{
public:
	struct FName                                       InstanceName;                                              // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QW4C[0x20];                                    // 0x0024(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTasks.GameplayTask");
		return ptr;
	}



	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
};

// Class GameplayTasks.GameplayTaskOwnerInterface
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UGameplayTaskOwnerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTasks.GameplayTaskOwnerInterface");
		return ptr;
	}



};

// Class GameplayTasks.GameplayTask_SpawnActor
// 0x0034 (FullSize[0x0078] - InheritedSize[0x0044])
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    Success;                                                   // 0x0044(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    DidNotSpawn;                                               // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BZZU[0x18];                                    // 0x005C(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ClassToSpawn;                                              // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_SpawnActor");
		return ptr;
	}



	class UGameplayTask_SpawnActor* STATIC_SpawnActor(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority);
	void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor);
};

// Class GameplayTasks.GameplayTask_WaitDelay
// 0x0014 (FullSize[0x0058] - InheritedSize[0x0044])
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                  // 0x0044(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OJ1H[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_WaitDelay");
		return ptr;
	}



	class UGameplayTask_WaitDelay* STATIC_TaskWaitDelay(float Time);
	void TaskDelayDelegate__DelegateSignature();
};

// Class GameplayTasks.GameplayTaskResource
// 0x000C (FullSize[0x0028] - InheritedSize[0x001C])
class UGameplayTaskResource : public UObject
{
public:
	int                                                ManualResourceID;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8_t                                             AutoResourceID;                                            // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FSGI[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bManuallySetID : 1;                                        // 0x0024(0x0001) BIT_FIELD (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SXUY[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTasks.GameplayTaskResource");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
