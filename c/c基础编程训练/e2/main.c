#include<stdio.h>
int main()
{
    int m,n,i,j,k,t,h;
    int a[10];
    while(scanf("%d",&m)&&m!=0)
    {
        for(i=m;i<=10000;i++)
        {k=0;t=1;h=0;
            if(i%m==0)
            {
                o=n=i;
              while(n>0)
             {
               n=n/10;
               k++;
             }
             for(i=1;i<k;i++)
             {
              t=t*10;
             }

             for(i=0;i<k;i++)
             {
              a[i]=o/t;
              o=o%t;
              t=t/10;
             }
             if((a[i]==0)||(a[i]==1))
             {
                 h++;
             }
             if(h==k)
             {
                 printf("%d\n",k);
                 break;
             }

            }
        }

    }
}


















