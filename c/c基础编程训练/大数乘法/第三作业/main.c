#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[10][2],n,i,j,k;
   int c,d;
   printf("�������м�����:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       for(j=0;j<=1;j++)
       {
           scanf("%d",&a[i][j]);
           printf("%5d",a[i][j]);
       }
   }
}
