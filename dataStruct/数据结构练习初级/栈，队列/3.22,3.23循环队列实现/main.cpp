#include <iostream>

using namespace std;
template<class T>
class queue1
{
private:
    T *p;
    int top;
    int next;
    int size;
    int maxsize;
public:
    queue1(int maxsize)
    {
        p=new T[maxsize];
        size=0;
        next=top=0;
    }
    void push(const T&temp)
    {
        p[next]=temp;
        size=size+1;
        next=(next+1)%maxsize;
        if(size==3)
        {
            cout<<"full"<<endl;
        }
    }
    T size1()
    {
        return(size);
    }
    T getdate()
    {
        return(p[top]);
    }
    void pop()
    {
        top=(top+1)%maxsize;
        size=size-1;
    }
    bool empty()
    {
        if(size==0)
        {
            return(true);
        }
        else{
            return(false);
        }
    }
    bool full()
    {
        if(top%maxsize==next%maxsize-1)
        {
            return(true);
        }
        else{
            return(false);
        }
    }
};
int main()
{
    queue1<int>q(3);

 q.push(0);
 q.push(2);

    q.push(1);
    q.pop();
    q.push(3);
    q.pop();
    q.pop();


cout<<q.getdate();

}


