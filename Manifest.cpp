#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "conio.h"

using namespace std;

int main()
{
    int a;
    string name;
    system("title UildWork");
    cout<<"欢迎来到UildWork任务清单！"<<endl<<endl;
    cout<<"您有多少个事项？";
    cin>>a;
    cout<<endl;
    string s[a];
    int n[a]={0};
    cout<<"命名你的清单：";
    cin>>name;
    cout<<endl;
    for(int i=0;i<a;i++){
        cout<<"第"<<i+1<<"项:";
        cin>>s[i];
    }
    while(true){
        system("cls");
        cout<<name<<endl;
        for(int i=0;i<a;i++){
            cout<<"第"<<i+1<<"项:"<<s[i];
            if(n[i]==0){
                cout<<" 未完成"<<endl;
            }
            if(n[i]==1){
                cout<<" 已完成"<<endl;
            }
        }
        cout<<endl;
        char x;
        cout<<"【1】完成"<<endl;
        cout<<"【2】编辑"<<endl;
        cout<<"【3】退出"<<endl;
        cout<<endl<<"请输入选项：";
        x=getch();
        cout<<x;
        cout<<endl;
        if(x=='1'){
            int fi;
            cout<<"您完成了第几项：";
            cin>>fi;
            n[fi-1]=1;
        }
        if(x=='2'){
            int bu;
            string nr;
            cout<<"您要编辑第几项：";
            cin>>bu;
            cout<<endl<<"请输入您要编辑的内容：";
            cin>>nr;
            s[bu-1]=nr;
        }
        if(x=='3'){
            return 0;
        }
    }
    return 0;
}
