#include <iostream>
#include <stdlib.h>
#include "conio.h"

using namespace std;

int main()
{
    system("title UildWork");
    while(true){
    cout<<"��ӭ����UildWork!"<<endl<<endl;
    cout<<"Ŀ¼"<<endl;
    cout<<"��1��ͼ��ͳ��"<<endl;
    cout<<"��2�������嵥"<<endl;
    cout<<"��3���������"<<endl;
    cout<<endl<<"������ѡ�";
    char a;
    a=getch();
    if(a=='1')system("start Statistics.exe");
    if(a=='2')system("start Manifest.exe");
    if(a=='3')system("start Stopwatch.exe");
    system("cls");
    }
    return 0;
}
