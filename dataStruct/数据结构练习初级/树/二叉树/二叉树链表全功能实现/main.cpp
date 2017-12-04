#include <iostream>

using namespace std;
template<class T>
struct treenode
{

    T data;
    treenode<T>* left;
    treenode<T>* right;
treenode(treenode<T>*p1=NULL,treenode<T>*p2=NULL)
{
    left=p1;
    right=p2;
}
treenode( T temp,treenode<T>*p1=NULL,treenode<T>*p2=NULL)
{
    data=temp;
    left=p1;
    right=p2;
}

};
template<class T>
class binarytree
{


    protected:
     treenode<T>* root;

     treenode<T>* create(binarytree<T>*&root)
     {
         T temp;
         cin>>temp;
         treenode<T>* pt;
        pt=root;
         if(temp==0)
         {
             pt=NULL;

         }
         else
            {
            pt=new binarytree<T>;
            pt->data=temp;
         create(pt->left);
         create(pt->right);

            }
        }



     int size(treenode<T>*root)
        {
            treenode<T>*pt=root;
            return 1+size(pt->leftp)+size(pt->rightp);
        }


/*
     friend istream&operator>>(istream&in,binarytree<T>&Tree)
     {
         CreateBinTree(in,Tree.root);
         return in;
     }
     firend ostream&operator<<(ostream &out,binarytree<T>Tree)
     {
         Tree.Traverse(Tree.root,out);
         out<<endl;
         return out;

     }*/

    public:
        binarytree(treenode<T>*&root)//¹¹Ôì
        {
            create(root);
        }
        bool empty()//ÅÐ¿Õº¯Êý
        {
            if(root==NULL)
            {
                return false;
            }
            else{
                return true;
            }
        }
        int size()
        {
            return(size(root));
        }


};
int main()
{
    treenode<int>*one;
    one=new treenode<int>;
binarytree<int>hyb(one);





}
