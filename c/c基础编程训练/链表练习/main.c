
#include<string.h>
#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int num;
    char name[100];
    struct Student *next;
};
int n=0;

struct Student *input()
{
    struct Student *head,*p1,*p2;
    head=NULL;
    p1=p2=(struct Student*)malloc(sizeof(struct Student));
    scanf("%d%s",&p1->num,&p1->name);
    while(p1->num!=0)
    {
        n++;
        if(n==1)
        {
            head=p1;
        }
        else{
            p2->next=p1;
        }
        p2=p1;
           p1=(struct Student*)malloc(sizeof(struct Student));
    scanf("%d%s",&p1->num,p1->name);

    }
    p2->next=NULL;
    return(head);

};
void print(struct Student *head)
{
    struct Student *pt;
    pt=head;
    while(pt!=NULL)
    {
        printf("%d%s",pt->num,pt->name);
        pt=pt->next;
    }
}
void add(struct Student *head)
{
    struct Student*pt,*p;
    pt=head;
    while(pt->next!=NULL)
    {
        pt=pt->next;

    }
    p=(struct Student *)malloc(sizeof(struct Student));
    pt->next=p;
    scanf("%d%s",&p->num,p->name);
    p->next=NULL;
}
void xiugai(struct Student *head)
{
    int a;

    struct Student *pt,*p;
    pt=head;
    printf("Please enter the number of the student:");
    scanf("%d",&a);
    while(pt->num!=a)
    {
        pt=pt->next;
    }
scanf("%d%s",&pt->num,pt->name);

}
void consult(struct Student *head)
{
    char a[100];
    struct Student *pt,*p;
    pt=head;
    printf("Please enter the name of the student:\n");
    scanf("%s",a);
    while(strcmp(pt->name,a)!=0)
    {
        pt=pt->next;
    }
    printf("%d%s",pt->num,pt->name);
}
void insert(struct Student *head)
{
    int b;
    struct Student *pt,*p1,*p2;

    pt=head;
    printf("请输入插入前学号\n");
    scanf("%d",&b);

        while(pt->num!=b)
        {
            pt=pt->next;
        }
        p2=pt->next;
        p1=(struct Student*)malloc(sizeof(struct Student));
        pt->next=p1;
        scanf("%d%s",&p1->num,p1->name);
        p1->next=p2;



}
void delete(struct Student *head)
{
    struct Student *p1,*p2,*p3;
    p1=head;
    p2=p1->next;
    int a;
    printf("Please enter the number of the student who has to be deleted:\n");
    scanf("%d",&a);
    while(p2->num!=a)
    {
        p2=p2->next;
        p1=p1->next;
    }
    p1->next=p2->next;
    free(p2);
}
void de(struct Student * head)
{
    struct Student *pt,*p;
    pt=head;
    while(pt->next!=NULL)
    {
        p=pt;
        pt=pt->next;
        free(p);
    }
}


int main()
{int n,i;
struct Student *p;
p=input();
for(i=0;i<=100;i++)
{
    printf("********************\n");
printf("        1:录入       \n");
printf("        2 输出       \n");
printf("        3:添加       \n");
printf("        4:修改        \n");
printf("        5:按名字查询  \n");
printf("        6:插入信息     \n");
printf("        7:删除         \n");
printf("        8:更新         \n");
printf("*********************\n");
    scanf("%d",&n);

switch(n)
{
    case 1:p=input();break;
    case 2:print(p);break;
    case 3:add(p);break;
    case 4:xiugai(p);break;
    case 5:consult(p);break;
    case 6:insert(p);break;
    case 7:delete(p);break;
    case 8:de(p);break;
}




}
}
