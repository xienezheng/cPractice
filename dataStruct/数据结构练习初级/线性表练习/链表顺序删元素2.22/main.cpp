#include <iostream>//主要是头结点与数量的关系，num是与数字对应，但插入一定重0开始
//涉及类名的都要加模板
using namespace std;
template<typename T> class list1;//声明，便于在节点类中调用友元
template<typename T>
class node//
{
    friend class list1<T>;//友缘类也只能访问公有函数，不能访问私有成员
private:
    T date;
    node<T>* next;

public:
    node(node*ptr=NULL)//每构造一个就申请一些地址，也就是说调用一次构造函数就有一个新节点，同时有地址。

    {
        //此例中，构造一次，节点指针指向空，同时赋值。
        next=ptr;
    }
    node(const T &temp,node*ptr=NULL)//默认构造函数
    {
        date=temp;
        next=ptr;
        //应当是没构造一次加一
    }
    ~node()
    {
    };

};
template<typename T>
class list1
{
private:
    int size1;
    node<T>* head;//节点类同型指针，便于链表串起节点
    node<T> * num(int i)//私有，因为主要在类内应用，公有函数可以调用。如果设为共有，不能访问私有元素
    {
        node<T> *pt=head;//指针可以直接访问元素
        int j=0;
        while(pt!=NULL&&j<i)
        {
            pt=pt->next;
            j++;
        }
        return(pt);
    }
public:
    list1()//构造一个链表，标志就在于构造出一个头结点
    {
        node<T>* p=new node<T>();
        head=p;
        size1=0;

    }
    int size2()
    {

        return(size1);
    }
    void insert1(int i,const T &temp)
    {
        node<T>*p1=num(i);

        node<T>*q=new node<T>(temp);
        q->next=p1->next;
        p1->next=q;
        size1++;
    }
    T getdate(int i)
    {
        T temp1;

        node<T>* pt=num(i);//头指针是穿行指针，可以访问,因为指向整个节点

        temp1=pt->date;
        return (temp1);
    }
    void delete1(int i)
    {
        node<T>*pt=num(i-1);//谁的指针是指向谁的，等号呢是把雨来的指向只为等号右边指针的指向
        node<T>*p1=num(i);
        pt->next=p1->next;
        delete p1;
        size1--;
    }
    bool search1(T temp)
    {
        int i;
        for(i=1; i<=size1; i++)
        {
            node<T>*pt=num(i);
            if(pt->date==temp)
            {
                return true;
            }
            if(i==size1)
            {
                return false;
            }
        }
    }
    void display()
    {
        int i;
        for(i=1; i<=size1; i++)
        {
            node<T>*pt=num(i);
            cout<<pt->date<<endl;
        }
    }
    void add(T temp)
    {
        node<T>*pt=num(size1);
        node<T>*p=new node<T>(temp,pt->next);
        pt->next=p;
        size1++;
    }
    void sort1()
    {
        T temp;
        int i,j;
        node<T>*p1;
        node<T>*p2;
        for(i=size1;i>=1;i--)
        {
            for(j=1;j<i;j++)
            {
                p1=num(i);
                p2=num(i+1);
                if(p1->date>=p2->date)
                {
                   temp=p1->date;
                   p1->date=p2->date;
                   p2->date=temp;
                }
            }
        }
    }
void deletemin(const T &temp)//制定删除，及删除操作的重复实现。不过加了个判断条件
{
    int i,j;
    for(i=1;i<=size1;i++)
    {
        if(num(i)->date<=temp)
        {

      node<T>*pt=num(i-1);//谁的指针是指向谁的，等号呢是把雨来的指向只为等号右边指针的指向
        node<T>*p1=num(i);
        pt->next=p1->next;
        delete p1;
        size1--;
     i--;//删除之后元素后移动，要遍历需停滞循环数量
        }

    }
}
void deletemax(const T &temp)
{
    int i,j;
    for(i=1;i<=size1;i++)
    {
        if(num(i)->date>=temp)
        {

      node<T>*pt=num(i-1);//谁的指针是指向谁的，等号呢是把雨来的指向只为等号右边指针的指向
        node<T>*p1=num(i);
        pt->next=p1->next;
        delete p1;
        size1--;
     i--;
        }

    }
}

};
int main()
{
    list1<int> one;//为啥不需要括号呢？
    int i;
    for(i=1;i<=10;i++)
    {
one.add(i);
    }
    one.deletemax(5);
    one.display();


}
