#include <stdio.h>
#include <stdlib.h>
struct score
{
    int one;
    int two;
    int three;
}b[3];
struct Student
{
    int num;
    char name[10];
    struct score b[5];
}a[3];
void print(struct Student a[])
{int i;
for(i=0;i<=2;i++)
{
    printf("%d %s %d %d %d\n",a[i].num,a[i].name,a[i].b[i].one,a[i].b[i].two,a[i].b[i].three);
}


}
int main()
{
    int i;
    for(i=0;i<=2;i++)
    {
        scanf("%d%s%d%d%d",&a[i].num,a[i].name,&a[i].b[i].one,&a[i].b[i].two,&a[i].b[i].three);
    }
    print(a);
}
