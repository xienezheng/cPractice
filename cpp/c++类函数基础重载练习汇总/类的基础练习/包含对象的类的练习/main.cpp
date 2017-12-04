#include <iostream>

using namespace std;
class dog
{
    int num;
    string name;
public:
    dog(int x,string y)
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
class people
{
    int num;
    string name;
    dog one;
    public:
people(int x,string y,int m,string n)
    {
        num=x;
        name=y;
        one.num=m;
        one.name=n;
    }
    void display()
    {
        cout<<num;
        cout<<name;
        cout<<one.num<<endl<<one.name;
    }


};
int main()
{
    class people two(1,"xienezheng");
    setnum(2,"huanhuan");
    two.display();
}
