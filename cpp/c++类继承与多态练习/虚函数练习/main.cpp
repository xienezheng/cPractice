#include <iostream>

using namespace std;//虚函数，可以看做类内函数的重载，通过指针实现，必须在基类注明，子类不需。
class one
{
public:
    int num;
    one(int x)
    {
        num=x;
    }
   virtual  void display()
    {
        cout<<num;
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
        cout<<num;
        cout<<name;
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

        cout<<num;
        cout<<name;
    }


};
int main()
{
   class one dog(3);
   class two cat(4,"fd");
class thr peo(5,"sdad");
  class one *p=&dog;
  cat.display();
}
