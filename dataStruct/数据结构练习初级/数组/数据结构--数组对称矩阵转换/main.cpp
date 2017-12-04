#include <iostream>

using namespace std;
int  a[20][20],b[40];
int get(int n,int i,int j)
{
    int temp,temp1;
    temp1=(2*n-i-1)*i/2+j;
    temp=b[temp1];
    return(temp);
}

int main()
{

int n,i,j,k=0;
cin>>n;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        cin>>a[i][j];
    }
}
for(i=0;i<n;i++)
{
    for(j=i;j<n;j++)
    {
        b[k]=a[i][j];
        k++;
    }
}
cout<<get(3,2,1);
}
