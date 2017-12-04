#include <stdio.h>
#include <stdlib.h>
struct Student
{

    char sex[10];

    union B
{
    int num;
    char name[10];
}category;
}p[2];
int main()
{
    int i;
    for(i=0;i<=1;i++)
    {
        scanf("%s",p[i].sex);
        if(p[i].sex=='m')
        {
            scanf("%d",&p[i].category.num);
        }
        if(p[i].sex=='f'){
            scanf("%s",p[i].category.name);
        }
    }
    printf("%d",p[0].num);
    printf("%s",p[1].name);
}
