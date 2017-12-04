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

};
class two:virtual public one
{
public:
    string name;
    two(int x,string y):one(x),name(y)
    {

    }

};
class thr:virtual public one
{
    public:
        char sex;
        thr(int x,char t):one(x),sex(t)
        {

        }

};
class fou:public thr,public two
{
    string where;
    public:
    fou(int x,string y,char c,string z):one(x),two(x,y),thr(x,c),where(z)
    {

    }
    void display()
    {
        cout<<num<<endl;
        cout<<name<<endl;
        cout<<sex<<endl;
        cout<<where<<endl;
    }
};
int main()
{
    class fou fiv(19,"xienezheng",'f',"Wuhan");
    fiv.display();
}
