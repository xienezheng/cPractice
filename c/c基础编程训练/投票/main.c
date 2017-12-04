#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct vote
{
    int name[10];
    int num;
    int piao;
}a[2];
int main()
{
    char c[10];
    int i,j=0,k=0;
    for(i=0;i<2;i++)
    {
        scanf("%s%d%d",a[i].name,&a[i].num,&a[i].piao);
    }
    for(i=0;i<5;i++)
    {
        scanf("%s",c);
        if(strcmp(c,a[0].name)==0)
        {
            a[0].piao++;
        }
        else{
            a[1].piao++;
        }
    }
    for(i=0;i<2;i++)
    {
        printf("%10s%5d%5d\n",a[i].name,a[i].num,a[i].piao);

    }
}
