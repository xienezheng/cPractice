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

    //�ǵݹ�ʵ��
    void PreOrderNonRec(BiNode<T>* node);
    void InOrderNonRec(BiNode<T>* node);
    void PostOrderNonRec(BiNode<T>* node);
    void LevelOrder(BiNode<T>* node);//��α���
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
    //TLR�ĵ�һ��һ��������
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
    //��ǰ������������������ȷ��Ψһ������
    //����������������Ҳ����
    //����ǰ��ͺ���һ�𲻿���
    //�ص��� ǰ�󶨸�����������
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
    //LRT�����һ��һ��������
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
    //��������ǵݹ���Ҫ����stack s��ʵ�֣�ģ��ݹ����
    //�ܵ�ѭ���߽��ǵ�ǰ�ڵ㲻Ϊ�ջ���stack���գ�
    //@1 �ڵ�ǰ�ڵ�p�ǿ�ʱ�򣬽�p��ջs,p������������p,��֤������������ջ
    //  pΪ��ʱ��Ҳ��������������߷��ʵ��ˣ���ʱ����ջ�ǿյ�ʱ��
    //@2 ȡջ����p������p����ջ����ʱ����ײ������߽ڵ�����ˣ���p������������p���ظ�@1
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

    //Ҫ��֤����������Ӻ��Һ��ӷ���֮����ܷ��ʣ�
    //��˶�����һ���P���Ƚ�����ջ�����P���������Ӻ��Һ��ӣ������ֱ�ӷ�������
    //����P�������ӻ����Һ��ӣ����������Ӻ��Һ��Ӷ��ѱ����ʹ��ˣ���ͬ������ֱ�ӷ��ʸý�㡣
    //�������������������P���Һ��Ӻ�����������ջ�������ͱ�֤��ÿ��ȡջ��Ԫ�ص�ʱ��
    //�������Һ���ǰ�汻���ʣ����Ӻ��Һ��Ӷ��ڸ����ǰ�汻���ʡ�
    if(node == NULL)
        return;
    stack<BiNode<T>*> s;
    s.push(node);//node��root
    BiNode<T>* pre = NULL;
    BiNode<T>* cur;
    while(!s.empty())
    {
        cur = s.top();
        if(cur->lchild == NULL && cur->rchild == NULL ||
            (pre != NULL)&&(pre == cur->lchild || pre == cur->rchild) )//��һ�η��ʵ��ǵ�ǰ�ڵ��������
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
    //��α�����Ҫqueue��ʵ�֣�˼·��
    //@1��ʼ��queue
    //  if rootΪ�� ����
    //@2 push(root)
    //@3 while(queue��Ϊ��)
    //      s <-- queue.front()
    //      queue.pop()
    //      ����s.data
    //      if(s������������)
    //          s�����������
    //      if(s������������)
    //          s�����������

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
