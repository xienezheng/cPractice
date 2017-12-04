#include <iostream>

using namespace std;
void num(int * p)
{
    *p=*p+1;

}
void num(int p)
{
    p=p+1;

}
int main()
{
   int n=5;
   num(n);
   cout<<n;

}
