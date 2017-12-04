#include <stdio.h>
#include <stdlib.h>
void input(int x[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",x[i]);
    }

}
int main()
{
    int a[10];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    input(a,10);
}



