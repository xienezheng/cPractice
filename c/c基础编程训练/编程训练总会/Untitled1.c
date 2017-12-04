#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int shoudsave=0;
struct student
{
 char  num[10];//ѧ��
 char name[20];
 int cgrade;
 int mgrade;
 int egrade;
 int totle;
 int ave;
};
typedef struct node
{
 struct student data;
 struct node *next;
}Node,*Link;


void menu()
{
 printf("********************************************************************************");
 printf("\t1����ѧ������\t2ɾ��ѧ������\n");
 printf("\t3��ѯѧ������\t4����ѧ������\n");
 printf("\t5����ѧ���ɼ�\t0����\n");
 printf("********************************************************************************\n");
}

void printstart()
{
 printf("-----------------------------------------------------------------------\n");
}
void Wrong()
{
 printf("��ʾ:�������!\n");
}

void Nofind()
{
 printf("��ʾ:û���ҵ���ѧ��!\n");
}

void printc() // �����������
{
 printf("ѧ��        ����         ƽʱ�ɼ�   ʵ��ɼ�    ����ɼ�      �ۺϳɼ�    ʵ��ѧ��\n");
}

void printe(Node *p)//�������Ӣ��
{
 printf("%-12s%s\t%d\t%d\t%d\t   %d\t %d\n",p->data.num,p->data.name,  p->data.egrade,p->data.mgrade,p->data.cgrade,p->data.totle,p->data.ave);
}
Node* Locate(Link l,char findmess[],char nameornum[])  //�ú������ڶ�λ�����з���Ҫ��Ľӵ㣬�����ظ�ָ��
{
 Node *r;
 if(strcmp(nameornum,"num")==0) //��ѧ�Ų�ѯ
 {
  r=l->next;
  while(r)
  {
   if(strcmp(r->data.num,findmess)==0)
    return r;
   r=r->next;
  }
 }
 else if(strcmp(nameornum,"name")==0)  //��������ѯ
 {
  r=l->next;
  while(r)
  {
   if(strcmp(r->data.name,findmess)==0)
    return r;
   r=r->next;
  }
 }
 return 0;
}

void Add(Link l)  //����ѧ��
{
 Node *p,*r,*s;
 char num[10];
 r=l;
 s=l->next;
 while(r->next!=NULL)
  r=r->next; //��ָ��������ĩβ
 while(1)
 {
  printf("��������ѧ��(��'0'������һ���˵�:)");
  scanf("%s",num);
  if(strcmp(num,"0")==0)
   break;
  while(s)
  {
   if(strcmp(s->data.num,num)==0)
   {
    printf("��ʾ:ѧ��Ϊ'%s'��ѧ���Ѿ�����,��Ҫ�޸�����ѡ��'4 �޸�'!\n",num);
    printstart();
    printc();
    printe(s);
    printstart();
    printf("\n");
    return;
   }
   s=s->next;
  }

  p=(Node *)malloc(sizeof(Node));

  strcpy(p->data.num,num);
  printf("������������:");
  scanf("%s",p->data.name);
  getchar();
  printf("��������ƽʱ�ɼ�:");
  scanf("%d",&p->data.cgrade);
  getchar();
  printf("��������ʵ��ɼ�:");
  scanf("%d",&p->data.mgrade);
  getchar();
  printf("�����������ɼ�:");
  scanf("%d",&p->data.egrade);
  getchar();
  p->data.totle=p->data.egrade+p->data.cgrade+p->data.mgrade;
  p->data.ave=p->data.totle / 3;
  p->next=NULL;
  r->next=p;
  r=p;
  shoudsave=1;

 }
}

void Qur(Link l) //��ѯѧ��
{
 int sel;
 char findmess[20];
 Node *p;
 if(!l->next)
 {
  printf("��ʾ:û�����Ͽ��Բ�ѯ!\n");
  return;

 }
 printf("1��ѧ�Ų���  2����������\n");
 scanf("%d",&sel);
 if(sel==1)//ѧ��
 {
  printf("��������Ҫ���ҵ�ѧ��:");
  scanf("%s",findmess);
  p=Locate(l,findmess,"num");
  if(p)
  {
   printf("���ҽ��\n");
   printstart();
   printc();
   printe(p);
   printstart();
  }
  else
   Nofind();
 }
 else if(sel==2) //����
 {
  printf("��������Ҫ���ҵ�����:");
  scanf("%s",findmess);
  p=Locate(l,findmess,"name");
  if(p)
  {
   printf("\t\t\t\t���ҽ��\n");
   printstart();
   printc();
   printe(p);
   printstart();
  }
  else
   Nofind();
 }
 else
  Wrong();

}

