#include <iostream>

using namespace std;
class one
{
    string num;
    friend class two
    {
        string name;
        public:
 void display()
    {
        cout<<num;
        cout<<name;
    }
    }
    public:
    one(int x)
    {
        num=x;
    }


};
int main()
{
    class one thr("dcsf");
    thr.display();
}

