#include <iostream>
#include <stdlib.h>
#include "conio.h"

using namespace std;

int main()
{
    system("title UildWork");
    while(true){
    cout<<"欢迎来到UildWork!"<<endl<<endl;
    cout<<"目录"<<endl;
    cout<<"【1】图表统计"<<endl;
    cout<<"【2】任务清单"<<endl;
    cout<<"【3】智能秒表"<<endl;
    cout<<endl<<"请输入选项：";
    char a;
    a=getch();
    if(a=='1')system("start Statistics.exe");
    if(a=='2')system("start Manifest.exe");
    if(a=='3')system("start Stopwatch.exe");
    system("cls");
    }
    return 0;
}
