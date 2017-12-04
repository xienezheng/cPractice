#include <stdio.h>
#include <stdlib.h>
int aa(int x)
{
    x=x+2;
    return(x);
}
int main()
{
    int i,j,k;
    scanf("%d",&i);

    printf("%d",aa(i));
}
