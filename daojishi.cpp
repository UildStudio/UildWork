#include <Windows.h>
#include <stdio.h>
#include <bits/stdc++.h>
#include "conio.h"
using namespace std;
int main()
{
    cout<<"欢迎来到UildWork倒计时！"<<endl<<endl;
    int shi=0,fen=0,miao=0;
    cout<<"输入小时：";
    cin>>shi;
    cout<<"输入分钟：";
    cin>>fen;
    cout<<"输入秒： ";
    cin>>miao;
    cout<<"单击s键开始计时";
    char start='n';
    while(start!='s'){
        start=getch();
    }
    system("cls");
    //测试编号24080002通过
    while(true){
        cout<<endl;
        cout<<shi<<"时"<<fen<<"分"<<miao<<"秒"<<endl<<endl;
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
            cout<<endl<<"计时已结束！";
            while(true){
                Beep(880,500);
                //测试编号24080003通过
            }
        }
        system("cls");
    }
	return 0;
}
