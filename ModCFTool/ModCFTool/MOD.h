#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <TlHelp32.h>
#include <stdio.h>
#include <comdef.h>

using namespace std;

void chay_ngam(int visibility)
{
    HWND window; //defines a handle to a window
    window = FindWindowA("ConsoleWindowClass", NULL); //returns the handle of the current window
    ShowWindow(window, visibility); //if visibility=0, then it runs in the background. If not, then the window shows.
}

DWORD GetProcId(const char* procName)
{
    DWORD procId = 0;
    HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

    if (hSnap != INVALID_HANDLE_VALUE)
    {
        PROCESSENTRY32 procEntry;
        procEntry.dwSize = sizeof(procEntry);

        if (Process32First(hSnap, &procEntry))
        {
            do
            {
                _bstr_t b(procEntry.szExeFile);
                const char* procEntry1 = b;

                if (!_stricmp(procEntry1, procName))
                {
                    procId = procEntry.th32ProcessID;
                    break;
                }
            } while (Process32Next(hSnap, &procEntry));
        }
    }
    CloseHandle(hSnap);
    return procId;
}

void MOD() 
{
    fstream fileREZ284;
    fileREZ284.open("RF284.REZ");

    fstream fileREZ112;
    fileREZ112.open("rf112.rez");

    while (1) 
    {
        if (GetProcId("Taskmgr.exe")) 
        {
            system("taskkill/IM Taskmgr.exe");
            fileREZ284.open("RF284.REZ");
            fileREZ284.seekp(87, ios::beg);
            fileREZ284 << "v";
            fileREZ284.seekp(88, ios::beg);
            fileREZ284 << "1";
            fileREZ284.seekp(89, ios::beg);
            fileREZ284 << ".";
            fileREZ284.seekp(90, ios::beg);
            fileREZ284 << "0";
            fileREZ284.close();

            fileREZ112.open("rf112.rez");
            fileREZ112 << "\n                                                            \n                      ";

            fileREZ112.close();

            MessageBox(NULL, L"ĐỀ NGHỊ TẮT TASK MANAGER VÀ MỞ LẠI MOD !", L"SECURITY OF MOD", MB_OK);
            exit(0);
        }

        if (GetAsyncKeyState(VK_F7) & 1) 
        {
            chay_ngam(0);
            for (int x = 87; x <= 90; x++)
            {
                fileREZ284.seekp(x, ios::beg);
                fileREZ284 << " ";
            }

            fileREZ112 << "\nRezMgr Version 1 Copyright (C) 1995 MONOLITH INC.           \nLithTech Resource File";

            fileREZ284.close();
            fileREZ112.close();

            break;
        }

        if (GetAsyncKeyState(VK_ESCAPE) & 1)
        {
            fileREZ284.open("RF284.REZ");
            fileREZ284.seekp(87, ios::beg);
            fileREZ284 << "v";
            fileREZ284.seekp(88, ios::beg);
            fileREZ284 << "1";
            fileREZ284.seekp(89, ios::beg);
            fileREZ284 << ".";
            fileREZ284.seekp(90, ios::beg);
            fileREZ284 << "0";
            fileREZ284.close();

            fileREZ112.open("rf112.rez");
            fileREZ112 << "\n                                                            \n                      ";

            fileREZ112.close();

            exit(0);
        }

    }

    MessageBox(NULL, L"ĐÃ CHỈNH SỬA REZ THÀNH CÔNG !", L"ADMIN : MINH ĐẠT", MB_OK);

	while (1) 
	{
        if (GetProcId("Taskmgr.exe"))
        {
            system("taskkill/IM Taskmgr.exe");
            fileREZ284.open("RF284.REZ");
            fileREZ284.seekp(87, ios::beg);
            fileREZ284 << "v";
            fileREZ284.seekp(88, ios::beg);
            fileREZ284 << "1";
            fileREZ284.seekp(89, ios::beg);
            fileREZ284 << ".";
            fileREZ284.seekp(90, ios::beg);
            fileREZ284 << "0";
            fileREZ284.close();

            fileREZ112.open("rf112.rez");
            fileREZ112 << "\n                                                            \n                      ";

            fileREZ112.close();

            MessageBox(NULL, L"ĐỀ NGHỊ TẮT TASK MANAGER VÀ MỞ LẠI MOD !", L"SECURITY OF MOD", MB_OK);
            exit(0);
        }

        if (GetProcId("crossfire.exe"))
        {
            while (1) 
            {
                if (GetProcId("Taskmgr.exe"))
                {
                    system("taskkill/IM Taskmgr.exe");
                    fileREZ284.open("RF284.REZ");
                    fileREZ284.seekp(87, ios::beg);
                    fileREZ284 << "v";
                    fileREZ284.seekp(88, ios::beg);
                    fileREZ284 << "1";
                    fileREZ284.seekp(89, ios::beg);
                    fileREZ284 << ".";
                    fileREZ284.seekp(90, ios::beg);
                    fileREZ284 << "0";
                    fileREZ284.close();

                    fileREZ112.open("rf112.rez");
                    fileREZ112 << "\n                                                            \n                      ";

                    fileREZ112.close();

                    MessageBox(NULL, L"ĐỀ NGHỊ TẮT TASK MANAGER VÀ MỞ LẠI MOD !", L"SECURITY OF MOD", MB_OK);
                    exit(0);
                }

                if (!GetProcId("crossfire.exe")) // Backup nếu tắt game
                {
                    fileREZ284.open("RF284.REZ");
                    fileREZ284.seekp(87, ios::beg);
                    fileREZ284 << "v";
                    fileREZ284.seekp(88, ios::beg);
                    fileREZ284 << "1";
                    fileREZ284.seekp(89, ios::beg);
                    fileREZ284 << ".";
                    fileREZ284.seekp(90, ios::beg);
                    fileREZ284 << "0";
                    fileREZ284.close();

                    fileREZ112.open("rf112.rez");
                    fileREZ112 << "\n                                                            \n                      ";

                    fileREZ112.close();

                    exit(0);
                }
            }
        }

        if (GetAsyncKeyState(VK_ESCAPE) & 1) 
        {
            fileREZ284.open("RF284.REZ");
            fileREZ284.seekp(87, ios::beg);
            fileREZ284 << "v";
            fileREZ284.seekp(88, ios::beg);
            fileREZ284 << "1";
            fileREZ284.seekp(89, ios::beg);
            fileREZ284 << ".";
            fileREZ284.seekp(90, ios::beg);
            fileREZ284 << "0";
            fileREZ284.close();

            fileREZ112.open("rf112.rez");
            fileREZ112 << "\n                                                            \n                      ";

            fileREZ112.close();

            exit(0);
        }

        Sleep(2000);

	}

}