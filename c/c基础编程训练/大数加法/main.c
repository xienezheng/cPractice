#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int c[100],d[100],e[100];
    int m,n,i,j,k,t=0;
    long long int o;
    memset(a,'\0',sizeof(a));
     memset(b,'\0',sizeof(b));
      memset(c,0,sizeof(c));
       memset(d,0,sizeof(d));
        memset(e,0,sizeof(e));
        gets(a);
        scanf("%lld",&o);
        m=strlen(a);
        for(i=1;i<=30;i++)
        {
            o=o/10;
            t++;
            if(o<=0)
            {
                break;

            }
        }
        for(i=m-1,j=0;i>=0;i--,j++)
        {
            c[j]=a[i]-'0';
        }
    for(k=o;k>=0;k--)
    {

        for(i=0;i<m+t;i++)
        {
            e[i]=e[i]+c[i]+e[i+1];
            e[i+1]=e[i]/10;
            e[i]=e[i]%10;
        }
    }

  for(i=m+t-1;i>=0;i--)
  {
      printf("%d",e[i]);
  }return 0;
}
