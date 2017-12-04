#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,sum,sum1,cnt1,cnt2;
    while(scanf("%d",&n)!=EOF)
    {cnt1=0;
    cnt2=0;
    sum1=0;
    sum2=0;
        int *a=(int *)malloc(n*sizeof(int));
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
         sum1=sum1+a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==100)
            {
                cnt1++;
            }
            if(a[i]==200)
            {
                cnt2++;
            }
        }
    sum2=sum1/2-cnt2*200;
    if((sum2/100==0)||(sum2/100>=1))
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
        return 0;
    }
}
