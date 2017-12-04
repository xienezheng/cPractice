#include <iostream>

using namespace std;
void num(int &n)
{
    int i;
    for(i=1;i<9;i++)
    {
        n++;
    }
}
int main()
{
    int n=1;
    int &j=n;
    num(j);
    cout<<n;
}
