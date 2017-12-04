#include <iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;
template<typename T>
struct treenode
{
    T data;
    treenode<T>*left;
    treenode<T>*right;
    treenode(treenode<T>*p1,treenode<T>*p2)
    {
        left=p1;
        right=p2;

    }
     treenode(const T &temp,treenode<T>*p1,treenode<T>*p2)
    {
        data=temp;
        left=p1;
        right=p2;

    }
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
    void push(binarytree<T>&tree)
    {

    }

};

int main()
{
   binarytree<int>one;
   cin>>one;
}
