#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int *p,*pt;
    int i,j,k;
    p=a;
    int n,m;
    scanf("%d%d",&n,&m);
    for(i=40;i<40+n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=40;i<40+m;i++)
    {
        *(p+n+i)=*(p+i);
    }
    for(i=40+m;i<40+m+n;i++)
    {
        printf("%5d",*(p+i));
    }
    return 0;
}
