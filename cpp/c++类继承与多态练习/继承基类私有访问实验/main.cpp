#include <iostream>

using namespace std;//�̳�˽�н������Լ���Ա�������ã������̳к�ģ�
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
