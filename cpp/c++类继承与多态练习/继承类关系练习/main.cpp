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
        cout<<"jilei";
    }
};
class two:public one
{
    public:
    string name;
    two(int x,string y):one(x),name(y)
    {

    }
    void display()
    {
        cout<<"paishenglei";
    }
};
int main()
{
   class two dog(19,"xie");
   class one cat(13);
   cat=dog;//��ֵ��ϰ
   cout<<cat.num;
   class one *p=&dog;//����ָ��ָ����������󣬵��û��ຯ��
   p->display();
   class one &r=dog;//������ϰ
   r.display();
}