void Del(Link l) //ɾ��
{
 int sel;
 Node *p,*r;
 char findmess[20];
 if(!l->next)
 {
  printf("��ʾ:û�����Ͽ���ɾ��!\n");
  return;
 }
 printf("1��ѧ��ɾ��  2������ɾ��\n");
 scanf("%d",&sel);
 if(sel==1)
 {
  printf("��������Ҫɾ����ѧ��:");
  scanf("%s",findmess);
  p=Locate(l,findmess,"num");
  if(p)
  {
   r=l;
   while(r->next!=p)
    r=r->next;
   r->next=p->next;
   free(p);
   printf("��ʾ:��ѧ���Ѿ��ɹ�ɾ��!\n");
   shoudsave=1;
  }
  else
   Nofind();
 }
 else if(sel==2)
 {
  printf("��������Ҫɾ��������:");
  scanf("%s",findmess);
  p=Locate(l,findmess,"name");
  if(p)
  {
   r=l;
   while(r->next!=p)
    r=r->next;
   r->next=p->next;
   free(p);
   printf("��ʾ:��ѧ���Ѿ��ɹ�ɾ��!\n");
   shoudsave=1;
  }
  else
   Nofind();
 }
 else
  Wrong();
}


void Save(Link l)
{
 FILE* fp;
 Node *p;
 int flag=1,count=0;
 fp=fopen("c://student","wb");
 if(fp==NULL)
 {
  printf("��ʾ:���´��ļ�ʱ��������!\n");
  exit(1);
 }
 p=l->next;

 while(p)
 {
  if(fwrite(p,sizeof(Node),1,fp)==1)
  {
   p=p->next;
   count++;
  }
  else
  {
   flag=0;
   break;
  }
 }
 if(flag)
 {
  printf("��ʾ:�ļ�����ɹ�.(��%d����¼�Ѿ�����.)\n",count);
  shoudsave=0;
 }
 fclose(fp);
}

int main()
{
 Link l;//����
 FILE *fp; //�ļ�ָ��
 int sel;
 char ch;

 int count=0;
 Node *p,*r;
 printf("\t\t\t\tѧ���ɼ�����ϵͳ\n\t\t\t-------------------------------\n");
 l=(Node*)malloc(sizeof(Node));
 l->next=NULL;
 r=l;

 fp=fopen("C://student","ab+");
 if(fp==NULL)
 {
  printf("��ʾ:�ļ����ܴ�!\n");
  exit(0);
 }
 printf("��ʾ:�ļ��Ѿ���,���ڵ����¼......\n");

 while(!feof(fp))
 {
  p=(Node*)malloc(sizeof(Node));
  if(fread(p,sizeof(Node),1,fp)==1) //���ļ������ݷ���ӵ���
  {
   p->next=NULL;
   r->next=p;
   r=p; //���ýӵ��������
   count++;
  }
 }

 fclose(fp); //�ر��ļ�
 printf("��ʾ:��¼�������,������%d����¼.\n",count);
 menu();
 while(1)
 {
  printf("����ѡ�����:");
  scanf("%d",&sel);

  if(sel==0)
  {
   if(shoudsave==1)
   { getchar();
    printf("��ʾ:�����Ѿ��Ķ�,�Ƿ񽫸Ķ����浽�ļ���(y/n)?/n");
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
     Save(l);
   }
   printf("��ʾ:���Ѿ��˳�ϵͳ,�ټ�!/n");
   break;
  }
  switch(sel)
  {
  case 1:Add(l);break; //����ѧ��
  case 2:Del(l);break;//ɾ��ѧ��
  case 3:Qur(l);break;//��ѯѧ��
  case 4:Save(l);break;//����ѧ��
  case 5:printf("==========������Ϣ==========\n");menu();break;
  default: Wrong();getchar();break;
  }
 }

 while (l){   //�ͷ�����l(����1)��ռ�õ��ڴ棡
       p = l;
       l = l->next;
       free(p);
       }

       getch();

 return 0;
}


