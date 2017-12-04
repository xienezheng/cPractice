#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class people
{

    int num;
    char name[10];
public:
    void setnum(int x);
    void setname(char *);
    int getnum()
    {
    return(num);
    }
    void display()
    {
        cout<<name<<endl;

    }
    char *getname()
    {
        return((char *)name);
    }
    people(char *s);
    ~people()
    {
        cout<<"xigou"<<name<<endl;
    }

};
void people::setnum(int x)
{
    num=x;
}
void people::setname(char *s)
{
    strcpy(name,s);
}
people::people(char *s)
{
strcpy(name,s);
}
int main()
{
    class people xie("Xie nezheng");
    xie.display();
    xie.~people();

}
