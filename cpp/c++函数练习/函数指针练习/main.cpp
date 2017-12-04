#include <iostream>

using namespace std;
int add(int n)
{
    cout<<n+5;
}
int main()
{
    int (*p)(int n)=add;
   (*p)(5);
}
