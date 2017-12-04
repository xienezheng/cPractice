#include <iostream>

using namespace std;
class one
{
    public:
    int num;
    one(int x)
    {
        num=x;
    }
    void display()
    {
       cout<<num<<endl;
    }

};
class two
{
public:
    string name;
    two(string y)
    {
        name=y;
    }

};
class thr:public one,public two
{
    int age;
    public:
    thr(int x,string y,int z):one(x),two(y),age(z)
    {

    }

    void display()
    {
       cout<<num<<endl;
       cout<<name<<endl;
       cout<<age<<endl;
    }

};
int main()
{
    class one fou(3);
    fou.display();
    class thr fiv(2,"srfd",19);
    fiv.display();
}

