#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
   int n;
   float val;
   int i;
 float a[100],b[100];
 a[0]=2;
 a[1]=3;
 for(i=2;i<100;i++)
 {
     a[i]=a[i-1]+a[i-2];
 }
 b[0]=1;
 b[1]=2;
  for(i=2;i<100;i++)
 {
     b[i]=b[i-1]+b[i-2];
 }
 while((scanf("%d",&n))!=EOF)
 {val=0;
 for(i=0;i<n;i++)
 {
     val=val+a[i]/b[i];
 }
 printf("%.2f\n",val);
 }
}
