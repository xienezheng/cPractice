#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char a[20][100];
    int i,j,k,m,n;
    char b[50],c[50],d[50],e[50];
    int t;
  while((scanf("%d",&t))!=EOF)
  {
      for(i=0;i<t;i++)
      {
          gets(a[i]);


      m=strlen(a[i]);
      for(i=(1.0/4.0)*m-1,j=0;i>=0;j++,i--)
      {
        b[j]=a[i];
      }
      for(i=(2.0/4.0)*m-1,j=0;i>=(1.0/4.0)*m;j++,i--)
      {
          c[j]=a[i];
      }
       for(i=(3.0/4.0)*m-1,j=0;i>=(2.0/4.0)*m;j++,i--)
      {
          d[j]=a[i];
      }
       for(i=m-1,j=0;i>=(3.0/4.0)*m;j++,i--)
      {
          e[j]=a[i];
      }


      }
  }
    return 0;
}
