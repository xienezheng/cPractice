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
};
void Gui(int n)
{
    int i,j,s=0,k=0,u,v;
    queue1<int>q;
    q.push(1);
    q.push(1);
    for(i=1;i<=n;i++)
    {cout<<endl;
        q.push(0);
        for(j=1;j<=i+2;j++)
        {
            u=s+q.getdate();
            if(q.getdate()==0)
            {
            cout<<' ';
            }
            else
            {
            cout<<q.getdate();
            }
            q.push(u);
            s=q.getdate();
            q.pop();

        }
    }

}
int main()
{
    Gui(3);
}
