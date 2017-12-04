#include <iostream>

using namespace std;
void print(int *k)
{
    int i;
    for(i=0;i<=9;i++)
    {
        cout<<k[i];
    }
}
int main()
{
   int i;
   int a[10];
for(i=0;i<=9;i++)
    {
        cin>>a[i];
    }
    print(a);
}
