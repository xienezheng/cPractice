#include <iostream>

using namespace std;//纯虚函数是虚函数的一种特例，需要子类重写，否则无法定义变量。
class one
{
public:

    virtual void display()=0;
};
class two:public one
{
    public:
    string name;
    two(string y):name(y)
    {

    }
    void display()
    {
        cout<<"paishenglei";
    }
};
class thr:public one
{
    public:
    string name;
    thr(int x,string y):one(x),name(y)
    {

    }
    void display()
    {
        cout<<"paishenglei";
    }

};
int main()
{

    class thr cat(18,"dfsg");
    cat.display();
}
