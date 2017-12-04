#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,F;
float a=9,b=5;
    for(i=-100;i<=150;i=i+5)
    {
        F=32+i*(a/b);
        printf("c=%d->f=%d\n",i,F);
    }
    return 0;
}
