#include "student.h"


    student::student(int n,string m,char s)//Ĭ�Ϻ���Ҫȫ
    {
        num=n;
        name=m;
        sex=s;
    }
    void student::display()
    {
        cout<<num<<endl;
        cout<<name<<endl;
        cout<<sex;
    }




