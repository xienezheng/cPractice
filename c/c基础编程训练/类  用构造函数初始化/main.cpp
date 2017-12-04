#include <iostream>
#include<cstdio>
#include<stdlib.h>
#include<string.h>
using namespace std;
class People
{
    int num;
    char name[100];


public:
    People(int x,char *s)
    {
        num=x;
        strcpy(name,s);
    }
    void print()
    {
        printf("%d",num);
        printf("%s",name);

    }
};

int main()
{

   People xie(1,"xietao");
   xie.print();
   return 0;
}
