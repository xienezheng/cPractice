#include <iostream>

using namespace std;
class one
{
    int num;
    string name;
public:
    one(int x,string y)
    {
        num=x;
        name=y;
    }
    void display()
    {
        cout<<num;
        cout<<name;
    }

};
void print(one v)
{
  v.display();
}

int main()
{
    class one w(1,"xienezheng");
    print(w);
}
