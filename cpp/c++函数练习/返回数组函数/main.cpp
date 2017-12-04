#include <iostream>

using namespace std;
int * num()
{
    int i=0;
    int a[10];
    for(i=0;i<=9;i++)
    {
        a[i]=i;
    }
    return(a);

}
int main()
{
    int *p=num();
    int i;
    for(i=0;i<=9;i++)
    {
    cout<<p[5];
    }
}
