#include <Windows.h>
#include <stdio.h>
#include <bits/stdc++.h>
#include "conio.h"
using namespace std;
int main()
{
    cout<<"��ӭ����UildWork����ʱ��"<<endl<<endl;
    int shi=0,fen=0,miao=0;
    cout<<"����Сʱ��";
    cin>>shi;
    cout<<"������ӣ�";
    cin>>fen;
    cout<<"�����룺 ";
    cin>>miao;
    cout<<"����s����ʼ��ʱ";
    char start='n';
    while(start!='s'){
        start=getch();
    }
    system("cls");
    //���Ա��24080002ͨ��
    while(true){
        cout<<endl;
        cout<<shi<<"ʱ"<<fen<<"��"<<miao<<"��"<<endl<<endl;
        Sleep(1000);
        miao--;
        if(miao==-1){
            miao=59;
            fen--;
        }
        if(fen==-1){
            fen=59;
            shi--;
        }
        if(shi==-1){
            system("cls");
            system("color 47");
            cout<<endl<<"��ʱ�ѽ�����";
            while(true){
                Beep(880,500);
                //���Ա��24080003ͨ��
            }
        }
        system("cls");
    }
	return 0;
}
