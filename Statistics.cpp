#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "conio.h"

using namespace std;

int main()
{
    cout<<"��ӭ����UildWorkͼ��ͳ�ƣ�"<<endl<<endl;
    system("title UildWork");
    int a,b;
    char mb;
    cout<<"���ģ��"<<endl;
    cout<<"��1��Ѥ������"<<endl;
    cout<<"��2���������"<<endl;
    cout<<"��3���հ��ĵ�"<<endl;
    cout<<"��ѡ�����ģ��:";
    mb=getch();
    cout<<mb<<endl;
    if(mb=='1'){
        char cl;
        cout<<endl;
        cout<<"0=black, 1=blue, 2=green, 3=lake blue, 4=red, 5=purple, 6=yellow, 7=white, 8=grey, 9=light blue"<<endl<<"A=light green, B=cyan, C=light red, D=light purple, E=light yellow, F=bright white"<<endl<<endl;
        cout<<"��ѡ�񱳾���ɫ:";
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
        cout<<"��ѡ��������ɫ:";
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
    cout<<"������Ҫͳ�Ƶ�����������";
    cin>>a;
    string k[a];
    for(int i=0;i<a;i++){
        cout<<"�������"<<i+1<<"����������:";
        cin>>k[i];
    }
    cout<<endl<<"������ͳ�Ƶ���Ŀ������";
    cin>>b;
    string j[b];
    for(int i=0;i<b;i++){
        cout<<"�������"<<i+1<<"����Ŀ����:";
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
        cout<<endl<<"Ŀ¼"<<endl;
        cout<<"��1���༭"<<endl;
        cout<<"��2�����"<<endl;
        cout<<"��3������"<<endl;
        cout<<"��4������"<<endl;
        cout<<"��5���˳�"<<endl;
        char p;
        cout<<endl<<"������ѡ�";
        p=getch();
        cout<<p;
        if(p=='1'){
            int n,m,o;
            cout<<endl<<"������༭���ݵ�������";
            cin>>n;
            cout<<"������༭���ݵ�������";
            cin>>m;
            cout<<"���������ݣ�";
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
            cout<<endl<<"������ɣ����������װĿ¼�鿴Statistics.txt"<<endl<<endl;
            system("pause");
        }
        if(p=='3'){
            cout<<endl<<endl;
            cout<<"�������밴1���������밴2"<<endl;
            char js='3';
            js=getch();
            int jshl=0;
            long long zs=0;
            double pj=0;
            if(js='1'){
                cout<<"������Ҫ�����������";
                cin>>jshl;
                jshl--;
                for(int i=0;i<b;i++){
                    zs=zs+x[jshl][i];
                }
                pj=zs/b;
            }
            else{
                cout<<"������Ҫ�����������";
                cin>>jshl;
                jshl--;
                for(int i=0;i<a;i++){
                    zs=zs+x[i][jshl];
                }
                pj=zs/a;
            }
            system("cls");
            cout<<"��������"<<endl;
            cout<<"������"<<zs<<endl;
            cout<<"ƽ����"<<pj<<endl;
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
