#include <windows.h>
#include <stdio.h>
#include <thread>
#include <chrono>
#include <iostream>
#include <tlhelp32.h>

// via https://stackoverflow.com/a/24646860
DWORD FindProcessId(char* processName)
{
    // strip path
    char* p = strrchr(processName, '\\');
    if(p)
        processName = p+1;

    PROCESSENTRY32 processInfo;
    processInfo.dwSize = sizeof(processInfo);

    HANDLE processesSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);
    if ( processesSnapshot == INVALID_HANDLE_VALUE )
        return 0;

    Process32First(processesSnapshot, &processInfo);
    if ( !strcmp(processName, processInfo.szExeFile) )
    {
        CloseHandle(processesSnapshot);
        return processInfo.th32ProcessID;
    }

    while ( Process32Next(processesSnapshot, &processInfo) )
    {
        if ( !strcmp(processName, processInfo.szExeFile) )
        {
          CloseHandle(processesSnapshot);
          return processInfo.th32ProcessID;
        }
    }

    CloseHandle(processesSnapshot);
    return 0;
}

int WaitForProcessExit(int pid)
{
	HANDLE h=OpenProcess(SYNCHRONIZE , true, pid);
	if (!h) {
		// Already not running
		return 0;
	}
	WaitForSingleObject(h, INFINITE );
	return 1; // Was running, but no longer
}

void Takeover(UINT offendingKeys[])
{
	//Register hotkey
	for (int i = 0; i < 10; i++) {
		RegisterHotKey(NULL, i, 0x1 + 0x2 + 0x4 + 0x8 | MOD_NOREPEAT, offendingKeys[i]);
	}
}

void Relinquish()
{
	//deregister hotkeys by ID
	for (int i = 0; i < 10; i++) {
		UnregisterHotKey(NULL, i);
	}
}

int main(int argc, wchar_t* argv[])
{
	//Build Array Of Keys To Unregister
	//These map to W, T, Y, O, P, D, L, X, N, and Space, respectively.
	UINT offendingKeys[10] = { 0x57, 0x54, 0x59, 0x4F, 0x50, 0x44, 0x4C, 0x58, 0x4E, 0x20 };

	while ( true )
	{
		Takeover(offendingKeys);
	
		// Wait for Explorer to start
		until ( pid = FindProcessId("explorer.exe") )
		{
			// Only check for Explorer once a second
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
	
		/* Sleep for a few seconds to make sure Explorer has time to
		   attempt to register the Office hotkeys, and get blocked by 
	   	   our hotkeys */
		std::this_thread::sleep_for(std::chrono::milliseconds(4000));

		Relinquish();
		
		// Wait for Explorer to exit
		WaitForProcessExit(pid);
		// Then do it all over again, forever
		// Hey, it's better than passing butter
	}

	// Currently unreachable, perhaps add a single loop commandline option?
	return 1;
}
