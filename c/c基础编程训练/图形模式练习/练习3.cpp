#include <graphics.h> // ����ͼ�ο�
#include <conio.h>
#include<stdio.h>
#include <stdlib.h>

int main()
{
	 
int i,j,m,n;
int o1,o2;
float a[10],b[10],k,t,ave1,ave2,c=0,d=0,sum1=0,sum2=0;//���������л����С��,���Զ��帡���ͣ���߾���
printf("�������ĸ���\n");
scanf("%d",&n);//ȷ����ĸ���
for(i=0;i<n;i++)
{
    printf("�������ĺ�����\n");
    scanf("%d",&a[i]);
     printf("��������������\n");
     scanf("%d",&b[i]);//����������ֱ�洢���꣬�������㡣
}
     for(i=0;i<n;i++)
     {
         sum1=sum1+a[i];

         }
         ave1=sum1/n;//��ƽ��ֵ
         for(i=0;i<n;i++)
     {
         sum2=sum2+a[i];

         }
         ave2=sum2/n;
         for(i=0;i<n;i++)
         {


                 c=c+a[i]*b[i];


         }//�������
         for(i=0;i<n;i++)
         {
             d=d+a[i]*a[i];
         }//��x��ƽ��
         k=(c-n*ave1*ave2)/(d-n*ave1*ave1);//���б��
         t=ave1-ave2*k;//��ýؾ�
         printf("�ع�ֱ�߷���Ϊ��y=%.2fx+%.2f\n",k,t);
o1=(int)100*k+t;
o2=(int)(100-t)/k;;

     initgraph(640, 480); // ��ʼ����ͼ����
     line(100,o1,o2,100);// ��Բ��Բ��(200, 200)���뾶 100
     getch(); // �����������
     closegraph(); // �ر�ͼ�ν���
	 return 0;
}