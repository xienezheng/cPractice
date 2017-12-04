#include <iostream>

using namespace std;
void heapsort(int a[],int n)
{
    int i,temp;
    InitCreatHeap(a,n);
    for(i=n-1;i>0;i--)
    {
        temp=a[0];
        a[0]=a[i];
        a[i]=temp;
        CreatHeap(a,i,0);
    }
}
int main()
{
    int a[5]={1,5,6,3,2};
    int i;
    heapsort(a,5);
    for(i=0;i<5;i++)
    {
        cout<<a[i];
    }
}
