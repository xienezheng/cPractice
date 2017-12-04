#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{
    int n,t,i,cnt=0;
    double s;
  while((scanf("%d",&t))!=EOF)
  {cnt++;
        s=0;
        for(i=1; i<=t; i++)
        {
            s+=log10((double)i);
        }
       cout<<"Case "<<cnt<<"th "<<"is "<<": "<<(int)s+1<<"."<<endl;
    }

}

