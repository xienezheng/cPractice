#include <iostream>

using namespace std;//���麯�����麯����һ����������Ҫ������д�������޷����������
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
