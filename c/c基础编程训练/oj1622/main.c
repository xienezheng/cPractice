#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,i,j;
  long long int k,sum=0;
  while((scanf("%d",&n))!=EOF)
  {sum=0;
      for(i=n;i>=1;i--)
      {k=1;
          for(j=i;j>=1;j--)
          {
              k=k*j;
          }
          sum=sum+k;
      }
      printf("%lld\n",sum);
  }
  return 0;
}
