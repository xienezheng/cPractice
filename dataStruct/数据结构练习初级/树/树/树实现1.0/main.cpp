#include <iostream>
//�ݹ����ܽ������֣�һ���ǵݹ�һ��ݣ��ݹ��ҵ����õ㣬���ݽ�����⡣���͵ľ����ۼӣ�������
//��һ�֣������ڲ��й���ʵ�֣�����ͨ���ݹ���һ���ʵ�ֹ��ܣ�����find,parent
//���Ҳ��֪������ħ�֣����Ǳ����ĸо���ͨ���ݹ�����б����ı�������inpro
//��ʵ�����п��Ժϲ����ؼ�������ȫ�������������������⣬ǰ���ǽ�������һ��Ҫ�У������
#include<queue>
#include<stack>
#include<string>
using namespace std;
struct treenode
{
     string data;//���к����У�find�����죬addΪ�ؼ�
    treenode* firstchild;
    treenode* nextsibling;
};

    treenode* initree()//����ͷ���
    {
      treenode * p;
      if(p=new treenode)
      {
          cout<<"please enter the root"<<endl;
          cin>>p->data;
          p->firstchild=NULL;
              p->nextsibling=NULL;
      }
      return(p);
    }
    treenode* find1(treenode *root,string temp)//�����ڵ�
    {
        treenode* pt;
        if(root==NULL)
        {
            return NULL;
        }
        else{
            if(root->data==temp)
            {
                return(root);
            }
            else{
                if(pt=find1(root->firstchild,temp))
                {
                    return(pt);
                }
                else if(pt=find1(root->nextsibling,temp))
                {
                    return(pt);
                }
                else{
                    return NULL;
                }

            }
        }

    }
    void add(treenode *root)//���Ԫ��
    {
        treenode * p,*front;
        string temp;
        int al;
      if(p=new treenode)
      {
          cout<<"������������"<<endl;
          cin>>p->data;
          p->firstchild=NULL;
              p->nextsibling=NULL;

              cout<<"�����һ�����������밴1�������ֵ������밴2"<<endl;
              do
              {
                  cin>>al;
                  switch(al)
                  {
                  case 1:
                       cout<<"�������丸�ڵ�����"<<endl;
              cin>>temp;
              front=find1(root,temp);
                    front->firstchild=p;
                    cout<<"������ӳɹ�"<<endl;
                    break;
                  case 2:
                       cout<<"��������ǰһ�ֳ��ڵ�����"<<endl;
              cin>>temp;
              front=find1(root,temp);
                    front->nextsibling=p;
                    cout<<"������ӳɹ�"<<endl;
                    break;
                  }
              }while(al!=1&&al!=2);
      }
    }
    void visit(treenode*p)
    {
        cout<<p->data;
    }
    void getsibiling(treenode*root,string temp)
    {
        treenode*p1;

        p1=find1(root,temp);

          while(p1->nextsibling!=NULL)
          {p1=p1->nextsibling;
            visit(p1);
          }



    }
    int size(treenode*root)
    {
        if(root==NULL)
        {
            return NULL;
        }
        else{
            return 1+size(root->firstchild)+size(root->nextsibling);
        }
    }
    void fropro(treenode*root)
    {
        if(root)
        {

        cout<<root->data;
        fropro(root->firstchild);
        fropro(root->nextsibling);
        }
    }
    void display2(treenode*root,int level)
{
    if(root==NULL)
    {
        return;
    }
    display2(root->nextsibling,level+1);
 if(level!=1)
    {
        for(int i=0;i<6*(level-2);i++)
        {
            cout<<"*";
        }
            cout<<"_____";

    }
    cout<<root->data<<endl;;
    display2(root->firstchild,level+1);
}
int height(treenode*root)//�߶Ȼ����
    {
        if(root==NULL)
        {
            return 0;
        }
       else{
        return 1+height(root->firstchild);
       }

    }
    void dfs(treenode*root)
    {
        queue<treenode*>q;
        if(root!=NULL)
        {
        q.push(root);
        while(!q.empty())
        {
        cout<<q.front()->data;
        root=q.front();
        q.pop();
        for(root=root->firstchild;root!=NULL;root=root->nextsibling)
        {
            q.push(root);

        }
        }
        }

    }
    void allkids(treenode*root,string temp)
    {
        treenode*p,*pt;
        p=find1(root,temp);
        pt=p->firstchild;

        while(pt!=NULL)
        {
             cout<<pt->data<<endl;
             pt=pt->nextsibling;
        }
    }


    void bfs(treenode*root)
    {
        if(root!=NULL)
        {
            cout<<root->data;
            bfs(root->firstchild);
            bfs(root->nextsibling);
        }
    }



    int main()
    {
        treenode*root;
        treenode*p;
        root=initree();

        add(root);
        add(root);
        add(root);
        bfs(root);
    }
