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
    cout<<"��ӭ����UildWork�����嵥��"<<endl<<endl;
    cout<<"���ж��ٸ����";
    cin>>a;
    cout<<endl;
    string s[a];
    int n[a]={0};
    cout<<"��������嵥��";
    cin>>name;
    cout<<endl;
    for(int i=0;i<a;i++){
        cout<<"��"<<i+1<<"��:";
        cin>>s[i];
    }
    while(true){
        system("cls");
        cout<<name<<endl;
        for(int i=0;i<a;i++){
            cout<<"��"<<i+1<<"��:"<<s[i];
            if(n[i]==0){
                cout<<" δ���"<<endl;
            }
            if(n[i]==1){
                cout<<" �����"<<endl;
            }
        }
        cout<<endl;
        char x;
        cout<<"��1�����"<<endl;
        cout<<"��2���༭"<<endl;
        cout<<"��3���˳�"<<endl;
        cout<<endl<<"������ѡ�";
        x=getch();
        cout<<x;
        cout<<endl;
        if(x=='1'){
            int fi;
            cout<<"������˵ڼ��";
            cin>>fi;
            n[fi-1]=1;
        }
        if(x=='2'){
            int bu;
            string nr;
            cout<<"��Ҫ�༭�ڼ��";
            cin>>bu;
            cout<<endl<<"��������Ҫ�༭�����ݣ�";
            cin>>nr;
            s[bu-1]=nr;
        }
        if(x=='3'){
            return 0;
        }
    }
    return 0;
}
