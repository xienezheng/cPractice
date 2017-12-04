#include <iostream>

using namespace std;
template<typename T>
class minproqueue
{
    T *p;
    int top;
    int next;
    int size;
public:
    minproqueue()
    {
        p=new T[20];
        top=0;
        size=0;
        next=0;
    }
    void push(const T &temp)
    {
        p[next]=temp;
        next++;
     size++;
     if(next==20)
     {
         cout<<"The queue is full"<<endl;
     }
     int i,j;
     T k;
     for(i=next-1;i>=top;i--)
     {
         for(j=top;j<i;j++)
         {
             if(p[j]<p[j+1])
             {
                 k=p[j];
                 p[j]=p[j+1];
                 p[j+1]=k;
             }
         }
     }
    }
    T getdate()
    {
     return(p[top]);
    }
    void pop()
    {  if(top==next)
        {
            cout<<"The queue is empty"<<endl;
        }
        top++;
        size--;

    }
};
int main()
{
    minproqueue<int>one;
    one.push(9);
    one.push(2);
    one.push(7);
     one.push(2);
one.pop();
    cout<<one.getdate();
}

