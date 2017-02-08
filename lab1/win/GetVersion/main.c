#include <windows.h>
#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
	DWORD dwVersion = 0;
	DWORD dwMajorVersion = 0;
	DWORD dwMinorVersion = 0;
	DWORD dwBuild = 0;
	dwVersion = GetVersion();
	dwMajorVersion = (DWORD)(LOBYTE(LOWORD(dwVersion)));
	dwMinorVersion = (DWORD)(HIBYTE(LOWORD(dwVersion)));
	if (dwVersion < 0x80000000)
		dwBuild = (DWORD)(HIWORD(dwVersion));
	printf("Windows version: %d.%d, build version: %d\n", dwMajorVersion, dwMinorVersion, dwBuild);
	return 0;
}