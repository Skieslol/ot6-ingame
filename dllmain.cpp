#include <Windows.h>
#include "minhook/MinHook.h"

#pragma comment(lib, "minhook/libMinHook.x86.lib")

BOOL APIENTRY DllMain(HMODULE mod, DWORD reason, LPVOID res)
{
    if (reason == DLL_PROCESS_ATTACH) {

    }

    return TRUE;
}