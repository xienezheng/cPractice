#include <iostream>
#include<stack>

using namespace std;
template<typename T>
struct treenode//结构体本无构造函数，另注意，不要treenode*pt=new treenode;just pt;
{
    T data;
    treenode<T>*firstchild;
    treenode<T>*nextsibling;//访问可有两种，一种是用返回头指针函数，另一种就是定义两次双印用

};
template<typename T>
class binarytree
{
    protected:
    treenode<T>*root;


    void visit(treenode<T>*p)
    {
        cout<<p->data;
    }

    void createtree2(char *&temp)
    {
       if(*temp=='\0')
       {
           return NULL;
       }
       if(*(temp)==')')
       {
           temp++;
           return NULL;
       }
       if(*(temp)=='(')
       {
           temp++;
       }
       treenode<T>*t=new treenode<T>(*(temp++));
       t->firstchild=createtree2(temp);
       t->nextsibling=createtree2(temp);
       return t;
    }


    int size(treenode<T>*root)
    {
        if(root==NULL)
        {
            return 0;
        }
        else{
            return 1+size(root->left)+size(root->right);
        }
    }



    public:
        binarytree()
        {
            root=NULL;
        }
        void createtree()
        {
            createtree2(root);
        }
       bool empty()
        {
            if(root==NULL)
            {
                return true;
            }
            else{
                return false;
            }
        }
        int size()
        {
            return(size(root));
        }
treenode<T>* getroot()
    {
        return root;
    }

   void display2(treenode<T>*root,int level)
{
    if(root==NULL)
    {
        return;
    }
    display2(root->right,level+1);
 if(level!=1)
    {
        for(int i=0;i<6*(level-2);i++)
        {
            cout<<"*";
        }
            cout<<"_____";

    }
    cout<<root->data<<endl;;
    display2(root->left,level+1);
}

};

int main()
{
   binarytree<char>one;
  one.createtree(one.getroot());
one.display2(one.getroot(),1);
}
