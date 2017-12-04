#include <iostream>
#include<stack>

using namespace std;
template<typename T>
struct treenode//结构体本无构造函数，另注意，不要treenode*pt=new treenode;just pt;
{
    T data;
    treenode<T>*left;
    treenode<T>*right;//访问可有两种，一种是用返回头指针函数，另一种就是定义两次双印用

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

    void createtree2(treenode<char>*&pt)
    {
        int i;
        stack<treenode<char>*>s;
        pt=NULL;
            treenode<char>*p,*t;
            int k;
            T ch;
            cin>>ch;
         while(ch!='#')
                {switch(ch)
                {
                    case '(':s.push(p);k=1;break;
                    case ')':t=s.top();s.pop();break;
                    case ',':k=2;break;
                    default:
                        p=new treenode<char>;
                        p->data=ch;
                        if(pt==NULL)
                        {
                            pt=p;
                        }
                        else if(k==1)
                        {
                            t=s.top();
                            t->left=p;
                        }
                        else
                        {
                            t=s.top();
                            t->right=p;
                        }
                }
                cin>>ch;
            }
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
  one.createtree();
one.display2(one.getroot(),1);
}
