#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
   int a[10],i,j,k,t;
   for(i=0;i<=9;i++)
   {
       scanf("%d",&a[i]);
   }
   t=fabs(a[0]);
   for(i=0;i<=9;i++)
   {
       if(fabs(a[i])<=t)
       {
           t=fabs(a[i]);
           k=i;
       }

   }

   t=a[k];
   a[k]=a[9];
   a[9]=t;
   for(i=0;i<9;i++)
   {
       printf("%d ",a[i]);
   }
   printf("%d",a[9]);
   return 0;
}
