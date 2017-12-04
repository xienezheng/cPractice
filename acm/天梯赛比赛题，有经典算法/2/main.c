#include <stdio.h>
#include <stdlib.h>

int main()
{
  int m,n,i;
  char time[10];
  scanf("%s",time);
  m=(time[0]-'0')*10+time[1]-'0';
  n=(time[3]-'0')*10+time[4]-'0';
  if(m>=0&&m<12)
  {
      printf("Only %s.",time);
      printf("Too early to Dang.");
  }
if(m>12)
{
    if(n==0)
    {
        for(i=0;i<=m-13;i++)
        {
            printf("Dang");
        }
    }
    if(n!=0)
    {
        for(i=0;i<=m-12;i++)
        {
            printf("Dang");
        }
    }
}
if(m==12)
{
    if(n==0)
    { printf("Only %s.",time);
      printf("Too early to Dang.");

    }
    if(n>0)
    {
        printf("Dang");
    }
}
}
