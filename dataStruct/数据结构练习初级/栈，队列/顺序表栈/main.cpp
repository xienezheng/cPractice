#include <iostream>

using namespace std;
template<typename T>
class stack1
{
private:

    T *p,*p1;
    int top;
    int max;

public:
    stack1(int x)
    {max=x;
        p=new T[max];

        top=-1;
    }
    int size1()
    {
        return(top+1);
    }
    void push(T temp)
    {
         top++;

        p[top]=temp;
        if(top>=max)
        {
            p1=new T[2*max];
            int i;
            for(i=0;i<max;i++)
            {
                p1[i]=p[i];
            }
            top++;
            p1[top]=temp;
        }

    }
    T getdate()
    {
        if(top<max)
        {
     return(p[top]);
        }else{
        return(p1[top]);
        }
    }
    void pop()
    {
        int i;
        i=top;
        top--;

    }
};
int main()
{
    stack1<int> one(2);
 one.push(2);
    one.push(3);
    one.push(4);
cout<<one.getdate();
    cout<<one.size1();
}
