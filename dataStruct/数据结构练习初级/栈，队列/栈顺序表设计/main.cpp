#include <iostream>

using namespace std;
template<typename T>
class mystack
{
    T a[10];
    int top;
public:
    mystack()
    {
        top=0;
    }
    ~mystack()
    {

    }
    int Size()
    {
        return top;
    }
    void push(const T& temp)
    {
        a[top]=temp;
        top++;
    }
    T getdate()
    {
     return(top);
    }
    void pop()
    {
        top--;
    }

};


int main()
{

  class mystack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  cout<<s.Size();
s.pop();
  cout<<s.getdate();
}
