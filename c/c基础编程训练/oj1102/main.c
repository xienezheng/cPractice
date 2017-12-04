#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
   int i,j,k,t,d,a[6][6];
   int m;
   scanf("%d",&m);
   for(i=0;i<m;i++)
   {
       for(j=0;j<m;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   t=a[0][0];
   for(i=0;i<m;i++)
   {
       for(j=0;j<m;j++)
       {
           if(a[i][j]>=t)
           {
               t=a[i][j];
               k=i+1;
               d=j+1;
           }
       }
   }
   printf("%d %d %d",t,k,d);
   return 0;
}
