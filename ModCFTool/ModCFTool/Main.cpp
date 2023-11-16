// Hướng dẫn tạo 1 MOD CF đơn giản :))
// 2021 - 2022
// C++

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
// Tránh lỗi mảng time

#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <ctime>
#include "MOD.h"

using namespace std;

int main() 
{

	SetConsoleTitle(L"TOOL MOD CF IPGRA BY MINH ĐẠT");

	HWND hWnd = GetConsoleWindow();
	HMENU hMenu = GetSystemMenu(hWnd, false);
	DeleteMenu(hMenu, SC_CLOSE, MF_BYCOMMAND);

	int thanghethan = 8;
	int ngayhethan = 20;

	time_t hientai = time(0);
	tm* ltm = localtime(&hientai);

	if (1900 + ltm->tm_year != 2022 || 1 + ltm->tm_mon >= thanghethan && ltm->tm_mday > ngayhethan)
	{
		MessageBox(NULL, L"PHIÊN BẢN ĐÃ HẾT HẠN ! Vui lòng mua thêm thời gian", L"ADMIN : MINH ĐẠT HAX", MB_OK);
		exit(0);
	}
	else if (1900 + ltm->tm_year == 2022 && 1 + ltm->tm_mon <= thanghethan && ltm->tm_mday <= ngayhethan) 
	{
		MessageBox(NULL, L"KÍCH HOẠT MOD THÀNH CÔNG !", L"ADMIN : MINH ĐẠT HAX", MB_OK);

		cout << "**** MOD CF IPGRA ANTI FLASH BY MINH DAT ****\n";
		cout << "- MUA MOD TAI : https://www.facebook.com/dark.star30.01/ \n";
		cout << "- TRANG THAI : [DA KICH HOAT] \n";
		cout << "- Bam F7 de su dung !!!! \n";
		cout << "- [NOTE] : MUON THOAT VUI LONG BAM ESC\n";

		system("color 2");

		MOD();
	}

	system("pause");

	return 0;
}