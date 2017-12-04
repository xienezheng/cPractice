#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class people
{
    public:
    int num;
    char name[10];

    void setnum(int x);
    void setname(char *s);
    int getnum()
    {
        return(num);
    }
    char* getname()
{
    return((char *)name);
}
void setdate(int x,char *s);

};

void people::setname(char *s)
{
    strcpy(name,s);
}
void people::setnum(int x)
{
    num=x;
}
void people::setdate(int x,char *s)
{
     setname((char *)s);
     setnum(x);

}
int main()
{
    class people xie;
    xie.setdate(11,"xienezheng");

    cout<<xie.num<<endl;
}
