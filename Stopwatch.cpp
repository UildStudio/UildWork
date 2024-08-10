#include <Windows.h>
#include <stdio.h>
#include <bits/stdc++.h>
#include "conio.h"
using namespace std;
int main()
{
    SYSTEMTIME time;
    GetLocalTime(&time);
    if(time.wHour>=18){
            MessageBox(NULL,"晚上好，今天也要早睡哦，祝你身体健康！","UildWork",MB_OK);
        }
        if(time.wHour>=12&&time.wHour<18){
            MessageBox(NULL,"下午好，快享受美妙的阳光吧，祝你开开心心！","UildWork",MB_OK);
        }
        if(time.wHour>=6&&time.wHour<12){
            MessageBox(NULL,"上午好，今天又会有什么样的好运呢？祝你一帆风顺！","UildWork",MB_OK);
        }
        if(time.wHour>=0&&time.wHour<6){
            MessageBox(NULL,"凌晨好，美好的一天又开始了，祝你事业有成！","UildWork",MB_OK);
        }
    while(true){
        cout<<"欢迎来到UildWork智能秒表！"<<endl<<endl;
        printf("您的时间：%04d/%02d/%02d %02d:%02d\n", time.wYear, time.wMonth, time.wDay, time.wHour, time.wMinute);
        cout<<endl<<"【1】实时时钟"<<endl;
        cout<<"【2】正计时"<<endl;
        cout<<"【3】倒计时"<<endl;
        cout<<"请选择模式：";
        char ms;
        ms=getch();
        cout<<ms;
        if(ms=='1')system("start shishishizhong.exe");
        if(ms=='2')system("start zhengjishi.exe");
        if(ms=='3')system("start daojishi.exe");
        system("cls");
    }
    return 0;
}
