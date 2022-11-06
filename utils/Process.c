//
// Created by Mrwyw on 11/7/2022.
//

#include <stdio.h>
#include <windows.h>
#include <tlhelp32.h>
#include <string.h>
#include <locale.h>

#include "Process.h"

DWORD findPidByName(LPSTR pname)
{
    HANDLE h;
    PROCESSENTRY32 procSnapshot;
    h = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    procSnapshot.dwSize = sizeof(PROCESSENTRY32);

    do
    {
        if (!strcmp(procSnapshot.szExeFile, pname))
        {
            DWORD pid = procSnapshot.th32ProcessID;
            CloseHandle(h);
#ifdef _DEBUG
            printf(TEXT("[+] PID found: %ld\n"), pid);
#endif
            return pid;
        }
    } while (Process32Next(h, &procSnapshot));

    CloseHandle(h);
    return 0;
}
