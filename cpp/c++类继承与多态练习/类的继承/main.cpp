#include <iostream>

using namespace std;//�̳з�ʽ�����죬�������⣬��̳�
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
        cout<<num;
    }
};
class two:public one
{
    string name;
public:
    two(int x,string y):one(3),name(y)
    {

    }
     void display()
    {
        cout<<name;
        cout<<num;
    }

};
int main()
{
   class two thr(3,"dfsf");
   thr.display();
}
