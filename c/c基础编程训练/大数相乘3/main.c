#include <stdio.h>
int main(){
   int a[100];
   int b[100];
   int c[100][100];
   int d[200];
   int m,n,i,j,k,x,y;
   printf("�����������λ��:");
   scanf("%d",&m);
   printf("�������һ������:\n");
   for(i=0;i<m;i++)
      scanf("%d",&a[i]);
   printf("�����������λ��:");
   scanf("%d",&n);
   printf("������ڶ�������:\n");
   for(j=0;j<n;j++)
      scanf("%d",&b[j]);
   for(i=0;i<m;i++)
      for(j=0;j<n;j++)
         c[i][j]=a[i]*b[j];
   x=0,k=0;
   while(k-x<n){
      i=x,j=k-x;
      d[k]=0;
      while(j<n&&i>=0){
         d[k]=d[k]+c[i][j];
         i--;
         j++;
      }
      if(x==m-1)
         x=m-1;
      else x++;
      k++;

      y=k-1;
   }
   for(i=y;i>0;i--){
      j=d[i]/10;
      d[i]=d[i]%10;
      d[i-1]=d[i-1]+j;
   }
   printf("������˵Ľ��Ϊ:");
   for(i=0;i<=y;i++)
      printf("%d",d[i]);
   printf("\n");
   return 0;
}
