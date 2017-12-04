#include <stdio.h>
#include <stdlib.h>

int main()
{
   int m,n,i,j,x,sum;
   scanf("%d",&x);
    for(i=2;i<=x;i++)
    {
        if(x%i==0)
        {
            break;
        }
    }
    if(x==i)
    {
        printf("%d\n",x);
    }


}
