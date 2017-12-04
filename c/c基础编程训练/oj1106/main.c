#include <stdio.h>
#include <stdlib.h>
void fact(int n)
{ int i,j;
    float k=0,sum=1;
for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            sum=sum*j;

        }
        k=k+1/sum;
sum=1;
    }
printf("%.4f",k);
}
int main()
{
    int c;
    scanf("%d",&c);
  fact(c);

    return 0;
}
