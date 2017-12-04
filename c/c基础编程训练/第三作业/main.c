#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,j,m,n;
float a[10],b[10],k,t,ave1,ave2,c=0,d=0,sum1=0,sum2=0;//由于运算中会出现小数,所以定义浮点型，提高精度
printf("请输入点的个数\n");
scanf("%d",&n);//确定点的个数
for(i=0;i<n;i++)
{
    printf("请输入点的横坐标\n");
    scanf("%d",&a[i]);
     printf("请输入点的纵坐标\n");
     scanf("%d",&b[i]);//用两个数组分别存储坐标，便于运算.
}
     for(i=0;i<n;i++)
    {
         sum1=sum1+a[i];
    }
         ave1=sum1/n;//算平均值
         for(i=0;i<n;i++)
     {
         sum2=sum2+a[i];

         }
         ave2=sum2/n;
         for(i=0;i<n;i++)
         {
c=c+a[i]*b[i];
         }//算相乘数
         for(i=0;i<n;i++)
         {
             d=d+a[i]*a[i];
         }//算x的平方
         k=(c-n*ave1*ave2)/(d-n*ave1*ave1);//求得斜率
         t=ave1-ave2*k;//求得截距
         printf("回归直线方程为；y=%.2fx+%.2f\n",k,t);
return 0;

}
