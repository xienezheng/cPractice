#include <iostream>

using namespace std;
void print(int (&a)[5])
{
    int i;
    for(i=1;i<=5;i++)
    {
        a[i]=a[i]+5;
    }
}
int main()
{
   int i;
   int a[5];
   for(i=1;i<=5;i++)
   {
       cin>>a[i];
   }
print(a);
 for(i=1;i<=5;i++)
   {
       cout<<a[i];
   }
}
