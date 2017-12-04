#include<stdio.h>
#include<string.h>
int main()
{
char a[30],b[30];
int c[30],d[30],e[30];
int i,j,m,n,max;
 memset(a,'\0',sizeof(a));
   memset(b,'\0',sizeof(b));
   memset(c,0,sizeof(c));
   memset(d,0,sizeof(d));
   memset(e,0,sizeof(e));
   gets(a);
   gets(b);
  m=strlen(a);
  n=strlen(b);
  if(m>=n)
  {
  for(j=0,i=m-1;i>=0;i--,j++)
  {
      c[j]=a[i]-'0';

  }
   for(j=0,i=n-1;i>=0;i--,j++)
  {
      d[j]=b[i]-'0';

  }
  for(i=0;i<m;i++)
  {
      e[i]=c[i]+d[i]+e[i];
      e[i+1]=e[i]/10;
      e[i]=e[i]%10;
  }
  if(e[m]!=0)printf("%d",e[m]);
  for(i=m-1;i>=0;i--)
  {
      printf("%d",e[i]);
  }
  }
   if(m<n)
  {
  for(j=0,i=m-1;i>=0;i--)
  {
      c[j]=a[i]-'0';
      j++;
  }
   for(j=0,i=n-1;i>=0;i--)
  {
      d[j]=b[i]-'0';
      j++;
  }
  for(i=0;i<n;i++)
  {
      e[i]=c[i]+d[i]+e[i];
      e[i+1]=e[i]/10;
      e[i]=e[i]%10;
  }
  if(e[n]!=0)printf("%d",e[n]);
  for(i=n-1;i>=0;i--)
  {
      printf("%d",e[i]);
  }
  }

}
