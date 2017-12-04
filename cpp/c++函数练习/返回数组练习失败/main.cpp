#include <iostream>

using namespace std;
int (*fun(int n))[10]
{
    int a[10];
    int i;
    for(i=0;i<n;i++)
    {
        a[i]=i;
    }

}
int main()
{
    int k;
    k=(*fun(5))[3];
    cout<<k;
}
