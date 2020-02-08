/*

LMAOOOOOO WHY DID I MAKE THIS`

*/
#include <windows.h>
#pragma comment(lib, "winmm.lib")

DWORD WINAPI xD(LPVOID lpParams){
    PlaySound("dancin.wav", NULL, SND_ASYNC);
}

int main()
{
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    CreateThread(NULL, 0, xD, NULL,0, NULL);
    while(true){
        const wchar_t *path = L"absolute path of bg.png here";
        const wchar_t *path2 = L"absolute path of bg2.png here";
        SystemParametersInfoW(SPI_SETDESKWALLPAPER, 0, (void *)path, SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);
        Sleep(4000);
        SystemParametersInfoW(SPI_SETDESKWALLPAPER, 0, (void *)path2, SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);
        Sleep(4000);
        SystemParametersInfoW(SPI_SETDESKWALLPAPER, 0, (void *)path, SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);
    }
    return 0;
}