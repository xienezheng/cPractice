#include <iostream>

using namespace std;//1:һ��Ҫ��public.2:ambigious ģ���ļ�Ӧ�ü�virtual.3:���컹�Ǵ�����

class one
{public:
    int num;
    one(int x):num(x)
    {

    }
    void display()
    {
        cout<<num;
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
class thr: virtual public one
{
    public:
    char sex;
    thr(int x,char c):one(x),sex(c)
    {

    }


};
class fou : public two,public thr
{
    string where;
public:
    fou(int x,string y,char c,string z):one(x),two(x,y),thr(x,c),where(z)
    {

    }
    void display()
    {
        cout<<num;
        cout<<name;
        cout<<sex;
        cout<<where;
    }
};
int main()
{
    class fou fiv(19,"XieNezheng",'f',"WuHan");
    fiv.display();
}
