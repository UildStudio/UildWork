#include <Windows.h>
#include <stdio.h>
#include <bits/stdc++.h>
#include "conio.h"
using namespace std;
int main()
{
    cout<<"��ӭ����UildWork����ʱ��"<<endl<<endl;
    cout<<"����s����ʼ��ʱ";
    char start='n';
    while(start!='s'){
        start=getch();
    }
    system("cls");
    //���Ա��24080001ͨ��
    int shi=0,fen=0,miao=0;
    while(true){
        cout<<endl;
        cout<<shi<<"ʱ"<<fen<<"��"<<miao<<"��"<<endl<<endl;
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
