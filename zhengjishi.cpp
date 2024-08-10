#include <Windows.h>
#include <stdio.h>
#include <bits/stdc++.h>
#include "conio.h"
using namespace std;
int main()
{
    cout<<"欢迎来到UildWork正计时！"<<endl<<endl;
    cout<<"单击s键开始计时";
    char start='n';
    while(start!='s'){
        start=getch();
    }
    system("cls");
    //测试编号24080001通过
    int shi=0,fen=0,miao=0;
    while(true){
        cout<<endl;
        cout<<shi<<"时"<<fen<<"分"<<miao<<"秒"<<endl<<endl;
        Sleep(1000);
        miao++;
        if(miao==60){
            miao=0;
            fen++;
        }
        if(fen==60){
            fen=0;
            shi++;
        }
        system("cls");
    }
	return 0;
}
