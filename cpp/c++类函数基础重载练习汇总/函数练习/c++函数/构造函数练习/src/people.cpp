#include "people.h"
#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

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

}
