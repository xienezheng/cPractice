#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    int *p;
    p=(int *)malloc(5*sizeof(int));
    for(i=0;i<5;i++)
    {
        scanf("%d",p);
        p++;

    }
    for(i=0;i<5;i++)
    {
        printf("%d",*p);
        p++;
    }
    return 0;
}
