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
            MessageBox(NULL,"���Ϻã�����ҲҪ��˯Ŷ��ף�����彡����","UildWork",MB_OK);
        }
        if(time.wHour>=12&&time.wHour<18){
            MessageBox(NULL,"����ã����������������ɣ�ף�㿪�����ģ�","UildWork",MB_OK);
        }
        if(time.wHour>=6&&time.wHour<12){
            MessageBox(NULL,"����ã������ֻ���ʲô���ĺ����أ�ף��һ����˳��","UildWork",MB_OK);
        }
        if(time.wHour>=0&&time.wHour<6){
            MessageBox(NULL,"�賿�ã����õ�һ���ֿ�ʼ�ˣ�ף����ҵ�гɣ�","UildWork",MB_OK);
        }
    while(true){
        cout<<"��ӭ����UildWork�������"<<endl<<endl;
        printf("����ʱ�䣺%04d/%02d/%02d %02d:%02d\n", time.wYear, time.wMonth, time.wDay, time.wHour, time.wMinute);
        cout<<endl<<"��1��ʵʱʱ��"<<endl;
        cout<<"��2������ʱ"<<endl;
        cout<<"��3������ʱ"<<endl;
        cout<<"��ѡ��ģʽ��";
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
