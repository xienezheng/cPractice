#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[200],b[200];
   int i,t,j,k,n,m;
   for(m=1;m<=100;m++)
   {
   scanf("%d",&n);
   k=n/2-m;



   for(i=0;i<n;i++)
   {
       a[i]=i;
   }
   for(t=k;t<n;t=t+2)
   {

       printf("%5d",a[t]);
   }

   for(t=k-2;t>=0;t=t-2)
   {
        printf("%5d",a[t]);
   }

   for(t=k+1;t<n;t=t+2)
   {
        printf("%5d",a[t]);
   }
   for(t=k-1;t>=0;t=t-2)
   {
        printf("%5d",a[t]);
   }
   }
}
