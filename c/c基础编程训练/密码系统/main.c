#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int z;
struct Infor
{
     char num[100];
    char mima[100];
}d[100];
void rigister()
{
    int i=0;
    FILE *fp;
    if((fp=fopen("xinxi","wb"))==NULL)
    {
        printf("�޷��򿪴��ļ�\n");
        exit(0);
    }
    char e[100];
    for(i=0;i<=1;i++)
    {
    printf("�������û���\n");
    scanf("%s",d[i].num);
    printf("�������û���������\n");
    scanf("%s",d[i].mima);
    printf("���ٴ�������������\n");
    scanf("%s",e);
    if(strcmp(d[i].mima,e)==0)
    {
        printf("ע��ɹ�\n");
        fwrite(&d[i],sizeof(struct Infor),1,fp);
    }
    else{
        printf("���벻һ�£�ע��ʧ��\n");
    }

    }
    fclose(fp);

}
void load()
{
    int j;
     FILE *fp1;
    if((fp1=fopen("xinxi","rb"))==NULL)
    {
        printf("�޷��򿪴��ļ�\n");
        exit(0);
    }
    for(j=0;j<=1;j++)
    {
        fread(&d[j],sizeof(struct Infor),1,fp1);
    }

    char a[100],b[100];
    printf("�������˺�\n");
    scanf("%s",a);
    printf("����������\n");
    scanf("%s",b);
    for(j=0;j<=1;j++)
    {
    if(d[j].num==a)
    {
    if(strcmp(d[j].mima,b)==0)
    {
        printf("��½�ɹ�\n");

    }


    else{
        printf("��½����\n");
    }
    }
    else{
        printf("�û���������\n");
    }

}
 fclose(fp1);
}
int main()
{
    int k;
    system("color 21");
    printf("                       ************************************\n");
    printf("                                       1:ע��              \n");
    printf("                                       2:��¼              \n");
    printf("                       ************************************\n");
    printf("                             ��ѡ����Ҫִ�еĲ���\n");
    scanf("%d",&k);
    system("cls");
    if(k==1)
    {
        rigister();
    }
    if(k==2)
    {
        load();
    }
    return 0;


}

