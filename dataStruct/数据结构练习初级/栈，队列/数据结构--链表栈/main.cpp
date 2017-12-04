#include <iostream>

using namespace std;
template<typename T>class ListStack;
template<typename T>
class stacknode
{
    friend class ListStack<T>;
private:
    T date;
    stacknode *next;
public:
    stacknode(stacknode<T>*p=NULL)
    {
        next=p;
    }
    stacknode(const T&temp,stacknode<T>*p=NULL)
    {
        date=temp;
        next=p;
    }
    ~stacknode();

};
template<typename T>
class ListStack
{
private:
    stacknode<T>* head;
    int Size;
public:
    int size1()
    {
        return Size;
    }
    void push(const T&temp)
    {
        stacknode<T>*pt=new stacknode<T>(temp,head->next);
        Size++;

    }
    T getdate()
    {
        return(head->next->date);

    }
    ListStack()
    {
        head=new stacknode<T>;
        Size=0;
    }

        void pop()
        {
            stacknode<T>*p=head->next;
            T date=p->date;
            head->next=head->next->next;
            delete p;
            Size--;
        }




};
int main()
{
class ListStack<int> mystack;
    mystack.push(1);
    mystack.push(2);


    cout<<mystack.getdate();
}
