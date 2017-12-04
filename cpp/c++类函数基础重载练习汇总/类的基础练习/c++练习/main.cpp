#include <iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
class student
{
private:
    int Price;
    char Name[10];
public:
    student(int,char);
    int getprice();
    char getname(char[]);
};
student::student(int price,char name[])
{
    Price=price;
    strcpy(Name,name);
}
int student::getprice()
{
    return(Price);
}
char student::getname(char name[])
{
    strcpy(Name,name);
}
int main()
{
    student xie(35435,"xienezheng");
    cout<<xie.getprice()<<endl;
    cout<<xie.getname()<<endl;
}
