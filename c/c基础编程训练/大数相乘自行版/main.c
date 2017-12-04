#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int c[100],d[100],e[100],f[100][100];
    int i,j,k,x,m,n,y;
    memset(a,'\0',sizeof(a));
     memset(b,'\0',sizeof(b));
      memset(c,0,sizeof(c));
       memset(d,0,sizeof(d));
        memset(e,0,sizeof(e));
        gets(a);
        gets(b);
        m=strlen(a);
        n=strlen(b);
        for(i=0;i<m;i++)
        {
            c[i]=a[i]-'0';
        }
         for(i=0;i<n;i++)
        {
            d[i]=b[i]-'0';
        }

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                f[i][j]=c[i]*d[j];

            }

        }
  x=0;k=0;
  while(k-x<n)
  {
      i=x;j=k-x;
      e[k]=0;
      while(i>=0&&j<n)
      {
          e[k]=e[k]+f[i][j];
          i--;
          j++;
      }
      if(x==m-1)
      {
          x=m-1;
      }
      else
      {
          x++;

      }
      k++;
y=k-1;
  }
for(i=y;i>=0;i--)
{
    j=e[i]/10;
    e[i]=e[i]%10;
    e[i-1]=e[i-1]+j;
}
for(i=0;i<=y;i++)
{
    printf("%d",e[i]);
}
return 0;
}










