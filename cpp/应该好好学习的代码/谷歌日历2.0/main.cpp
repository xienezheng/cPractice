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
} a[19]= {"BEGIN:VEVENT","DTSTART:20160307T080000","DTEND:20160307T093000","SUMMARY:大学英语 @教三704","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160229T100000","DTEND:20160229T114000","SUMMARY:高等数学 @北综107","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160229T140000","DTEND:20160229T153000","SUMMARY:电工与电子技术 @北综106","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160229T160000","DTEND:20160229T173000","SUMMARY:数字逻辑 @北综105","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160307T190000","DTEND:20160307T203000","SUMMARY:演讲与口才 @教三208","END:VEVENT",

         "BEGIN:VEVENT","DTSTART:20160301T080000","DTEND:20160301T093000","SUMMARY:地球科学概论 @北综303","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160301T100000","DTEND:20160301T113000","SUMMARY:离散数学 @北综202","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160301T140000","DTEND:20160302T153000","SUMMARY:羽毛球初级班 @西区体育馆","END:VEVENT",

         "BEGIN:VEVENT","DTSTART:20160302T080000","DTEND:20160302T093000","SUMMARY:高等数学 @北综103","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160302T100000","DTEND:20160302T113000","SUMMARY:数字逻辑 @北综108","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160518T100000","DTEND:20160303T113000","SUMMARY:高级软件编程技术 @北综402","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160302T140000","DTEND:20160302T153000","SUMMARY:电工与电子技术 @北综106","END:VEVENT",

         "BEGIN:VEVENT","DTSTART:20160303T080000","DTEND:20160303T093000","SUMMARY:离散数学 @北综105","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160310T100000","DTEND:20160310T113000","SUMMARY:大学英语 @教二504","END:VEVENT",

         "BEGIN:VEVENT","DTSTART:20160304T080000","DTEND:20160304T093000","SUMMARY:高等数学 @北综107","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160304T100000","DTEND:20160304T113000","SUMMARY:地球科学概论 @北综102","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160520T100000","DTEND:20160304T113000","SUMMARY:高级软件编程技术 @北综110","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160304T140000","DTEND:20160304T153000","SUMMARY:思想道德修养与法律基础 @北综110","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160325T160000","DTEND:20160325T173000","SUMMARY:职业生涯规划 @北综203","END:VEVENT",
        };
int a1[19]= {13,18,11,11,15,8,14,18,18,11,7,11,14,13,18,8,7,14,5};      //对应每门课应该要上的周数

void change(int x)           //每次变换日期的函数
{
    int y,r,x1=12,x2=13,x3=14,x4=15;    //y是对应的月，r是对应的日
    int b[12]= {31,29,31,30,31,30,31,31,30,31,30,31}; //2016年每月的天数，2月是29天
    y=(a[x].DTS[12]-'0')*10+a[x].DTS[13]-'0';
    r=(a[x].DTS[14]-'0')*10+a[x].DTS[15]-'0';
    if(r+7>b[y-1])
    {
        r=r+7-b[y-1];
        y=y+1;
    }
    else  r=r+7;
        if(y>9)                //由于这个学期的课不存在跨年，所以没有对年份进行考虑
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
    int i=19,x,y;            //i为课目数，x对应每门课，y对应每周的输出
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
    cout<<"是否将课表输出到文件？确定输入Y或者y"<<endl;
    cin>>way;
    if(way=='y'||way=='Y')
    {
        out();
        cout<<"已完成输出"<<endl;
    }
    else
    {
        cout<<"未进行操作，结束程序"<<endl;
    }
}
