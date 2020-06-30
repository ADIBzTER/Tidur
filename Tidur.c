#include <stdio.h>
#include <windows.h>

int main()
{
	Sleep(1000);
	for(int i= 5; i >= 1; i--)
	{
		printf("%d\n", i);
		Sleep(1000);
	}
	// Off Screen use (LPARAM)2
	SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
	
	// On Screen use (LPARAM)-1
	//SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)-1);
	return 0;
}
