
#include <stdlib.h>
#include <stdio.h>
struct student
{
  int num;
  char km[20];

  int xf;
  int rf;
  int sf;
  int jf;
};//定义成绩录入结构体
struct xinxi
{
    int num;
    char name[10];
    char sex[10];
    int hm;
    long tn;
}b[3];//定义基本信息结构体


int main()

{
    int t,i,j,k=0,c,d,n=0,h[6],m;
        system("color 21");

        struct student a[6]={{11,"physics",4,23,34,86},{11,"English",3,24,35,77},{12,"Physics",4,24,34,65},
        {12,"English",3,25,46,46},{13,"Physics",4,25,35,99},{13,"English",3,14,24,76}};//无奈之举，实在无法实现手动录入
       struct xinxi b[3]={{11,"张成成","男",501,877323111},{12,"李成华","女",101,87723112},{13,"王成凤","女",101,87723113}};
        for(j=0;t!=-1;j++)
{


    printf("                      ************************************\n");
    printf("                                   1:录入成绩              \n");
    printf("                                   2:学生基本情况查询      \n");
    printf("                                   3:成绩查询              \n");
    printf("                                   4:删除功能              \n");
    printf("                                   5.排序                  \n");
    printf("                                   6:结束请输入-1          \n");
    printf("                      ************************************\n");//建立主菜单
    printf("                               请输入您要执行的操作\n");


    scanf("%d",&t);
     if(t==-1)
    {
        printf("          预祝老师春节快乐，心想事成\n");
    }
    if((t!=-1)&&(t!=1)&&(t!=2)&&(t!=3)&&(t!=4)&&(t!=5))
    {
        printf("输入有误，请重新输入\n");
    }

    if(t==1)
    {system("cls");
     printf("              学号   姓名     性别     宿舍号码   电话号码\n");//自动生成基本信息
    printf("               11    张成成    男         501      87732111\n");
    printf("               12     李成华   女        101       87723112\n");
    printf("               13     王成凤   女        101       87723113\n");
    printf("                                           系统已录入完毕\n");


        printf("             学生号:课程名称:学分:平时成绩:实验成绩:卷面成绩\n");
          for(i=0;i<=5;i++)
    {
      printf("            %5d%10s%5d%5d%10d%10d\n",a[i].num,a[i].km,a[i].xf,a[i].rf,a[i].sf,a[i].jf);

    }
    }
    if(t==3)
    {system("cls");
    printf("                     学号   姓名     性别     宿舍号码   电话号码\n");//为用户提供学生信息
    printf("                      11    张成成    男         501      87732111\n");
    printf("                      12     李成华   女        101       87723112\n");
    printf("                      13     王成凤   女        101       87723113\n");


        printf("                      请输入您要查询的学生学号(例如11）\n");
        scanf("%d",&k);
        if((k<11)||(k>13))
        {
            printf("输入有误，请重新输入\n");
        }

        for(i=0;i<=5;i++)
        {
        if(a[i].num==k)
        {
            n=n+1;//统计课程总数


                c=0.15*a[i].rf+0.15*a[i].sf+0.7*a[i].jf;//计算综合成绩
                if(c>90)//根据综合成绩计算得到的总学分
                {
                    d=a[i].xf;
                }
                if((c<=90)&&(c>80))
                {
                    d=0.8*a[i].xf;
                }
                if((c>70)&&(c<=80))
                {
                    d=0.75*a[i].xf;

                }
                if((c>=60)&&(c<=70))
                {
                    d=0.6*a[i].xf;
                }
                else{d=0;}
                printf("学生号:课程名称:学分:平时成绩:实验成绩:卷面成绩:综合成绩：实得学分:\n");
                printf("%5d%10s%5d%5d%10d%10d%10d%10d\n",a[i].num,a[i].km,a[i].xf,a[i].rf,a[i].sf,a[i].jf,c,d);
                printf("共修%d门课\n",n);


        }



        }

    }
    if(t==2)
    {system("cls");
        printf("                            请输入您要查询的学生学号：\n");
        scanf("%d",&k);
        if((k<11)||(k>13))
        {
            printf("输入有误，请重新输入\n");
        }

        for(i=0;i<=2;i++)
        {
            if(b[i].num==k)//用循环进行筛选
            {


                printf("                   学号   姓名      性别    宿舍号码   电话号码\n");
                printf("                   %d%10s%10s %5d      %5ld\n",b[i].num,b[i].name,b[i].sex,b[i].hm,b[i].tn);
            }
        }

    }
    if(t==4)
    { system("cls");
    printf("                    学号   姓名     性别     宿舍号码   电话号码\n");
    printf("                     11    张成成    男         501      87732111\n");
    printf("                     12     李成华   女        101       87723112\n");
    printf("                     13     王成凤   女        101       87723113\n");
        printf("                            请输入您要删除的学生的学号\n");
        scanf("%d",&k);
        printf("                                   已删除该学生,\n");
        printf("                                  现在的学生序列是：\n");

        for(i=0;i<=2;i++)
        {   if(b[i].num==k)
        {
            continue;
        }
            printf("学号   姓名      性别    宿舍号码   电话号码\n");
                printf("%d%10s%10s %5d      %5ld\n",b[i].num,b[i].name,b[i].sex,b[i].hm,b[i].tn);

        }
    }
    if(t==5)
    {  system("cls");
          for(i=0;i<=5;i++)
            {
        h[i]=0.15*a[i].rf+0.15*a[i].sf+0.7*a[i].jf;//用另外数组记录综合成绩
            }

        printf("            按综合成绩降序排名\n");
        for(j=5;j>=0;j--)//借组此数组排序
        {
         for(i=0;i<j;i++)
            {
                if(h[i]>h[i+1])
            {
                m=h[i+1];
                h[i+1]=h[i];
                h[i]=m;
            }
            }
        }




           for(i=5;i>=0;i--)//通过排好序的数组和结构体用循环筛选，得到排序的学生的基本信息
            {
                for(j=0;j<=5;j++)
                {
                m=0.15*a[j].rf+0.15*a[j].sf+0.7*a[j].jf;
                if(m==h[i])
            {
                printf("                           学生号:课程名称:学分:平时成绩:实验成绩:卷面成绩：综合成绩：\n");
                printf("       %5d%10s%5d%5d%10d%10d%10d",a[j].num,a[j].km,a[j].xf,a[j].rf,a[j].sf,a[j].jf,h[i]);


            }

            }
        }
}
}
}

