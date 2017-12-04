#include <iostream>

using namespace std;

int &num(int &m)
{
++m;
    return(m);
}
int main()
{
int m=8;
   int &b=num(m);
    b=b+8;
    cout<<m;
}
