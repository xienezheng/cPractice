#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
   char a[100];
   int i,j,k=0;
   int n;
   scanf("%d",&n);

   for(j=0;j<n;j++)
   {memset(a,'\0',sizeof(a));
       scanf("%s",a);
       k=0;
       for(i=0;a[i]!='\0';i++)
       {
           if((a[i]<=0)||(a[i]>=127))
              {
                  k++;
              }

       }
        printf("%d",k/2);

   }

   return 0;
}
