#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,t,m,n,o,a[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {k=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);

        }
        for(i=n-1;i>=0;i--)
        {
            for(j=0;j<i;j++)
            {
                if(a[j]>=a[j+1])
                {
                    m=a[j];
                    a[j]=a[j+1];
                    a[j+1]=m;
                }
            }
        }
        for(i=n-1,j=0;i>j;i--,j++)
        {
            if(a[n-1]>a[j])
            {
                k++;
            }
        }
        o=k*n*n;
        printf("%d\n",o);
    }

    return 0;
}
