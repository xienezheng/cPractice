#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],b[10];
    int i=0,j=0;
    int n,s=1;
    int k=0,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i]=s;
        s++;
    }
    while(n>2)
    {t=0;
        for(i=0;i<n;i++)
        {
            k++;
            if(k!=3)
            {
                b[i]=a[i];
            }
            if(k==3)
            {
                k=0;
                t++;
            }
        }
        n=n-t;;
        for(i=0;i<n;i++)
        {
            a[i]=b[i];
        }
        j=0;
    }
    printf("%d",b[0]);
    return 0;
}
