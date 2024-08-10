#include <Windows.h>
#include <stdio.h>
#include <bits/stdc++.h>
#include "conio.h"
using namespace std;
int main()
{
	while(true){
        SYSTEMTIME time;
        GetLocalTime(&time);
        printf("ÄúµÄÊ±¼ä£º%04d/%02d/%02d %02d:%02d:%02d\n", time.wYear, time.wMonth, time.wDay, time.wHour, time.wMinute,time.wSecond);
        Sleep(1000);
        system("cls");
	}
    return 0;
}
