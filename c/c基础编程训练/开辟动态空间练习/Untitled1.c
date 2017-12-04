#include<stdio.h>
#include<stdlib.h>
struct Student
{
    int num;
    char name[10];
    struct Student *next;
};
int n;

struct Student * input()
{
    struct Student *head,*p1,*p2;
    n=0;
    p1=p2=(struct Student *)malloc(sizeof(struct Student));
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
    struct Student *p;
    p=head;
    if(p!=NULL)
    {
    while(p!=NULL)
    {
    printf("%d",p->num);
    p=p->next;
    }
    }
}
