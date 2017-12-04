#include <stdio.h>
#include <stdlib.h>

int main()
{
   int day,n;
   scanf("%d",&n);
   if(n<=5)
   {
       day=n+2;
   }
   if(n==6)
   {
       day=1;

   }
   if(n==7)
   {
       day=2;
   }
   printf("%d\n",day);
}
