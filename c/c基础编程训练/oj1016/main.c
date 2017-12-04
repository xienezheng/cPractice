#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],b[100],c[100];
    int m=0,n=0,i,j,k,t,h;
    scanf("%d",&k);
    for(h=0;h<k;h++)
    {

    for(i=0;;i++)
    {
        scanf("%d",&a[i]);
       m++;
    }


    for(i=0;;i++)
    {
        scanf("%d",&b[i]);
        n++;
    }
    for(i=0,j=0;i<=m;i++,j++)
    {
        c[i]=a[j];

    }

    for(i=m+1,j=0;j<=n;j++,i++)
    {
        c[i]=b[j];
    }
    for(i=m+n-1;i>=0;i++)
    {
        for(j=0;j<i;j++)
        {
            if(c[j]>=c[j+1])
            {
                t=c[j+1];
                c[j+1]=c[j];
                c[j]=t;

            }
        }
    }
    for(i=0;i<m+n-1;i++)
    {
        if(c[i]!=a[0]&&c[i]!=b[0])
        {


        printf("%d ",c[i]);
        }
    }
    printf("%d",c[m+n-1]);
    }
    return 0;
}
