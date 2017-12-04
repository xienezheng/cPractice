#include <iostream>

using namespace std;
class one
{
    int num;
    class two
    {
        string name;
    public:
        two(char z)
        {name=z;

        }
    };
    one(int x)
    {
        num=x;
two(string z)
    {
        name=z;
    }
    }

   void display()
    {
        cout<<num;
        cout<<name;
    }
};
int main()
{
    class one thr(2,"xsd");
    thr.display();
}
