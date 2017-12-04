#include <stdio.h>
#include <stdlib.h>

int main()
{int a[100],n,i,j,k,sum=0;
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<=n-1;i++)
{
    if(a[i]%2==0)
    {
        sum=sum+a[i];
    }
}
printf("%d",sum);
return 0;
}
