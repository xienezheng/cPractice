#include <iostream>

using namespace std;
class copy
{
    int num;
    string b;
public:
    copy(int x,string y)
    {
        num=x;
        b=y;
    }
    copy(const copy&a)
    {
        num=a.num;
        b=a.b;
    }
    void display()
    {
        cout<<num;
        cout<<b;
    }
};
int main()
{
    class copy a(3,"sf");
    class copy b(a);
a.display();
b.display();
}
