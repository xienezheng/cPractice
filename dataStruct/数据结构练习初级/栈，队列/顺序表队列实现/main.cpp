#include <iostream>

using namespace std;
template<typename T>
class queue1
{
private:
    T p[10];
    int first;
    int next;
    int size1;
public:
    queue1()
    {
        first=0;
        next=0;
        size1=0;
    }
    int size()
    {
        return(size1);
    }
    void push(const T &temp)
    {
        p[next]=temp;
        next++;
        size1++;
        if(next>9)
        {
            cout<<"¶ÓÁÐÂú"<<endl;
        }

    }
    T getdate()
    {
        return(p[first]);
    }
    void pop()
    {
        first++;
        size1--;
        if(first==next)
        {
            cout<<"Õ»¿Õ"<<endl;
        }
    }
};
int main()
{
    queue1<int> one;

    one.push(1);
    one.push(2);
    one.push(3);
    one.pop();
    cout<<one.getdate();
    cout<<one.size();
}
