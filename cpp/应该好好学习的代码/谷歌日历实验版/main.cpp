#include <iostream>
#include<fstream>
using namespace std;
int time[19]={13,18,11,15,8,14,18,18,11,7,11,14,13,18,8,7,14,5};
struct cla
{
  char begin[50];
  char dastart[50];
  char daend[50];
  char summary[50];
  char end[50];
}c[19]={"BEGIN:VEVENT","DTSTART:20160524T000000Z","DTEND:20160524T014000Z","SUMMARY:English2@third buliding704","END:VEVENT"
         "BEGIN:VEVENT","DTSTART:20160229T100000","DTEND:20160229T114000","SUMMARY:math @north building107","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160229T140000","DTEND:20160229T153000","SUMMARY:electric @north building106","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160229T160000","DTEND:20160229T173000","SUMMARY:logic @north building105","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160307T190000","DTEND:20160307T203000","SUMMARY:educate @third building208","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160301T080000","DTEND:20160301T093000","SUMMARY:geography @north building303","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160301T100000","DTEND:20160301T113000","SUMMARY:math2@north building202","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160301T140000","DTEND:20160302T153000","SUMMARY:leiqiu @gym","END:VEVENT",

         "BEGIN:VEVENT","DTSTART:20160302T080000","DTEND:20160302T093000","SUMMARY:math@north building103","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160302T100000","DTEND:20160302T113000","SUMMARY:logic @north building108","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160518T100000","DTEND:20160303T113000","SUMMARY:c++ @north building402","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160302T140000","DTEND:20160302T153000","SUMMARY:electric@electric 106","END:VEVENT",

         "BEGIN:VEVENT","DTSTART:20160303T080000","DTEND:20160303T093000","SUMMARY:math2@electric 105","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160310T100000","DTEND:20160310T113000","SUMMARY:English @second building504","END:VEVENT",

         "BEGIN:VEVENT","DTSTART:20160304T080000","DTEND:20160304T093000","SUMMARY:math@north building107","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160304T100000","DTEND:20160304T113000","SUMMARY: geography@north building102","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160520T100000","DTEND:20160304T113000","SUMMARY:c++ @north building110","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160304T140000","DTEND:20160304T153000","SUMMARY:law @north building110","END:VEVENT",
         "BEGIN:VEVENT","DTSTART:20160325T160000","DTEND:20160325T173000","SUMMARY:work and life @north building203","END:VEVENT",
        };
void add(int x)
{
    int y,r,x1=12,x2=13,x3=14,x4=15;
    int b[12]= {31,29,31,30,31,30,31,31,30,31,30,31};
    y=(c[x].dastart[12]-'0')*10+c[x].dastart[13]-'0';
    r=(c[x].dastart[14]-'0')*10+c[x].dastart[15]-'0';
    if(r+7>b[y-1])
    {
        r=r+7-b[y-1];
        y=y+1;
    }
    else  r=r+7;
        if(y>9)
        {
            c[x].dastart[x2]=(char)(y%10+48);
            c[x].dastart[x1]=(char)(y/10+48);
        }
        else
        {
            c[x].dastart[x1]='0';
            c[x].dastart[x2]=(char)(y+48);
        }
        if(r>9)
        {
            c[x].dastart[x4]=(char)(r%10+48);
            c[x].dastart[x3]=(char)(r/10+48);
        }
        else
        {
            c[x].dastart[x3]='0';
            c[x].dastart[x4]=(char)(r+48);
        }
    c[x].daend[x1-2]=c[x].dastart[x1];
    c[x].daend[x2-2]=c[x].dastart[x2];
    c[x].daend[x3-2]=c[x].dastart[x3];
    c[x].daend[x4-2]=c[x].dastart[x4];
}


int main()
{

int i=19,x,y;
    ofstream out("D:\\google.ical");
    out<<"BEGIN:VCALENDAR"<<endl<<"VERSION:2.0"<<endl;
    for(x=0; x<i; x++)
    {
        for(y=0; y<time[x]; y++)
        {
            if (out.is_open())
            {
                out << c[x].begin<<endl<<c[x].dastart<<endl<< c[x].daend
                    <<endl<< c[x].summary<<endl<< c[x].end<<endl<<endl;
            }
            add(x);
        }
    }
    out<<"END:VCALENDAR"<<endl;
}
