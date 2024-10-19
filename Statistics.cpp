#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "conio.h"

using namespace std;

int main()
{
    cout<<"欢迎来到UildWork图表统计！"<<endl<<endl;
    system("title UildWork");
    int a,b;
    char mb;
    cout<<"表格模板"<<endl;
    cout<<"【1】绚丽背景"<<endl;
    cout<<"【2】多彩字体"<<endl;
    cout<<"【3】空白文档"<<endl;
    cout<<"请选择你的模板:";
    mb=getch();
    cout<<mb<<endl;
    if(mb=='1'){
        char cl;
        cout<<endl;
        cout<<"0=black, 1=blue, 2=green, 3=lake blue, 4=red, 5=purple, 6=yellow, 7=white, 8=grey, 9=light blue"<<endl<<"A=light green, B=cyan, C=light red, D=light purple, E=light yellow, F=bright white"<<endl<<endl;
        cout<<"请选择背景颜色:";
        cl=getch();
        cout<<cl;
        if(cl=='0'){system("color 07");}
        if(cl=='1'){system("color 17");}
        if(cl=='2'){system("color 27");}
        if(cl=='3'){system("color 37");}
        if(cl=='4'){system("color 47");}
        if(cl=='5'){system("color 57");}
        if(cl=='6'){system("color 67");}
        if(cl=='7'){system("color 70");}
        if(cl=='8'){system("color 87");}
        if(cl=='9'){system("color 97");}
        if(cl=='A'){system("color A1");}
        if(cl=='B'){system("color B1");}
        if(cl=='C'){system("color C1");}
        if(cl=='D'){system("color D1");}
        if(cl=='E'){system("color E1");}
        if(cl=='F'){system("color F1");}
    }
    if(mb=='2'){
        char cl;
        cout<<endl;
        cout<<"0=black, 1=blue, 2=green, 3=lake blue, 4=red, 5=purple, 6=yellow, 7=white, 8=grey, 9=light blue"<<endl<<"A=light green, B=cyan, C=light red, D=light purple, E=light yellow, F=bright white"<<endl<<endl;
        cout<<"请选择字体颜色:";
        cl=getch();
        cout<<cl;
        if(cl=='0'){system("color 70");}
        if(cl=='1'){system("color 71");}
        if(cl=='2'){system("color 72");}
        if(cl=='3'){system("color 73");}
        if(cl=='4'){system("color 74");}
        if(cl=='5'){system("color 75");}
        if(cl=='6'){system("color 76");}
        if(cl=='7'){system("color 07");}
        if(cl=='8'){system("color 78");}
        if(cl=='9'){system("color 79");}
        if(cl=='A'){system("color 1A");}
        if(cl=='B'){system("color 1B");}
        if(cl=='C'){system("color 1C");}
        if(cl=='D'){system("color 1D");}
        if(cl=='E'){system("color 1E");}
        if(cl=='F'){system("color 1F");}
    }
    system("cls");
    cout<<"请输入要统计的物体数量：";
    cin>>a;
    string k[a];
    for(int i=0;i<a;i++){
        cout<<"请输入第"<<i+1<<"个物体名称:";
        cin>>k[i];
    }
    cout<<endl<<"请输入统计的项目数量：";
    cin>>b;
    string j[b];
    for(int i=0;i<b;i++){
        cout<<"请输入第"<<i+1<<"个项目名称:";
        cin>>j[i];
    }
    system("cls");
    float x[a][b]={0};
    for(int i=0;i<a;i++){
        for(int l=0;l<b;l++){
            x[i][l]=0;
        }
    }
    while(true){
        for(int i=0;i<a;i++){
            cout<<k[i]<<" ";
            for(int l=0;l<b;l++){
                cout<<j[l]<<":"<<x[i][l]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<"目录"<<endl;
        cout<<"【1】编辑"<<endl;
        cout<<"【2】清空"<<endl;
        cout<<"【3】计算"<<endl;
        cout<<"【4】导出"<<endl;
        cout<<"【5】退出"<<endl;
        char p;
        cout<<endl<<"请输入选项：";
        p=getch();
        cout<<p;
        if(p=='1'){
            int n,m,o;
            cout<<endl<<"请输入编辑数据的行数：";
            cin>>n;
            cout<<"请输入编辑数据的列数：";
            cin>>m;
            cout<<"请输入数据：";
            cin>>o;
            x[n-1][m-1]=o;
        }
        if(p=='2'){
            for(int i=0;i<a;i++){
                for(int l=0;l<b;l++){
                    x[i][l]=0;
                }
            }
        }
        if(p=='4'){
            ofstream outfile;
            outfile.open("Statistics.txt");
            for(int i=0;i<a;i++){
                outfile<<k[i]<<" ";
                for(int l=0;l<b;l++){
                    outfile<<j[l]<<x[i][l]<<" ";
                }
                outfile<<endl;
            }
            outfile.close();
            cout<<endl<<"导出完成！请至软件安装目录查看Statistics.txt"<<endl<<endl;
            system("pause");
        }
        if(p=='3'){
            cout<<endl<<endl;
            cout<<"计算行请按1，计算列请按2"<<endl;
            char js='3';
            js=getch();
            int jshl=0;
            long long zs=0;
            double pj=0;
            if(js='1'){
                cout<<"请输入要计算的行数：";
                cin>>jshl;
                jshl--;
                for(int i=0;i<b;i++){
                    zs=zs+x[jshl][i];
                }
                pj=zs/b;
            }
            else{
                cout<<"请输入要计算的列数：";
                cin>>jshl;
                jshl--;
                for(int i=0;i<a;i++){
                    zs=zs+x[i][jshl];
                }
                pj=zs/a;
            }
            system("cls");
            cout<<"计算结果："<<endl;
            cout<<"总数："<<zs<<endl;
            cout<<"平均："<<pj<<endl;
            cout<<endl;
            system("pause");
        }
        if(p=='5'){
            return 0;
        }
        system("cls");
    }
    return 0;
}
