#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int m;
    int cnt1,cnt2,i,j,cnt;
    long long int n;
   while((scanf("%lld",&n))!=EOF)
   {cnt=0;
   while(n>=5)
   {
       cnt=cnt+n/5;
       n=n/5;
   }
    cout<<cnt<<endl;
   }
}
