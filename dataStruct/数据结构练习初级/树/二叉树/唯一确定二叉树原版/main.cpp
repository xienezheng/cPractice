#include "iostream"
#include "string.h"
using namespace std;
typedef struct BiTree
{
char data;
struct BiTree * lc,* rc;
} BiTree;

const int
StrMax=100;
char * Pre,* In;

void Init(char * Pre,char * In)
{
cout<<"Enter tree's PreOrder: ";
cin>>Pre;
cout<<"Enter tree's InOrder: ";
cin>>In;
}

void create(BiTree * & cur,int left,int right,int & pos)
{
int i;

for(i=left;In[i]!=Pre[pos];i++);      //Find out current subtree's root

cur=new BiTree;                       //Create root
cur->data=Pre[pos];
cur->lc=cur->rc=0;

if(left<=i-1)                         //Create root's left subtree
{
pos++;
create(cur->lc,left,i-1,pos);
}
if(i+1<=right)                        //Create root's right subtree
{
pos++;
create(cur->rc,i+1,right,pos);
}

}

void PostOrderPrint(BiTree * cur)
{
if(cur)
{
PostOrderPrint(cur->lc);
PostOrderPrint(cur->rc);
cout<<cur->data<<"  ";

}
}

void main(void)
{
BiTree * Tree;
int pos;
void Init(char * Pre,char * In);
void create(BiTree * & cur,int left,int right,int & pos);
void PostOrderPrint(BiTree * cur);

Pre=new char[StrMax];
In=new char[StrMax];

Init(Pre,In);
pos=0;
create(Tree,0,strlen(In)-1,pos);
cout<<"PostOrderTraverse: ";
PostOrderPrint(Tree);
cout<<endl;
}
