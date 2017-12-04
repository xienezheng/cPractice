#include <stdio.h>
#include <stdlib.h>
struct Score
{
    int physics;
    int math;
    int art;
};
struct student
{
    int num;
    char name[10];
    struct Score b;
}a[100];
int main()
{int r;
int i,j,k,t,sum=0,sum1=0,sum2=0,ave;
scanf("%d",&r);

    for(i=0;i<=r-1;i++)
    {
        printf("请输入学生信息\n");
        scanf("%d%s%d%d%d",&a[i].num,a[i].name,&a[i].b.physics,&a[i].b.math,&a[i].b.art);

    }

    for(i=0;i<=r-1;i++)
    {
        sum=sum+a[i].b.physics;
    }
    ave=sum/r;
    printf("%5d",ave);

    for(i=0;i<=r-1;i++)
    {
        sum1=sum1+a[i].b.math;
    }
    ave=sum1/r;
    printf("%5d",ave);


    for(i=0;i<=r-1;i++)
    {
        sum2=sum2+a[i].b.art;
    }
    ave=sum2/r;
    printf("%5d\n",ave);

     t=a[0].b.physics+a[0].b.math+a[0].b.art;
    for(i=0;i<=r-1;i++)
    {
        if(a[i].b.physics>=t)
        {
            t=a[i].b.physics;
            k=i;
        }
    }

    printf("%5d%10s%5d%5d%5d%5d\n",a[k].num,a[k].name,a[k].b.physics,a[k].b.math,a[k].b.art,j);

    return 0;


}
