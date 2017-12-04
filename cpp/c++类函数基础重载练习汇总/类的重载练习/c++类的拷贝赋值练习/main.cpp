#include <iostream>

using namespace std;
class A{

int a;
string n;
public:
    A(int x=4,string m="sf")
    {
        a=x;
        n=m;
    }
    void display()
    {
        cout<<a;
        cout<<n;
    }
    };
int main()
{
   class A b(3,"sdfasf");
   class A c;
   b.display();
c=b;
   c.display();
}
