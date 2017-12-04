#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{

  int a[10];

    int i,j,k;
    int *p;
    p=&a;
    for(i=0;i<10;i++)
    {
        scanf("%d",p+i);
    }
   for(i=0;i<10;i++)
    {
        printf("%5d",*(p+i));
    }

for(i=9;i>=0;i--)
{
    for(j=0;j<i;j++)
    {
        if(*(p+j)>*(p+j+1))
        {
            k=*(p+j);
            *(p+j)=*(p+j+1);
            *(p+j+1)=k;
        }
    }
}
for(i=0;i<10;i++)
    {
        printf("%5d",*(p+i));
    }
    return 0;

}
