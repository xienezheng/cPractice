#include <iostream>

using namespace std;
#ifndef chapter6.h
#define chapter6.h
void num(int n);
#endif //
int main()
{
    num(5);
}
void num(int n)
{
    cout<<--n;
}
