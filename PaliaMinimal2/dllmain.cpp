#include "PaliaInternal.hpp"

#pragma warning (disable : 4996)

BOOL WINAPI MainThread(LPVOID lpParam) {
    PaliaInternal *lpPaliaInternal = new PaliaInternal();
    if (NULL == lpPaliaInternal) {
        fprintf(
            stderr,
            "[-] Failed to allocate memory for PaliaInternal\n"
        );
        return FALSE;
    }

    if (!lpPaliaInternal->InitInternal()) {
        fprintf(
            stderr,
            "[-] Failed to initialize PaliaInternal\n"
        );
        return FALSE;
    }

    printf("[+] Initialized PaliaInternal\n");

    while (TRUE) {
        Sleep(250);
    }

    FreeLibraryAndExitThread((HMODULE) lpParam, 0);

    return TRUE;
}

BOOL APIENTRY DllMain(
    HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
) {
    HANDLE hThread = NULL;
    DWORD dwThreadId = 0;

    FILE *fpStdout = NULL;
    FILE *fpStderr = NULL;

    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH:

//#ifdef _DEBUG
            if (!AllocConsole()) {
                return FALSE;
            }

            freopen("CONOUT$", "w", stdout);
            freopen("CONOUT$", "w", stderr);
//#endif

            hThread = CreateThread(
                NULL, 0,
                (LPTHREAD_START_ROUTINE) MainThread,
                hModule,
                0,
                &dwThreadId
            );

            if (NULL == hThread) {
                fprintf(
                    stderr,
                    "[-] CreateThread() - E%lu\n",
                    GetLastError()
                );
                return FALSE;
            }
            break;
        default:
            break;
    }

    return TRUE;
}