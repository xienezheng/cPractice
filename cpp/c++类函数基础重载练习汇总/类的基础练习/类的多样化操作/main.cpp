#include <iostream>

using namespace std;
class people
{
    int num;
    string name;
public:
    people(int x=1,string y="sd")
    {
        num=x;
        name=y;
    }
    void setname(string x)
    {
        name=x;
    }
    void setnum(int x)
    {
        num=x;
    }
int getnum();
string getname();
};
  int people::getnum()
    {
        return num;
    }
    string people::getname()
    {
        return name;
    }
int main()
{
   people one(1,"xienezheng");
   cout<<one.getname()<<endl;
   cout<<one.getnum()<<endl;
   people two;
   two.setname("liufengzhu");
   two.setnum(2);
   cout<<two.getname()<<endl;
   cout<<two.getnum()<<endl;
}
