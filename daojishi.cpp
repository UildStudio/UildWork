#include <Windows.h>
#include <stdio.h>
#include <bits/stdc++.h>
#include "conio.h"
#define	qdo 262
#define qre 294
#define qmi 330		//qǰ׺Ϊ������1��׺Ϊ������sǰ׺Ϊ������
#define qfa 349
#define qso 392
#define qla 440
#define qsi 494
#define do 523
#define re 578
#define mi 659
#define fa 698
#define so 784
#define la 880
#define si 988
#define do1 1046
#define re1 1175
#define mi1 1318
#define fa1 1480
#define so1 1568
#define la1 1760
#define si1 1976
#define sqdo 277
#define sqre 311
#define sqfa 370
#define sqso 415
#define sqla 466
#define sdo 554
#define sre 622
#define sfa 740
#define sso 831
#define sla 932
#define sdo1 1046
#define sre1 1245
#define sfa1 1480
#define sso1 1661
#define sla1 1865
using namespace std;
int main()
{
    cout<<"��ӭ����UildWork����ʱ��"<<endl<<endl;
    int shi=0,fen=0,miao=0;
    char ms;
    cout<<"����Сʱ��";
    cin>>shi;
    cout<<"������ӣ�";
    cin>>fen;
    cout<<"�����룺 ";
    cin>>miao;
    system("cls");
    cout<<"UildWork�����ϼ���"<<endl<<endl;
    cout<<"��1����������"<<endl;
    cout<<"��2��do re mi"<<endl;
    cout<<"��3�����֮��"<<endl<<endl;
    cout<<"��ѡ��������";
    ms=getch();
    cout<<ms<<endl<<endl;
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
                if(ms=='1'){
                    while(true){
                        Beep(880,500);
                    }
                }
                if(ms=='2'){
                    while(true){
                        Beep(523,400);//do
                        Beep(578,400);//re
                        Beep(659,400);//mi
                        Sleep(400);
                    }
                }
                if(ms=='3'){
                    while(true){
                        int pai=400,ban=200;
                        int ting=128;
                        Sleep(1000);
                        Beep(la,ban);
                        Beep(si,ban);
                        Sleep(ting);
                        Beep(do1,pai+ban);
                        Beep(si,ban);
                        Sleep(ting);
                        Beep(do1,pai);
                        Sleep(ting);
                        Beep(mi1,pai);
                        Sleep(ting);
                        Beep(si,3*pai);
                        Sleep(ting);
                        Beep(mi,ban);
                        Beep(mi,ban);
                        Beep(la,ban+pai);
                        Beep(so,ban);
                        Sleep(ting);
                        Beep(la,pai);
                        Sleep(ting);
                        Beep(do1,pai);
                        Sleep(ting);
                        Beep(so,2*pai);
                        Sleep(ting);
                        Sleep(pai);
                        Beep(mi,ban);
                        Sleep(ting/2);
                        Beep(mi,ban);
                        Sleep(ting/2);
                        Beep(fa,pai+ban);
                        Beep(mi,ban);
                        Sleep(ting);
                        Beep(fa,ban);
                        Beep(do1,ban+pai);
                        Sleep(ting);
                        Beep(mi,2*pai);
                        Sleep(ting);
                        Sleep(ban);
                        Beep(do1,ban);
                        Sleep(ting/2);
                        Beep(do1,ban);
                        Sleep(ting/2);
                        Beep(do1,ban);
                        Sleep(ting/2);
                        Beep(si,ban+pai);
                        Beep(sfa,ban);
                        Sleep(ting);
                        Beep(sfa,pai);
                        Beep(si,pai);
                        Sleep(ting);
                        Beep(si,2*pai);
                        Sleep(ting);
                        Sleep(pai);
                        Beep(la,ban);
                        Beep(si,ban);
                        Sleep(ting);
                        Beep(do1,pai+ban);
                        Beep(si,ban);
                        Sleep(ting);
                        Beep(do1,pai);
                        Sleep(ting);
                        Beep(mi1,pai);
                        Sleep(ting);
                        Beep(si,2*pai);
                        Sleep(ting);
                        Sleep(pai);
                        Beep(mi,ban);
                        Sleep(20);
                        Beep(mi,ban);
                        Sleep(ting);
                        Beep(la,pai+ban);
                        Beep(so,ban);
                        Sleep(ting);
                        Beep(la,pai);
                        Sleep(ting);
                        Beep(do1,pai);
                        Sleep(ting);
                        Beep(so,3*pai);
                        Sleep(ting+ban);
                        Beep(mi,ban);
                        Sleep(ting/2);
                        Beep(fa,pai);
                        Sleep(ting);
                        Beep(do1,ban);
                        Beep(si,ban);
                        Sleep(20);
                        Beep(si,pai);
                        Sleep(ting);
                        Beep(do1,pai);
                        Sleep(ting);
                        Beep(re1,ban);
                        Sleep(20);
                        Beep(re1,ban);
                        Sleep(20);
                        Beep(mi1,ban);
                        Sleep(ting/2);
                        Beep(do1,pai);
                        Sleep(ting+pai);
                        Beep(do1,pai);
                        Beep(si,ban);
                        Sleep(ting);
                        Beep(la,ban);
                        Sleep(20);
                        Beep(la,ban);
                        Sleep(ting);
                        Beep(si,pai);
                        Sleep(ting);
                        Beep(sso,pai);
                        Sleep(ting);
                        Beep(sso,2*pai);
                        Sleep(ting+pai);
                        Beep(do1,ban);
                        Beep(re1,ban);
                        Sleep(ting);
                        Beep(mi1,pai+ban);
                        Beep(re1,ban);
                        Sleep(ting);
                        Beep(mi1,pai);
                        Sleep(ting);
                        Beep(fa1,pai);
                        Sleep(ting);
                        Beep(re1,2*pai);
                        Sleep(pai+ting);
                        Beep(so,ban);
                        Sleep(20);
                        Beep(so,ban);
                        Sleep(ting);
                        Beep(do1,ban);
                        Beep(si,ban);
                        Sleep(ting);
                        Beep(do1,pai);
                        Sleep(ting);
                        Beep(mi1,pai);
                        Sleep(ting);
                        Beep(mi1,2*pai);
                        Sleep(ting+2*pai);
                        Beep(la,ban);
                        Beep(si,ban);
                        Sleep(ting);
                        Beep(do1,pai);
                        Sleep(ting);
                        Beep(si,pai);
                        Sleep(ting);
                        Beep(re1,ban);
                        Sleep(20);
                        Beep(re1,ban);
                        Sleep(ting);
                        Beep(do1,pai+ban);
                        Beep(so,ban);
                        Sleep(20);
                        Beep(so,pai);
                        Sleep(pai+ting);
                        Beep(fa1,pai);
                        Sleep(ting);
                        Beep(mi1,pai);
                        Sleep(ting);
                        Beep(re1,pai);
                        Sleep(ting);
                        Beep(do1,pai);
                        Sleep(ting);
                        Beep(mi1,4*pai);
                        Beep(mi1,pai*2);
                        Sleep(pai+ting);
                        Beep(mi1,pai);
                        Sleep(ting);
                        Beep(la1,2*pai);
                        Sleep(ting);
                        Beep(so1,pai);
                        Sleep(ting);
                        Beep(so1,pai);
                        Sleep(ting);
                        Beep(mi1,ban);
                        Sleep(ting/2);
                        Beep(re1,ban);
                        Sleep(ting);
                        Beep(do1,pai);
                        Sleep(ting+ban);
                        Beep(do1,ban);
                        Sleep(ting);
                        Beep(re1,pai);
                        Sleep(ting);
                        Beep(do1,ban);
                        Beep(re1,ban);
                        Sleep(20);
                        Beep(re1,ban);
                        Sleep(ting);
                        Beep(so1,pai);
                        Sleep(ting);
                        Beep(mi1,2*pai);
                        Sleep(ting+pai);
                        Beep(mi,pai);
                        Sleep(ting);
                        Beep(la1,2*pai);
                        Sleep(ting);
                        Beep(so1,2*pai);
                        Sleep(ting);
                        Beep(mi1,ban);
                        Beep(re1,ban);
                        Sleep(ting);
                        Beep(do1,2*pai);
                        Sleep(ting+ban);
                        Beep(do1,ban);
                        Sleep(ting);
                        Beep(re1,pai);
                        Sleep(ting);
                        Beep(do1,ban);
                        Beep(re1,ban);
                        Sleep(20);
                        Beep(re1,ban);
                        Sleep(ting);
                        Beep(si,pai);
                        Sleep(ting);
                        Beep(la,2*pai);
                        Sleep(ting);
                        Beep(la,ban);
                        Beep(si,ban);
                        Beep(do1,pai+ban);
                        Beep(si,ban);
                        Sleep(ting);
                        Beep(do1,pai);
                        Sleep(ting);
                        Beep(mi1,pai);
                        Sleep(ting);
                        Beep(si,3*pai);
                        Sleep(ting);
                        Beep(mi,ban);
                        Beep(mi,ban);
                        Beep(la,ban+pai);
                        Beep(so,ban);
                        Sleep(ting);
                        Beep(la,pai);
                        Sleep(ting);
                        Beep(do1,pai);
                        Sleep(ting);
                        Beep(so,2*pai);
                        Sleep(ting);
                        Sleep(pai);
                        Beep(mi,ban);
                        Sleep(ting/2);
                        Beep(mi,ban);
                        Sleep(ting/2);
                        Beep(fa,pai+ban);
                        Beep(mi,ban);
                        Sleep(ting);
                        Beep(fa,ban);
                        Beep(do1,ban+pai);
                        Sleep(ting);
                        Beep(mi,2*pai);
                        Sleep(ting);
                        Sleep(ban);
                        Beep(do1,ban);
                        Sleep(ting/2);
                        Beep(do1,ban);
                        Sleep(ting/2);
                        Beep(do1,ban);
                        Sleep(ting/2);
                        Beep(si,ban+pai);
                        Beep(sfa,ban);
                        Sleep(ting);
                        Beep(sfa,pai);
                        Beep(si,pai);
                        Sleep(ting);
                        Beep(si,2*pai);
                        Sleep(ting);
                        Sleep(pai);
                        Beep(la,ban);
                        Beep(si,ban);
                        Sleep(ting);
                        Beep(do1,pai+ban);
                        Beep(si,ban);
                        Sleep(ting);
                        Beep(do1,pai);
                        Sleep(ting);
                        Beep(mi1,pai);
                        Sleep(ting);
                        Beep(si,2*pai);
                        Sleep(ting);
                        Sleep(pai);
                        Beep(mi,ban);
                        Sleep(20);
                        Beep(mi,ban);
                        Sleep(ting);
                        Beep(la,pai+ban);
                        Beep(so,ban);
                        Sleep(ting);
                        Beep(la,pai);
                        Sleep(ting);
                        Beep(do1,pai);
                        Sleep(ting);
                        Beep(so,3*pai);
                        Sleep(ting+ban);
                        Beep(mi,ban);
                        Sleep(ting/2);
                        Beep(fa,pai);
                        Sleep(ting);
                        Beep(do1,ban);
                        Beep(si,ban);
                        Sleep(20);
                        Beep(si,pai);
                        Sleep(ting);
                        Beep(do1,pai);
                        Sleep(ting);
                        Beep(re1,ban);
                        Sleep(20);
                        Beep(re1,ban);
                        Sleep(20);
                        Beep(mi1,ban);
                        Sleep(ting/2);
                        Beep(do1,pai);
                        Sleep(ting+pai);
                        Beep(la,4*pai);
                        Sleep(1000);
                    }
                }
            }
        }
        system("cls");
    }
	return 0;
}
