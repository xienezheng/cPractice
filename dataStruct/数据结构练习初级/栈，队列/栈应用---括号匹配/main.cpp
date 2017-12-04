#include <iostream>
#include<string.h>
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
    {if(size>0)
    {
        node<T>*pt;
        node<T>*p=head;
        while(p->next!=top)
        {
            p=p->next;
        }
        pt=top;
        top=p;
        delete pt;
        size--;
    }
    else
    {
        cout<<"栈空,右括号多"<<endl;
    }
    }

};
int main()
{
    stack1<char>match1,match2,match3;
    int i;
  string a;
  cin>>a;
  for(i=0;a[i]!='\0';i++)
  {
      if(a[i]=='(')
    {
        match1.push(a[i]);
    }
    if(a[i]==')')
    {
        match1.pop();
    }
      if(a[i]=='[')
    {
        match2.push(a[i]);
    }
    if(a[i]==']')
    {
        match2.pop();
    }
      if(a[i]=='{')
    {
        match3.push(a[i]);
    }
    if(a[i]=='}')
    {
        match3.pop();
    }
  }
  if(match1.size1()>0)
  {
      cout<<"(多出"<<endl;
  }
  else if(match2.size1()>0)
  {
      cout<<"[多出"<<endl;
  }
  else if(match3.size1()>0)
  {
      cout<<"{多出"<<endl;
  }
  else{
    cout<<"ok"<<endl;
  }

}
