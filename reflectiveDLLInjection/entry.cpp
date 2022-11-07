//
// Created by w-devin on 11/5/2022.
//

#include <stdio.h>
#include <windows.h>

#include "Process.h"

#include "ReflectiveDLLInjection.h"

int main(INT argc, LPSTR argv[]) {
    if (3 != argc) {
        printf("Usage: %s <pid|process_name> <dll_path>\n", argv[0]);
        exit(0);
    }

    DWORD pid = atoi(argv[1]);

    if (!pid)
        pid = findPidByName(argv[1]);

    printf("target pid is: %d\n", pid);

    ReflectiveDLLInject(NULL, NULL, 0, NULL, NULL);
}
