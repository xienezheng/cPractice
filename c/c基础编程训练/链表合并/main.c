#include <stdio.h>
#include <stdlib.h>
struct Student1
{
    int num;
    int score;
    struct Student1 * next;
};
struct Student2
{
    int num;
    int score;
    struct Student2 * next;
};
struct Student3
{
     int num;
    int score;
    struct Student3 * next;
};
struct Student1 *input1()
{
    struct Student1*p1,*p2,*head;
    int n=0;
    head=NULL;
    p1=p2=(struct Student1*)malloc(sizeof(struct Student1));
    scanf("%d%d",&p1->num,&p1->score);
    while(p1->num!=0)
    {
        n++;
        if(n=1)
        {
            head=p1;
        }
        else{
            p2->next=p1;
        }
        p2=p1;
        p1=p2=(struct Student1*)malloc(sizeof(struct Student1));
    scanf("%d%d",&p1->num,&p1->score);

    }
    p2->next=NULL;
    return(head);
};
struct Student2 *input2()
{
    struct Student2*p1,*p2,*head;
    int n=0;
    head=NULL;
    p1=p2=(struct Student2*)malloc(sizeof(struct Student2));
    scanf("%d%d",&p1->num,&p1->score);
    while(p1->num!=0)
    {
        n++;
        if(n=1)
        {
            head=p1;
        }
        else{
            p2->next=p1;
        }
        p2=p1;
        p1=p2=(struct Student2*)malloc(sizeof(struct Student2));
    scanf("%d%d",&p1->num,&p1->score);

    }
     p2->next=NULL;
    return(head);
};
int main()
{
    struct Student1 * pt1;
    struct Student2 * pt2;
    pt1=input1();
    pt2=input2();
    while(pt1->next!=NULL)
    {
        pt1=pt1->next;
    }
    pt1->next=pt2;
    while(pt1->next!=NULL)
    {
        pt1=pt1->next;
    }
    while(pt1->next!=NULL)
    {
        printf("%d%d",pt1->num,pt1->score);
        pt1=pt1->next;
    }

}

