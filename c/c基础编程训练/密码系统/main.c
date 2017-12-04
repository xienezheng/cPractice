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
        printf("无法打开此文件\n");
        exit(0);
    }
    char e[100];
    for(i=0;i<=1;i++)
    {
    printf("请输入用户名\n");
    scanf("%s",d[i].num);
    printf("请输入用户所用密码\n");
    scanf("%s",d[i].mima);
    printf("请再次输入所用密码\n");
    scanf("%s",e);
    if(strcmp(d[i].mima,e)==0)
    {
        printf("注册成功\n");
        fwrite(&d[i],sizeof(struct Infor),1,fp);
    }
    else{
        printf("密码不一致，注册失败\n");
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
        printf("无法打开此文件\n");
        exit(0);
    }
    for(j=0;j<=1;j++)
    {
        fread(&d[j],sizeof(struct Infor),1,fp1);
    }

    char a[100],b[100];
    printf("请输入账号\n");
    scanf("%s",a);
    printf("请输入密码\n");
    scanf("%s",b);
    for(j=0;j<=1;j++)
    {
    if(d[j].num==a)
    {
    if(strcmp(d[j].mima,b)==0)
    {
        printf("登陆成功\n");

    }


    else{
        printf("登陆错误\n");
    }
    }
    else{
        printf("用户名不存在\n");
    }

}
 fclose(fp1);
}
int main()
{
    int k;
    system("color 21");
    printf("                       ************************************\n");
    printf("                                       1:注册              \n");
    printf("                                       2:登录              \n");
    printf("                       ************************************\n");
    printf("                             请选择您要执行的操作\n");
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

