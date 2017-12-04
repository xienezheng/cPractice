#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;
template<class T>
class stack1
{
    T *p;
    int top;
    int size;
public:
    stack1()
    {
        p=new T[20];//易错点，千万别加T*。
        size=0;
        top=0;
    }
    void push(const T &temp)
    {
         if(top==20)
        {
            cout<<"The stack is full"<<endl;

        }
        p[top]=temp;
        top++;
        size++;

    }
    int size1()
    {
        return(size);
    }
    T getdate()
    {
        return(p[top-1]);
    }

    void pop()
    {
        if(top<0)
        {
            cout<<"The stack is empty"<<endl;

        }
        top=top-1;
        size--;

    }
    bool isempty()
    {
        if(top<=0)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    stack1<int>q;
    int i,j,temp,N,B;
    cout<<"Please enter the N and B"<<endl;
    cin>>N>>B;
    cout<<N<<"的"<<B<<"进制为"<<endl;
    while(N!=0)
    {
        temp=N%B;
        q.push(temp);
        N=N/B;
    }

    while(q.isempty()==false)
    {
        cout<<q.getdate();
        q.pop();
    }
}
