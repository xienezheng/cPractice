#include <iostream>

using namespace std;//继承私有仅可以自己成员函数调用，包括继承后的；
class dog
{
    int num;
public:
    dog(int x)
    {
        num=x;

    }
    void display()
{
    cout<<num;
}

} ;
class cat:public dog
{
  string name;
  public:
      cat(int x,string y):dog(x),name(y)
      {

      }


};
int main()
{
   class cat one(3,"sd");
   one.display();
}
