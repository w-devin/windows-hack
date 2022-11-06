//
// Created by w-devin on 11/7/2022.
//

#include <stdio.h>
#include <windows.h>

#include "ReflectiveDLLInjection.h"


HANDLE WINAPI ReflectiveDLLInject(HANDLE hProcess, LPVOID lpBuffer, DWORD dwLength, LPVOID lpParameter, LPVOID lpLoaderFunName) {
    printf("dll will be injected into remote process");
}