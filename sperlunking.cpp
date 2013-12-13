// sperlunking.cpp : main project file.


#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	HWND hWnd = FindWindow(NULL, "Read Memory Window");
	DWORD ProcessId;
	ProcessId = GetProcessId(hWnd);
	fprintf("Process ID: %d\n", ProcessId);
	exit(0);

	GetWindowThreadProcessId(hWnd, &ProcessId);
	HANDLE hProcess = OpenProcess(PROCESS_VM_READ,FALSE, ProcessId);

	SIZE_T NumberOfBytesRead;
	CHAR Buffer[128] = {0};
	dwAddr = 0x0012FD6C; //address of array to get
	BOOL sucess = ReadProcessMemory(hProcess, &dwAddr, &Buffer, 128, &NumberOfBytesRead);

}
