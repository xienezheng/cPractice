#include <iostream>

using namespace std;
class people
{
    int num;
    string name;
public:
    people(int x,string y)
    {
        num=x;
        name=y;
    }
   void display()
    {
        cout<<num<<endl;
        cout<<name;
    }
};
int main()
{
   people *p1=new people(1,"xie");
   p1->display();
   delete p1;
}
