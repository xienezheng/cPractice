#include <iostream>

using namespace std;//1���׻죬������ࡪ������������������������Ԫ���ص��༰�����
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

