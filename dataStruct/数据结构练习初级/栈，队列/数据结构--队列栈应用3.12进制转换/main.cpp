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
public:
    queue1()
    {
        p=new T[20];
        size=0;
        next=top=0;
    }
    void push(const T&temp)
    {
        p[next]=temp;
        size=size+1;
        next=next+1;
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
        top=top+1;
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
};
int main()
{
    queue1<int>q;
    int i,j,temp,N,B;
    cout<<"Please enter the Nand B"<<endl;
    cin>>N>>B;
    while(N!=0)
    {
        temp=N%B;
        q.push(temp);
        N=N/B;
    }
    while(q.empty()==false)
    {
        cout<<q.getdate();
        q.pop();
    }
}
