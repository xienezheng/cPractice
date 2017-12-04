#include <iostream>
//递归现总结了三种，一种是递归家回溯，递归找到作用点，回溯解决问题。典型的就是累加，计数。
//另一种，函数内部有功能实现，但是通过递归逐一检测实现功能，例如find,parent
//最后也不知道是神魔种，就是遍历的感觉，通过递归的罗列暴力的遍历，如inpro
//其实二三中可以合并，关键就在于全部遍历进而组件解决问题，前提是结束条件一定要有，否则错
#include<queue>
#include<stack>
#include<string>
using namespace std;
struct treenode
{
     string data;//下列函数中，find，构造，add为关键
    treenode* firstchild;
    treenode* nextsibling;
};

    treenode* initree()//建立头结点
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
    treenode* find1(treenode *root,string temp)//搜索节点
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
    void add(treenode *root)//添加元素
    {
        treenode * p,*front;
        string temp;
        int al;
      if(p=new treenode)
      {
          cout<<"请输入结点数据"<<endl;
          cin>>p->data;
          p->firstchild=NULL;
              p->nextsibling=NULL;

              cout<<"输入第一个孩子数据请按1，输入兄弟数据请按2"<<endl;
              do
              {
                  cin>>al;
                  switch(al)
                  {
                  case 1:
                       cout<<"请输入其父节点数据"<<endl;
              cin>>temp;
              front=find1(root,temp);
                    front->firstchild=p;
                    cout<<"数据添加成功"<<endl;
                    break;
                  case 2:
                       cout<<"请输入其前一兄长节点数据"<<endl;
              cin>>temp;
              front=find1(root,temp);
                    front->nextsibling=p;
                    cout<<"数据添加成功"<<endl;
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
int height(treenode*root)//高度或深度
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
