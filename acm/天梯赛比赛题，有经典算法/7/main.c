#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct gplt
{
    char letter;
    int num;
    int sort;
}c[4];
int main()
{
  char a[10000];
  int i,j,t,m,n,o;
  int len;
  int b[4];
  int sumg,sump,suml,sumt;
  int min1,min2,min3;
  scanf("%s",a);
  len=strlen(a);
  for(i=0;i<len;i++)
  {
      if(a[i]=='g'||a[i]=='G')
      {
          b[0]++;
    sumg++;
      }
       if(a[i]=='p'||a[i]=='P')
      {
          b[1]++;
          sump++;
      }
       if(a[i]=='l'||a[i]=='L')
      {
          b[2]++;
          suml++;
      }
       if(a[i]=='t'||a[i]=='T')
      {
          b[3]++;
          sumt++;
      }
  }
  for(i=3;i>=0;i--)
  {
      for(j=0;j<i;j++)
      {
          if(b[j]>b[j+1])
          {
              t=b[j+1];
              b[j+1]=b[j];
              b[j]=t;
          }
      }
  }
  for(i=0;i<b[0];i++)
  {
printf("GPLT");
if(b[0]==sumg)
{
for(m=0;m<b[1]-b[0];m++)
{
    printf("PLT");

}

}
}
}
