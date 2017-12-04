#include <iostream>

using namespace std;
class one
{
    int num;
public:
    one(int x)
{
    num=x;
}
void display()
{
    cout<<num;
}
};
void print( one &y)
{

    y.display();
}
int main()
{
    class one u(7);
    print(u);
}
