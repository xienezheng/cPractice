#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
	void graph(float k,float b,int *x,int *y,int n);
	printf("��������Ҫ��������������");
	int n,i,xiyi=0,xi2=0;
	float xba=0,yba=0,a,b;
	scanf("%d",&n);
	int*x=(int*)malloc(n*sizeof(int));
	int*y=(int*)malloc(n*sizeof(int));//���ٶ�̬���飬��ָ�����ʽ��
	for(i=0;i<n;i++)
	{
		printf("�������%d����ĺ����꣺",i+1);//��ʾ���㡣
		scanf("%d",&x[i]);//��������ʽ������� ��������������������
		printf("�������%d����������꣺",i+1);
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
	if(a>=0){printf("��ֱ�ߵķ���Ϊ��y=%.2fx+%.2f\n",b,a);}
	if(a<0){printf("��ֱ�ߵķ���Ϊ��y=%.2fx%.2f\n",b,a);}
	printf("��������鿴ֱ�ߣ�");
	scanf("%d",&i);
	graph(b,a,x,y,n);
}
