#include <stdio.h>
#include <stdlib.h>
int * input(int a[])
{

    int * p;
    int i;
    p=a;
    for(i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }


    return(p);
}
void change(int *p)
{
    int *p1;

    int i;
    p1=p;
    for(i=0;i<5;i++)
    {
        *(p+i)=*(p+i)+1;
    }
}
int main()
{
    int i,a[5];

    int *pt;
    pt=input(a);
    change(pt);
    for(i=0;i<5;i++)
    {
        printf("%5d",*(pt+i));
    }
return 0;
}
