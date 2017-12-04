#include <stdio.h>
#include <stdlib.h>
 float a[100],k;
   int i,j,n;
void print(float a[])
{
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            {
                k=a[j+1];
                a[j+1]=a[j];
                a[j]=k;
            }
        }
    }
    printf("%.2f %.2f",a[n-1],a[0]);
}
int main()
{

   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%f",&a[i]);


   }
   print(a);
   return 0;
}
