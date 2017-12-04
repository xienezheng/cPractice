#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{int i;
   int*a=(int*)malloc(2*sizeof(int));
   for(i=0;i<2;i++)
   {
       scanf("%d",&a[i]);

   }
   for(i=0;i<2;i++)
   {
       printf("%d",a[i]);

   }
   free(a);

}
