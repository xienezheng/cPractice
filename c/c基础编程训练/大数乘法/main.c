#include<stdio.h>
#include<string.h>
int main()
{
char a[30];
int c[30],e[30];
int i,j,m,n,k,d;
 memset(a,'\0',sizeof(a));
   memset(c,0,sizeof(c));
   memset(e,0,sizeof(e));
   gets(a);
   scanf("%lld",&d);
  m=strlen(a);
  n=d/10;

  for(j=0,i=m-1;i>=0;i--,j++)
  {
      c[j]=a[i]-'0';
  }
  for(k=0;k<d;k++)
  {
  for(i=0;i<m+n;i++)
  {
      e[i]=c[i]+c[i]+e[i];
      e[i+1]=e[i]/10;
      e[i]=e[i]%10;
  }
  }
  if(e[m+n]!=0)printf("%d",e[m+n]);
  for(i=m+n-1;i>=0;i--)
  {
      printf("%d",e[i]);
  }
  }

