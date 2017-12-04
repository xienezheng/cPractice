#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct Student
{
    int num;
    char name[10];
    struct Student *next;
};
int n=0;
struct Student *input()
{
    struct Student *p1,*p2,*head;
    p1=p2=(struct Student*)malloc(sizeof(struct Student));
    scanf("%d%s",&p1->num,p1->name);
    head=NULL;
    while(p1->num!=0)
    {
        n=n+1;
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
    if(head!=NULL)
    {
        while(pt!=0)
        {
            printf("%5d%10s\n",pt->num,pt->name);
            pt=pt->next;
        }
    }
}
void consult(struct Student *head)
{
    struct Student *pt;
    char a[10];
    pt=head;
    printf("Please enter the name of student:");
    scanf("%s",a);
    while(pt!=NULL)
    {
        if(strcmp(pt->name,a)==0)
        {
            printf("%d%s",pt->num,pt->name);
        }

            pt=pt->next;

    }
}
void add(struct Student *head)
{
    struct Student *pt,*p;
    pt=head;
    if(pt!=NULL)
    {
        while(pt->next!=NULL)
        {
            pt=pt->next;
        }
    }

    p=(struct Student *)malloc(sizeof(struct Student));
    pt->next=p;
    printf("请输入信息\n");
    scanf("%d%s",&p->num,p->name);
    p->next=NULL;
}
void reshuru(struct Student *head)
{
    struct Student *pt;
    int b;
    printf("请输入需要修改的学生学号\n");
    scanf("%d",&b);
    pt=head;
    if(pt!=NULL)
    {
        while(pt->num!=b)
        {
            pt=pt->next;
        }
        scanf("%d%s",&pt->num,pt->name);
}
}
void insert(struct Student *head)
{
    int b;
    struct Student *pt,*p1,*p2;
    printf("请输入插入前学号\n");
    scanf("%d",&b);
    pt=head;
    if(pt!=NULL)
    {
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

}
void dele(struct Student *head)
{
    int b;
    struct Student *pt,*p,*p1;
    pt=head;
    printf("请输入要删除的学生学号\n");
    scanf("%d",&b);
    p=pt->next;
    if(pt!=NULL)
    {
        if(b==11)
        {
            p=head;
            head=pt->next;
        }
        else{
        while(p->num!=b)
        {
            pt=pt->next;
            p=p->next;

        }
        }
    }

    pt->next=p->next;
    free(p);

}
void de(struct Student *head)
{
    struct Student *pt,*p;
    pt=head;
    if(pt!=NULL)
    {
        while(pt->next!=NULL)
        {
            p=pt;
            pt=pt->next;
            free(p);

        }
    }
}
int main()
{int a;
    struct Student *head;
    head=input();
    while(a!=0)
    {
       printf("请输入执行的操作，结束请按0\n");

    scanf("%d",&a);
    switch(a)

    {
        case 1:print(head);break;
        case 2:add(head);break;
        case 3:consult(head);break;
        case 4:reshuru(head);break;
        case 5:insert(head);break;
        case 6:dele(head);break;
        case 7:de(head);break;
    }
    }

}
