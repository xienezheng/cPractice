#include <iostream>
#include<cstdio>
#include<math.h>
using namespace std;

class People
{
    int num;
public:
   void setnum(int x);
   int getnum();
}a;
int People::getnum()
{
return(num);
}
void People::setnum(int x)
{
    num=x;
}
int main()
{
    class People xie;
    xie.setnum(2);
    printf("%d",xie.getnum());
    return 0;
}
