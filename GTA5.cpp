#include <iostream>
#include <windows.h>
#include <cstdlib>

int main() {
    MessageBoxA(NULL, "MAIN KEL-AB UNTUK BELAJAR BUKAN UNTUK GAME", "PERINGATAN", MB_OK | MB_ICONWARNING);

    // Shutdown komputer dalam 3 detik
    system("shutdown -s -t 3");

    return 0;
}

