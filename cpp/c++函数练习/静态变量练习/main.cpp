#include <iostream>

using namespace std;
int i;//全局变量
void num()
{
    cout<<i;
    i++;
}
int main()
{
    int j;
    for(j=1;j<=5;j++)
    {
        num();
    }
    cout<<endl;
    cout<<i;
}

void num()//int
{
    int b=0;
    b++;
    cout<<b<<endl;
}
int main()
{
    int i=10;
    while(i>=0)
    {
        num();
        i--;
    }

}
void num()//static
{
   static int b=0;
    b++;
    cout<<b<<endl;
}
int main()
{
    int i=10;
    while(i>=0)
    {
        num();
        i--;
    }

}
