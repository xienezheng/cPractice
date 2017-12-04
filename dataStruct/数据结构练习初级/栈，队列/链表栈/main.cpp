#include <iostream>

using namespace std;//复合类最重要的就是声明，友元
template<typename T> class stack1;//写模板时都要加上T
template<typename T>
class node
{
    friend class stack1<T>;
private:
    T date;
    node* next;
    public:
        node(node<T>*p=NULL)
        {
            next=p;
        }
        node(T temp,node<T>*p=NULL)
        {
            date=temp;
            next=p;
        }


};
template<typename T>
class stack1
{
private:
    node<T>* top,*head;
    int size;
public:
    stack1()
    {
         top=new node<T>();//不该加括号的别加括号,再加个node居然错了，还是哪种无错误的错。。。。
        size=0;
        head=top;
    }
    void push(T temp)
    {
        node<T>*p=new node<T>(temp);
  p->next=top->next;
        top->next=p;
        top=top->next;
        size++;
    }
    int size1()
    {
        return(size);
    }
    T getdate()
    {
        return(top->date);

    }
    void pop()
    {node<T>*pt;
        node<T>*p=head;
        while(p->next!=top)
        {
            p=p->next;
        }
        pt=top;
        top=p;
        delete pt;
    }
};
int main()
{
    stack1<int> one;//多次出现问题，不用括号，然而为啥呢？

  one.push(2);
one.push(3);
one.push(4);
one.pop();
cout<<one.getdate();

}
