#include <stdio.h>
#<stdlib.h>
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
    while(pt!=NULL)
    {
        pt=pt->next;

    }
    p=pt->next;
    scanf("%d%s",&p->num,p->name);
}
int main()
{int n,i;
struct Student *p;
for(i=0;i<=100;i++)
{
    printf("********************");
printf("        1:Â¼Èë       ");
printf("        2 Êä³ö       ");
printf("        3:Ìí¼Ó       ");
printf("*********************");
    scanf("%d",&n);

switch(n)
{
    case 1:p=input();break;
    case 2:print(p);break;
    case 3:add(p);
}



    return 0;

}
}
c
