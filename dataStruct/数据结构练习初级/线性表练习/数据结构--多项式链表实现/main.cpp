#include <iostream>//主要是头结点与数量的关系，num是与数字对应，但插入一定重0开始
//涉及类名的都要加模板
#include<string>
#include<string.h>
using namespace std;
string s1,s2;
char number1[20],number2[20],index1[20],index2[20],ch;
int number3[20],number4[20],index3[20],index4[20];
int num3len=0,num4len=0;
void enter()
{int i,j=0;
    cout<<"please enter the first poly,end of +"<<endl;
    cin>>s1;

    cout<<"please enter the second poly,end of +"<<endl;

    cin>>s2;
    for(i=0;i<10;i++)
    {
        if(s1[i]=='+')
        {

            ch=s1[i-3];
        }
    }
    for(i=0;i<10;i++)
    {
        if(s2[i]=='+')
        {

            ch=s2[i-3];
        }
    }
    j=0;
     for(i=0;i<s1.size();i++)
    {
        if(s1[i]=='+')
        {

        number1[j]=s1[i-4];
        number3[j]=number1[j]-'0';
        j++;
        num3len++;
        }


    }
    j=0;
 for(i=0;i<s2.size();i++)
    {
        if(s2[i]=='+')
        {

        number2[j]=s2[i-4];
         number4[j]=number2[j]-'0';
        j++;
        num4len++;
        }

    }
    j=0;
    for(i=0;i<s1.size();i++)
    {
        if(s1[i]=='+')
        {

        index1[j]=s1[i-1];
        index3[j]=index1[j]-'0';
        j++;
        }

    }
    j=0;
for(i=0;i<s2.size();i++)
    {
        if(s2[i]=='+')
        {

        index2[j]=s2[i-1];
        index4[j]=index2[j]-'0';
        j++;
        }

    }






}



template<typename T> class list1;//声明，便于在节点类中调用友元
template<typename T>
class node//
{
    friend class list1<T>;//友缘类也只能访问公有函数，不能访问私有成员

public:

    T date;
    T index;
    node<T>* next;

public:
    node(node*ptr=NULL)//每构造一个就申请一些地址，也就是说调用一次构造函数就有一个新节点，同时有地址。

    {
        //此例中，构造一次，节点指针指向空，同时赋值。
        next=ptr;
    }
    node(const T &temp,const T & temp1,node*ptr=NULL)//默认构造函数
    {
        date=temp;
        index=temp1;
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

    int size1;
    node<T>* head;
    //节点类同型指针，便于链表串起节点
    public:
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
    void display()
    {
        int i=0;
        for(i=1;i<=size1;i++)
        {
            if(i<size1)
            {
            cout<<num(i)->date<<ch<<"^"<<num(i)->index<<"+";
            }
            else{
                cout<<num(i)->date<<ch<<"^"<<num(i)->index<<endl;;
            }
        }
    }


    void delete1(int i)
    {
        node<T>*pt=num(i-1);//谁的指针是指向谁的，等号呢是把雨来的指向只为等号右边指针的指向
        node<T>*p1=num(i);
        pt->next=p1->next;
        delete p1;
        size1--;
    }


    void add(T temp,int index)
    {
        node<T>*pt=num(size1);
        node<T>*p=new node<T>(temp,index,pt->next);
        pt->next=p;
        size1++;
    }
     void insert1(int i,const T &temp,int temp1)
    {
        node<T>*p1=num(i);

        node<T>*q=new node<T>(temp,temp1);
        q->next=p1->next;
        p1->next=q;
        size1++;
    }


};
 list1<int>one;
    list1<int>two;

int main()
{
void addoperate();
    int i;

    enter();
    for(i=0;i<num3len;i++)
    {
        one.add(number3[i],index3[i]);
    }
     for(i=0;i<num4len;i++)
    {
        two.add(number4[i],index4[i]);
    }
addoperate();

two.display();
}
  void addoperate()
{
    int i,j,k,t;
    int temp1,temp2;
    for(i=1;i<=one.size2();i++)
    {
        for(j=1;j<=two.size2();j++)
        {
            if(two.num(j)->index==one.num(i)->index)
            {
                temp1=one.num(i)->date+two.num(j)->date;

              two.num(j)->date=temp1;

            }
            if(j==two.size2()-1)
            {
                k=one.num(i)->index;
                for(t=0;t<two.size2();t++)
                {
                    if(k<two.num(t)->index)
                    {
                        two.insert1(t+1,one.num(i)->date,one.num(i)->index);
                    }
                }
            }
        }
    }
}

