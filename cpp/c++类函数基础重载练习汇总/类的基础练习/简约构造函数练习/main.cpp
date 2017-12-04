#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class student
{
    int num;
    char name[10];
public:
    void display()
    {
        cout<<num<<name<<endl;
    }
    student(int x,char *s);

};
student::student(int x,char *s)
    {
        num=x;
        strcpy(name,s);
    }
int main()
{
    class student xie(11,"xienezheng");
    xie.display();
}
