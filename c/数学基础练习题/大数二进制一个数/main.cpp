#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    long long int n;
   int cnt,i,j;
   while((scanf("%lld",&n))!=EOF)
   {
       cnt=0;
       while(n!=0)
       {

           if(n%2!=0)
           {
           cnt++;
           }
           n=n/2;
       }
       cout<<cnt<<endl;
   }
}
