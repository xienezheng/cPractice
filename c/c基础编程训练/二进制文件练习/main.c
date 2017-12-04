#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int num;
    char name[10];
}a[3];
int main()
{
 FILE *fp;
 int i,j,k;
 if((fp=fopen("a.dat","rb"))==NULL)
 {
     printf("无法打开此文件\n");
     exit(0);
 }

 for(i=0;i<3;i++)
 {
     fread(&a[i],sizeof(struct Student),1,fp);
     printf("%d%s",a[i].num,a[i].name);
 }
fclose(fp);
}
