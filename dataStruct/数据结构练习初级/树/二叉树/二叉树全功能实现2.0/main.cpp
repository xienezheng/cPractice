#include<iostream>


#include <iostream>
#include <iostream>
#include <stack>
#include <queue>
using namespace std;
#ifndef _BINARY_TREE_H_
#define _BINARY_TREE_H_
using namespace std;
template<class T>
struct BiNode
{
    T data;
    BiNode<T>* lchild, *rchild;

};

template<class T>
class BiTree
{
public:
    BiTree();
    ~BiTree();
    BiNode<T>* GetRoot();
    void PreOrder(BiNode<T>* node);
    void InOrder(BiNode<T>* node);
    void PostOrder(BiNode<T>* node);

    //非递归实现
    void PreOrderNonRec(BiNode<T>* node);
    void InOrderNonRec(BiNode<T>* node);
    void PostOrderNonRec(BiNode<T>* node);
    void LevelOrder(BiNode<T>* node);//层次遍历
protected:
private:
    BiNode<T>* m_root;
    BiNode<T>* Create();
    void Release(BiNode<T>* root);
};
#endif
//bianry_tree.cpp



using namespace std;
template<class T>
BiNode<T>* BiTree<T>::GetRoot()
{
    return m_root;
}

template<class T>
BiTree<T>::BiTree()
{
    m_root = new BiNode<T>;
    m_root = Create();

}

template<class T>
BiTree<T>::~BiTree()
{
    Release(m_root);
}
template<class T>
BiNode<T>* BiTree<T>::Create()
{
    char ch;
    cin>>ch;
    BiNode<T>* pnode;
    if (ch == '#')
        pnode = NULL;
    else
    {
        pnode = new BiNode<T>;
        pnode->data = ch;
        pnode->lchild = Create();
        pnode->rchild = Create();
    }
    return pnode;
}

template<class T>
void BiTree<T>::Release( BiNode<T>* root )
{
    if(root != NULL)
    {
        Release(root->lchild);
        Release(root->rchild);
    }
}

template<class T>
void BiTree<T>::PreOrder(BiNode<T>* node)
{
    //TLR的第一个一定是树根
    if(node == NULL)
        return;
    else
    {
        cout<<node->data<<" ";
        PreOrder(node->lchild);
        PreOrder(node->rchild);
    }
}

template<class T>
void BiTree<T>::InOrder(BiNode<T>* node)
{
    //由前序遍历和中序遍历可以确定唯一二叉树
    //后序遍历和中序遍历也可以
    //但是前序和后序一起不可以
    //特点是 前后定根，中序定左右
    if(node == NULL)
        return;
    else
    {
        InOrder(node->lchild);
        cout<<node->data<<" ";
        InOrder(node->rchild);
    }

}

template<class T>
void BiTree<T>::PostOrder(BiNode<T>* node)
{
    //LRT的最后一个一定是树根
    if(node == NULL)
        return;
    else
    {
        PostOrder(node->lchild);
        PostOrder(node->rchild);
        cout<<node->data<<" ";
    }

}

template<class T>
void BiTree<T>::PreOrderNonRec(BiNode<T>* node)
{
    stack<BiNode<T>*> s;
    BiNode<T>* p = node;
    while(p != NULL || !s.empty())
    {
        while(p != NULL)
        {
            cout<<p->data<<" ";
            s.push(p);
            p = p->lchild;
        }
        if (!s.empty())
        {
            p = s.top();
            s.pop();
            p = p->rchild;
        }
    }


}


template<class T>
void BiTree<T>::InOrderNonRec(BiNode<T>* node)
{
    //先序遍历非递归需要借助stack s来实现，模拟递归调用
    //总的循环边界是当前节点不为空或者stack不空，
    //@1 在当前节点p非空时候，将p入栈s,p的左子树赋给p,保证左子树都能入栈
    //  p为空时候，也就是左子树最左边访问到了，这时候在栈非空的时候
    //@2 取栈顶给p，输入p，出栈，这时候最底层的最左边节点访问了，将p的右子树赋给p，重复@1
    stack<BiNode<T>*> s;
    BiNode<T>* p = node;
    while(p != NULL || !s.empty())
    {
        while (p != NULL)
        {
            s.push(p);
            p = p->lchild;
        }
        if (!s.empty())
        {
            p = s.top();
            cout<<p->data<<" ";
            s.pop();
            p = p->rchild;
        }
    }
}

template<class T>
void BiTree<T>::PostOrderNonRec(BiNode<T>* node)
{

    //要保证根结点在左孩子和右孩子访问之后才能访问，
    //因此对于任一结点P，先将其入栈。如果P不存在左孩子和右孩子，则可以直接访问它；
    //或者P存在左孩子或者右孩子，但是其左孩子和右孩子都已被访问过了，则同样可以直接访问该结点。
    //若非上述两种情况，则将P的右孩子和左孩子依次入栈，这样就保证了每次取栈顶元素的时候，
    //左孩子在右孩子前面被访问，左孩子和右孩子都在根结点前面被访问。
    if(node == NULL)
        return;
    stack<BiNode<T>*> s;
    s.push(node);//node是root
    BiNode<T>* pre = NULL;
    BiNode<T>* cur;
    while(!s.empty())
    {
        cur = s.top();
        if(cur->lchild == NULL && cur->rchild == NULL ||
            (pre != NULL)&&(pre == cur->lchild || pre == cur->rchild) )//上一次访问的是当前节点的左子树
        {
            cout<<cur->data<<" ";
            s.pop();
            pre = cur;
        }
        else
        {
            if(cur->rchild)
                s.push(cur->rchild);
            if (cur->lchild)
                s.push(cur->lchild);

        }
    }

}

template<class T>
void BiTree<T>::LevelOrder(BiNode<T>* node)
{
    //层次遍历需要queue来实现，思路：
    //@1初始化queue
    //  if root为空 返回
    //@2 push(root)
    //@3 while(queue不为空)
    //      s <-- queue.front()
    //      queue.pop()
    //      输入s.data
    //      if(s的左子树不空)
    //          s的左子树入队
    //      if(s的右子树不空)
    //          s的右子树入队

    queue<BiNode<T>*> q;
    BiNode<T>* s = node;
    if(s == NULL)
        return;
    q.push(s);
    while(!q.empty())
    {
        s= q.front();
        q.pop();
        cout<<s->data<<" ";
        if (s->lchild)
            q.push(s->lchild);
        if(s->rchild)
            q.push(s->rchild);

    }
}



int main()
{
    BiTree<char> my_tree;
    my_tree.PreOrder(my_tree.GetRoot());
    cout<<endl;
    my_tree.PreOrderNonRec(my_tree.GetRoot());
    cout<<endl;
    my_tree.InOrder(my_tree.GetRoot());
    cout<<endl;
    my_tree.InOrderNonRec(my_tree.GetRoot());
    cout<<endl;
    my_tree.PostOrder(my_tree.GetRoot());
    cout<<endl;
    my_tree.LevelOrder(my_tree.GetRoot());
    cout<<endl;
    my_tree.PostOrderNonRec(my_tree.GetRoot());
    cout<<endl;

}
