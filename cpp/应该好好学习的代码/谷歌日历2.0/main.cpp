#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
struct mes
{
    char begin1[20];
    char DTS[50];
    char DTE[50];
    char SUM[100];
    char end1[20];
} a[19]= {"BEGIN:VEVENT","DTSTART:20160307T080000","DTEND:20160307T093000","SUMMARY:��ѧӢ�� @����704","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160229T100000","DTEND:20160229T114000","SUMMARY:�ߵ���ѧ @����107","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160229T140000","DTEND:20160229T153000","SUMMARY:�繤����Ӽ��� @����106","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160229T160000","DTEND:20160229T173000","SUMMARY:�����߼� @����105","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160307T190000","DTEND:20160307T203000","SUMMARY:�ݽ���ڲ� @����208","END:VEVENT",

         "BEGIN:VEVENT","DTSTART:20160301T080000","DTEND:20160301T093000","SUMMARY:�����ѧ���� @����303","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160301T100000","DTEND:20160301T113000","SUMMARY:��ɢ��ѧ @����202","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160301T140000","DTEND:20160302T153000","SUMMARY:��ë������� @����������","END:VEVENT",

         "BEGIN:VEVENT","DTSTART:20160302T080000","DTEND:20160302T093000","SUMMARY:�ߵ���ѧ @����103","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160302T100000","DTEND:20160302T113000","SUMMARY:�����߼� @����108","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160518T100000","DTEND:20160303T113000","SUMMARY:�߼������̼��� @����402","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160302T140000","DTEND:20160302T153000","SUMMARY:�繤����Ӽ��� @����106","END:VEVENT",

         "BEGIN:VEVENT","DTSTART:20160303T080000","DTEND:20160303T093000","SUMMARY:��ɢ��ѧ @����105","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160310T100000","DTEND:20160310T113000","SUMMARY:��ѧӢ�� @�̶�504","END:VEVENT",

         "BEGIN:VEVENT","DTSTART:20160304T080000","DTEND:20160304T093000","SUMMARY:�ߵ���ѧ @����107","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160304T100000","DTEND:20160304T113000","SUMMARY:�����ѧ���� @����102","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160520T100000","DTEND:20160304T113000","SUMMARY:�߼������̼��� @����110","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160304T140000","DTEND:20160304T153000","SUMMARY:˼����������뷨�ɻ��� @����110","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160325T160000","DTEND:20160325T173000","SUMMARY:ְҵ���Ĺ滮 @����203","END:VEVENT",
        };
int a1[19]= {13,18,11,11,15,8,14,18,18,11,7,11,14,13,18,8,7,14,5};      //��Ӧÿ�ſ�Ӧ��Ҫ�ϵ�����

void change(int x)           //ÿ�α任���ڵĺ���
{
    int y,r,x1=12,x2=13,x3=14,x4=15;    //y�Ƕ�Ӧ���£�r�Ƕ�Ӧ����
    int b[12]= {31,29,31,30,31,30,31,31,30,31,30,31}; //2016��ÿ�µ�������2����29��
    y=(a[x].DTS[12]-'0')*10+a[x].DTS[13]-'0';
    r=(a[x].DTS[14]-'0')*10+a[x].DTS[15]-'0';
    if(r+7>b[y-1])
    {
        r=r+7-b[y-1];
        y=y+1;
    }
    else  r=r+7;
        if(y>9)                //�������ѧ�ڵĿβ����ڿ��꣬����û�ж���ݽ��п���
        {
            a[x].DTS[x2]=(char)(y%10+48);
            a[x].DTS[x1]=(char)(y/10+48);
        }
        else
        {
            a[x].DTS[x1]='0';
            a[x].DTS[x2]=(char)(y+48);
        }
        if(r>9)
        {
            a[x].DTS[x4]=(char)(r%10+48);
            a[x].DTS[x3]=(char)(r/10+48);
        }
        else
        {
            a[x].DTS[x3]='0';
            a[x].DTS[x4]=(char)(r+48);
        }
    a[x].DTE[x1-2]=a[x].DTS[x1];
    a[x].DTE[x2-2]=a[x].DTS[x2];
    a[x].DTE[x3-2]=a[x].DTS[x3];
    a[x].DTE[x4-2]=a[x].DTS[x4];
}

void out()
{
    int i=19,x,y;            //iΪ��Ŀ����x��Ӧÿ�ſΣ�y��Ӧÿ�ܵ����
    ofstream out("F:\\1.ical");
    out<<"BEGIN:VCALENDAR"<<endl<<"VERSION:2.0"<<endl;
    for(x=0; x<i; ++x)
    {
        for(y=0; y<a1[x]; ++y)
        {
            if (out.is_open())
            {
                out << a[x].begin1<<endl<<a[x].DTS<<endl<< a[x].DTE
                    <<endl<< a[x].SUM<<endl<< a[x].end1<<endl<<endl;
            }
            change(x);
        }
    }
    out<<"END:VCALENDAR"<<endl;
}

int main()
{
    char way;
    cout<<"�Ƿ񽫿α�������ļ���ȷ������Y����y"<<endl;
    cin>>way;
    if(way=='y'||way=='Y')
    {
        out();
        cout<<"��������"<<endl;
    }
    else
    {
        cout<<"δ���в�������������"<<endl;
    }
}
