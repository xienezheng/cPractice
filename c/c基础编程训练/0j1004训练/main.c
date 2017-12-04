#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int i,j,k,m,n;
    char a[100],b[100];
    int c[100],d[100],e[100];
    memset(a,'\0',sizeof(a));
    memset(b,'\0',sizeof(b));
    memset(c,0,sizeof(c));
    memset(d,0,sizeof(d));
    memset(e,0,sizeof(e));
gets(a);
gets(b);
    m=strlen(a);
    n=strlen(b);

    for(i=0,j=m-1;j>=0;i++,j--)
    {
        c[i]=a[j]-'0';

    }

     for(i=0,j=n-1;j>=0;j--,i++)
    {
        d[i]=b[j]-'0';
    }
    for(i=0;i<m;i++)
    {
        e[i]=c[i]+d[i]+e[i];
        e[i+1]=e[i]/10;
        e[i]=e[i]%10;
    }
if(e[m]!=0)
{
    printf("%d",e[m]);
}
     for(i=m-1;i>=0;i--)
    {
        printf("%d",e[i]);
    }


    return 0;
}

