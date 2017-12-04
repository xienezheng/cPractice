#include <iostream>
#include<stdio.h>
using namespace std;
class complex
{
private:
    double a,b;
public:
    complex(double x,double y);
    void display();

};
complex::complex(double x,double y)
{
    a=x;
    b=y;
}
void complex::display()
{
    cout<<a<<"+"<<b<<endl;
}

int main()
{
    complex c1(1.0,4.0),c2(0,0);

    c2=c1;

c2.display();
}
