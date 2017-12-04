#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	void graph(float k,float b,int *x,int *y,int n);
	printf("请输入所要输入的坐标个数：");
	int n,i,xiyi=0,xi2=0;
	float xba=0,yba=0,a,b;
	scanf("%d",&n);
	int*x=(int*)malloc(n*sizeof(int));
	int*y=(int*)malloc(n*sizeof(int));//开辟动态数组，以指针的形式。
	for(i=0;i<n;i++)
	{
		printf("请输入第%d个点的横坐标：",i+1);//提示亮点。
		scanf("%d",&x[i]);//以数组形式输入输出 ，适用于所有数据类型
		printf("请输入第%d个点的纵坐标：",i+1);
		scanf("%d",&y[i]);
	}
	for(i=0;i<n;i++)
	{
		xba=xba+x[i];
	}
	for(i=0;i<n;i++)
	{
		yba=yba+y[i];
	}
	xba=xba/n;
	yba=yba/n;
	for(i=0;i<n;i++)
	{
		xiyi=xiyi+x[i]*y[i];
	}
	for(i=0;i<n;i++)
	{
		xi2=xi2+x[i]*x[i];
	}
	b=(xiyi-n*xba*yba)/(xi2-n*xba*xba);
	a=yba-b*xba;
	if(a>=0){printf("此直线的方程为：y=%.2fx+%.2f\n",b,a);}
	if(a<0){printf("此直线的方程为：y=%.2fx%.2f\n",b,a);}
	printf("按任意键查看直线：");
	scanf("%d",&i);
	graph(b,a,x,y,n);
}
