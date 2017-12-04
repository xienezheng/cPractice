#include "student.h"


    student::student(int n,string m,char s)//默认函数要全
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




