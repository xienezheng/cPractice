#include <iostream>
#include<stdio.h>
using namespace std;
class tmath
{public:
    static const double PI;
    double cirs(double r)
    {
        return 2*PI*r;
    }
};
const double tmath::PI=3.14;
int main()
{class tmath one;
    cout<<one.cirs(1.0)<<endl;
}
