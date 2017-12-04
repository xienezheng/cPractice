#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
int cnt,a,b;
int i,j;
int m,n;
while((scanf("%d%d",&a,&b))!=EOF)
{
cnt=0;
while(a>0||b>0)
{
    m=a%2;
    a=a/2;
    n=b%2;
    b=b/2;
    if(m!=n)
    {
        cnt++;
    }
}
cout<<cnt<<endl;
}
}
