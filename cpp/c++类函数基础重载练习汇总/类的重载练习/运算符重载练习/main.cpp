#include <iostream>
using namespace std;
class string1
{
    string one;
public:
    string1(string x="dvd")
    {
        one=x;
    }
    friend ostream &operator<<(ostream &os,string1 &x)
    {
        os<<x.one;
        return os;
    }
    friend istream & operator>>(istream &is,string1 &x)
    {
        is>>x.one;
        return is;
    }
    string1& operator=(const string1&x)
    {
        one=x.one;
        return *this;
    }
    string1(const string1 &x)
    {
        one=x.one;
    }
};

int main()
{
    string1 st("sdfsdgf");
    string1 sr(st);

    cout<<sr;
}
