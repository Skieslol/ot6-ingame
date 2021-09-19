#include <Windows.h>
#include "minhook/MinHook.h"
#include <iostream>
#include "SDK.h"

#pragma comment(lib, "minhook/libMinHook.x86.lib")

using namespace CG;

inline void ALLOCCONSOLE() {
    AllocConsole();

    FILE* pFile;
    freopen_s(&pFile, "CONOUT$", "w", stdout);
}

inline uintptr_t BaseAddress()
{
    return reinterpret_cast<uintptr_t>(GetModuleHandle(0));
}

PVOID(*ProcessEvent)(UObject*, UFunction*, PVOID) = nullptr;
PVOID ProcessEventHook(UObject* object, UFunction* function, PVOID params) {


    return ProcessEvent(object, function, params);
}

DWORD WINAPI MainThread(LPVOID) {
    ALLOCCONSOLE();

    std::cout << "Welcome to ot6!" << std::endl;
    std::cout << "Now Setting Everything up!" << std::endl;

    InitSdk();

    auto ProcessEventOffSet = BaseAddress() + 0x9A9E70;

    MH_CreateHook(reinterpret_cast<LPVOID>(ProcessEventOffSet), ProcessEventHook, reinterpret_cast<LPVOID*>(&ProcessEvent));
    MH_EnableHook(reinterpret_cast<LPVOID>(ProcessEventOffSet));

    std::cout << "Everything Setup!" << std::endl;

    return NULL;
}

BOOL APIENTRY DllMain(HMODULE mod, DWORD reason, LPVOID res)
{
    if (reason == DLL_PROCESS_ATTACH) {
        CreateThread(0, 0, MainThread, mod, 0, 0);
    }

    return TRUE;
}