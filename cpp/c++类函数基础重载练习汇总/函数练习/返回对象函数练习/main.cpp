#include <iostream>

using namespace std;//1：易混，对象和类——————析构的类名，友元传回的类及其变量
class A
{
    int num;
public:
    A(int x)
    {
        num=x;
    }
    void display()
    {
        cout<<num;
    }
friend A input()
{class A s(3);
s.num=8;
    return A(num);

}
};

int main()
{
    class A two(2);
    two=input();
    two.display();
}

